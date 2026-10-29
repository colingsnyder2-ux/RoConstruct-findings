from pathlib import Path
import json
from roc import rebuild,libs
root=Path('work/g3d-gl-native-20261029'); name='g3d-6.09-rbx2008'; recipe=libs.RECIPES[name]; src=libs._case_path(libs.LIBS/recipe['src']); tree=rebuild.patched_tree('2008-06',name)
includes=[tree]+[rebuild._in_tree(libs._case_path(libs.LIBS/p),src,tree) for p in recipe.get('include',[]) if p!='WINSDK']
spec=rebuild.load_module('2008-06','g3d-gl'); overlay=rebuild.build_overlay('2008-06',spec['name'],spec['overlay'])
results={}
for tag,flags in [('precise','/O2 /GS- /EHsc /MD'),('fast','/O2 /GS- /EHsc /MD /fp:fast')]:
 result=rebuild.compile_direct('2008-06',[tree/'GLG3Dcpp/GApp.cpp'],root/('gapp-'+tag),includes,recipe.get('defines',''),flags,overlay=overlay)
 results[tag]=result;print(tag,result,flush=True)
(root/'gapp-compile-results.json').write_text(json.dumps(results,indent=1))
