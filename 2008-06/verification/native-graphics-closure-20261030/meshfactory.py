"""Restore SDK template static storage using the native header's declared types."""
import json
from pathlib import Path
from roc import integration

root = Path(__file__).parent
candidate = json.loads((root / 'candidate-overlay.json').read_text())
path = 'RbxView/MeshFactory.h'
anchor = '\t\t};\n\t}\n}'
storage = '''

        // Static storage from the genuine SDK MeshFactory template.
        template<class Mesh, size_t numMeshes>
        G3D::Table<RenderSurfaceTypes, G3D::Table<G3D::Vector3, typename MeshFactory<Mesh, numMeshes>::Variations> > MeshFactory<Mesh, numMeshes>::cache1;

        template<class Mesh, size_t numMeshes>
        std::map<typename MeshFactory<Mesh, numMeshes>::DecalKey, G3D::ReferenceCountedPointer<Render::Mesh> > MeshFactory<Mesh, numMeshes>::decalCache;

        template<class Mesh, size_t numMeshes>
        std::map<typename MeshFactory<Mesh, numMeshes>::TextureKey, G3D::ReferenceCountedPointer<Render::Mesh> > MeshFactory<Mesh, numMeshes>::textureCache;
'''
native = Path('tools/rbxgs/Client/' + path).read_text()
assert native.count(anchor) == 1
assert path not in candidate
candidate[path] = [[anchor, '\t\t};' + storage + '\n\t}\n}']]
for header in Path('tools/rbxgs/Client/RbxView').glob('*.h'):
    include = '#include "MeshFactory.h"'
    if include in header.read_text():
        # Search the ordered overlay /I paths instead of the original sibling.
        candidate.setdefault('RbxView/' + header.name, []).append(
            [include, '#include <MeshFactory.h>'])
base = json.loads((root / 'base-overlay.json').read_text())
(root / 'meshfactory-overlay.json').write_text(json.dumps(candidate, indent=1))
(root / 'meshfactory-patches.json').write_text(json.dumps(integration.overlay_delta(base, candidate), indent=1))
Path('rebuild/2008-06/patches/rbxgs-client.json').write_text(json.dumps(candidate, indent=1))
print('Prepared genuine MeshFactory cache storage; declarations/layout unchanged')
