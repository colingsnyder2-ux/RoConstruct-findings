// from server: 72% by king_originala
struct Object;
struct Input;

typedef Input* (__thiscall *Method)(Object*, int);

struct VTable {
    Method slots[13];
};

struct Context {
    char padding[44];
    int count;
};

struct Object {
    VTable* table;
    char padding[20];
    Context* context;
};

struct Input {
    Object* object;
    int value;
};

struct Sink {
    void write(Input** value, int count, bool flag);
};

void __cdecl process(Input* input, Sink* sink)
{
    Object* object = input->object;
    input = object->table->slots[12](object, input->value);
    sink->write(&input, object->context->count + 1, true);
}
