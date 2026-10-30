"""Port the server's byte-exact mined algorithm onto actual native SDK types."""
import json
from pathlib import Path
from roc import match, rebuild

root = Path(__file__).parent
candidate = json.loads((root / 'material-order-overlay.json').read_text())
mined = json.loads((root / 'mega-mined-source.json').read_text())
source = mined['source']
start = source.index('G3D::ReferenceCountedPointer<G3D::Texture>MegaTextureProxy::resolve(')
body = source[start:source.rindex('\n}\n}\n')]
body = body.replace('ImportedString name', 'std::string name')
body = body.replace('settings.wrapMode=0;', 'settings.wrapMode=G3D::Texture::CLAMP;')
relative = 'RbxView/MaterialFactory.cpp'
anchor = '\t\tMaterialFactory::MaterialFactory(G3D::TextureManager* textureManager)'
candidate[relative].append([anchor, '// Algorithm recovered by ' + mined['user'] +
    '; native SDK types replace mined layout stand-ins.\n' + body + '\n\n' + anchor])
candidate[relative].append(['#include "MaterialFactory.h"', '#include "MaterialFactory.h"\n#include <G3D/GImage.h>\n#include <algorithm>'])
candidate.setdefault('App/include/v8datamodel/BrickColor.h', []).append([
    'static const unsigned paletteSize;', 'static const unsigned paletteSize = 32;'])
shade_source = Path('tools/openrbx/Client/roc_resume_medium_published_shade_float_ff33c8ae26610b09.cpp').read_text()
shade_start = shade_source.index('void TextureProxy::shadePixel(')
shade_end = shade_source.index('// FUNCTION:', shade_start)
shade_body = '#pragma float_control(precise, off, push)\n' + shade_source[shade_start:shade_end] + '#pragma float_control(pop)\n'
shade_path = 'Rendering/RenderLib/TextureProxy.cpp'
shade_anchor = '\t\tG3D::ReferenceCountedPointer<G3D::Texture> TextureProxy::getIfResolved() const'
candidate.setdefault(shade_path, []).extend([
    ['#include "RenderLib/TextureProxy.h"', '#pragma float_control(precise, off)\n#include "RenderLib/TextureProxy.h"\n#include <algorithm>'],
    [shade_anchor, '// Verified SDK shade algorithm recovered by king_originala.\n' + shade_body + '\n' + shade_anchor],
])
(root / 'mega-native-overlay.json').write_text(json.dumps(candidate, indent=1))
Path('rebuild/2008-06/patches/rbxgs-client.json').write_text(json.dumps(candidate, indent=1))
spec = rebuild.load_module('2008-06', 'rbxgs-app')
overlay = rebuild.build_overlay('2008-06', 'RbxgsApp', spec['overlay'])
config = json.loads(Path('rebuild/2008-06/out/RbxgsApp/layer-view/MaterialFactory.command.json').read_text())
includes = [Path(a[2:]) for a in config['args'] if a.startswith('/I')]
defines = ' '.join(a[2:] for a in config['args'] if a.startswith('/D'))
path = Path('tools/rbxgs/Client') / relative
result = rebuild.compile_direct('2008-06', [path], root / 'mega-trial', includes, defines,
    '/O2 /Ob2 /Oy /GF /GS- /EHsc /MD', overlay=overlay)
ok, output = result[str(path)]
if not ok:
    print(output)
    raise SystemExit(1)
obj = (root / 'mega-trial/MaterialFactory.obj').read_bytes()
symbol = '?resolve@MegaTextureProxy@View@RBX@@EAE?AV?$ReferenceCountedPointer@VTexture@G3D@@@G3D@@PAVRenderDevice@5@@Z'
functions = {name: (code, relocs) for name, code, relocs in match.coff_functions(obj)}
code, relocs = functions[symbol]
target, target_relocs, _ = match.target('2008-06', '007b9000')
proof = dict(symbol=symbol, address='007b9000', source=relative, original_miner=mined['user'],
    size=len(code), target_size=len(target), exact=match.exact_match(target, target_relocs, code, relocs),
    score=match.score(target, target_relocs, code, relocs),
    source_disassembly=match.disasm(code, 0), target_disassembly=match.disasm(target, 0x007b9000))
(root / 'mega-native-proof.json').write_text(json.dumps(proof, indent=1))
print(json.dumps({key: value for key, value in proof.items() if 'disassembly' not in key}, indent=1))
path = Path('tools/rbxgs/Client') / shade_path
result = rebuild.compile_direct('2008-06', [path], root / 'mega-trial', includes, defines,
    '/O2 /Ob2 /Oy /GF /GS- /EHsc /MD', overlay=overlay)
ok, output = result[str(path)]
if not ok:
    print(output)
    raise SystemExit(1)
obj = (root / 'mega-trial/TextureProxy.obj').read_bytes()
symbol = '?shadePixel@TextureProxy@Render@RBX@@SAXABVColor3uint8@G3D@@AAV45@@Z'
code, relocs = {name: (code, relocs) for name, code, relocs in match.coff_functions(obj)}[symbol]
target, target_relocs, _ = match.target('2008-06', '007add10')
proof = dict(symbol=symbol, address='007add10', source=shade_path, original_miner=mined['user'],
    size=len(code), target_size=len(target), exact=match.exact_match(target, target_relocs, code, relocs),
    score=match.score(target, target_relocs, code, relocs))
(root / 'shade-native-proof.json').write_text(json.dumps(proof, indent=1))
print(json.dumps(proof, indent=1))
raise SystemExit(0 if proof['exact'] else 2)
