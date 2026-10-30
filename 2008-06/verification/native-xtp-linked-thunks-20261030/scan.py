import json,re,struct
from pathlib import Path
import pefile
r=Path.cwd();d=r/'work/native-xtp-linked-thunk-20261030'; test=r/'rebuild/2008-06/out/tests/xtp_native_thunk_20261030'; text=(test/'xtp_native_thunk_20261030.map').read_text().splitlines(); mapped={}; rows=[]
for line in text:
 p=line.split()
 if len(p)>=5 and ':' in p[0] and re.fullmatch('[0-9a-fA-F]{8}',p[2]) and p[3]=='f' and p[-1].startswith('linked:'):
  addr=int(p[2],16);mapped.setdefault((p[1],p[-1][7:]),set()).add(addr);rows.append((p[1],addr,p[-1][7:]))
owners=json.loads((r/'rebuild/2008-06/out/XTP/owned-symbols.json').read_text());dest={}
for target,items in owners.items():
 for item in items:
  for addr in mapped.get((item['symbol'],item['object']),[]):dest.setdefault(addr,set()).add(target)
exe=pefile.PE(str(test/'xtp_native_thunk_20261030.exe')); img=exe.get_memory_mapped_image();eb=exe.OPTIONAL_HEADER.ImageBase;native=pefile.PE(str(r/'clients/2008-06/Roblox.exe')); nimg=native.get_memory_mapped_image();nb=native.OPTIONAL_HEADER.ImageBase; targets={}
for line in (r/'work/2008-06/functions.jsonl').open():
 f=json.loads(line)
 if f['size']!=5:continue
 addr=int(f['addr'],16);p=addr-nb
 if p<0 or p+5>len(nimg):continue
 b=nimg[p:p+5]
 if b[0]==0xe9:
  callee=addr+5+struct.unpack('<i',b[1:])[0];targets.setdefault('%08x'%callee,[]).append(f['addr'])
own=set()
for p in (r/'rebuild/2008-06/out').glob('*/report.json'):
 try:
  z=json.loads(p.read_text());
  if z.get('linked') and z.get('test_exit')==0:own.update(z.get('owned_addrs',[]))
 except:pass
out=[]
for sym,addr,obj in rows:
 p=addr-eb
 if p<0 or p+5>len(img) or img[p]!=0xe9:continue
 linked_dest=addr+5+struct.unpack('<i',img[p+1:p+5])[0];native_dests=dest.get(linked_dest,set())
 if len(native_dests)!=1:continue
 orig=next(iter(native_dests)); candidates=targets.get(orig,[])
 if len(candidates)!=1 or candidates[0] in own:continue
 out.append({'target':candidates[0],'callee_target':orig,'symbol':sym,'object':obj,'linked_address':'%08x'%addr,'linked_callee':'%08x'%linked_dest})
(d/'linked-thunk-scan.json').write_text(json.dumps(out,indent=1)+'\n');print('mapped linked functions',len(rows),'anchored callee addresses',len(dest),'unique candidate target addresses',len({x['target'] for x in out}));print(json.dumps(out[:35],indent=1))
