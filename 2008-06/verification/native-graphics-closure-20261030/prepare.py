"""Port genuine SDK storage/member lifecycle into canonical source overlays."""
import json
import re
from pathlib import Path
from roc import integration

root=Path(__file__).parent
registry=Path('rebuild/2008-06/patches/rbxgs-client.json')
current=json.loads(registry.read_text())
(root/'previous-registry.json').write_text(json.dumps(current,indent=1))
base=json.loads(Path('work/name-array-native-v2-20261030/candidate-minimized.json').read_text())
candidate=json.loads(json.dumps(base))
genuine=Path('tools/openrbx/Client/Rendering/RenderLib/Mesh.cpp').read_text()
block=genuine[genuine.index('G3D::MeshAlg::Geometry Mesh::visibleGeometry;'):genuine.index('\nstatic int vertexRefCount;')]
block=block.replace('Mesh::VertexList','G3D::Array<int>')
native_header=Path('tools/rbxgs/Client/Rendering/RenderLib/include/RenderLib/Mesh.h').read_text()
for name in re.findall(r'Mesh::(\w+)\s*;',block):
    assert name in native_header
mesh='Rendering/RenderLib/Mesh.cpp'
old='\t\tstatic int vertexRefCount = 0;'
new=block+'\n\n// Genuine ShadowSurface has implicit member construction/destruction.\nMesh::ShadowSurface::ShadowSurface() {}\nMesh::ShadowSurface::~ShadowSurface() {}\n\n'+old
candidate.setdefault(mesh,[]).append([old,new])
surface='Rendering/RenderLib/RenderSurface.cpp'
candidate.setdefault(surface,[]).append(['namespace RBX\n{\n\tnamespace Render\n\t{',
    'namespace RBX\n{\n\tnamespace Render\n\t{\n\t\t// Genuine SDK constructor is empty; members still construct/destruct.\n\t\tRenderSurface::RenderSurface() {}\n\t\tRenderSurface::~RenderSurface() {}'])
stats='Rendering/RenderLib/RenderStats.cpp'
assert stats not in candidate
candidate[stats]=[['',Path('tools/openrbx/Client/Rendering/RenderLib/RenderStats.cpp').read_text()]]
delta=integration.overlay_delta(base,candidate)
(root/'graphics-patches.json').write_text(json.dumps(delta,indent=1))
(root/'base-overlay.json').write_text(json.dumps(base,indent=1))
(root/'candidate-overlay.json').write_text(json.dumps(candidate,indent=1))
registry.write_text(json.dumps(candidate,indent=1))
print('Prepared genuine storage/lifecycle:',len(delta),'canonical CPP files')
