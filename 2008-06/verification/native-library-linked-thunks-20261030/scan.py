import json,re,struct
from pathlib import Path
import pefile
r=Path.cwd();d=r/'work/native-library-linked-thunks-20261030';d.mkdir(exist_ok=True);out=r/'rebuild/2008-06/out';native=pefile.PE(str(r/'clients/2008-06/Roblox.exe'));image=native.get_memory_mapped_image();nb=native.OPTIONAL_HEADER.ImageBase;targets={};global_owned=set();specs={}
for p in (r/'rebuild/2008-06/modules').glob('*.json'):
 try:
  s=json.loads(p.read_text());specs[s['name']]=s
 except:pass
for line in (r/'work/2008-06/functions.jsonl').open():
 f=json.loads(line)
 if f['size']!=5:continue
 addr=int(f['addr'],16);pos=addr-nb
 if 0<=pos and pos+5<=len(image) and image[pos]==0xe9:targets.setdefault('%08x'%(addr+5+struct.unpack('<i',image[pos+1:pos+5])[0]),[]).append(f['addr'])
reports=[]
for p in out.glob('*/report.json'):
 try:
  x=json.loads(p.read_text());name=x.get('module',p.parent.name)
  if x.get('linked') and x.get('test_exit')==0 and name in specs:
   reports.append((name,x));global_owned.update(x.get('owned_addrs',[]))
 except:pass
candidates=[];summary=[]
for name,report in reports:
 spec=specs[name];test=spec.get('test');folder=out/'tests'/str(test); mp=folder/(str(test)+'.map');ex=folder/(str(test)+'.exe'); op=out/name/'owned-symbols.json'
 if not (mp.exists() and ex.exists() and op.exists()):continue
 try:
  pe=pefile.PE(str(ex));img=pe.get_memory_mapped_image();eb=pe.OPTIONAL_HEADER.ImageBase;lines=mp.read_text().splitlines();owners=json.loads(op.read_text())
 except Exception as e:summary.append({'module':name,'error':str(e)});continue
 mapped={};rows=[]
 for line in lines:
  p=line.split()
  if len(p)>=5 and ':' in p[0] and re.fullmatch('[0-9a-fA-F]{8}',p[2]) and p[3]=='f' and p[-1].startswith('linked:'):
   addr=int(p[2],16);mapped.setdefault((p[1],p[-1][7:]),set()).add(addr);rows.append((p[1],addr,p[-1][7:]))
 dest={}
 for target,items in owners.items():
  for item in items:
   for address in mapped.get((item['symbol'],item['object']),[]):dest.setdefault(address,set()).add(target)
 count=0
 for sym,addr,obj in rows:
  pos=addr-eb
  if pos<0 or pos+5>len(img) or img[pos]!=0xe9:continue
  linked_dest=addr+5+struct.unpack('<i',img[pos+1:pos+5])[0];anchor=dest.get(linked_dest,set())
  if len(anchor)!=1:continue
  original=next(iter(anchor)); options=targets.get(original,[])
  if len(options)!=1 or options[0] in global_owned:continue
  candidates.append({'module':name,'test':test,'target':options[0],'callee_target':original,'symbol':sym,'object':obj,'linked_address':'%08x'%addr,'linked_callee':'%08x'%linked_dest});count+=1
 summary.append({'module':name,'mapped_functions':len(rows),'anchored_callees':len(dest),'candidate_rows':count});print(name,'candidate rows',count,flush=True)
(d/'summary.json').write_text(json.dumps(summary,indent=1)+'\n');(d/'candidates.json').write_text(json.dumps(candidates,indent=1)+'\n');print('total distinct candidates',len({z['target'] for z in candidates}),flush=True)
