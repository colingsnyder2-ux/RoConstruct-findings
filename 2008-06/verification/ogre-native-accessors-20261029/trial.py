from pathlib import Path
import json
from roc import libs,match
root=Path('work/ogre-native-accessors-20261029');src=Path('tools/libs/ogre-1.4.5/ogrenew/OgreMain/src/roc_native_subentity_contracts_3c134af6ce3f7619.cpp').read_text();src=src.replace('    const Vector3& getPosition() const;','    const Vector3& getPosition() const;\n    void setLodMesh(unsigned int lod, SubMesh* mesh);\n    void setLodIndex(unsigned int lod);\n    void setShadowExtrusionDistance(Real distance);\n    Real getShadowExtrusionDistance() const;');src+='''
namespace Ogre {
void RbxSubEntity::setLodMesh(unsigned int lod, SubMesh* mesh) {
    if (!lod) mSubMesh = mesh;
    else lodMeshes[lod - 1] = mesh;
}
void RbxSubEntity::setLodIndex(unsigned int lod) { lodIndex = lod; }
void RbxSubEntity::setShadowExtrusionDistance(Real distance) { extrusionDistance = distance; }
Real RbxSubEntity::getShadowExtrusionDistance() const { return extrusionDistance; }
}
''';unit=libs.add_unit('ogre-1.4.5-dll',src,prefix='roc_native_subentity_accessors_');(root/'unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':unit},indent=1));(root/'unit.cpp').write_text(src)
p=Path('research/recipes.json');recipes=json.loads(p.read_text());flags=['/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD','/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD /fp:fast'];recipes['ogre-native-subentity-accessors-20261029']={'op':'fanout','client':'2008-06','hypothesis':'Replace four padded analogs with fields already established by exact native RbxSubEntity constructor and genuine Ogre1.4.5 SubEntity/ShadowCaster bases. Add no fields or virtual slots; compare precise/fast profiles and preserve existing constructor/exception roots.','sources':[{'recipe':'ogre-1.4.5-dll','files':[unit],'builds':[21022],'flags':flags}],'result':{'status':'trial in progress','new_verified':0}};p.write_text(json.dumps(recipes,indent=2)+'\n')
results=[]
for tag,flag in zip(['precise','fast'],flags):
 try:obj=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',unit,'cpp',21022,flag));(root/(tag+'.obj')).write_bytes(obj);print(tag,'compiled',flush=True);results.append({'profile':tag,'flags':flag,'compiled':True})
 except match.CompileError as e:results.append({'profile':tag,'compiled':False,'error':str(e)});print(tag,str(e)[:200],flush=True)
(root/'compile-results.json').write_text(json.dumps(results,indent=1))
