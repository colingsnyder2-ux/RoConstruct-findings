from pathlib import Path
import json,re,shutil
from roc import libs,match
root=Path('work/ogre-native-shadow-20261029');outer=Path('work/ogre-native-accessors-20261029/winning-unit.cpp').read_text();shadow=Path('tools/libs/ogre-1.4.5/ogrenew/OgreMain/src/roc_native_shadow_delegation_5a9fe7bdf9d3d332.cpp').read_text();start=shadow.index('class RbxSubEntityShadowRenderable');end=shadow.index('\n};\nRbxSubEntity::',start);nested=shadow[start:end];outer=outer.replace('class RbxSubEntity : public SubEntity, public ShadowCaster {\npublic:', 'class RbxSubEntity : public SubEntity, public ShadowCaster {\npublic:\n'+nested+'\n');impl=shadow[end+4:];impl=impl.replace('''        if (mSubEntity)
        {
            return mSubEntity->isVisible();
        }
        else
        {
            return ShadowRenderable::isVisible();
        }''','''        return mSubEntity->isVisible();''');outer+='\nnamespace Ogre {\n'+impl
assert 'return ShadowRenderable::isVisible' not in outer
unit=libs.add_unit('ogre-1.4.5-dll',outer,prefix='roc_native_subentity_shadow_');(root/'unit.cpp').write_text(outer);(root/'unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':unit},indent=1));p=Path('research/recipes.json');r=json.loads(p.read_text());r['ogre-native-shadow-20261029']={'op':'fanout','client':'2008-06','hypothesis':'Reconcile differing RbxSubEntity declarations into the constructor-proven native SubEntity/ShadowCaster contract, retaining genuine nested shadow-renderable fields and existing exact bodies. Replace padded visibility analog with direct real SubEntity virtual call proved by binary. Validate authentic CPU shadow vertex/index buffer lifecycle and visibility with real DefaultHardwareBufferManager.','sources':[{'recipe':'ogre-1.4.5-dll','files':[unit],'builds':[21022],'flags':['/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD']}],'result':{'status':'trial in progress','new_verified':0}};p.write_text(json.dumps(r,indent=2)+'\n');obj=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',unit,'cpp',21022,'/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD'));(root/'trial.obj').write_bytes(obj)
spec=json.loads(Path('rebuild/2008-06/modules/ogre.json').read_text());entries=[x for x in spec['native_units'] if any(t in x['file'] for t in ['subentity_accessors','shadow_delegation'])];checks=[];targets={a:s for e in entries for a,s in e['symbols'].items()};targets['00685480']='?isVisible@RbxSubEntityShadowRenderable@RbxSubEntity@Ogre@@UBE_NXZ';funcs={s:(b,r) for s,b,r in match.coff_functions(obj)}
for a,s in targets.items():
 b,r=funcs[s];t,tr,_=match.target('2008-06',a);code=len(b)==len(t) and match.exact_match(t,tr,b,r);bad=match.data_check('2008-06',a,t,match.coff_data_refs(obj,s))[1];checks.append({'address':a,'symbol':s,'code_exact':code,'data_exact':not bad,'bad':bad});print(a,code,not bad,flush=True)
(root/'merged-proof.json').write_text(json.dumps(checks,indent=1));assert all(c['code_exact'] and c['data_exact'] for c in checks)
