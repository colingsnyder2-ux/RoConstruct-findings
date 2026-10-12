// from server: 80% by king_originala
typedef void (__thiscall *Destructor)(void *);

extern "C" void __stdcall array_unwind(
    void *ptr, unsigned int size, int count, Destructor destructor);

#pragma optimize("s", on)

void __stdcall vector_destructor(
    void *ptr, unsigned int size, int count, Destructor destructor)
{
    int success = 0;
    ptr = (char *)ptr + size * count;

    __try {
        while (--count >= 0) {
            ptr = (char *)ptr - size;
            destructor(ptr);
        }
        success = 1;
    }
    __finally {
        if (!success)
            array_unwind(ptr, size, count, destructor);
    }
}
