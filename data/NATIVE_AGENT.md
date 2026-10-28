# Native integration with an agent (Codex, Claude)

Paste this file into a Codex or Claude Code session opened in a RoConstruct checkout. It runs the same loop as
the DeepSeek native pass (`roc research run native-model-2008`). You write the edits; the tools compile the real
2008-06 file, check exact bytes and referenced data, minimize your edits, and submit verified batches.

## Run contract: continuous, quantity first

Keep running until the user explicitly stops or pauses the campaign, or an actual external blocker prevents
all useful work. There is no fixed target count, batch count, time limit, or "one match and done" exit.
A saved proposal, queued submission, accepted batch, or exhausted shortlist starts the next iteration;
none completes the campaign. Do not end the session with a final summary while useful work remains.
Keep the selected client locked and optimize for new independently accepted, unique native matches per hour.
Quantity means more verified matches; all code, referenced-data, ownership, ABI and regression gates remain.

Keep discovery and server verification separate. After queuing a batch, immediately work on the next files.
Never wait for a submitted job before continuing discovery. Check receipts with one-shot status commands
between batches, or at most once per 5–10 minutes while doing useful work; never use a blocking watcher,
repeated status polling, or sleeps to fill verification time. Report queued/local exacts separately from
accepted credits. User-visible updates should name new gains, decisions or blockers, not unchanged polls.

Maintain a small checkpoint in `work/native-try/campaign.json`: selected client, baseline revision, pending
job IDs, saved proof paths, next candidates, and deferred targets with their reason and evidence revision.
Update it at batch boundaries and before a context/runtime boundary. Resume from that checkpoint on
continuation without repeating setup, client selection, completed trials or unchanged blocked targets.
If the host terminates execution, preserve the checkpoint and report that interruption accurately.

## First response: select the client

Before setup or identity questions, fetch the public server's `/v1/status` using the agent's HTTP tool
or one grouped HTTP request. Default server: `https://colinpc.tail2879d0.ts.net`; use an explicitly supplied server instead.
Then make the first user-facing response a selectable question: **"Which client do you want to run?"**
List every returned client, showing `integration_percent` as **X% integrated (integrated/functions)**.
Use `native_supported` to label clients without a native rebuild **"integration unavailable; source mining available"**.
A null percentage means **"integration unknown"**, never 0%. Do not show mined/matched percentages as integration.
Do not substitute old screenshot numbers or cached example percentages. If the server is unreachable, show
that error and fetch the registered client names from the public site's progress data; mark integration unknown.
Use the agent's question tool when available. Wait for selection before client downloads, analysis, claims or trials.
If a client was explicitly selected earlier, keep it; do not ask again. Native integration currently supports
**2008-06** only. Other clients can use ordinary source mining; explain their native limitation in the choices.
Keep the selected client locked for this run.

## Automatic Worker download

Do not ask the user to locate or attach a Worker ZIP. If `roc/native_try.py`, `research/native-units.json`,
or `research/native-source-lock.json` is missing, `roc native-try --help` is unavailable, or a package marker
reports `native_workflow_version` below 3, download the current Worker package yourself:

- Manifest: https://raw.githubusercontent.com/colingsnyder2-ux/RoConstruct-findings/main/data/native-worker.json
- Package: https://raw.githubusercontent.com/colingsnyder2-ux/RoConstruct-findings/main/data/native-worker.zip
- This guide: https://raw.githubusercontent.com/colingsnyder2-ux/RoConstruct-findings/main/data/NATIVE_AGENT.md

Use the chat's current authorized workspace, never an assumed Desktop or owner-specific path.
On Windows the following grouped PowerShell bootstrap downloads and verifies the archive, then extracts
into a new folder without overwriting the user's existing checkout or edits:

