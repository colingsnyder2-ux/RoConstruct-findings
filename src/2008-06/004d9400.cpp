// from server: 38% by colin
struct Table {
    void* vtable;
    int field4;
    int field8;
    int fieldC;
    char pad10[0xC];
    char field1C[0x20];
    char field3C[0x20];
    int field5C;
    Table();
};

struct C563070 { void f(); };
struct C4F0FC0 { void f(void*, void*); };
struct C4D8680 { void f(void*, void*); };

extern "C" void* __cdecl sub_508580(int, int);
extern "C" void __cdecl sub_508A30(void*, int, int);

Table::Table()
{
    vtable = (void*)0x826B9C;
    fieldC = 0xA;
    field4 = 0;
    field8 = (int)sub_508580(0x28, 0x10);
    sub_508A30((void*)field8, 0, fieldC * 4);
    ((C563070*)((char*)this + 0x10))->f();
    ((C4F0FC0*)((char*)this + 0x1C))->f((char*)this + 0x1C, (char*)this + 0x1C);
    ((C4D8680*)((char*)this + 0x3C))->f((char*)this + 0x3C, (char*)this + 0x3C);
    field5C = 0;
}
