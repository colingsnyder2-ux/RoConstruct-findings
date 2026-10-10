// from server: 71% by colin
extern "C" void __fastcall sub_630a1e(void*);
extern "C" void __fastcall sub_630a18(void*);

extern char G_00851070;

struct S
{
    void f(void* a, void* b);
};

void S::f(void* a, void* b)
{
    char* p = (char*)b;
    int v = *(int*)(p - 4);
    v ^= (int)p;
    sub_630a1e((void*)v);
    sub_630a18(&G_00851070);
}
