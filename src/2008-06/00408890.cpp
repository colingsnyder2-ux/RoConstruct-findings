// from server: 97% by king_originala
void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct S
{
    S(void*);
    virtual long __stdcall QueryInterface(const void*, void**);
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
    virtual ~S();

    unsigned char data[32];

    static long __stdcall CreateInstance(void*, const void*, void**);
};

long __stdcall S::CreateInstance(void* outer, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003;

    *result = 0;
    long status = (long)0x8007000E;
    S* object = 0;

    try
    {
        object = new S(outer);
    }
    catch (...)
    {
    }

    if (object)
    {
        status = object->QueryInterface(iid, result);
        if (status != 0)
            delete object;
    }

    return status;
}
