// from server: 100% by king_originala
// roc 2008-06 00500140  unit: RBX::ViewNew::HeadBuilder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500140
//
// 00500140  83ec0c               sub esp, 0xc
// 00500143  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00500146  d94120               fld dword ptr [ecx + 0x20]
// 00500149  40                   inc eax
// 0050014a  d95c2404             fstp dword ptr [esp + 4]
// 0050014e  99                   cdq 
// 0050014f  2bc2                 sub eax, edx
// 00500151  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00500154  66891424             mov word ptr [esp], dx
// 00500158  6689542402           mov word ptr [esp + 2], dx
// 0050015d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00500161  52                   push edx
// 00500162  8b542404             mov edx, dword ptr [esp + 4]
// 00500166  d1f8                 sar eax, 1
// 00500168  52                   push edx
// 00500169  50                   push eax
// 0050016a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050016e  50                   push eax
// 0050016f  e8ccfbffff           call 0x4ffd40
// 00500174  83c40c               add esp, 0xc
// 00500177  c20400               ret 4

struct ShortPair
{
    short x;
    short y;
};

struct Arguments
{
    ShortPair pair;
    float value;
    int half;
};

struct HeadBuilder
{
    char padding[0x20];
    float field20;
    volatile int field24;

    void sub_4FFD40(int, int, ShortPair, int);
    void sub_500140(int);
};

void HeadBuilder::sub_500140(int a)
{
    Arguments args;
    args.value = field20;
    args.half = (field24 + 1) / 2;
    int value = field24;
    args.pair.x = (short)value;
    args.pair.y = (short)value;
    sub_4FFD40(*(int*)&args.value, args.half, args.pair, a);
}
