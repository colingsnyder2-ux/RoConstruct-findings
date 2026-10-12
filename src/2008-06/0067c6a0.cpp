// from server: 69% by king_originala
struct Object;

struct VTable {
    void* slots[16];
    void (__thiscall* invoke)(Object*, int);
};

struct Object {
    VTable* table;
};

extern "C" void (__cdecl* invalid_parameter_noinfo)();

struct S {
    char padding[0xe4];
    Object** begin;
    Object** end;

    void f(int value);
};

void S::f(int value)
{
    for (int i = 0; i < end - begin; ++i) {
        if ((unsigned int)i >= (unsigned int)(end - begin))
            invalid_parameter_noinfo();

        Object* object = begin[i];
        object->table->invoke(object, value);
    }
}
