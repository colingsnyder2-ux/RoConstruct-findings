"""Force the additional external placements; retain real name-cache runtime checks."""
import json
from pathlib import Path
from roc import rebuild

root=Path(__file__).parent
source=Path('work/name-array-native-v2-20261030')
witnesses=json.loads((Path('work/name-callee-audit-20261030/source-witnesses.json')).read_text())
owners=json.loads((root/'effect-cache-owned-symbols.json').read_text())
closed=json.loads((root/'closed-gains-result.json').read_text())['forced_gain_addresses']
symbols=sorted({r['symbol'] for r in witnesses.values() if r['external']} | {r['symbol'] for a in closed for r in owners[a]})
text='\n'.join('#pragma comment(linker, '+json.dumps('/INCLUDE:'+s)+')' for s in symbols)
text+='\n'+(source/'runtime.cpp').read_text()
test='native_graphics_source_force_20261030'
path=rebuild.workspace('2008-06')/'tests'/(test+'.cpp')
assert not path.exists() or path.read_text()==text
path.write_text(text)
(root/'source-force.cpp').write_text(text)
compiler=json.loads((source/'results.json').read_text())[0]['compiler_config']
includes=[(source/'runtime-include').resolve()]+[Path(a[2:]) for a in compiler['args'] if a.startswith('/I')]
spec=rebuild.load_module('2008-06','rbxgs-app')
deps,pending=[],list(spec.get('depends',[]))
while pending:
    d=rebuild.load_module('2008-06',pending.pop(0));lib=rebuild.workspace('2008-06')/'out'/d['name']/'linked/linked.lib'
    if lib not in deps:
        deps.append(lib);pending+=d.get('depends',[])
result=rebuild.resolve_objects('2008-06',test,[Path('rebuild/2008-06/out/RbxgsApp/linked')],'native-graphics-source-force/linked',
                               includes=includes,extra_libs=deps,defines='WIN32 NDEBUG _MBCS _CRT_SECURE_NO_WARNINGS BOOST_ALL_NO_LIB')
result['forced_external_placements']=len(symbols)
(root/'source-force-result.json').write_text(json.dumps(result,indent=1))
print(json.dumps({k:result.get(k) for k in ['compiled','linked','exit','output','unresolved','forced_external_placements']},indent=1))
raise SystemExit(0 if result.get('linked') and result.get('exit')==0 else 1)