```powershell
$ErrorActionPreference = 'Stop'
$ProgressPreference = 'SilentlyContinue'
$nativeManifest = Invoke-RestMethod ('https://raw.githubusercontent.com/colingsnyder2-ux/RoConstruct-findings/main/data/native-worker.json?t=' + [guid]::NewGuid().ToString('N'))
if ($nativeManifest.workflow_version -lt 3 -or
    $nativeManifest.url -ne 'https://raw.githubusercontent.com/colingsnyder2-ux/RoConstruct-findings/main/data/native-worker.zip' -or
    $nativeManifest.sha256 -notmatch '^[0-9a-fA-F]{64}$') { throw 'Invalid Worker manifest' }
$nativeFolder = Join-Path (Get-Location) ('RoConstruct-Native-' + [guid]::NewGuid().ToString('N'))
New-Item -ItemType Directory -Path $nativeFolder -ErrorAction Stop | Out-Null
$nativeArchive = Join-Path $nativeFolder 'worker.zip'
Invoke-WebRequest -UseBasicParsing -Uri ($nativeManifest.url + '?sha256=' + $nativeManifest.sha256) -OutFile $nativeArchive
if ((Get-FileHash -LiteralPath $nativeArchive -Algorithm SHA256).Hash -ne $nativeManifest.sha256) {
    throw 'Worker ZIP hash mismatch'
}
Expand-Archive -LiteralPath $nativeArchive -DestinationPath $nativeFolder
Set-Location -LiteralPath $nativeFolder
$env:ROC_NONINTERACTIVE = '1'
Write-Output ('Native checkout: ' + $nativeFolder)
```

On Linux use the same HTTPS manifest/package, verify SHA-256, and extract into a fresh authorized folder.
Capture the printed absolute checkout path and use it as the explicit working directory for every later
tool call. `Set-Location` and process environment changes do not persist across separate terminal calls.
Set `ROC_NONINTERACTIVE=1` again in the grouped setup call if needed.
Read the extracted `AGENTS.md` and `CLAUDE.md`, then execute setup below. Use an existing working server
configuration when supplied, otherwise use the manifest's `server` URL. Never copy another contributor's
credentials. Ask only for missing contributor identity. Native integration is public; no invitation required.
If downloads fail, retry and report the actual URL/error; never invent a successful install.

## Goal

Make byte-exact mined 2008 functions come out of the real rbxgs C++ (native integration). A target is a function
that is already 100% mined and whose method already exists in the rebuild but compiles differently. Credit comes
only from the server's independent linked rebuild.

## Setup (execute before mining)

Install missing dependencies yourself; downloads are authorized. Do not stop at a setup plan or ask the
user to download dependencies manually. Reuse installed files. Group setup commands into one terminal
invocation, run sequentially, and stop on the first failure. Retry a failed download before reporting a blocker.
Use existing `roc` commands; do not import project modules from ad-hoc scripts.

Use a current Worker package or checkout with `roc native-try --help`. The Worker package must include
`native_try`, `native_sweep`, `standins`, `rebuild_install`, this document and `research/libs-bundle.json`.
If a public clone lacks `roc/native_try.py`, use Automatic Worker download above rather than cloning
that same public revision again. A pasted copy of this guide is sufficient to obtain the package.
Extract into a fresh folder inside this chat's authorized workspace; keep older checkouts and edits intact.
A guide cannot grant filesystem or network permissions. Packaged installs contain `roconstruct-package.json`;
their installer keeps the bundled code instead of replacing it with potentially older public Git code.
Do not run `roc update` on that standalone package; use Automatic Worker download for a fresh update.
If Python 3.12 is unavailable on Windows, run `install.cmd` first. Linux requires Wine and cabextract/7z.
If Git is missing, install Git for Windows with
`winget install --id Git.Git -e --accept-package-agreements --accept-source-agreements`, then refresh PATH before fetching source trees.
Use the platform package manager for Git on Linux. Report an actual OS permission block if installation
requires approval; a prompt cannot grant administrator rights.
If `python --version` reports 3.12 but `py -3.12` fails, use `python roc.py ...`; do not reinstall Python
solely because its launcher registration is broken. Current `roc.cmd` and `install.cmd` select a working
Python 3.12 directly before trying `py`. Agents may set `ROC_NONINTERACTIVE=1` to suppress installer pauses.

Use a private contributor checkout: `native-try` writes local rebuild outputs and refuses a checkout
holding `work/server.db`. Server DB, manifests and compiled server outputs are not required on another PC.
Keep one contributor checkout per concurrent agent. Preserve unsent edits when updating or syncing.

Configure the contributor name and reachable group-server URL with `roc config --user NAME --server URL`
if not already configured. Use the supplied server URL, not the owner's `localhost`. No native invitation,
`ROC_NATIVE_TOKEN` or owner approval is required. Ask only for missing contributor identity.
Leave `ROC_NATIVE_EVIDENCE_ROOT` unset on
another PC; it is an optional same-machine testing override.

On Windows, run these existing commands through `.\roc.cmd` (Linux: `./roc.sh`), in this order:

