// from server: 68% by colin
struct Subject {
    void changed();
    void assign();
    void setFloat();
    void finishFloat();
};

struct Property;

struct PropertyTable {
    void* unused;
    union {
        Subject* (__thiscall *integer)(Property*, int);
        Subject* (__thiscall *real)(Property*, float);
        Subject* (__thiscall *pointer)(Property*, void*);
    } access;
};

struct Property {
    PropertyTable* table;
};

namespace RBX {
    class Instance;
    class ServiceProvider {
    public:
        char padding[0x288];
        Property property;
        void rebuild();
    };
}

extern RBX::ServiceProvider* __cdecl func_00491e50(RBX::Instance*);
extern void* __cdecl func_0049ac80(void*);
extern void* __cdecl func_005d9a20(void*);
extern const float value_0081c3b8;
extern const float value_00821ca8;

struct S {
    char padding[0x170];
    void* value;
    void f();
};

void S::f()
{
    if (this != func_0049ac80(this))
        return;

    RBX::ServiceProvider* provider =
        func_00491e50(reinterpret_cast<RBX::Instance*>(this));
    void* current = value;
    Property* property = &provider->property;

    if (!current) {
        property->table->access.integer(property, 0)->changed();
        property->table->access.real(property, 0.0f)->setFloat();
        property->table->access.real(property, value_0081c3b8)->finishFloat();
    } else {
        property->table->access.pointer(property, func_005d9a20(current))->assign();
        property->table->access.integer(property, 5)->changed();
        property->table->access.real(property, value_00821ca8)->setFloat();
        property->table->access.real(property, value_0081c3b8)->finishFloat();
        provider->rebuild();
    }
}
