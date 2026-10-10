// from server: 76% by tester
extern "C" void __fastcall sub_630a1e(void*);
extern "C" void __fastcall sub_630a18(void*);

extern char G_00851070;

struct S
{
};

void __cdecl f(void* a, void* b)
{
    char* p = (char*)b;
    int v = *(int*)(p - 4);
    v ^= (int)p;
    sub_630a1e((void*)v);
    sub_630a18(&G_00851070);
}
