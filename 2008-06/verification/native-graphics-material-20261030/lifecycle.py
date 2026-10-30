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
material_order = '--material-order' in sys.argv
mega_native = '--mega-native' in sys.argv
if '--force-closed-gains' in sys.argv:
    test = 'native_graphics_closed_gains_20261030'
    baseline = json.loads(Path('work/name-callee-audit-20261030/candidate-report.json').read_text())
    variant = 'mega-native' if mega_native else ('material-order' if material_order else 'effect-cache')
    current = json.loads((root / (variant + '-report.json')).read_text())
    owners = json.loads((root / (variant + '-owned-symbols.json')).read_text())
    symbols = set()
    for address in sorted(set(current['owned_addrs']) - set(baseline['owned_addrs'])):
        rows = [row for row in owners[address] if row['object'] != 'View.obj']
        if rows:
            forced.append(address)
            symbols.update(row['symbol'] for row in rows)
    text = '\n'.join('#pragma comment(linker, ' + json.dumps('/INCLUDE:' + symbol) + ')'
                     for symbol in sorted(symbols)) + '\n' + text
if material_order:
    test += '_material'
    fixture = root / 'material-runtime-include'
    fixture.mkdir(exist_ok=True)
    header = Path('tools/rbxgs/Client/RbxView/MaterialFactory.h').read_text()
    anchor = 'class MaterialFactory\n\t\t{'
    assert header.count(anchor) == 1
    # Access-only test fixture: retain every real field, qualifier and method.
    header = header.replace(anchor, anchor + '\npublic:', 1)
    if mega_native:
        header = header.replace('private:', 'public:')
        method = '\t\t\tvirtual G3D::ReferenceCountedPointer<G3D::Texture> resolve(G3D::RenderDevice*);'
        assert header.count(method) == 1
        header = header.replace(method, 'private:\n' + method)
    (fixture / 'MaterialFactoryTest.h').write_text(header)
    check = '''
#include "MaterialFactoryTest.h"
int verifyMaterialOrder() {
    typedef RBX::View::MaterialFactory::Attributes Key;
    const Key keys[] = {
        {RBX::BrickColor(RBX::BrickColor::lego_1), 0.0f, 0.0f},
        {RBX::BrickColor(RBX::BrickColor::lego_1), 0.0f, 1.0f},
        {RBX::BrickColor(RBX::BrickColor::lego_1), 0.5f, 0.0f},
        {RBX::BrickColor(RBX::BrickColor::lego_21), 0.0f, 0.0f}
    };
    typedef char KeySize[(sizeof(Key) == 12) ? 1 : -1];
    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
            if ((keys[i] < keys[j]) != (i < j)) return 1;
    std::printf("material ordering: 16 key comparisons passed\\n");
    return 0;
}
'''
    text = text.replace('int main() {', check + '\nint main() {\n    if (verifyMaterialOrder()) return 5;')
    if mega_native:
        check = '''
class MegaProbe : public RBX::View::MegaTextureProxy {
public:
    MegaProbe(G3D::TextureManager& manager) : RBX::View::MegaTextureProxy(manager, "unused") {
        loaded = true;
        root = new RBX::Render::TextureProxy(manager, "cached-root", false);
    }
    RBX::Render::TextureProxy* cachedRoot() const { return root.pointer(); }
};
int verifyMegaCache() {
    typedef char MegaSize[(sizeof(RBX::View::MegaTextureProxy) == 0x58) ? 1 : -1];
    const G3D::Color3uint8 base(0, 128, 255);
    const unsigned char levels[] = {126, 128, 130, 0, 255};
    const unsigned char expected[][3] = {{0,128,255}, {0,128,255}, {0,128,255}, {0,64,128}, {253,254,255}};
    for (int i = 0; i < 5; ++i) {
        G3D::Color3uint8 pixel(levels[i], levels[i], levels[i]);
        RBX::Render::TextureProxy::shadePixel(base, pixel);
        if (pixel.r != expected[i][0] || pixel.g != expected[i][1] || pixel.b != expected[i][2]) return 2;
    }
    G3D::TextureManager manager;
    MegaProbe proxy(manager);
    RBX::Render::TextureProxy* root = proxy.cachedRoot();
    for (int i = 0; i < 16; ++i) {
        if (!static_cast<RBX::Render::TextureProxy&>(proxy).resolve(NULL).isNull() || proxy.cachedRoot() != root) return 1;
    }
    std::printf("mega cached path: 16 calls passed (no graphics context)\\n");
    return 0;
}
'''
        text = text.replace('int main() {', check + '\nint main() {\n    if (verifyMegaCache()) return 6;')
stem = ('material-closed-gains' if material_order else 'closed-gains') if forced else 'lifecycle'
if mega_native:
    stem = 'mega-closed-gains'
    test += '_mega'
path = rebuild.workspace('2008-06') / 'tests' / (test + '.cpp')
path.write_text(text)
(root / (stem + '.cpp')).write_text(text)
config = json.loads(Path('work/name-array-native-v2-20261030/results.json').read_text())[0]['compiler_config']
includes = [Path(a[2:]) for a in config['args'] if a.startswith('/I')]
overlay = (Path('tools/rbxgs/Client').resolve(), Path('rebuild/2008-06/out/RbxgsApp/overlay').resolve())
includes, _ = rebuild._overlaid(includes, [], overlay)
if material_order:
    includes.insert(0, fixture.resolve())
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
