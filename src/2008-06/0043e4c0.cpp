// from server: 98% by coldek
// from server: 98% by nuck16
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_unit_46581a17682b44a1.cpp

// Candidate translation unit (score above; library headers required).
#define _CPPUNWIND 1
#include <exception>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <boost/shared_ptr.hpp>
#include <boost/bind.hpp>
// 2008-06 0043ee40 (float), 0043fc00 / 004402d0 siblings: Studio property-grid item applies a
// value to every instance selected under its keys (same key/map walk as 0043e140), then takes
// the DataModel lock, records a waypoint named after the property and marks the data dirty.
namespace RBX {
class Instance;
template<class E> struct ImpStr : std::basic_string<E> { __declspec(noinline) const E* c_str() const { return std::basic_string<E>::c_str(); } };
extern template struct __declspec(dllimport) ImpStr<char>;
class Name { int dictionaryIndex; public: const std::string name; const char* c_str() const { return static_cast<const ImpStr<char>&>(name).c_str(); } };
namespace Reflection { class PropertyDescriptor { public: virtual ~PropertyDescriptor(); const Name& name; }; }
class IDataState { public: virtual void setDirty(bool); };
class DataModel { char prefix[0x1f0]; public: IDataState state; void setDirty(bool dirty) { state.setDirty(dirty); }
	class Lock {
		boost::shared_ptr<void> mutex;
		void* lock;
		void doLock(const DataModel* dataModel);
	public:
		Lock(const DataModel* dataModel) : lock(0) { doLock(dataModel); }
		~Lock();
	};
};
struct ChangeHistoryService { static void __cdecl requestWaypoint(const char* name, DataModel* dataModel); };
}

int __stdcall AfxMessageBox(const char* text, unsigned int type = 0, unsigned int helpId = 0);

struct KeyBase { int x; };
struct KeyDerived : KeyBase {};
typedef std::vector<boost::shared_ptr<RBX::Instance> > Instances;
typedef std::map<KeyBase*, Instances> InstanceMap;

struct Owner {
    char pad[0x198];
    RBX::DataModel* dataModel;
    char pad19c[0x218 - 0x19c];
    InstanceMap instances;
};

#define V(N) virtual void slot##N();
#define V10(N) V(N##0) V(N##1) V(N##2) V(N##3) V(N##4) V(N##5) V(N##6) V(N##7) V(N##8) V(N##9)
// Primary bases: 60 virtuals before apply() (float/string items, apply at vtable +0xf0) and
// 64 virtuals with 8 more bytes of data (enum item, apply at +0x100, keys at 0x118).
class GridItemBase { public: V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) char data[0x108]; };
class EnumGridItemBase { public: V10(0) V10(1) V10(2) V10(3) V10(4) V10(5) V(60) V(61) V(62) V(63) char data[0x110]; };
class GridItemSink { public: virtual void sink(); };
#undef V10
#undef V

template<class Base, class T>
class ValueItem : public Base, public GridItemSink {
public:
    std::vector<KeyDerived*> keys;
    Owner* owner;
    const RBX::Reflection::PropertyDescriptor* descriptor;
    virtual void apply(RBX::Instance* instance, const T& value);
    void setValue(const T& value);
};

template<class Base, class T>
void ValueItem<Base, T>::setValue(const T& value)
{
    try {
        Instances instances;
        InstanceMap::iterator mapEnd = owner->instances.end();
        std::vector<KeyDerived*>::const_iterator end = keys.end();
        for (std::vector<KeyDerived*>::const_iterator it = keys.begin(); it != end; ++it) {
            InstanceMap::iterator found = owner->instances.find(*it);
            if (found != mapEnd) {
                for (Instances::iterator j = found->second.begin(), jEnd = found->second.end(); j != jEnd; ++j)
                    instances.push_back(*j);
            }
        }
        std::for_each(instances.begin(), instances.end(),
            boost::bind(&ValueItem::apply, this, boost::bind(&boost::shared_ptr<RBX::Instance>::get, _1), value));
        if (owner->dataModel) {
            RBX::DataModel::Lock lock(owner->dataModel);
            RBX::ChangeHistoryService::requestWaypoint(descriptor->name.c_str(), owner->dataModel);
            owner->dataModel->setDirty(true);
        }
    } catch (std::exception& e) {
        AfxMessageBox(e.what());
    }
}

namespace RBX { class ContentId { std::string id; const Name* mimeTypePtr; }; }
template class ValueItem<GridItemBase, RBX::ContentId>;
