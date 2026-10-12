// from server: 66% by king_originala
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
    volatile int success = 0;
    volatile int i;

    __try {
        for (i = 0; i < count; ++i) {
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
