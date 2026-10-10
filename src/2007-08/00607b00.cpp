// from server: 56% by colin
struct ClumpStage {
    char pad[0x84];
    char field84[0xc];
    char field90[0x10];
    void func_00607b00(int);
};

struct Obj {
    char pad[0x20];
    int field20;
    char pad2[0x4];
    int field28;
};

extern "C" void __stdcall sub_00606c70(int);
extern "C" void __stdcall sub_00605b30(void*, int*);
extern "C" void __stdcall sub_0062fc62(int);

void ClumpStage::func_00607b00(int a)
{
    Obj* o = (Obj*)a;
    int v = o->field20;
    if (v != 0) {
        sub_00606c70(v);
    }
    int* p = &a;
    if (o->field28 != 0) {
        sub_00605b30(field84, p);
    } else {
        sub_00605b30(field90, p);
    }
    ((void(__thiscall*)(ClumpStage*, int))0x606700)(this, a);
    ((void(__thiscall*)(Obj*))0x60be60)(o);
    sub_0062fc62(a);
}
