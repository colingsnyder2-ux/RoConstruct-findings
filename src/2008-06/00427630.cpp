// from server: 63% by colin
struct S {
};

extern "C" void __stdcall G1_func_0080245c(void*, const void*);

void __cdecl f(void* p)
{
    void* q = *(void**)p;
    char buf[28];
    G1_func_0080245c(buf, (char*)q + 4);
    (*(void (**)(void*))q)(q);
}
