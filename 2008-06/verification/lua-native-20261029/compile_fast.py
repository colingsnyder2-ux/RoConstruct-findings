from pathlib import Path
import json
from roc import rebuild,libs
root=Path('work/lua-native-20261029');recipe=libs.RECIPES['lua-5.1.4'];tree=rebuild.patched_tree('2008-06','lua-5.1.4');files=[tree/f for f in recipe['files']];out=root/'fast';r=rebuild.compile_direct('2008-06',files,out,[tree],recipe.get('defines',''),'/O2 /GS- /MD /fp:fast');(root/'fast-compile.json').write_text(json.dumps(r,indent=1));print('compiled',sum(v[0] for v in r.values()),'/',len(r),flush=True)
