// from server: 91% by king_originala
struct Color3 {
    float x, y, z;
};

struct Source;

typedef void (__thiscall *Getter)(Source*, Color3*, void*);

struct SourceTable {
    void* slot0;
    void* slot1;
    Getter get;
};

struct Source {
    SourceTable* table;
};

extern "C" void __cdecl convert(void* result, const Color3* color);

struct Descriptor {
    char padding[24];
    Source* source;

    void* get(void* result, void* object);
};

void* Descriptor::get(void* result, void* object)
{
    struct Temporary {
        volatile int state;
        Color3 color;
    } temporary;

    Source* receiver = source;
    Getter getter = receiver->table->get;
    getter(receiver, (temporary.state = 0, &temporary.color), object);
    convert(result, &temporary.color);
    return result;
}
