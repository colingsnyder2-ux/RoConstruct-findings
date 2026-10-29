from pathlib import Path
import json,re
from roc import match,rebuild
root=Path('work/lua-native-20261029');tree=rebuild.patched_tree('2008-06','lua-5.1.4');r=rebuild.compile_direct('2008-06',[tree/'lmathlib.c'],root/'precise',[tree],'','/O2 /GS- /MD');assert all(v[0] for v in r.values());rebuild.size_index('2008-06')
def pairs(p):
 obj=p.read_bytes();out=set()
 for s,b,r in match.coff_functions(obj):
  for a in rebuild._paired_addresses('2008-06',b,tuple(r)):
   if not match.data_check('2008-06',a,match.target('2008-06',a)[0],match.coff_data_refs(obj,s))[1]:out.add((a,s))
 return out
old=pairs(root/'precise/lmathlib.obj');new=pairs(Path('rebuild/2008-06/out/Lua/linked/lmathlib.obj'));assert old<=new;(root/'preserved-pairs.json').write_text(json.dumps({'old':sorted(old),'new':sorted(new),'losses':sorted(old-new)},indent=1))
lines=Path('rebuild/2008-06/out/tests/lua_script/lua_script.map').read_text().splitlines();rows=[]
for sym,addr in [('_math_deg','00625f70'),('_math_random','00626150'),('_luaO_pushfstring','00512eb0')]:
 line=next(l.strip() for l in lines if len(l.split())>2 and l.split()[1]==sym);m=re.search(r'(?:linked:|\s)([^\s:]+\.obj)$',line);assert m,line;obj=Path('rebuild/2008-06/out/Lua/linked',m[1]).read_bytes();b,rel=next((b,r) for s,b,r in match.coff_functions(obj) if s==sym);target,trel,_=match.target('2008-06',addr);code=len(b)==len(target) and match.exact_match(target,trel,b,rel);bad=match.data_check('2008-06',int(addr,16),target,match.coff_data_refs(obj,sym))[1];assert code and not bad,(sym,bad);rows.append({'address':addr,'symbol':sym,'map_line':line,'code_exact':code,'data_exact':not bad,'body_bytes':len(b),'prior_matching_same_symbol':(addr,sym) in old if sym.startswith('_math_') else True})
(root/'linked-root-proof.json').write_text(json.dumps(rows,indent=1));print('preserved',len(old),'pairs; new',len(new),'linked proofs',rows)
