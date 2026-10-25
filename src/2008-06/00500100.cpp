// from server: 100% by king_originala
// roc 2008-06 00500100  unit: RBX::ViewNew::HeadBuilder  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500100
//
// 00500100  83ec0c               sub esp, 0xc
// 00500103  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00500106  d94120               fld dword ptr [ecx + 0x20]
// 00500109  40                   inc eax
// 0050010a  d95c2404             fstp dword ptr [esp + 4]
// 0050010e  99                   cdq 
// 0050010f  2bc2                 sub eax, edx
// 00500111  8b5124               mov edx, dword ptr [ecx + 0x24]
// 00500114  66891424             mov word ptr [esp], dx
// 00500118  6689542402           mov word ptr [esp + 2], dx
// 0050011d  8b542410             mov edx, dword ptr [esp + 0x10]
// 00500121  52                   push edx
// 00500122  8b542404             mov edx, dword ptr [esp + 4]
// 00500126  d1f8                 sar eax, 1
// 00500128  52                   push edx
// 00500129  50                   push eax
// 0050012a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0050012e  50                   push eax
// 0050012f  e82cf9ffff           call 0x4ffa60
// 00500134  83c40c               add esp, 0xc
// 00500137  c20400               ret 4

struct Pair
{
    short x;
    short y;
};

struct Scalar
{
    float value;
};

struct Data
{
    Pair p;
    Scalar v;
    int n;
};

struct S
{
    char padding[32];
    float value;
    volatile int count;

    void helper(Scalar, int, Pair, int);
    void func_00500100(int);
};

void S::func_00500100(int arg)
{
    Data d;
    d.v.value = value;
    d.n = (count + 1) / 2;
    int c = count;
    d.p.x = (short)c;
    d.p.y = (short)c;
    helper(d.v, d.n, d.p, arg);
}
