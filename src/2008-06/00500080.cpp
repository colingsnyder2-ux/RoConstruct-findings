// from server: 100% by colin
// roc 2008-06 00500080  unit: RBX::ViewNew::HeadBuilder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500080
//
// 00500080  83ec0c               sub esp, 0xc
// 00500083  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00500086  d94120               fld dword ptr [ecx + 0x20]
// 00500089  40                   inc eax
// 0050008a  d95c2404             fstp dword ptr [esp + 4]
// 0050008e  99                   cdq 
// 0050008f  2bc2                 sub eax, edx
// 00500091  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00500094  66891424             mov word ptr [esp], dx
// 00500098  6689542402           mov word ptr [esp + 2], dx
// 0050009d  8b542410             mov edx, dword ptr [esp + 0x10]
// 005000a1  52                   push edx
// 005000a2  8b542404             mov edx, dword ptr [esp + 4]
// 005000a6  d1f8                 sar eax, 1
// 005000a8  52                   push edx
// 005000a9  50                   push eax
// 005000aa  8b442410             mov eax, dword ptr [esp + 0x10]
// 005000ae  50                   push eax
// 005000af  e8fcf3ffff           call 0x4ff4b0
// 005000b4  83c40c               add esp, 0xc
// 005000b7  c20400               ret 4

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
