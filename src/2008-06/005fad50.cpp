// from server: 86% by colin
struct S_func_005fa610 {
    char pad0[4];
    int m_x;
    int* f();
};

struct Buffer {
    S_func_005fa610** data;
    int size;
    void append(S_func_005fa610* const*);
};

struct Storage {
    char pad0[0x30];
    Buffer buffer;
};

struct S {
    char pad0[0x10];
    Storage* storage;
    void f(S_func_005fa610* value);
};

void S::f(S_func_005fa610* value)
{
    Storage* st = storage;
    Buffer* buffer = &st->buffer;
    int size = buffer->size;
    S_func_005fa610* copy = value;
    *copy->f() = size;
    buffer->append(&copy);
}