```text
roc install --yes --client 2008-06
roc client-fetch 2008-06
roc analyze 2008-06
roc rebuild 2008-06 install
roc pull 2008-06
roc lib-fetch rbxgs rbxgs-net rbxgs-appdraw rbxgs-render rbxgs-view openrbx-client
roc libs-bundle fetch mfc-9.0-rtm
roc integrate sync
roc rebuild 2008-06 doctor
roc native-try targets --min-score 85 --max-score 99 --limit 40
```

Skip `analyze` when `work/2008-06/functions.jsonl` already covers the current verified client. `install`
installs Python packages and historical compilers; the VCForPython bundle supplies the Windows SDK.
`lib-fetch` downloads rbxgs and its Git submodules; `pull` downloads mined sources and generated units,
which `lib-fetch` then installs. The Worker also bundles the accepted adopted native headers in
`research/native-units.json`; `lib-fetch` installs these even when the remote unit registry lacks them.
`research/native-source-lock.json` pins source repositories to the server-compatible revisions on fresh installs.
If an existing vendor checkout has another revision or local edits, preserve it and bootstrap a fresh Worker
folder rather than resetting or stashing someone else's work.
The indexed MFC bundle supplies ATL/MFC headers/libraries.
`rebuild install` obtains trusted build recipes when absent. `integrate sync` installs accepted overlays.
`rebuild doctor` must compile, link and run its smoke EXE before starting native trials.

If an existing Git rbxgs installation has empty dependency folders, check `git -C tools/rbxgs submodule status --recursive`.
Initialize only the paths marked `-` using `git -C tools/rbxgs submodule update --init --recursive --depth 1 -- PATH...`;
preserve modified initialized submodules. Do not patch vendor files by hand. If a required vendor bundle
is unavailable, report the named missing dependency and download error; do not replace it with stubs.
If doctor cannot find an installed SDK, set `ROC_WINSDK` to this PC's SDK folder containing `Include` and
`Lib/kernel32.lib`; never copy the owner's absolute paths. Resolve compiler/SDK errors before continuing.

Setup is a prerequisite, not a repeated campaign phase. Reuse the same healthy private Worker checkout,
verified client analysis, compiler/SDK paths and fetched dependencies for every later batch. Do not create
another Worker, redownload sources, rerun analysis, or rerun smoke checks unless inputs changed, a required
component is missing, or an actual failure makes the check necessary. Carry required environment overrides
into later command invocations; shell-local environment changes do not persist between tool calls.

## Local trial setup

- `check` edits one source/header. For a header fix, use `--only ADDR` to identify a real caller;
  the tool compiles that caller against the trial header and restores the private overlay afterwards.
  Saved header proposals remember their caller and pass the same independent server gates.
- Evidence comes from local rebuild artifacts when present, otherwise from the server (`/v1/integration/evidence`).
  Missing local mined sources are fetched from `/v1/source`; unavailable proofs stop with an explicit error.
  Library-referenced proofs still require their local vendor sources/generated units.
- Saved proposals (`work/native-try/proposals.json`) belong to that checkout.
- Drive everything through `roc native-try`. Read headers with your own file tools, but do not import `roc`
  modules in ad-hoc scripts; ask for `--only` or `--context file` instead.

## Loop

1. Start with `roc native-try targets --min-score 85 --max-score 99 --limit 40`.
   Rank files by the number of actionable, unintegrated targets a small evidenced change could fix.
   Prefer shared inline/header/template families, assertion differences, conditions, call order and constants.
   Read recent research notes and the checkpoint once; skip recorded negatives whose evidence is unchanged.
   Do not blindly take the largest unfiltered class: missing-symbol rows and duplicate bodies can inflate it.
2. `roc native-try evidence FILE --context methods --brief --only ADDR,ADDR` prints everything you need
   (select up to six actionable addresses per evidence request; expand only when needed):
   - the native source excerpt and compact evidence (`--brief` omits repeated rules and full assembly);
   - use `--context file` when the fix may sit in an inlined helper elsewhere in the file;
   - for each target: its address, its `rebuilt_symbol` and `native_score`, the byte-exact mined source, the
     target asm, `standins`, and `current_diff` (target vs current rebuilt instructions).
   - `native_score` is how close the rebuild's own method compiles today. Every target is already 100% mined;
     the job is to close that gap in the real C++.
   - When `current_diff` shows calls where the target has inlined code (or the reverse), the fix usually sits in
     a helper. Rerun with `--context file` to see it. Omit `--brief` only when full assembly is needed.
   - If evidence says the body is already TU-exact, globally integrated, or address-ambiguous, defer it immediately.
     Do not edit or repeatedly compile it to chase credit the ownership gate cannot award.
   - Triage each new target/family in about 120 seconds of agent reasoning, excluding required tool runtime.
     Missing native field identities, declarations or ABI evidence are a reason to record the blocker and move on.
     Do not spend the campaign reconstructing one speculative layout while actionable families remain.
