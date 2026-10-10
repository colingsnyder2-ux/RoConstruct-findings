// from server: 44% by colin
struct CXTPCustomizeSheet {
    char pad[0x1ac];
    int field_1ac;
    void sub_675880();
    void sub_675a2c();
    void func();
};

extern "C" void __stdcall sub_77ddac(void*);
extern "C" void* __stdcall sub_77dd98(unsigned int);
extern "C" void __stdcall sub_77ddbc(void*);

extern "C" void* __cdecl sub_6b3010();
extern "C" int __cdecl sub_674f50(int);
extern "C" void __cdecl sub_632ac0(void*);

void CXTPCustomizeSheet::func()
{
    char local[8];
    sub_77ddac(local);
    int v = 0;
    void* p = sub_6b3010();
    void** vt = *(void***)p;
    void (*fn)(void*, void*, int) = (void (*)(void*, void*, int))vt[1];
    fn(p, local, 0x23d2);
    void* q = sub_77dd98(0x134);
    int r = sub_674f50(this->field_1ac);
    if (r == 6) {
        this->sub_675880();
        sub_632ac0(0);
    }
    sub_77ddbc(local);
}
