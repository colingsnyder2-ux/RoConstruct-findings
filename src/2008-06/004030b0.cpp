// from server: 96% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct State {
    char reserved[52];
    long initialize();
};

struct Object {
    virtual long __stdcall query(const void*, void**);
    virtual unsigned long __stdcall addRef();
    virtual unsigned long __stdcall release();
    virtual ~Object();

    char reserved[4];
    State state;

    Object(void*);
};

long __stdcall createObject(void* context, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003UL;

    long status = (long)0x8007000EUL;
    Object* object = 0;
    *result = 0;

    try {
        object = new Object(context);
    }
    catch (...) {
    }

    if (object) {
        status = object->state.initialize();
        if (status >= 0)
            status = object->query(iid, result);
        if (status != 0)
            delete object;
    }

    return status;
}
