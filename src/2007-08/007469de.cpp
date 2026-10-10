// from server: 69% by colin
struct S {
};

extern "C" void __cdecl helper_00630a1e(void*);
extern "C" void __cdecl helper_00630a18();

void __cdecl f(int, void* p)
{
    void* q = p;
    int v = *(int*)((char*)p - 4);
    helper_00630a1e((void*)(v ^ (int)q));
    helper_00630a18();
}
