from pathlib import Path
import json,shutil
from roc import libs,match
root=Path('work/ogre-native-shadow-20261029');s=(root/'unit.cpp').read_text();s=s.replace('#include <Ogre.h>','#include <Ogre.h>\n#include <OgreDefaultHardwareBufferManager.h>\n#include <cstring>');s=s.replace('    return entity.getCastShadows() ? 0 : 5;', '''    {
        Ogre::DefaultHardwareBufferManager buffers;
        Ogre::VertexData vertices, alternate;
        vertices.vertexCount = alternate.vertexCount = 3;
        vertices.vertexDeclaration->addElement(0, 0, Ogre::VET_FLOAT3, Ogre::VES_POSITION);
        alternate.vertexDeclaration->addElement(0, 0, Ogre::VET_FLOAT3, Ogre::VES_POSITION);
        Ogre::HardwareVertexBufferSharedPtr positions = buffers.createVertexBuffer(
            3 * sizeof(float), 6, Ogre::HardwareBuffer::HBU_STATIC);
        Ogre::HardwareVertexBufferSharedPtr replacement = buffers.createVertexBuffer(
            3 * sizeof(float), 6, Ogre::HardwareBuffer::HBU_STATIC);
        const float data[18] = {0,0,0, 1,0,0, 0,1,0, 0,0,1, 1,0,1, 0,1,1};
        positions->writeData(0, sizeof(data), data);
        replacement->writeData(0, sizeof(data), data);
        float readback[18];
        positions->readData(0, sizeof(readback), readback);
        if (std::memcmp(data, readback, sizeof(data))) return 7;
        vertices.vertexBufferBinding->setBinding(0, positions);
        alternate.vertexBufferBinding->setBinding(0, replacement);
        Ogre::HardwareIndexBufferSharedPtr indices = buffers.createIndexBuffer(
            Ogre::HardwareIndexBuffer::IT_16BIT, 3, Ogre::HardwareBuffer::HBU_STATIC);
        const unsigned short indexData[3] = {0,1,2};
        indices->writeData(0, sizeof(indexData), indexData);
        typedef Ogre::RbxSubEntity::RbxSubEntityShadowRenderable NativeShadow;
        typedef bool (NativeShadow::*VisibilityGetter)() const;
        VisibilityGetter volatile visible = &NativeShadow::isVisible;
        for (int mode = 0; mode < 3; ++mode) {
            if (mode == 2) vertices.hardwareShadowVolWBuffer = buffers.createVertexBuffer(
                sizeof(float), 6, Ogre::HardwareBuffer::HBU_STATIC);
            const unsigned int positionRefs = positions.useCount();
            const unsigned int replacementRefs = replacement.useCount();
            const unsigned int indexRefs = indices.useCount();
            {
                NativeShadow shadow(0, &indices, &vertices, mode != 0, &entity);
                entity.setVisible(false);
                if ((shadow.*visible)()) return 8;
                entity.setVisible(true);
                if (!(shadow.*visible)()) return 9;
                Ogre::RenderOperation* op = shadow.getRenderOperationForUpdate();
                if (op->vertexData->vertexCount != 6 || op->indexData->indexStart != 0 ||
                    op->indexData->indexBuffer.get() != indices.get()) return 10;
                if (mode != 0) {
                    Ogre::RenderOperation cap;
                    shadow.getLightCapRenderable()->getRenderOperation(cap);
                    if (cap.vertexData->vertexCount != 3) return 11;
                }
                if (mode == 2 && op->vertexData->vertexBufferBinding->getBuffer(1).get() !=
                    vertices.hardwareShadowVolWBuffer.get()) return 12;
                shadow.rebindPositionBuffer(&alternate, false);
                shadow.rebindPositionBuffer(&alternate, true);
                if (shadow.getPositionBuffer().get() != replacement.get() ||
                    op->vertexData->vertexBufferBinding->getBuffer(0).get() != replacement.get()) return 13;
                if (mode != 0) {
                    Ogre::RenderOperation cap;
                    shadow.getLightCapRenderable()->getRenderOperation(cap);
                    if (cap.vertexData->vertexBufferBinding->getBuffer(0).get() != replacement.get()) return 14;
                }
            }
            if (positions.useCount() != positionRefs || replacement.useCount() != replacementRefs ||
                indices.useCount() != indexRefs) return 15;
        }
    }
    return entity.getCastShadows() ? 0 : 5;''');unit=libs.add_unit('ogre-1.4.5-dll',s,prefix='roc_native_subentity_shadow_');(root/'winning-unit.cpp').write_text(s);(root/'winning-unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':unit},indent=1));obj=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',unit,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD'));(root/'winning.obj').write_bytes(obj)
p=Path('rebuild/2008-06/modules/ogre.json');shutil.copyfile(p,root/'baseline-spec.json');shutil.copyfile('rebuild/2008-06/out/Ogre/report.json',root/'baseline-report.json');shutil.copyfile('rebuild/2008-06/out/Ogre/verified/swaps.json',root/'baseline-swaps.json');shutil.copyfile('rebuild/2008-06/out/Ogre/force/force_verified.h',root/'baseline-force.h');spec=json.loads(p.read_text());e=next(e for e in spec['native_units'] if 'subentity_accessors' in e['file']);other=next(e for e in spec['native_units'] if 'shadow_delegation' in e['file']);e['file']=unit;e['addrs']+=other['addrs'];e['symbols'].update(other['symbols']);e['addrs'].append('00685480');e['symbols']['00685480']='?isVisible@RbxSubEntityShadowRenderable@RbxSubEntity@Ogre@@UBE_NXZ';spec['native_units'].remove(other);p.write_text(json.dumps(spec,indent=1)+'\n');print(unit,'native groups',len(spec['native_units']),flush=True)
funcs={sym:(b,r) for sym,b,r in match.coff_functions(obj)}
for a,sym in e['symbols'].items():
 b,r=funcs[sym];t,tr,_=match.target('2008-06',a);assert len(b)==len(t) and match.exact_match(t,tr,b,r),a;assert not match.data_check('2008-06',a,t,match.coff_data_refs(obj,sym))[1],a
print('all16 roots code/data exact',flush=True)
