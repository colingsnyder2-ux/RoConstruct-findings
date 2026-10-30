"""Force every external gain into a test link; audit direct Name interner calls."""
import json
import struct
from pathlib import Path
from roc import match, rebuild

root = Path(__file__).parent
witnesses = json.loads((root / 'gain-witnesses.json').read_text())
required, local, calls = [], [], []
for address, row in sorted(witnesses.items()):
    obj = (root / 'candidate-linked' / row['object']).read_bytes()
    symbol = row['symbol']
    if not rebuild.coff_externals(obj).get(symbol):
        local.append(row)
        continue
    required.append(symbol)
    sections, symbols, locations, _ = match._coff_data_index(obj)
    value, section = locations[symbol]
    body = next(b for s, b, r in match.coff_functions(obj) if s == symbol)
    target, _, _ = match.target('2008-06', address)
    header = sections[section]
    for index in range(header[7]):
        at, ref, kind = struct.unpack_from('<IIH', obj, header[5] + index*10)
        offset = at-value
        if kind != 20 or not 1 <= offset <= len(body)-4 or body[offset-1] != 0xe8:
            continue
        callee = symbols[ref][0]
        destination = '%08x' % (int(address,16)+offset+4+struct.unpack_from('<i',target,offset)[0])
        if callee == '?declare@Name@RBX@@SAABV12@PBDH@Z':
            assert destination == '00553f90', (address, callee, destination)
        calls.append(dict(address=address, symbol=symbol, callee_symbol=callee, original_callee=destination))
(root / 'direct-calls.json').write_text(json.dumps(calls,indent=1))
(root / 'unforceable-gains.json').write_text(json.dumps(local,indent=1))
print('External gained roots',len(required),'local-only',len(local),'direct calls',len(calls),flush=True)
test = 'native_name_array_force_v2_20261030'
text = '\n'.join('#pragma comment(linker, '+json.dumps('/INCLUDE:'+s)+')' for s in sorted(set(required)))
text += '\n' + (root / 'runtime.cpp').read_text()
path = rebuild.workspace('2008-06')/'tests'/(test+'.cpp')
assert not path.exists() or path.read_text()==text
path.write_text(text)
(root/'force.cpp').write_text(text)
compiler=json.loads((root/'results.json').read_text())[0]['compiler_config']
includes=[(root/'runtime-include').resolve()] + [Path(a[2:]) for a in compiler['args'] if a.startswith('/I')]
spec=rebuild.load_module('2008-06','rbxgs-app')
deps,pending=[],list(spec.get('depends',[]))
while pending:
    d=rebuild.load_module('2008-06',pending.pop(0)); lib=rebuild.workspace('2008-06')/'out'/d['name']/'linked/linked.lib'
    if lib not in deps:
        deps.append(lib); pending+=d.get('depends',[])
result=rebuild.resolve_objects('2008-06',test,[root/'candidate-linked'],'native-name-array-force-v2/linked',includes=includes,
                               extra_libs=deps,defines='WIN32 NDEBUG _MBCS _CRT_SECURE_NO_WARNINGS BOOST_ALL_NO_LIB')
result.update(forced_external_gains=len(required),unforceable_local_gains=len(local))
(root/'force-result.json').write_text(json.dumps(result,indent=1))
print(json.dumps({k:result.get(k) for k in ['linked','exit','output','unresolved','forced_external_gains','unforceable_local_gains']},indent=1))
raise SystemExit(0 if result.get('linked') and result.get('exit')==0 else 1)
