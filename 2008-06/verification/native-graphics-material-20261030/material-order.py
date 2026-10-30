"""Recover material ordering from the map caller and target's existing field reads."""
import json
from pathlib import Path
from roc import match, rebuild, integration

root = Path(__file__).parent
candidate = json.loads((root / 'effect-cache-overlay.json').read_text())
relative = 'RbxView/MaterialFactory.cpp'
anchor = '\t\tMaterialFactory::MaterialFactory(G3D::TextureManager* textureManager)'
body = '''#pragma float_control(precise, off, push)
        bool MaterialFactory::Attributes::operator<(const Attributes& that) const
        {
            if (color < that.color) return true;
            if (color > that.color) return false;
            if (transparency < that.transparency) return true;
            if (transparency > that.transparency) return false;
            return reflectance < that.reflectance;
        }
#pragma float_control(pop)

'''
candidate.setdefault(relative, []).append([anchor, body + anchor])
(root / 'material-order-overlay.json').write_text(json.dumps(candidate, indent=1))
Path('rebuild/2008-06/patches/rbxgs-client.json').write_text(json.dumps(candidate, indent=1))
spec = rebuild.load_module('2008-06', 'rbxgs-app')
overlay = rebuild.build_overlay('2008-06', 'RbxgsApp', spec['overlay'])
config = json.loads(Path('rebuild/2008-06/out/RbxgsApp/layer-view/MaterialFactory.command.json').read_text())
includes = [Path(a[2:]) for a in config['args'] if a.startswith('/I')]
defines = ' '.join(a[2:] for a in config['args'] if a.startswith('/D'))
source = Path('tools/rbxgs/Client') / relative
result = rebuild.compile_direct('2008-06', [source], root / 'material-trial', includes, defines,
    '/O2 /Ob2 /Oy /GF /GS- /EHsc /MD', overlay=overlay)
ok, output = result[str(source)]
if not ok:
    print(output)
    raise SystemExit(1)
obj = (root / 'material-trial/MaterialFactory.obj').read_bytes()
symbol = '??MAttributes@MaterialFactory@View@RBX@@QBE_NABU0123@@Z'
functions = {name: (code, relocs) for name, code, relocs in match.coff_functions(obj)}
code, relocs = functions[symbol]
target, target_relocs, _ = match.target('2008-06', '004f07b0')
exact = match.exact_match(target, target_relocs, code, relocs)
proof = dict(symbol=symbol, address='004f07b0', source=relative, compiled=True,
    size=len(code), target_size=len(target), exact=exact,
    source_disassembly=match.disasm(code, 0), target_disassembly=match.disasm(target, 0x004f07b0))
(root / 'material-order-proof.json').write_text(json.dumps(proof, indent=1))
print(json.dumps({key: value for key, value in proof.items() if 'disassembly' not in key}, indent=1))
if not exact:
    print('\n'.join(proof['source_disassembly']))
    raise SystemExit(2)