3. Write SEARCH/REPLACE blocks for FILE into a scratch file (for example `blocks.txt`):

   ```text
   <<<<<<< SEARCH
   exact old text, copied verbatim from the file
   =======
   new text
   >>>>>>> REPLACE
   ```

4. `roc native-try check FILE blocks.txt` applies the blocks, compiles the real file and reports:
   newly exact, lost, still not exact, plus fresh diffs.
   It also saves an `.evidence.json` beside the compiled object with proof metadata,
   gains/losses, full ownership candidates and displayed diffs. The printed evidence
   path avoids extra inspection commands; ambiguous bodies print candidate counts.
   - **Compile error:** fix the blocks.
   - **Lost:** undo what broke the existing exacts.
   - **New exact with no loss:** the edits are minimized to what the proof needs and saved to
     `work/native-try/proposals.json`.
   - Minimization preserves helper definitions still called by retained code. A compile
     that turns a previously defined symbol into an unresolved external cannot remove
     that edit, even when the caller's bytes still match. Submit rechecks this invariant.

   When a genuine declaration and its source must change together, the same command
   accepts a JSON blocks file mapping the primary `.cpp` and its headers to
   `[["SEARCH", "REPLACE"], ...]`. For example,
   `roc native-try check App/tool/PartDragTool.cpp paired.json` compiles the C++
   against those temporary header edits, minimizes both, and restores the original
   header bytes. The saved proposal retains the paired headers and their hashes;
   submit rechecks the pair and stages all files in one server batch.

   Later checks of the same file build on its saved edits.
   To discard one experiment while retaining other files' proofs, use
   `roc native-try reset FILE`. Without FILE, reset clears every saved proposal.
   They must preserve both existing exacts and every previously saved gain.
   After syncing a changed baseline, revalidate saved edits without a blocks file:
   `roc native-try check FILE`. If anchors changed, reconcile the edits before checking again.
   For example, `roc native-try check App/include/util/Events.h blocks.txt --only 0055ae20`
   automatically finds and compiles `Instance.cpp`; it never compiles the header as a standalone TU.
5. Read the diff and make one evidenced hypothesis per trial. Stop after at most three unsuccessful trials
   per file/family, sooner when the residue is unchanged or required facts are missing. Record the exact
   failed hypothesis and evidence revision once, then move on. Revisit only after relevant evidence or the
   accepted baseline changes. When a shared helper/header wins, check other real callers with the same
   evidenced pattern to harvest the family; preserve existing matches in every checked translation unit.
6. Accumulate multiple saved proposals; aim for 10–30 unique targets per batch. Submit a smaller nonempty
   batch after roughly 10–15 minutes of discovery if no further gains are ready, so long verification can
   overlap the next discovery pass. Never submit empty, ambiguous, regressing or unproved candidates.
   At a batch boundary, run `roc integrate sync`, then
   `roc native-try submit --model YOUR_ACTUAL_MODEL`. It claims, stages and queues one batch.
   - When the accepted baseline moves, submit recompiles versioned saved edits against
     the latest clean baseline automatically. Changed anchors, lost gains or regressions
     stop submission and retain saved proposals for repair.
   - Submission recompiles saved proposals and verifies their gains and preserved exacts before claiming or staging.
   - If another worker holds a required class, submit reports the blocked class and retains the proposal for a later retry.
     A partial batch archives only the submitted proposals; the remaining proposals stay saved.

   After submitting:
   - Record the returned job ID in the checkpoint. `native-try submit` keeps the submitted snapshot and
     restores the local baseline; immediately return to discovery. Concurrent generator edits are preserved.
   - Use `roc integrate status --id JOB` once at the next scheduled receipt check. A queued/verifying job
     stays on the pending list while discovery continues. Do not run `roc integrate watch` in this loop.
   - After acceptance, record independently credited addresses and sync at the next safe batch boundary;
     revalidate remaining saved proposals only when their baseline changed, not on every status check.
   - After rejection, read the receipt once, preserve the submitted proof, and fix the stated cause when
     evidence supports it. Otherwise defer that family and keep working elsewhere. A missing job is an
     explicit submission error to investigate; it must never be counted as accepted.
   - If claims block a class, keep its saved proposal and work on other classes. Retry after the claim or
     baseline changes, not in a tight loop. Never reset another worker's claim or delete an unsent proposal.
