// from server: 49% by colin
struct LDrawCommand {
    char pad0[4];
    int field4;
    int field8;
    char padC[0x64];
    char field70[0x1c];
    bool execute(int a, int b, int c, int d, int e, int f, int g, int h);
};

struct String {
    char data[0x1c];
    String();
    String(const String&);
    ~String();
};

extern "C" {
    int __stdcall sub_4698A0(int, void*);
    int __stdcall sub_46A9D0();
    void __stdcall sub_46B590();
    void __stdcall sub_46B760();
    void __stdcall sub_46B7B0();
    void __stdcall sub_46B9E0();
    void __stdcall sub_46B3A0(int, int);
    void __stdcall sub_77E69C(void*, void*);
    void __stdcall sub_77E6AC(void*);
}

bool LDrawCommand::execute(int a, int b, int c, int d, int e, int f, int g, int h) {
    if (field8 == 1) {
        int r = sub_4698A0(field4, field70);
        if (r != 0) {
            int ebx = sub_46A9D0();
            if (ebx != 0) {
                sub_46B590();
                sub_46B760();
                String s1;
                sub_77E69C(&s1, (void*)(ebx + 0x24));
                sub_46B7B0();
                String s2;
                sub_77E69C(&s2, &s2);
                sub_46B9E0();
                sub_46B3A0(0x796368, a);
                s2.~String();
                return true;
            }
        }
    }
    String s3;
    sub_77E6AC(&s3);
    return false;
}
