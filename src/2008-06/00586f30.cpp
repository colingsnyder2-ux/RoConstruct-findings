// from server: 43% by colin
// roc 2008-06 00586f30  unit: RBX::LocalScript  size: 144 bytes

extern "C" {
    int __stdcall sub_8023D8(const char*, const char*);
    void* __stdcall sub_80245C();
    void* __stdcall sub_6A0920(unsigned int);
}

struct String {
    char buf[0x1c];
    String(const String&);
};

struct LocalScript {
    char pad[0x130];
    String field130;
    void sub_40DB00(const char*);
    void sub_55E1D0(String*);
    void func(const char*);
};

void LocalScript::func(const char* arg) {
    if (sub_8023D8(field130.buf, arg)) {
        void* p = sub_6A0920(0x1c);
        String* s;
        if (p) {
            s = (String*)sub_80245C();
        } else {
            s = 0;
        }
        sub_55E1D0(s);
        sub_40DB00((const char*)0x975770);
    }
}
