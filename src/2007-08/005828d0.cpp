// from server: 88% by colin
struct Instance {
    char pad[0x4];
    int unk4;
    int unk8;
};

struct Accoutrement {
    char pad[0xfc];
    int unkFC;
    void sub_5827F0(Instance* a, int b);
    void sub_541960(Instance* a);
    void sub_5815A0();
    void f(Instance* a);
};

extern "C" int __cdecl sub_486830(int a);
extern "C" char __cdecl sub_4915F0(int a, int b);

void Accoutrement::f(Instance* a) {
    int esi = sub_486830(a->unk4);
    int ebp = sub_486830(a->unk8);
    if (esi != 0) {
        if (sub_4915F0(esi, 1)) {
            sub_5827F0(a, 0);
        } else {
            unkFC = 0;
        }
    }
    sub_541960(a);
    if (ebp != 0) {
        if (sub_4915F0(ebp, 1)) {
            sub_5815A0();
        }
    }
}
