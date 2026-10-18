// from server: 79% by colin
struct Interface
{
    virtual long __stdcall QueryInterface(const void* iid, void** result) = 0;
    virtual unsigned long __stdcall AddRef() = 0;
    virtual unsigned long __stdcall Release() = 0;
};

struct S
{
    void* table;
    void* value;
    int check();
};

long __stdcall f(S* object, const void* iid, int* supported, void** result)
{
    S* original = object;
    Interface* base = object
        ? reinterpret_cast<Interface*>(reinterpret_cast<char*>(object) - 8)
        : 0;

    if (!supported || !result)
        return (long)0x80004003;

    long status = base->QueryInterface(iid, reinterpret_cast<void**>(&object));
    if (status >= 0)
    {
        reinterpret_cast<Interface*>(object)->Release();
        int checked = original->check();
        *supported = 1;
        if (!checked)
        {
            *result = original->value;
            return status;
        }
        *result = 0;
        return status;
    }

    *supported = 0;
    *result = 0;
    return status;
}
