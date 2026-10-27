"""Publish portable findings without changing or restarting the live server."""
import argparse
import hashlib
import json
from pathlib import Path
import shutil
import sqlite3
import sys
import threading


def export_native(root, db):
    destination = root / "local/findings/reports/native"
    destination.mkdir(parents=True, exist_ok=True)
    files = {}
    for client in sorted((root / "rebuild").glob("2008*")):
        for path in sorted(client.rglob("*")):
            relative = path.relative_to(client)
            if not path.is_file() or path.suffix not in {".py", ".json", ".h", ".cpp", ".md"}:
                continue
            if len(relative.parts) > 1 and relative.parts[0] not in {"patches", "modules", "glue", "tests"}:
                continue
            target = destination / "working-tree/rebuild" / client.name / relative
            target.parent.mkdir(parents=True, exist_ok=True)
            data = path.read_bytes()
            target.write_bytes(data)
            files[target.relative_to(destination).as_posix()] = hashlib.sha256(data).hexdigest()
    for name in ("rebuild.py", "integration.py", "integration_verify.py", "native_sweep.py", "findings_publish.py"):
        path = Path(__file__) if name == "findings_publish.py" else root / "roc" / name
        if not path.is_file():
            continue
        target = destination / "working-tree/roc" / name
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_bytes(path.read_bytes())
        files[target.relative_to(destination).as_posix()] = hashlib.sha256(target.read_bytes()).hexdigest()
    accepted = [{"job": job, "patches": json.loads(patches), "timestamp": ts}
                for job, patches, ts in db.execute("SELECT job,patches,ts FROM integration_accepted ORDER BY ts,job")]
    initial = db.execute("SELECT value FROM integration_config WHERE key='initial_patches'").fetchone()
    jobs = []
    for row in db.execute("SELECT id,unit,model,state,phase,created,updated,patches,receipt FROM integration_jobs ORDER BY created,id"):
        job = dict(zip(("id", "unit", "model", "state", "phase", "created", "updated", "patches", "receipt"), row))
        job["patches"] = json.loads(job["patches"])
        receipt = json.loads(job["receipt"] or "{}")
        job["receipt"] = {key: receipt[key] for key in (
            "accepted", "gains", "losses", "new_distinct", "owned_before", "owned_after",
            "distinct_before", "distinct_after", "baseline_revision", "submitted_revision",
            "rebased", "input_hash", "overlay_hash", "credits") if key in receipt}
        jobs.append(job)
    scores = [dict(zip(("client", "stored_sources", "exact_sources"), row)) for row in db.execute(
        "SELECT client,COUNT(*),SUM(score=100) FROM funcs WHERE client LIKE '2008%' AND source IS NOT NULL GROUP BY client")]
    credits = [dict(zip(("client", "addr", "model", "job"), row)) for row in db.execute(
        "SELECT client,addr,model,job FROM integration_credit WHERE client LIKE '2008%' ORDER BY client,addr")]
    outputs = {"accepted-integrations.json": {"initial_patches": json.loads(initial[0]) if initial else {}, "accepted": accepted},
               "integration-jobs.json": jobs, "native-credit.json": credits,
               "inventory.json": {"clients": scores, "accepted_jobs": len(accepted), "native_credits": len(credits), "sha256": files}}
    for name, value in outputs.items():
        (destination / name).write_text(json.dumps(value, indent=2, sort_keys=True) + "\n", encoding="utf-8")
    (destination / "README.md").write_text(
        "# 2008 native integration findings\n\n"
        "`accepted-integrations.json` preserves the server's accepted overlay history. "
        "`native-credit.json` records server-awarded native credit.\n\n"
        "`integration-jobs.json` includes pending and rejected proposals; those are not accepted integrations. "
        "`working-tree/` contains reproducible build tooling, specs, glue and overlays as currently on disk; "
        "unsubmitted edits may be present. Acceptance comes only from the server ledger. "
        "`inventory.json` records source counts and file hashes.\n\n"
        "Recovered exact and partial functions live at `/src/<client>/`. "
        "Vendor trees, binaries, private config and credentials are excluded.\n", encoding="utf-8")
    return outputs["inventory.json"]


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--root", type=Path, required=True)
    args = parser.parse_args()
    root = args.root.resolve()
    # Load the live checkout's established publisher, without editing its protected inputs.
    sys.path.insert(0, str(root))
    from roc import server, libs
    store = server.Store.__new__(server.Store)
    store.lock = threading.Lock()
    store.db = sqlite3.connect((root / "work/server.db").as_uri() + "?mode=ro", uri=True)
    store.db.create_function("roc_library", 1, libs.library_of, deterministic=True)
    logs = []

    def publish(store, public_url, log):
        print("Exporting stored sources and portable evidence...", flush=True)
        store.db.execute("BEGIN")
        try:
            server.sync_findings(store)
            inventory = export_native(root, store.db)
        finally:
            store.db.rollback()
        print(json.dumps(inventory["clients"]), flush=True)
        server.publish_findings(shutil.which("git"), log)

    def log(message):
        logs.append(message)
        print(message, flush=True)

    # Reuse the live publisher's cross-process lock; publish to findings only.
    server._publish_once = publish
    try:
        server.publish_once(store, None, log)
    finally:
        store.db.close()
    if any("failed" in line.lower() or "unavailable" in line.lower() or "already running" in line.lower() for line in logs):
        raise SystemExit(1)


if __name__ == "__main__":
    main()
