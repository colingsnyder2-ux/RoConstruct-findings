// from server: 87% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espeon_backpackconstreturnaa72215c3927184c.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
#include <boost/shared_ptr.hpp>
struct Object {virtual void slot0();virtual void slot1();virtual void slot2();virtual void slot3();virtual void slot4();virtual void slot5();virtual void slot6();virtual void slot7();virtual void slot8();virtual void slot9();virtual void slot10();virtual void slot11();virtual void slot12();virtual void slot13();virtual void slot14();virtual void slot15();virtual void slot16();virtual void slot17();virtual void slot18();virtual void slot19();virtual void slot20();virtual void slot21();virtual void slot22();virtual void slot23();virtual void slot24();virtual void slot25();virtual void slot26();virtual void slot27();virtual void slot28();virtual void slot29();virtual void slot30();virtual void slot31();virtual void slot32();virtual void finish();virtual void detach();};
struct Child {char prefix[0x148];Object* object;};
typedef std::vector<boost::shared_ptr<Child> > Children;
struct Holder {boost::shared_ptr<Children> value;boost::shared_ptr<const Children> get()const;};
struct Backpack {char prefix[0x108];Holder children;char gap[0x90];boost::shared_ptr<Object> active;void finish();};
void Backpack::finish(){if(active.get()){boost::shared_ptr<const Children> list=children.get();if(list){for(Children::const_iterator i=list->begin();i!=list->end();++i){Object* object=(*i)->object;if(object!=active.get())object->detach();}}active->finish();active.reset();}}
