// from server: 96% by king_originala
void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

struct S;

struct VTable
{
    long (__stdcall *query)(S*, const void*, void**);
    void* reserved[2];
    void* (__thiscall *destroy)(S*, unsigned int);
};

struct S
{
    VTable* vtable;
    char storage[152];

    S(void*);
};

long __stdcall sub_00416d20(void* outer, const void* iid, void** result)
{
    if (!result)
        return (long)0x80004003;

    S* object = 0;
    long status = (long)0x8007000e;
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
        status = object->vtable->query(object, iid, result);
        if (status != 0)
            object->vtable->destroy(object, 1);
    }

    return status;
}
