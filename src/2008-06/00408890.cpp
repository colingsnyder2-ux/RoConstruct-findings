// from server: 96% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S
{
    virtual long __stdcall QueryInterface(const void*, void**);
    virtual unsigned long __stdcall AddRef();
    virtual unsigned long __stdcall Release();
    virtual ~S();

    S(void*);
    char data[32];
};

long __stdcall CreateInstance(void* outer, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003;

    long status = (long)0x8007000E;
    S* object = 0;
    *result = 0;

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
