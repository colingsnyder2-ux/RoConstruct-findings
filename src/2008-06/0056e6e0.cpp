// from server: 90% by king_originala
struct Value {
    bool get(bool* result);
};

struct Variant {
    char padding[16];
    Value value;
    bool isEmpty();
};

struct Accessor;

struct AccessorTable {
    void* padding[3];
    void (__thiscall* set)(Accessor*, void*, const bool*);
};

struct Accessor {
    AccessorTable* table;
};

struct Descriptor {
    char padding[24];
    Accessor* accessor;
    void apply(void* object, Variant* value, void* unused);
};

void Descriptor::apply(void* object, Variant* value, void* unused)
{
    Variant* savedValue = value;
    if (!savedValue->isEmpty() &&
        savedValue->value.get(reinterpret_cast<bool*>(&value)))
    {
        accessor->table->set(
            accessor, object, reinterpret_cast<const bool*>(&value));
    }
}
