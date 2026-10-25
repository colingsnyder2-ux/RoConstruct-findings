// from server: 100% by king_originala
// roc 2008-06 00500050  unit: RBX::ViewNew::HeadBuilder  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00500050
//
// 00500050  83ec08               sub esp, 8
// 00500053  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00500056  d94120               fld dword ptr [ecx + 0x20]
// 00500059  66890424             mov word ptr [esp], ax
// 0050005d  d95c2404             fstp dword ptr [esp + 4]
// 00500061  6689442402           mov word ptr [esp + 2], ax
// 00500066  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050006a  8b1424               mov edx, dword ptr [esp]
// 0050006d  50                   push eax
// 0050006e  8b442408             mov eax, dword ptr [esp + 8]
// 00500072  52                   push edx
// 00500073  50                   push eax
// 00500074  e867f1ffff           call 0x4ff1e0
// 00500079  83c408               add esp, 8
// 0050007c  c20400               ret 4

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
};

struct S
{
    char padding[32];
    float value;
    int count;

    void helper(Scalar, Pair, int);
    void func_00500050(int);
};

void S::func_00500050(int arg)
{
    Data d;
    d.v.value = value;
    int c = count;
    d.p.x = (short)c;
    d.p.y = (short)c;
    helper(d.v, d.p, arg);
}
