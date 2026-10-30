import json,re
from pathlib import Path
import pefile
from roc import match
r=Path.cwd();d=r/'work/native-library-linked-thunks-20261030';data=json.loads((d/'candidates.json').read_text());outdir=r/'rebuild/2008-06/out';testcache={};owncache={};objcache={}
def context(module,test):
 key=(module,test)
 if key not in testcache:
  path=outdir/'tests'/test;pe=pefile.PE(str(path/(test+'.exe')));img=pe.get_memory_mapped_image();base=pe.OPTIONAL_HEADER.ImageBase;maps={}
  for line in (path/(test+'.map')).read_text().splitlines():
   p=line.split()
   if len(p)>=5 and ':' in p[0] and re.fullmatch('[0-9a-fA-F]{8}',p[2]) and p[3]=='f':maps.setdefault((p[1],p[-1]),set()).add(int(p[2],16))
  testcache[key]=(img,base,maps)
 if module not in owncache:owncache[module]=json.loads((outdir/module/'owned-symbols.json').read_text())
 return testcache[key],owncache[module]
def funcs(module,obj):
 key=(module,obj)
 if key not in objcache:
  b=(outdir/module/'linked'/obj).read_bytes();objcache[key]=(b,{s:(c,x) for s,c,x in match.coff_functions(b)})
 return objcache[key]
results=[]
for x in data:
 row=dict(x)
 try:
  (img,base,maps),owners=context(x['module'],x['test']);target,trefs,_=match.target('2008-06',x['target']);ob,fs=funcs(x['module'],x['object']);f=fs.get(x['symbol']);row['caller_object_exact']=bool(f and len(f[0])==5 and f[0][0]==0xe9 and match.exact_match(target,trefs,*f));caladdr=int(x['linked_callee'],16);ct,cr,_=match.target('2008-06',x['callee_target']);hits=[]
  for owner in owners.get(x['callee_target'],[]):
   if caladdr not in maps.get((owner['symbol'],'linked:'+owner['object']),set()):continue
   cb,cf=funcs(x['module'],owner['object']);fn=cf.get(owner['symbol'])
   if not fn:continue
   _,bad=match.data_check('2008-06',x['callee_target'],ct,match.coff_data_refs(cb,owner['symbol']));body=bytes(img[caladdr-base:caladdr-base+len(ct)]);hits.append({'symbol':owner['symbol'],'object':owner['object'],'object_exact':match.exact_match(ct,cr,*fn),'data_exact':not bad,'executable_exact':match.exact_match(ct,cr,body,fn[1])})
  row['callee_proofs']=hits;row['verified']=row['caller_object_exact'] and any(z['object_exact'] and z['data_exact'] and z['executable_exact'] for z in hits)
 except Exception as e:row['verified']=False;row['error']=str(e)[:500]
 results.append(row)
(d/'verified.json').write_text(json.dumps(results,indent=1)+'\n');yes=[x for x in results if x['verified']];no=[x for x in results if not x['verified']];print('verified distinct',len({x['target'] for x in yes}),'rows',len(yes),'rejected rows',len(no));
for name in sorted({x['module'] for x in results}):print(name,'verified',len({x['target'] for x in yes if x['module']==name}),'rejected',len([x for x in no if x['module']==name]))
for x in no[:8]:print('rejected',x['module'],x['target'],x.get('error','callee/owner mismatch'))
