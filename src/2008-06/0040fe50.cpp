// from server: 95% by king_originala
void* __cdecl operator new(unsigned int);

struct Module {
    virtual void unused();
    virtual long Lock();
};

extern Module* module;
extern void* objectVtable[];

struct Object {
    void** vtable;
    long references;
    void* begin;
    void* current;
    void* end;
    void* owner;
    unsigned int flags;
};

long __stdcall CreateInstance(Object** output)
{
    if (output == 0)
        return (long)0x80004003UL;

    *output = 0;
    long result = (long)0x8007000EUL;
    Object* object = 0;

    try {
        Object* allocated =
            static_cast<Object*>(operator new(sizeof(Object)));

        if (allocated != 0) {
            allocated->references = 0;
            allocated->begin = allocated->current = allocated->end = 0;
            allocated->owner = 0;
            allocated->flags = 0;
            allocated->vtable = objectVtable;
            module->Lock();
            object = allocated;
        } else {
            object = 0;
        }

        if (object != 0)
            result = 0;
    } catch (...) {
    }

    *output = object;
    return result;
}
