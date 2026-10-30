from pathlib import Path
import struct,json
from roc import match
base,img=match._image('2008-06');img=bytes(img);rows=[]
def dword(va):
 off=va-base
 if off<0 or off+4>len(img):raise ValueError('outside image')
 return struct.unpack_from('<I',img,off)[0]
def name(td):
 off=td-base+8
 if off<0 or off>=len(img):raise ValueError('outside type')
 end=img.index(b'\0',off)
 return img[off:end].decode('ascii')
for cls in ['RbxSceneManager@Ogre','SceneMgrQueuedRenderableVisitor@RbxSceneManager@Ogre','SceneMgrQueuedRenderableVisitor@SceneManager@Ogre','ShadowCasterSceneQueryListener@RbxSceneManager@Ogre']:
 needle=('.?AV'+cls+'@@').encode();start=0;found=[]
 while True:
  at=img.find(needle,start)
  if at<0:break
  start=at+1;td=base+at-8;ref=struct.pack('<I',td);p=0
  while True:
   i=img.find(ref,p)
   if i<0:break
   p=i+1;col=base+i-12
   try:
    if dword(col)!=0:continue
    chd=dword(col+16);count=dword(chd+8);array=dword(chd+12)
    if not 1<=count<=32 or dword(dword(array))!=td:continue
    bases=[]
    for j in range(count):
     bcd=dword(array+j*4);bases.append({'name':name(dword(bcd)),'mdisp':dword(bcd+8),'pdisp':hex(dword(bcd+12))})
    if bases not in found:found.append(bases)
   except (ValueError,UnicodeDecodeError,struct.error):pass
 rows.append({'class':cls,'hierarchies':found});print(cls,found,flush=True)
Path('work/ogre-native-scene-20261029/rtti-hierarchies.json').write_text(json.dumps(rows,indent=1))
