// from server: 30% by colin
struct CPropGrid {
    char pad0[0x17c];
    int field17c;
    char pad180[0x8];
    int field188;
    char pad18c[0x4];
    int field190;
    int field194;
    int field198;
    int field19c;
    int field1a0;
    int field1a4;
    int field1a8;
    int field1ac;
    int field1b0;
    char field1b4;
    char field1b5;
    char pad1b6[0x2];
    int field1b8;
    int field1bc;
    int field1c0;
    int field1c4;
    int field1c8;
    int field1cc;
    int field5c;
    CPropGrid();
};

extern "C" void __stdcall sub_6841C0();
extern "C" void __stdcall sub_725700();
extern "C" void* __stdcall sub_5835B0();
extern "C" void* __stdcall sub_5A93B0();
extern "C" void* __stdcall sub_4D8640();

CPropGrid::CPropGrid()
{
    sub_6841C0();
    field17c = 0x788344;
    sub_725700();
    field188 = 0;
    field190 = 0;
    field194 = 0;
    field198 = 0;
    field19c = 0;
    field1a0 = 0;
    field1a4 = 0;
    field1a8 = 0;
    field1ac = 0;
    field1b0 = 0;
    field1b4 = 0;
    field1b5 = 0;
    field1b8 = 0;
    field1bc = 0;
    field1c0 = 0;
    field1c4 = 0;
    field1c8 = 0;
    field1cc = 0;
    field5c = 0;
}
