// from server: 80% by king_originala
void* __cdecl operator new(unsigned int, void*);
void __cdecl operator delete(void*, void*);

struct S
{
    char storage[40];
    S(void*);
};

#pragma strict_gs_check(on)
#pragma optimize("", off)
void __cdecl func_00553650(void* storage, void* argument)
{
    void* p = storage;
    new (p) S(argument);
}
#pragma optimize("", on)
#pragma strict_gs_check(off)
