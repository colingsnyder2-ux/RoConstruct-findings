"""Prove the local gain is retained in the executable's CRT initializer range."""
import json
import struct
from pathlib import Path
import pefile
from roc import match

root=Path(__file__).parent
result=json.loads((root/'force-result.json').read_text())
local=json.loads((root/'unforceable-gains.json').read_text())
assert len(local)==1
row=local[0]
values={p[1]:(int(p[2],16),line.strip()) for line in Path(result['map']).read_text().splitlines()
        if len(p:=line.split())>=3 and len(p[2])==8 and all(c in '0123456789abcdefABCDEF' for c in p[2])}
va,line=values[row['symbol']]
begin,end=values['___xc_a'][0],values['___xc_z'][0]
pe=pefile.PE(str(Path(result['map']).with_suffix('.exe')))
base=pe.OPTIONAL_HEADER.ImageBase
image=pe.get_memory_mapped_image()
entries=[a for a in range(begin,end,4) if struct.unpack_from('<I',image,a-base)[0]==va]
assert entries
original,relocs,_=match.target('2008-06',row['address'])
obj=(root/'candidate-linked'/row['object']).read_bytes()
source_relocs=next(rr for s,b,rr in match.coff_functions(obj) if s==row['symbol'])
assert match.exact_match(original,relocs,image[va-base:va-base+len(original)],source_relocs)
proof=dict(address=row['address'],symbol=row['symbol'],linked_va='%08x'%va,map_line=line,
           crt_begin='%08x'%begin,crt_end='%08x'%end,crt_entries=['%08x'%a for a in entries],
           code_exact=True,runtime_exit=result['exit'],
           activation='Selected ModelInstance.obj contributes this initializer to the executable C++ CRT initialization range.')
(root/'crt-proof.json').write_text(json.dumps(proof,indent=1))
print('Local gain retained by CRT startup; linked code is relocation-normalized exact.')
