// from server: 64% by colin




extern "C" void* __stdcall _invalid_parameter_noinfo();
extern "C" void* __stdcall sub_802890();

struct streambuf;

struct basic_ios {
    void* vfptr;
    void* unk4;
    streambuf* rdbuf(streambuf*);
};

struct S {
    char pad0[8];
    void* field8;
    void* fieldC;
    void f();
};

void S::f() {
    void* p = *(void**)((char*)this->fieldC + 0x18);
    if (p == 0) {
        void* q = *(void**)((char*)this->field8 + 4);
        basic_ios* ios = (basic_ios*)((char*)this + 8 + (int)q);
        ios->rdbuf(0);
        return;
    }
    void* a = *(void**)this->fieldC;
    void* b = *(void**)((char*)this->fieldC + 0x14);
    void* c = *(void**)b;
    if (a == 0) {
        sub_802890();
        void* d = 0;
        if (c == *(void**)((char*)d + 0x14)) {
            sub_802890();
        }
        void* e = *(void**)((char*)c + 8);
        void* q = *(void**)((char*)this->field8 + 4);
        basic_ios* ios = (basic_ios*)((char*)this + 8 + (int)q);
        ios->rdbuf((streambuf*)e);
        return;
    }
    while (a != 0) {
        a = *(void**)a;
        if (c == *(void**)((char*)a + 0x14)) {
            sub_802890();
        }
    }
    void* e = *(void**)((char*)c + 8);
    void* q = *(void**)((char*)this->field8 + 4);
    basic_ios* ios = (basic_ios*)((char*)this + 8 + (int)q);
    ios->rdbuf((streambuf*)e);
}
