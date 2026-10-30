import pefile,struct,json
from pathlib import Path
from roc import match
p=pefile.PE('clients/2008-06/rgmain.dll');b=p.OPTIONAL_HEADER.ImageBase;img=p.get_memory_mapped_image();ex=p.DIRECTORY_ENTRY_EXPORT.symbols;vt=next(e.address for e in ex if e.name==b'??_7SceneManager@Ogre@@6B@');names={}
for e in ex:
 if e.name:names.setdefault(b+e.address,[]).append(e.name.decode())
imports={i.address:i.name.decode() if i.name else str(i.ordinal) for d in p.DIRECTORY_ENTRY_IMPORT for i in d.imports};base,exe=match._image('2008-06');evt=0x84ed34;rows=[]
for slot in range(240):
 addr=struct.unpack_from('<I',img,vt+4*slot)[0]
 if not b<=addr<b+len(img):break
 label=names.get(addr,[]);rva=addr-b;stub=img[rva:rva+6];imp=imports.get(struct.unpack_from('<I',stub,2)[0]) if stub[:2]==b'\xff\x25' else None;ea=struct.unpack_from('<I',exe,evt-base+slot*4)[0];row={'slot':slot,'dll_address':hex(addr),'exports':label,'import_thunk':imp,'exe_address':hex(ea)};rows.append(row)
 if imp or any('getTypeName' in n for n in label) or not label:print(row)
Path('work/ogre-native-scene-20261029/full-vtable-map.json').write_text(json.dumps(rows,indent=1));print('slots',len(rows))
