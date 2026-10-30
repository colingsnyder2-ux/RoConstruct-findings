from pathlib import Path
import json,shutil
from roc import libs,match
root=Path('work/ogre-native-containers-20261029');text='''#undef OGRE_NONCLIENT_BUILD
#include <Ogre.h>
#include <OgreStringVector.h>
#include <cstdio>
#include <cstdlib>
#include <list>
#include <map>
#include <vector>

template class std::vector<Ogre::Real>;
template class std::vector<Ogre::Vector3>;
template class std::list<Ogre::AnimationState*>;
template class std::map<Ogre::String, Ogre::MovableObject*>;

extern "C" int native_ogre_containers_smoke() {
    std::vector<Ogre::Real> values(5);
    for (unsigned int i=0; i<5; ++i) if (values[i] != 0.0f) return 1;
    typedef void (std::vector<Ogre::Real>::*Push)(const Ogre::Real&);
    Push volatile push = &std::vector<Ogre::Real>::push_back;
    for (unsigned int i=0; i<256; ++i) {
        Ogre::Real value = i * 0.25f;
        (values.*push)(value);
    }
    values.reserve(1024);
    if (values.size()!=261 || values[260]!=63.75f) return 2;
    values.resize(400, 2.0f);
    values.insert(values.begin()+2, 3, -1.0f);
    if (values.size()!=403 || values[2]!=-1.0f || values[402]!=2.0f) return 3;
    values.erase(values.begin()+1, values.begin()+5);
    if (values.size()!=399 || values[398]!=2.0f) return 4;
    std::vector<Ogre::Vector3> positions(4, Ogre::Vector3(1,2,3));
    positions.resize(20, Ogre::Vector3(4,5,6));
    for (unsigned int i=0; i<20; ++i) {
        const Ogre::Vector3 expected = i<4 ? Ogre::Vector3(1,2,3) : Ogre::Vector3(4,5,6);
        if (positions[i] != expected) return 5;
    }
    Ogre::Light first, second;
    std::map<Ogre::String, Ogre::MovableObject*> objects;
    char key[96];
    for (unsigned int i=0; i<257; ++i) {
        const unsigned int index = (i*73)%257;
        std::sprintf(key,"native-object-%03u-long-resource-name-to-exercise-heap-strings",index);
        if (!objects.insert(std::make_pair(Ogre::String(key), index%2 ? &first : &second)).second) return 6;
    }
    if (objects.size()!=257) return 7;
    unsigned int count=0;
    for (std::map<Ogre::String,Ogre::MovableObject*>::iterator i=objects.begin(); i!=objects.end(); ++i) {
        if ((unsigned int)std::atoi(i->first.c_str()+14)!=count ||
            i->second!=(count%2 ? &first : &second)) return 8;
        ++count;
    }
    if (count!=257) return 9;
    for (unsigned int i=0; i<257; ++i) {
        std::sprintf(key,"native-object-%03u-long-resource-name-to-exercise-heap-strings",i);
        if (objects.find(key)==objects.end() || objects.insert(std::make_pair(Ogre::String(key), &first)).second) return 10;
    }
    std::map<Ogre::String,Ogre::MovableObject*> copied(objects);
    for (unsigned int i=0; i<257; i+=3) {
        std::sprintf(key,"native-object-%03u-long-resource-name-to-exercise-heap-strings",i);
        if (objects.erase(key)!=1) return 11;
    }
    if (objects.size()!=171 || copied.size()!=257) return 12;
    std::map<Ogre::String,Ogre::MovableObject*>::iterator stop=objects.begin();
    for (unsigned int i=0; i<50; ++i) ++stop;
    objects.erase(objects.begin(),stop);
    if (objects.size()!=121) return 13;
    for (std::map<Ogre::String,Ogre::MovableObject*>::reverse_iterator i=objects.rbegin(); i!=objects.rend(); ++i)
        if (!i->second) return 14;
    objects.clear();
    if (!objects.empty()) return 15;
    Ogre::AnimationStateSet states;
    Ogre::AnimationState* walk=states.createAnimationState("walk",0,3);
    Ogre::AnimationState* run=states.createAnimationState("run",0,2);
    std::list<Ogre::AnimationState*> enabled;
    enabled.push_back(walk); enabled.push_back(run); enabled.push_back(walk);
    enabled.remove(walk);
    if (enabled.size()!=1 || enabled.front()!=run) return 16;
    std::list<Ogre::AnimationState*> extra;
    extra.push_back(walk);
    enabled.splice(enabled.begin(),extra);
    if (!extra.empty() || enabled.size()!=2 || enabled.front()!=walk || enabled.back()!=run) return 17;
    enabled.reverse();
    if (enabled.front()!=run || enabled.back()!=walk) return 18;
    enabled.clear();
    return enabled.empty() ? 0 : 19;
}
''';unit=libs.add_unit('ogre-1.4.5-dll',text,prefix='roc_native_ogre_containers_');(root/'winning-unit.cpp').write_text(text);(root/'winning-unit.json').write_text(json.dumps({'recipe':'ogre-1.4.5-dll','file':unit},indent=1));flags='/O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MD';obj=match.compile_text('2008-06',libs.source_for('ogre-1.4.5-dll',unit,'cpp',21022,flags));(root/'winning.obj').write_bytes(obj);funcs={s:(b,r) for s,b,r in match.coff_functions(obj)};candidates=json.loads((root/'selected-candidates.json').read_text())
for c in candidates:
 a,s=c['address'],c['symbol'];b,r=funcs[s];t,tr,_=match.target('2008-06',a);assert len(b)==len(t) and match.exact_match(t,tr,b,r),a;assert not match.data_check('2008-06',a,t,match.coff_data_refs(obj,s))[1],a
p=Path('rebuild/2008-06/modules/ogre.json');shutil.copyfile(p,root/'baseline-spec.json');shutil.copyfile('rebuild/2008-06/out/Ogre/report.json',root/'baseline-report.json');shutil.copyfile('rebuild/2008-06/out/Ogre/verified/swaps.json',root/'baseline-swaps.json');shutil.copyfile('rebuild/2008-06/out/Ogre/force/force_verified.h',root/'baseline-force.h');shutil.copyfile('rebuild/2008-06/tests/ogre_link.cpp',root/'baseline-test.cpp');spec=json.loads(p.read_text());spec['native_units'].append({'recipe':'ogre-1.4.5-dll','file':unit,'cl':'21022','flags':flags,'addrs':[r['address'] for r in candidates],'symbols':{r['address']:r['symbol'] for r in candidates},'helper_symbols':['_native_ogre_containers_smoke'],'provenance':'Genuine Ogre1.4.5 header container types and VS2008 STL. Original target template spelling not independently proven; unique code/data candidates, not arbitrary twins.'});p.write_text(json.dumps(spec,indent=1)+'\n');p=Path('rebuild/2008-06/tests/ogre_link.cpp');p.write_text('''#include "force_verified.h"
#include <cstdio>
#pragma comment(lib, "msvcprt.lib")
extern "C" int native_subentity_accessors_smoke();
extern "C" int native_ogre_containers_smoke();
int main() {
    int fields=native_subentity_accessors_smoke();
    if (fields) return fields;
    int containers=native_ogre_containers_smoke();
    std::printf("native Ogre subentity/shadow=%d containers=%d\\n",fields,containers);
    return containers ? 100+containers : 0;
}
''');print(unit,'all20 candidates remain code/data exact',flush=True)
