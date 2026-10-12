// from server: 89% by king_originala
struct Control {
    void* value;
    Control& operator=(const Control&);
};

struct Value {
    void* object;
    Control control;
    ~Value();
};

struct EmptyValue {
    void* object;
    void* control;

    EmptyValue() : object(0), control(0) {}
    EmptyValue(const EmptyValue&);
};

struct Values {
    unsigned char padding[12];
    Value* first;
    Value* last;
    Value* limit;

    void resize(unsigned, EmptyValue);
};

struct S {
    unsigned char padding[0x190];
    Values values;

    Value create(void*);
    void* get();
};

extern int indexFlag;
extern int typeFlag;
extern void __cdecl initializeIndex();
extern void __cdecl initializeType();
extern void __cdecl initialize(void (__cdecl*)(), int*);
extern void* __cdecl getIndex();
extern void* __cdecl getType();
extern void (__cdecl* invalidParameter)();

void* S::get()
{
    initialize(initializeIndex, &indexFlag);
    unsigned index = (unsigned)getIndex();
    unsigned count = (unsigned)(values.last - values.first);
    void (__cdecl* invalid)() = invalidParameter;
    Values* entries = &values;

    if (index + 1 > count) {
        entries->resize(index + 1, EmptyValue());
    } else {
        Value* end = *(Value* volatile*)&entries->last;
        Value* begin = *(Value* volatile*)&entries->first;
        if (index >= (unsigned)(end - begin))
            invalid();

        void* object = entries->first[index].object;
        if (object)
            return object;
    }

    initialize(initializeType, &typeFlag);
    Value value = create(getType());
    if (!value.object)
        return 0;

    void* object = value.object;
    if (index >= (unsigned)(entries->last - entries->first))
        invalid();

    Value& slot = entries->first[index];
    slot.object = value.object;
    slot.control = value.control;
    return object;
}
