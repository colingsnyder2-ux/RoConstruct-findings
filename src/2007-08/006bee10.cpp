// from server: 52% by colin
struct Sub {
    void ctor();
    void ctor2();
    void ctor3();
};

struct CollisionStage {
    char pad0[0x128];
    int field128;
    char pad12c[4];
    int field130;
    char pad134[0x43c - 0x134];
    Sub sub43c;
    Sub sub45c;
    Sub sub47c;
    Sub sub49c;
    Sub sub4bc;
    Sub sub4dc;
    Sub sub4fc;
    Sub sub508;
    Sub sub514;
    char pad520[4];
    int field524;
    char pad528[4];
    Sub sub530;
    Sub sub550;
    Sub sub570;
    CollisionStage();
};

extern "C" void __cdecl sub_6c3ae0();
extern "C" void __cdecl sub_6684c0();
extern "C" void __cdecl sub_6684a0();
extern "C" void __cdecl sub_6304c0();
extern "C" void __cdecl sub_6684f0();

extern float g_797e9c;

CollisionStage::CollisionStage()
{
    sub_6c3ae0();
    *(int*)this = 0x7d6f6c;
    sub43c.ctor();
    sub45c.ctor();
    sub47c.ctor();
    sub49c.ctor();
    sub4bc.ctor();
    sub4dc.ctor();
    sub4fc.ctor2();
    sub508.ctor2();
    sub514.ctor2();
    sub_6304c0();
    sub530.ctor();
    sub550.ctor();
    sub570.ctor();
    field128 = 0;
    field130 = 0;
    sub530.ctor3();
    sub550.ctor3();
    sub570.ctor3();
    field524 = 0;
}
