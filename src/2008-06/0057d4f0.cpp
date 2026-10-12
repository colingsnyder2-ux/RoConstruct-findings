// from server: 80% by king_originala
struct Vector;

struct Iterator {
    Vector* owner();
};

struct Object {
    Iterator* get();
};

extern "C" void* __cdecl func(void*);

struct S {
    char padding[12];
    void* value;

    void prepare();
    void clear(int);

    static __declspec(noinline) void prepareCall(S* object, void* saved)
    {
        object->prepare();
        func(saved);
    }
};

void S::clear(int)
{
    prepareCall(this, value);
    Object* object = static_cast<Object*>(func(value));
    if (object)
        object->get()->owner();
}
