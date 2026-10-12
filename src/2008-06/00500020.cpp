// from server: 87% by king_originala
// roc 2008-06 00500020  unit: RBX::ViewNew::HeadBuilder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500020
//
// 00500020  83ec08               sub esp, 8
// 00500023  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00500026  d94120               fld dword ptr [ecx + 0x20]
// 00500029  66890424             mov word ptr [esp], ax
// 0050002d  d95c2404             fstp dword ptr [esp + 4]
// 00500031  6689442402           mov word ptr [esp + 2], ax
// 00500036  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050003a  8b1424               mov edx, dword ptr [esp]
// 0050003d  50                   push eax
// 0050003e  8b442408             mov eax, dword ptr [esp + 8]
// 00500042  52                   push edx
// 00500043  50                   push eax
// 00500044  e8c7eeffff           call 0x4fef10
// 00500049  83c408               add esp, 8
// 0050004c  c20400               ret 4

struct Pair
{
    short first;
    short second;
};

struct FloatValue
{
    float value;
};

extern "C" void __stdcall helper(FloatValue value, Pair pair, void* output);

struct S
{
    char padding[32];
    float value;
    volatile int index;

    void f(void* output);
};

void S::f(void* output)
{
    int i = index;
    Pair pair;
    pair.first = (short)i;
    FloatValue v;
    v.value = value;
    pair.second = (short)i;
    helper(v, pair, output);
}
