// from server: 89% by colin
struct S {
    char pad[0x188];
    S* field188;
    char pad2[0x0C];
    S* field198;
    void sub_57c3e0(int);
    void sub_541c30();
    void sub_57dc80(int);
    S* sub_4949a0();
    S* sub_4afac0();
    S* sub_42e410();
    void sub_53afc0();
    void sub_55acb0();
};

extern "C" {
    extern void* g_8c1198;
}

void S::sub_55acb0() {
    this->field188->sub_57c3e0(0);
    this->field188->sub_541c30();
    this->field188->sub_57dc80(0);
    this->field198->sub_541c30();
    S* p1 = this->sub_4949a0();
    if (p1) {
        p1->sub_541c30();
    }
    S* p2 = this->sub_4afac0();
    if (p2) {
        p2->sub_541c30();
    }
    S* p3 = this->sub_42e410();
    if (p3) {
        p3->sub_53afc0();
        char local = 0;
        void** vtbl = *(void***)g_8c1198;
        void (__stdcall *fn)(void*, char*) = (void (__stdcall *)(void*, char*))vtbl[2];
        fn((char*)p3 + 4, &local);
    }
}
