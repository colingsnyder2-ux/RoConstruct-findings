// from server: 78% by colin
typedef void (__thiscall *ElementFunction)(void *);

extern "C" void __stdcall array_unwind(
    void *, unsigned int, int, ElementFunction);

#pragma optimize("s", on)

extern "C" void __stdcall vector_constructor(
    void *ptr,
    unsigned int size,
    int count,
    ElementFunction constructor,
    ElementFunction destructor)
{
    int success = 0;
    int i = 0;

    __try {
        for (; i < count; ++i) {
            constructor(ptr);
            ptr = (char *)ptr + size;
        }
        success = 1;
    }
    __finally {
        if (!success)
            array_unwind(ptr, size, i, destructor);
    }
}
