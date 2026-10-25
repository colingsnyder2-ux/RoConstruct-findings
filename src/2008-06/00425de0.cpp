// from server: 99% by EspClaude
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbxgs-dll roc_espclaude_11491d3b9a40fba3.cpp

// Candidate translation unit (score above; library headers required).
#include <set>
#include <map>
#include <boost/shared_ptr.hpp>
#include <boost/thread/recursive_mutex.hpp>
struct K { };
namespace RBX {
class RunService;
class Heartbeat;
template<class N, class E> class __declspec(novtable) Listener {
public:
    virtual void onEvent(const N*, E) = 0;
};
template<class N, class E> class Notifier {
public:
    void addListener(Listener<N, E>* l) const;
};
class Stepped;
class Changed;
class RunService : public K { public: char pad[0x1c]; int mode; char pad2[0xa4]; Notifier<RunService, Heartbeat> heartbeat; };
}
struct E { int a; bool operator<(const E& o) const { return a < o.a; } };
struct E2 { int a; bool operator<(const E2& o) const { return a < o.a; } };
struct T;
struct Item { int i; };
struct ItemD : Item { };
struct Holder {
    Holder(boost::shared_ptr<Item> item);
    ~Holder();
    char pad[0xc];
};
struct Owner;
struct Parent {
    char pad[0x14];
    std::map<K*, Owner*> owners;
};
struct World {
    virtual void wv0();
    virtual void wv1();
    virtual void wv2();
    virtual void wv3();
    virtual void wv4();
    virtual void wv5();
    virtual void wv6();
    virtual void wv7();
    virtual void wv8();
    virtual void wv9();
    virtual void wv10();
    virtual void wv11();
    virtual void wv12();
    virtual void wv13();
    virtual void wv14();
    virtual void wv15();
    virtual void wv16();
    virtual void wv17();
    virtual void wv18();
    virtual void wv19();
    virtual void wv20();
    virtual void wv21();
    virtual void wv22();
    virtual void wv23();
    virtual void wv24();
    virtual void wv25();
    virtual void wv26();
    virtual void wv27();
    virtual void wv28();
    virtual void wv29();
    virtual void wv30();
    virtual void wv31();
    virtual void wv32();
    virtual void wv33();
    virtual void wv34();
    virtual void wv35();
    virtual void wv36();
    virtual void wv37();
    virtual void wv38();
    virtual void wv39();
    virtual void wv40();
    virtual void wv41();
    virtual void wv42();
    virtual void wv43();
    virtual void wv44();
    virtual void wv45();
    virtual void wv46();
    virtual void wv47();
    virtual void wv48();
    virtual void wv49();
    virtual void wv50();
    virtual void wv51();
    virtual void wv52();
    virtual void wv53();
    virtual void wv54();
    virtual void wv55();
    virtual void wv56();
    virtual void wv57();
    virtual void wv58();
    virtual void wv59();
    virtual void wv60();
    virtual void wv61();
    virtual void wv62();
    virtual void wv63();
    virtual void wv64();
    virtual void wv65();
    virtual void wv66();
    virtual void wv67();
    virtual void wv68();
    virtual void wv69();
    virtual void wv70();
    virtual void wv71();
    virtual void wv72();
    virtual void wv73();
    virtual void wv74();
    virtual void wv75();
    virtual void wv76();
    virtual void wv77();
    virtual void wv78();
    virtual void wv79();
    virtual void wv80();
    virtual void wv81();
    virtual void wv82();
    virtual void wv83();
    virtual void wv84();
    virtual boost::shared_ptr<ItemD> getItem();
    char pad[0x94];
    std::map<K*, Owner*> owners;
    char pad2[0xc4 - 0x98 - sizeof(std::map<K*, Owner*>)];
    boost::recursive_mutex mutex;
};
struct __declspec(novtable) Base2 { virtual void b2() = 0; };
struct __declspec(novtable) Base3 { virtual void b3() = 0; };
int computeMode(RBX::RunService* rs);
struct Owner : public RBX::Listener<RBX::RunService, RBX::Heartbeat>, public Base2, public Base3
{
    boost::shared_ptr<RBX::RunService> runService;
    std::set<E> setA;
    std::set<T*> setB;
    bool flag0 : 1;
    bool flag1 : 1;
    bool flag2;
    World* world;
    Parent* parent;
    std::set<E2> setC;
    int count;
    int mode;
    int runMode;
    Owner(Parent* parent, boost::shared_ptr<RBX::RunService> runService, World* world);
    virtual void onEvent(const RBX::RunService*, RBX::Heartbeat);
    virtual void b2();
    virtual void b3();
    virtual boost::shared_ptr<Item> getItem();
};
struct WorldV { };
boost::shared_ptr<Item> worldItem(World* w);
Owner::Owner(Parent* parent, boost::shared_ptr<RBX::RunService> runService, World* world)
    : runService(runService), flag0(false), flag1(false), flag2(false), world(world), parent(parent),
      count(0), mode(computeMode(runService.get())), runMode(runService->mode)
{
    {
        boost::recursive_mutex::scoped_lock lock(world->mutex);
        std::map<K*, Owner*>& m = world->owners;
        m[runService.get()] = this;
        if (parent) {
            std::map<K*, Owner*>& pm = parent->owners;
            pm[runService.get()] = this;
        }
    }
    Holder holder(world->getItem());
    runService->heartbeat.addListener(this);
}
