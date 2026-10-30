from pathlib import Path
import struct,json
from roc import match
base,img=match._image('2008-06');img=bytes(img);td=base+img.index(b'.?AVRbxSceneManager@Ogre@@')-8
D=lambda va:struct.unpack_from('<I',img,va-base)[0]
col=[];start=0
while True:
 i=img.find(struct.pack('<I',td),start)
 if i<0:break
 start=i+1;va=base+i-12
 try:
  chd=D(va+16)
  if D(va)==0 and 1<=D(chd+8)<=8 and D(D(D(chd+12)))==td:col.append(va)
 except (struct.error,IndexError):pass
rows=[]
for c in col:
 p=0
 while True:
  at=img.find(struct.pack('<I',c),p)
  if at<0:break
  p=at+1;vt=base+at+4;methods=[D(vt+j*4) for j in range(6)]
  if all(base<=a<base+len(img) for a in methods):
   row={'locator':hex(c),'vtable':hex(vt),'methods':[hex(a) for a in methods]};rows.append(row);print(row)
   a='%08x'%methods[1];f=match._functions('2008-06').get(a,{});print('slot1',a,{k:f.get(k) for k in ['size','unit','data_refs','global_reads']});t,r,_=match.target('2008-06',a);print(match.disasm(t,int(a,16)))
Path('work/ogre-native-scene-20261029/vtables.json').write_text(json.dumps(rows,indent=1))
