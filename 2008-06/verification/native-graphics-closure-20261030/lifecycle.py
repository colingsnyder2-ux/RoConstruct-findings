"""Exercise SDK member lifecycle without creating a graphics context."""
import json
import sys
from pathlib import Path
from roc import rebuild

root = Path(__file__).parent
test = 'native_graphics_lifecycle_20261030'
text = r'''
#include "RenderLib/RenderSurface.h"
#include "RenderLib/RenderStats.h"
#include <cstdio>
#undef main
typedef char SurfaceSize[(sizeof(RBX::Render::RenderSurface) == 0x44) ? 1 : -1];
typedef char ShadowSize[(sizeof(RBX::Render::Mesh::ShadowSurface) == 0x34) ? 1 : -1];
typedef char StatsSize[(sizeof(RenderStats) == 0x238) ? 1 : -1];
int main() {
    for (int i = 0; i < 128; ++i) {
        RBX::Render::RenderSurface surface;
        RBX::Render::Mesh::ShadowSurface shadow;
        RenderStats stats;
        if (!surface.fullMesh.isNull() || !shadow.dropShadowGeometry.isNull()) return 1;
        if (shadow.edgeArray.size() || shadow.faceNormalArray.size() ||
            shadow.faceArray.size() || shadow.geometry.size()) return 2;
        shadow.geometry.append(G3D::Vector3(1, 2, 3));
        if (shadow.geometry.size() != 1 || shadow.geometry[0].y != 2) return 3;
    }
    if (RenderStats::chunkCount || RenderStats::aggregatedChunkCount || RenderStats::aggregateChunkCount) return 4;
    std::printf("graphics lifecycle: 128 construction/destruction cycles passed\n");
    return 0;
}
'''
forced = []
if '--force-closed-gains' in sys.argv:
    test = 'native_graphics_closed_gains_20261030'
    baseline = json.loads(Path('work/name-callee-audit-20261030/candidate-report.json').read_text())
    current = json.loads((root / 'effect-cache-report.json').read_text())
    owners = json.loads((root / 'effect-cache-owned-symbols.json').read_text())
    symbols = set()
    for address in sorted(set(current['owned_addrs']) - set(baseline['owned_addrs'])):
        rows = [row for row in owners[address] if row['object'] != 'View.obj']
        if rows:
            forced.append(address)
            symbols.update(row['symbol'] for row in rows)
    text = '\n'.join('#pragma comment(linker, ' + json.dumps('/INCLUDE:' + symbol) + ')'
                     for symbol in sorted(symbols)) + '\n' + text
path = rebuild.workspace('2008-06') / 'tests' / (test + '.cpp')
path.write_text(text)
stem = 'closed-gains' if forced else 'lifecycle'
(root / (stem + '.cpp')).write_text(text)
config = json.loads(Path('work/name-array-native-v2-20261030/results.json').read_text())[0]['compiler_config']
includes = [Path(a[2:]) for a in config['args'] if a.startswith('/I')]
overlay = (Path('tools/rbxgs/Client').resolve(), Path('rebuild/2008-06/out/RbxgsApp/overlay').resolve())
includes, _ = rebuild._overlaid(includes, [], overlay)
spec = rebuild.load_module('2008-06', 'rbxgs-app')
deps, pending = [], list(spec.get('depends', []))
while pending:
    dep = rebuild.load_module('2008-06', pending.pop(0))
    lib = rebuild.workspace('2008-06') / 'out' / dep['name'] / 'linked/linked.lib'
    if lib not in deps:
        deps.append(lib)
        pending += dep.get('depends', [])
result = rebuild.resolve_objects('2008-06', test, [Path('rebuild/2008-06/out/RbxgsApp/linked')],
    ('native-graphics-' + stem + '/linked'), includes=includes, extra_libs=deps,
    defines='WIN32 NDEBUG _MBCS _CRT_SECURE_NO_WARNINGS BOOST_ALL_NO_LIB')
result['forced_gain_addresses'] = forced
(root / (stem + '-result.json')).write_text(json.dumps(result, indent=1))
print(json.dumps({k: result.get(k) for k in ('compiled', 'linked', 'ran', 'exit', 'output', 'unresolved')}, indent=1))
raise SystemExit(0 if result.get('linked') and result.get('exit') == 0 else 1)
