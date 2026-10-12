// from server: 82% by king_originala
struct Ref {
    void* value;
    Ref& operator=(const Ref&);
};

struct Pair {
    void* object;
    Ref reference;

    Pair() : object(0) { reference.value = 0; }
    Pair(const Pair&);
    ~Pair();
};

struct Vector {
    char padding[12];
    Pair* first;
    Pair* volatile last;
    Pair* limit;

    void resize(unsigned int, Pair);
};

extern char registration1;
extern char registration2;
extern void callback1();
extern void callback2();
extern void __cdecl register_type(void (*)(), void*);
extern void* func_0048a460();
extern void* func_00489c30();
extern void (__cdecl *invalid_parameter)();

struct S {
    char padding[0x190];
    Vector values;

    Pair create(void*);
    void* f();
};

void* S::f()
{
    register_type(callback1, &registration1);
    unsigned int index = (unsigned int)func_0048a460();
    unsigned int count = (unsigned int)(values.last - values.first);
    void (__cdecl *check)() = invalid_parameter;
    Vector* v = &values;

    if (index + 1 > count) {
        v->resize(index + 1, Pair());
    } else {
        if (index >= (unsigned int)(v->last - v->first))
            check();
        void* object = v->first[index].object;
        if (object)
            return object;
    }

    register_type(callback2, &registration2);
    Pair result = create(func_00489c30());
    if (!result.object)
        return 0;

    void* object = result.object;
    if (index >= (unsigned int)(v->last - v->first))
        check();

    Pair* destination = v->first + index;
    destination->object = result.object;
    destination->reference = result.reference;
    return object;
}
