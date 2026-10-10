// from server: 84% by tester
struct S {
    char pad[0x18];
    void* field_18;
    void* method(int);
};

extern "C" void __stdcall sub_5f4500();
extern "C" void __stdcall sub_6a067a(void*);
extern "C" void __stdcall sub_80257c(void*);

extern void* g_802584;
extern void* g_802580;

void* S::method(int flag)
{
    sub_5f4500();
    field_18 = g_802584;
    field_18 = g_802580;
    sub_80257c(&field_18);
    if (flag & 1)
        sub_6a067a(this);
    return this;
}
