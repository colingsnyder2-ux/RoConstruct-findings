from pathlib import Path
import json
from roc import rebuild,libs
root=Path('work/lua-native-20261029');tree=rebuild.patched_tree('2008-06','lua-5.1.4');source=(tree/'lmathlib.c').read_text();patches=[]
for fn in ['math_deg','math_random']:
 start=source.index('static int '+fn+' (');end=source.index('\n}',start)+2;body=source[start:end]
 patches.append([body,'#pragma float_control(precise, off, push)\n'+body+'\n#pragma float_control(pop)'])
p=Path('rebuild/2008-06/patches/lua-native-float.json');p.write_text(json.dumps({'lmathlib.c':patches},indent=1)+'\n')
ov=rebuild.build_overlay('2008-06','LuaFloatTrial',{'root':'tree:lua-5.1.4/','patches':str(p).replace('\\','/')});r=rebuild.compile_direct('2008-06',[tree/'lmathlib.c'],root/'scoped',[tree],'','/O2 /GS- /MD',overlay=ov);print(r)
