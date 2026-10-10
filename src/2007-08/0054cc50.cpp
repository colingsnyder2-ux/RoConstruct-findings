// from server: 43% by colin
extern "C" void* __stdcall func_77e518();
extern "C" void __stdcall func_54c190();

struct S {
    char pad0[0x3c];
    char field_3c;
    char pad3d[7];
    char field_44;
    char pad45[3];
    int field_48;
    int field_4c;
    int field_50;
    int field_54;
    int field_58;
    void init(int a, int b, int c);
};

void S::init(int a, int b, int c)
{
    func_77e518();
    field_3c = 0;
    field_44 = 0;
    field_48 = 0;
    field_4c = 0;
    field_50 = 0;
    field_54 = 0;
    field_58 = 0x10;
    *(int*)this = 0x7a7a5c;
    int tmp = *(int*)a;
    func_54c190();
}
