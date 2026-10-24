// from server: 72% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_treevisiblechildmodelconst2d85e4c4df34ddf3.cpp

// Candidate translation unit (score above; library headers required).

#include <boost/shared_ptr.hpp>
#include <vector>
struct Instance;
struct DataModel;
typedef boost::shared_ptr<const DataModel> SharedModel;
typedef boost::shared_ptr<Instance> SharedInstance;
typedef std::vector<SharedInstance> Children;
typedef boost::shared_ptr<const Children> SharedChildren;
// Constructor411b40 initializes three words; dtor5773c0 receives the same 12-byte object.
class ModelLock {unsigned char storage[12];public:ModelLock(SharedModel);~ModelLock();};
// Borrowed owner vtable call at425072 uses slot0x154 and returns an 8-byte shared owner.
// Only observed method is used; preceding vtable slots remain opaque.
struct Owner {
 virtual void slot0();
 virtual void slot1();
 virtual void slot2();
 virtual void slot3();
 virtual void slot4();
 virtual void slot5();
 virtual void slot6();
 virtual void slot7();
 virtual void slot8();
 virtual void slot9();
 virtual void slot10();
 virtual void slot11();
 virtual void slot12();
 virtual void slot13();
 virtual void slot14();
 virtual void slot15();
 virtual void slot16();
 virtual void slot17();
 virtual void slot18();
 virtual void slot19();
 virtual void slot20();
 virtual void slot21();
 virtual void slot22();
 virtual void slot23();
 virtual void slot24();
 virtual void slot25();
 virtual void slot26();
 virtual void slot27();
 virtual void slot28();
 virtual void slot29();
 virtual void slot30();
 virtual void slot31();
 virtual void slot32();
 virtual void slot33();
 virtual void slot34();
 virtual void slot35();
 virtual void slot36();
 virtual void slot37();
 virtual void slot38();
 virtual void slot39();
 virtual void slot40();
 virtual void slot41();
 virtual void slot42();
 virtual void slot43();
 virtual void slot44();
 virtual void slot45();
 virtual void slot46();
 virtual void slot47();
 virtual void slot48();
 virtual void slot49();
 virtual void slot50();
 virtual void slot51();
 virtual void slot52();
 virtual void slot53();
 virtual void slot54();
 virtual void slot55();
 virtual void slot56();
 virtual void slot57();
 virtual void slot58();
 virtual void slot59();
 virtual void slot60();
 virtual void slot61();
 virtual void slot62();
 virtual void slot63();
 virtual void slot64();
 virtual void slot65();
 virtual void slot66();
 virtual void slot67();
 virtual void slot68();
 virtual void slot69();
 virtual void slot70();
 virtual void slot71();
 virtual void slot72();
 virtual void slot73();
 virtual void slot74();
 virtual void slot75();
 virtual void slot76();
 virtual void slot77();
 virtual void slot78();
 virtual void slot79();
 virtual void slot80();
 virtual void slot81();
 virtual void slot82();
 virtual void slot83();
 virtual void slot84();
 virtual boost::shared_ptr<DataModel> model()=0;
};
struct ChildStore {SharedChildren snapshot() const;};
struct MetadataItem {int index()const;};
struct Metadata {MetadataItem* find(void*,bool);};
boost::shared_ptr<Metadata> metadata();
template<class T>T& at(void* p,unsigned n){return *reinterpret_cast<T*>(reinterpret_cast<char*>(p)+n);}
class TreeNodeRecovery {public:bool hasVisibleChild();};
bool TreeNodeRecovery::hasVisibleChild() {
 Owner* owner=at<Owner*>(this,0x58);
 ModelLock lock(owner->model());
 SharedChildren children=at<ChildStore>(at<Instance*>(this,0xc),0x108).snapshot();
 if(!children)return false;
 Children::const_iterator end=children->end();
 for(Children::const_iterator it=children->begin();it!=end;++it) {
  boost::shared_ptr<Metadata> info=metadata();
  MetadataItem* item=info->find(at<void*>(it->get(),0x1c),true);
  if(item && item->index()>=0)return true;
 }
 return false;
}
