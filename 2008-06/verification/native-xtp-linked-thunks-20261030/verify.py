import json,re,struct
from pathlib import Path
import pefile
from roc import match
r=Path.cwd();d=r/'work/native-xtp-linked-thunk-20261030';data=json.loads((d/'linked-thunk-scan.json').read_text());test=r/'rebuild/2008-06/out/tests/xtp_native_thunk_20261030';pe=pefile.PE(str(test/'xtp_native_thunk_20261030.exe'));img=pe.get_memory_mapped_image();base=pe.OPTIONAL_HEADER.ImageBase;owners=json.loads((r/'rebuild/2008-06/out/XTP/owned-symbols.json').read_text());lines=(test/'xtp_native_thunk_20261030.map').read_text().splitlines();mapped={}
for line in lines:
 p=line.split()
 if len(p)>=5 and ':' in p[0] and re.fullmatch('[0-9a-fA-F]{8}',p[2]) and p[3]=='f':mapped.setdefault((p[1],p[-1]),set()).add(int(p[2],16))
cache={}
def funcs(obj):
 if obj not in cache:
  b=(r/'rebuild/2008-06/out/XTP/linked'/obj).read_bytes();cache[obj]=(b,{s:(c,x) for s,c,x in match.coff_functions(b)})
 return cache[obj]
out=[]
for x in data:
 row=dict(x);target,trefs,_=match.target('2008-06',x['target']);ob,fs=funcs(x['object']);entry=fs.get(x['symbol']);row['caller_object_exact']=bool(entry and len(entry[0])==5 and entry[0][0]==0xe9 and match.exact_match(target,trefs,*entry));caladdr=int(x['linked_callee'],16); ct,crefs,_=match.target('2008-06',x['callee_target']);hits=[]
 for owner in owners[x['callee_target']]:
  if caladdr not in mapped.get((owner['symbol'],'linked:'+owner['object']),set()):continue
  cb,cfs=funcs(owner['object']);f=cfs.get(owner['symbol'])
  if not f:continue
  _,bad=match.data_check('2008-06',x['callee_target'],ct,match.coff_data_refs(cb,owner['symbol']));body=bytes(img[caladdr-base:caladdr-base+len(ct)]);hits.append({'symbol':owner['symbol'],'object':owner['object'],'object_exact':match.exact_match(ct,crefs,*f),'data_exact':not bad,'executable_exact':match.exact_match(ct,crefs,body,f[1])})
 row['callee_proofs']=hits; row['verified']=row['caller_object_exact'] and any(z['object_exact'] and z['data_exact'] and z['executable_exact'] for z in hits);out.append(row)
(d/'linked-thunk-verified.json').write_text(json.dumps(out,indent=1)+'\n');print('verified distinct',len({x['target'] for x in out if x['verified']}),'rejected',len([x for x in out if not x['verified']]));
for x in out:print(x['target'],x['verified'],x['symbol'][:75], 'callee',x['callee_target'])