7. Refresh the shortlist after each batch. When close-score candidates are exhausted, widen to other scored
   targets below 85, then inspect unscored targets only when native declarations and a real caller are known.
   Use existing evidence-backed compiler/header/template families and research recipes to cover multiple
   targets per hypothesis. Do not rerun setup or recycle the same failed shortlist as a new pass.
   If every eligible target is deferred, summarize the shared missing evidence and check for changed inputs
   at a bounded interval; do not hot-loop failed compiles. Resume discovery as soon as actionable evidence
   appears. User stop/pause and actual external inability to continue are the only campaign stopping conditions.
8. At each batch boundary, checkpoint compact counts: targets triaged, trials, new unique local exacts,
   accepted credits, regressions, pending jobs, and current blockers. Append a concise research note per
   meaningful batch/family, not per polling cycle. Then start step 1 again without asking to continue.

## Fewer commands and smaller evidence

Use `roc native-try targets --min-score 85 --max-score 99` to focus on close native
methods. These scores only rank work; exact instruction/data checks still decide acceptance.
Target listing skips already integrated global addresses and locally saved gains.
Default listing includes class-associated targets without rebuilt symbol metadata;
positive `--min-score` filters those out. Checks also capture unique header helpers
emitted by the real translation unit, even when inventory file labels differ.
Evidence labels global integration separately from TU exactness, so duplicate module
ownership is not mistaken for a new distinct native credit.
Add `--brief` to evidence to omit repeated instructions and assembly while keeping
the native excerpt, mined proof, standins and current diff. Omit it when full assembly is needed.
Evidence includes compiler-selected paths for quoted headers, so helper investigations
read the accepted overlay header actually used rather than an older original copy.
Locally available generated mining proof files are embedded automatically, with
their library reference retained; they remain codegen proofs, not original declarations.
Call hints cover the whole function, including external tail jumps beyond the assembly
preview. Truncated assembly previews report their shown and total instruction counts.
Instruction diffs show relocated operands as `sym`, preserving pointer indirection
and real numeric constants. `push sym` represents an address, rather than literal zero.
Local checks also test whole-binary address ambiguity using the server's pairing rule.
Bodies matching multiple target addresses earn no unique module ownership; `check`
reports these separately and saves only new unambiguous gains.

## Rules

- Derive every change from the target bytes: `current_diff`, `target_asm` and the mined source.
- The mined source is a proof written with placeholder types. Copy its control flow, call order, constants and
  evaluation order into the real classes and methods. `standins` names the real symbol behind each placeholder.
- Never add padding structs, offset views, invented fields, inline asm, raw-offset casts or byte blobs.
- Keep every other method unchanged. Minimization drops unneeded edits, but do not rewrite neighbours.
- Prefer the real cause over a byte-equal workaround:
  - an inline helper or header changed in 2008: edit that header and prove it through its real caller;
  - avoid magic numbers where a named enum or inline call produces the same bytes;
  - do not delete calls unless the bytes prove they are gone.
- Typical real fixes:
  - a removed `RBXASSERT`;
  - a changed condition or evaluation order;
  - an extra `dynamic_cast`;
  - a member-wise copy instead of a conversion;
  - `size() > 0` against `size()`.
- Label submissions with your actual model name. Native credit is separate from mining points.

## Example evidence (abridged)

```text
FILE App/v8world/Primitive.cpp
  Contact* Primitive::getFirstContact() { return rbx_static_cast<Contact*>(contacts.first()); }
TARGET 005e7ca0  rebuilt ?getNextRigid@Primitive@RBX@@...  (score 37)
  mined_source: Geometry::next(item) { index = this == item->owner0 ? item->i0 : item->i1; ++index; ... }
  standins: ?resolve@Geometry@@ -> 005e7c10
  current_diff:  target inlines the edge walk (cmp ecx,[eax+0xc] ... jmp X);
                 rebuilt makes two calls (call X / call X)
```

Reading it: in the target, the next-edge lookup is inlined and the call is a tail jump. The rebuilt code calls two
out-of-line helpers. So the fix lives in how `getNextEdge`/`EdgeList::next` are declared or written, which is
inlining-related, not in the body of `getNextRigid`.
