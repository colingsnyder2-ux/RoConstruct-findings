// from server: 95% by king_originala
struct Control {
    void* value;
    Control& operator=(const Control&);
};

struct Pointer {
    void* object;
    Control control;
    Pointer() : object(0) { control.value = 0; }
    Pointer(const Pointer&);
    ~Pointer();
};

struct Storage {
    unsigned char padding[12];
    Pointer* first;
    Pointer* last;
    Pointer* limit;
    void resize(unsigned int, Pointer);
};

extern void __cdecl initialize(void (__cdecl*)(), void*);
extern void __cdecl initializeIndex();
extern void __cdecl initializeType();
extern unsigned int indexFlag;
extern unsigned int typeFlag;
extern void* __cdecl func_00413810();
extern void* __cdecl func_004068c0();
extern void (__cdecl* invalid_parameter_noinfo)();

struct S {
    unsigned char padding[0x190];
    Storage entries;
    Pointer create(void*);
    void* get();
};

void* S::get()
{
    initialize(initializeIndex, &indexFlag);
    unsigned int index = (unsigned int)func_00413810();
    void (__cdecl* invalid)() = invalid_parameter_noinfo;
    Storage* storage = &entries;

    if (index + 1 > (unsigned int)(entries.last - entries.first)) {
        storage->resize(index + 1, Pointer());
    } else {
        if (index >= (unsigned int)(storage->last - storage->first))
            invalid();
        void* result = storage->first[index].object;
        if (result)
            return result;
    }

    initialize(initializeType, &typeFlag);
    Pointer result = create(func_004068c0());
    if (!result.object)
        return 0;

    void* object = result.object;
    if (index >= (unsigned int)(storage->last - storage->first))
        invalid();

    Pointer* slot = &storage->first[index];
    slot->object = result.object;
    slot->control = result.control;
    return object;
}
