"""Submit-ready evidence for genuine SDK material/texture closure recovery."""
import json
from pathlib import Path
from roc import integration, native_sweep, worker

root = Path(__file__).parent
packet = json.loads((root / 'packet.json').read_text())
settings = worker.load_settings()
assert settings['user'] == 'colin'
api = worker.Api(settings['server'], integration.native_token() or settings.get('token'))
try:
    base = api.call('/v1/integration/base')
    targets = native_sweep.server_evidence(api)['targets']
finally:
    api.close()
assert base['revision'] == packet['base_revision'], 'Baseline changed: preserve proofs and reconcile first'
closed = json.loads((root / 'mega-closed-gains-result.json').read_text())
combined = json.loads((root / 'mega-source-force-result.json').read_text())
for result in (closed, combined):
    assert result['linked'] and result['exit'] == 0 and not result['unresolved']
before = json.loads((root / 'effect-cache-overlay.json').read_text())
after = json.loads((root / 'mega-native-overlay.json').read_text())
delta = integration.overlay_delta(before, after)
assert not delta.keys() & packet['patches'].keys()
packet['patches'].update(delta)
packet['targets'] = sorted(set(packet['targets']) | (set(closed['forced_gain_addresses']) & targets.keys()))
notes = '''Supersedes caa3883214d5d9d7682775736d938ab71e59132c123b74376a84fac4cc84ea60 and all its predecessor packets; queue only this combined packet. Contributor colin.
Material/texture batch adds seven local code/data/callee-qualified addresses: 4167 ->4174, zero losses. All seven native module layers compile with zero errors; module link/runtime0. Adds real MaterialFactory::Attributes ordering (81 exact bytes), MegaTextureProxy::resolve (843 exact bytes) and TextureProxy::shadePixel (247 exact bytes), plus four emitted SDK helpers. Algorithms for resolver/shading came from king_originala's existing server exacts; all mined stand-in types were replaced with actual SDK headers and classes. Model identity names the adapting agent, not the earlier miner.
Target004f07b0 reads the existing color/transparency/reflectance fields in that order. Scoped fast-float pragma reproduces its x87 comparisons. Shading requires fast-float before SDK headers so inline rounding helpers use the target configuration; a scoped pragma gave270 bytes instead of247 and was rejected. Existing BrickColor::paletteSize declaration now has binary-proven initializer32. Existing Message.obj supplies the32-valued storage; an added duplicate CPP definition was rejected and removed. No new fields, bases, virtual slots, padding or byte emission.
RTTI/COL/vtable identifies target Mega resolver at007b9000, slot+24 of00875cec. Constructor007b8fb0 writes the existing strip-width field at+0x54; caller00551a30 allocates0x58 at00551ab1. Runtime asserts native Mega size0x58. Existing SDK class namespace is RBX::View while target RTTI spells RBX::Render; this evidence proves matching body, slot, fields and allocation, not original source/class identity. No RTTI renaming or original-source claim. Independent ABI/reference review must retain this caveat.
Twelve closed new external address roots (since4158 inventory) force-link/run0. Runtime checks16 cached Mega calls through its public base virtual interface,15 shade-channel expectations across five vectors,16 material-key comparisons and128 member lifecycle cycles. Cached calls need no graphics context; actual GPU texture upload is not exercised. Combined363 external roots link/run0 with64 Name cache checks. Prior seven local CRT proofs remain applicable. Whole graphics inventory4158 ->4174 is16 local addresses; the four earlier View.obj gains remain outside the closed-root set. Broad291-root diagnostic still fails11 graphics dependencies (36 originally,13 before this batch). No credits claimed for that remaining pool.
Requires independent host ABI/M2/M4a/M5/reference/zero-loss verification using strict callee/data ownership and conditional Name glue on source branch codex/verified-replay-cache-20261030. No self-approval. Submit as colin; accepted new gains use the server integration webhook. This receipt is quarantine only, not native credit.
Evidence: mega-native-comparison.json,mega-native-report.json,mega-native-build.txt,material-order-proof.json,mega-native-proof.json,shade-native-proof.json,mega-abi-evidence.json,mega-closed-gains-result.json,mega-source-force-result.json,mega-native-force-result.json. Previous source evidence follows.
'''
packet['evidence'] = notes + '\n' + packet['evidence']
(root / 'mega-packet.json').write_text(json.dumps(packet, indent=1))
(root / 'mega-notes.md').write_text(packet['evidence'])
(root / 'mega-patches.json').write_text(json.dumps(delta, indent=1))
print('Packet prepared:', len(packet['patches']), 'paths,', len(packet['targets']), 'known exact-mined witnesses')
