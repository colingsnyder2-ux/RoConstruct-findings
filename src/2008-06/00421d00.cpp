// from server: 94% by Espeon
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: openrbx-client-dll roc_espeon_selectionconstcollection_5d83f1eb07bf1347.cpp

// Candidate translation unit (score above; library headers required).
#include <vector>
namespace RBX { class Instance { public: virtual ~Instance();char pad[0x100];Instance* next; }; class ServiceProvider; }
typedef std::vector<const RBX::Instance*> Vector;
namespace RBX {class ServiceProvider:public Instance {public:ServiceProvider* finish();void apply(Vector::iterator,Vector::iterator);};}
RBX::ServiceProvider* __cdecl func_00421cb0(RBX::Instance*);
struct Value {
    char padding[0x54];
    RBX::Instance* instance;
};

struct Item;
struct ItemTable {
    void* padding[24];
    Value* (__thiscall* get)(Item*);
};

struct Item {
    ItemTable* table;
};

struct List {
    void* head();
    Item* next(void**);
};

struct Window {
    char padding[0x128];
    List* list;
};

struct S;
struct STable {
    void* padding[101];
    Window* (__thiscall* get)(S*);
};

struct S {
    STable* table;
    char padding[0x3bc];
    RBX::Instance* instance;
    void f(unsigned int, unsigned int);
};

void S::f(unsigned int, unsigned int)
{
    RBX::ServiceProvider* service = func_00421cb0(instance);
    Vector values;
    List* list = table->get(this)->list;
    void* position = list->head();

    while (position) {
        Item* item = list->next(&position);
        RBX::Instance* value = item->table->get(item)->instance;
        values.push_back(value);
    }

    service->apply(values.begin(),values.end());
}
