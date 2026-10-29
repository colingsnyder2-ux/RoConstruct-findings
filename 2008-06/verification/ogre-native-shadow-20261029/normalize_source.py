from pathlib import Path
import json
from roc import libs,match
root=Path('work/ogre-native-shadow-20261029');old=json.loads((root/'winning-unit.json').read_text());s=(root/'winning-unit.cpp').read_text();s='\n'.join(line.rstrip() for line in s.splitlines())+'\n';unit=libs.add_unit('ogre-1.4.5-dll',s,prefix='roc_native_subentity_shadow_');(root/'winning-unit.cpp').write_text(s);(root/'winning-unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':unit},indent=1));p=Path('rebuild/2008-06/modules/ogre.json');spec=json.loads(p.read_text());entry=next(e for e in spec['native_units'] if 'subentity_shadow' in e['file']);entry['file']=unit;p.write_text(json.dumps(spec,indent=1)+'\n')
obj=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',unit,'cpp',21022,entry['flags']));(root/'winning.obj').write_bytes(obj);funcs={sym:(b,r) for sym,b,r in match.coff_functions(obj)}
for a,sym in entry['symbols'].items():
 b,r=funcs[sym];t,tr,_=match.target('2008-06',a);assert len(b)==len(t) and match.exact_match(t,tr,b,r),a;assert not match.data_check('2008-06',a,t,match.coff_data_refs(obj,sym))[1],a
find=Path(r'C:/Users/colin/RoConstruct-codex-findings');p=find/'units/generated-units.json';units=json.loads(p.read_text(encoding='utf-8'));src=libs.RECIPES['ogre-1.4.5-dll']['src'];del units[src][old['file']];units[src][unit]=s;p.write_text(json.dumps(units,indent=1,sort_keys=True),encoding='utf-8');print('normalized registered unit',unit,'all16 exact')
for repo in [Path.cwd(),Path(r'C:/Users/colin/RoConstruct/work/publish-native-workflow')]:
 p=repo/'research/recipes.json';r=json.loads(p.read_text());r['ogre-native-shadow-20261029']['sources'][0]['files']=[unit];p.write_text(json.dumps(r,indent=2)+'\n')
