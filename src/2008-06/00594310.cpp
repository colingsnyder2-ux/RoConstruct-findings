// from server: 88% by colin
struct S {
    char pad[0x18];
    void* field18;
    char pad2[4];
    void* field20;
    S* f(void* arg);
};

extern "C" int __stdcall sub_611170(void* a, int b, void* c);
extern "C" int __stdcall sub_612530(void* a, int b, void* c);
extern "C" void* __stdcall sub_6110C0(void* a, int b);

S* sub_594100(S* self, void* arg);

S* S::f(void* arg) {
    if (field18) {
        sub_611170(field18, -10000, field20);
    }
    sub_594100(this, arg);
    if (field18 == 0) {
        field20 = field18;
        return this;
    }
    void* p = ((S*)arg)->field20;
    sub_612530(field18, -10000, p);
    field20 = sub_6110C0(field18, -10000);
    return this;
}
