"""Prepare a quarantined source/build-unit packet, preserving proof provenance."""
import json
from pathlib import Path
from roc import integration, native_sweep, worker

root = Path(__file__).parent
settings = worker.load_settings()
assert settings['user'] == 'colin'
api = worker.Api(settings['server'], integration.native_token() or settings.get('native_token') or settings.get('token'))
try:
    base = api.call('/v1/integration/base')
    known = set(native_sweep.server_evidence(api)['targets'])
finally:
    api.close()
old = json.loads((root / 'baseline-overlay.json').read_text())
patches = json.loads((root / 'submission.json').read_text())
changed = sorted(k for k in old.keys() | base['overlay'].keys() if old.get(k) != base['overlay'].get(k))
assert not set(changed).intersection(patches), 'Rebase overlapping source changes first'
comparison = json.loads((root / 'comparison.json').read_text())
local = {r['address'] for r in json.loads((root / 'unforceable-gains.json').read_text())}
targets = sorted((set(comparison['gained']) - local) & known)
assert targets, 'No current exact-mined target witnesses'
evidence = '''Native name-array/build-unit migration v2; submitting contributor colin.

SUPERSEDES packet d93e7eebd5ad16f7d07d612ddd5434ff5efe8bf4244172e8c49466fe044ae995. Do not queue the prototype: its factory-name helpers still used direct static caches. This revision adopts the genuine FactoryProduct/NonFactoryProduct Name::declare<ClassName>() Boost-once path, so original doDeclare bodies are represented by the genuine Name helper rather than a similarly shaped className analog.

Same-policy local comparison: baselineBASE_COUNT -> candidateCANDIDATE_COUNT code/data-qualified addresses;GAIN_COUNT gained,0 lost. All seven layers compile without errors; both full module links and existing runtime tests pass.159 external gains force-link with0 unresolved;64 genuine name caches check expected strings and stable identity, runtime exit0. The remaining local initializer007f3d50 has exact linked code and an actual CRT startup table entry (crt-proof.json).

Source basis: genuine OpenRBX Name.h declare/doDeclare/callDoDeclare templates and103 genuine tag-array definitions.70 canonical headers migrate pointer-to-pointer tags to array-valued NTTPs;64 missing arrays move into their genuine owning CPP files. Existing fields, bases and virtual slots are unchanged. Original ToolMouse RTTI has3PADA array tags;00961ed4 holds ToolMouseCommand inline.83 direct Name::declare calls resolve to original00553f90;76 descriptor constructor calls resolve to005708f0. No assembly, byte emission, invented fields/padding or new stubs.

REQUIRES HOST VERIFIER UPDATE BEFORE QUEUING: source branch codex/verified-replay-cache-20261030 at63864aae64. It adds whole-binary referenced-data ownership qualification, conservative missing-data handling, conditional legacy/array glue declarations, and adopted sibling-header handling. These implementation/support changes are outside this source packet. The server checkout was not modified. Both legacy and array source modes pass compile/link/runtime locally with that implementation.

Creates canonical build unit App/util/glue_class_names.cpp, replacing the old pointer-tag provider by filename. Ordinary Name and ToolMouseCommand claims returned no eligible classes. This uses the supported quarantined build-unit path; no new class layouts are asserted (declarations=[]). It cannot self-approve or grant credit.

Proof baseline revision: PROOF_REVISION. Current server baseline additionally changes: CHANGED_FILES. These files do not overlap the135 edited paths. Packet appends the same minimal source edits to the current revision. No full local rerun against those unrelated baseline updates is claimed. Independent verification against the current baseline is required after host review/update.

Artifacts: comparison.json, gain-witnesses.json, direct-calls.json, candidate-report.json, baseline-report.json, force-result.json, runtime-result.json, crt-proof.json. No server acceptance/credits/webhook delivery claimed. Accepted gains must credit colin and use the normal automatic integration webhook.
'''.replace('PROOF_REVISION', (root / 'baseline-revision.txt').read_text()).replace('CHANGED_FILES', json.dumps(changed))
evidence = evidence.replace('BASE_COUNT', str(comparison['baseline_count'])).replace('CANDIDATE_COUNT', str(comparison['candidate_count'])).replace('GAIN_COUNT', str(len(comparison['gained'])))
packet = dict(client='2008-06', base_revision=base['revision'], model='gpt-6 (Codex)', targets=targets,
              evidence=evidence, patches=patches, declarations=[])
integration.validate_patches(patches)
(root / 'packet.json').write_text(json.dumps(packet, indent=1))
(root / 'notes.md').write_text(evidence)
print('Prepared build-unit packet:', len(targets), 'current exact-mined targets;', len(patches), 'paths; user colin')
