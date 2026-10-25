// from server: 100% by king_originala
// roc 2008-06 005000c0  unit: RBX::ViewNew::HeadBuilder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005000c0
//
// 005000c0  83ec0c               sub esp, 0xc
// 005000c3  8b4124               mov eax, dword ptr [ecx + 0x24]
// 005000c6  d94120               fld dword ptr [ecx + 0x20]
// 005000c9  40                   inc eax
// 005000ca  d95c2404             fstp dword ptr [esp + 4]
// 005000ce  99                   cdq 
// 005000cf  2bc2                 sub eax, edx
// 005000d1  8b5124               mov edx, dword ptr [ecx + 0x24]
// 005000d4  66891424             mov word ptr [esp], dx
// 005000d8  6689542402           mov word ptr [esp + 2], dx
// 005000dd  8b542410             mov edx, dword ptr [esp + 0x10]
// 005000e1  52                   push edx
// 005000e2  8b542404             mov edx, dword ptr [esp + 4]
// 005000e6  d1f8                 sar eax, 1
// 005000e8  52                   push edx
// 005000e9  50                   push eax
// 005000ea  8b442410             mov eax, dword ptr [esp + 0x10]
// 005000ee  50                   push eax
// 005000ef  e89cf6ffff           call 0x4ff790
// 005000f4  83c40c               add esp, 0xc
// 005000f7  c20400               ret 4

struct Pair
{
    short first;
    short second;
};

struct FloatValue
{
    float value;
};

struct Data
{
    Pair pair;
    FloatValue value;
    int half;
};

struct S
{
    char padding[32];
    float value;
    volatile int count;

    void helper(FloatValue value, int half, Pair pair, int argument);
    void func_005000c0(int argument);
};

void S::func_005000c0(int argument)
{
    Data data;
    data.value.value = value;
    data.half = (count + 1) / 2;
    int n = count;
    data.pair.first = (short)n;
    data.pair.second = (short)n;
    helper(data.value, data.half, data.pair, argument);
}
