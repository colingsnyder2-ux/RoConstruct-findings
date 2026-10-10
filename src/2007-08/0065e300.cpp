// from server: 22% by colin
struct S {
    char pad0[8];
    int field8;
    double field0;
};

extern "C" {
    void* __stdcall sub_77DDB8(void*, const char*);
    void* __stdcall sub_77DD74(void*, void*);
    void* __stdcall sub_77DDBC(void*);
    int __stdcall sub_77E9AC(double, void*);
    void* __stdcall sub_77DC7C(void*, const char*, const char*);
    int __stdcall VariantTimeToSystemTime(double, void*);
}

void __stdcall sub_65DFB0(void*, void*, void*);
void __stdcall sub_657080(void*, void*, void*);
void __stdcall sub_6570D0(void*, void*, void*);

S* __stdcall sub_65E300(S* self, const char* name, double time) {
    if (self->field8 != 0) {
        sub_77DDB8(self, (const char*)0x785954);
        return self;
    }
    sub_77DDB8((void*)0, name);
    int result = 0;
    if (self->field8 == 0) {
        if (sub_77E9AC(self->field0, (void*)0) == 0) {
            sub_77DDB8(self, (const char*)0x785954);
            return self;
        }
    }
    sub_77DC7C((void*)0, (const char*)0x7C8BD8, (const char*)0x7C8BDC);
    void* v = (void*)0;
    sub_65DFB0(&v, (void*)0, (void*)0);
    sub_657080(&v, (void*)0, (void*)0);
    sub_6570D0(self, (void*)0, (void*)0);
    sub_77DC7C((void*)0, (const char*)0x7C8BDC, (const char*)0x7C30F8);
    sub_77DD74(self, (void*)0);
    sub_77DDBC((void*)0);
    return self;
}
