"""Package closed source gains for independent owner/server verification."""
import json
from pathlib import Path

root = Path(__file__).parent
packet = json.loads(Path('work/name-callee-audit-20261030/packet.json').read_text())
base = json.loads((root / 'current-server-base.json').read_text())
assert packet['base_revision'] == base['revision'], 'Reconcile a changed baseline first'
combined = json.loads((root / 'source-force-result.json').read_text())
closed = json.loads((root / 'closed-gains-result.json').read_text())
assert combined['linked'] and combined['exit'] == 0 and not combined['unresolved']
assert closed['linked'] and closed['exit'] == 0 and not closed['unresolved']
targets = json.loads((root / 'current-server-targets.json').read_text())
new_targets = sorted(set(closed['forced_gain_addresses']) & targets.keys())
delta = json.loads((root / 'effect-cache-patches.json').read_text())
assert not packet['patches'].keys() & delta.keys()
packet['patches'].update(delta)
packet['targets'] = sorted(set(packet['targets']) | set(new_targets))
notes = '''Supersedes pending packet 88014422cb4947a9043e2e5a0d5ed338c875071cbcd3c71782b20de2e790998e; do not queue both. Contributor colin.
Adds genuine Mesh static storage, RenderStats source, implicit member lifecycle definitions, MeshFactory static cache definitions and SDK EffectSettings lazy getters. Six mesh header includes now use the ordered overlay include paths; original sibling lookup previously bypassed the adopted MeshFactory header. No fields, bases, virtual slots or ABI layouts changed. Native ShadowSurface, RenderSurface, RenderStats sizes compile-check as 0x34, 0x44, 0x238; DepthBlur uses the SDK's three reference-pointer members and implicit member destruction. No placeholder implementation of any unresolved method.
All seven module layers compile with zero errors; link/runtime pass. Strict current candidate4158 ->4167, nine new addresses, zero losses. Same-policy older legacy-source baseline3800 ->4167 is367 local addresses, not accepted credits. Five new external roots explicitly force-link and run128 member construction/destruction cycles. Combined old351 plus new5 external roots (356 total) force-link with zero unresolved and64 Name cache string/identity checks pass. Prior seven local CRT proofs remain applicable.
Four new closed addresses are exact-mined server witnesses: 00505ad0,00505b90,00506c00,005dd2c0. RenderStats constructor00501c30 is local exact but absent from server exact-mined target inventory, so is not a packet target. Four other new View.obj inventory addresses remain outside the closed-gain targets; the broad291-placement diagnostic force test still fails13 graphics dependencies (down from36). Do not count that remaining pool as integrated.
Host must use source branch codex/verified-replay-cache-20261030 with strict callee/data ownership, conditional Name glue, and adopted sibling source handling before independent ABI/M2/M4a/M5/reference/zero-loss verification. Existing Name source evidence and baseline provenance below remain part of this combined packet. No self-approval. Zero accepted native credits or webhook delivery claimed. Accepted new gains must use the normal server integration webhook attributed to colin.
Evidence: final-comparison.json, effect-cache-report.json, effect-cache-build.txt, source-force-result.json, closed-gains-result.json, closure-comparison.json and SDK source provenance in prepare.py,meshfactory.py,effect-cache.py.
'''
packet['evidence'] = notes + '\nPrior Name source evidence:\n' + packet['evidence']
(root / 'packet.json').write_text(json.dumps(packet, indent=1))
(root / 'notes.md').write_text(packet['evidence'])
print('Prepared', len(packet['patches']), 'source paths,', len(packet['targets']), 'known exact-mined witnesses;', len(new_targets), 'new closed witnesses')
