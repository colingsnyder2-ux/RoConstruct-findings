// from server: 51% by colin
// roc 2008-06 00493da0  unit: RBX::VShirt::?$FactoryProduct  size: 657 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00493da0
//
// 00493da0  6aff                 push -1
// 00493da2  6848677c00           push 0x7c6748
// 00493da7  64a100000000         mov eax, dword ptr fs:[0]
// 00493dad  50                   push eax
// 00493dae  64892500000000       mov dword ptr fs:[0], esp
// 00493db5  83ec34               sub esp, 0x34
// 00493db8  53                   push ebx
// 00493db9  55                   push ebp
// 00493dba  56                   push esi
// 00493dbb  8bf1                 mov esi, ecx
// 00493dbd  57                   push edi
// 00493dbe  89742414             mov dword ptr [esp + 0x14], esi
// 00493dc2  e8d9e9ffff           call 0x4927a0
// 00493dc7  8dbe30010000         lea edi, [esi + 0x130]
// 00493dcd  33db                 xor ebx, ebx
// 00493dcf  8bcf                 mov ecx, edi
// 00493dd1  895c244c             mov dword ptr [esp + 0x4c], ebx
// 00493dd5  e8e6601500           call 0x5e9ec0
// 00493dda  8dae50010000         lea ebp, [esi + 0x150]
// 00493de0  8bcd                 mov ecx, ebp
// 00493de2  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00493de7  e8d4601500           call 0x5e9ec0
// 00493dec  c7060c228200         mov dword ptr [esi], 0x82220c
// 00493df2  c74610fc218200       mov dword ptr [esi + 0x10], 0x8221fc
// 00493df9  c74614f4218200       mov dword ptr [esi + 0x14], 0x8221f4
// 00493e00  c74620ec218200       mov dword ptr [esi + 0x20], 0x8221ec
// 00493e07  c74624dc218200       mov dword ptr [esi + 0x24], 0x8221dc
// 00493e0e  c74644cc218200       mov dword ptr [esi + 0x44], 0x8221cc
// 00493e15  c74664bc218200       mov dword ptr [esi + 0x64], 0x8221bc
// 00493e1c  c78684000000ac218200 mov dword ptr [esi + 0x84], 0x8221ac
// 00493e26  c786a40000009c218200 mov dword ptr [esi + 0xa4], 0x82219c
// 00493e30  c786c40000008c218200 mov dword ptr [esi + 0xc4], 0x82218c
// 00493e3a  c7077c218200         mov dword ptr [edi], 0x82217c
// 00493e40  c745006c218200       mov dword ptr [ebp], 0x82216c
// 00493e47  899e70010000         mov dword ptr [esi + 0x170], ebx
// 00493e4d  899e74010000         mov dword ptr [esi + 0x174], ebx
// 00493e53  c7867801000001000000 mov dword ptr [esi + 0x178], 1
// 00493e5d  c6867c01000001       mov byte ptr [esi + 0x17c], 1
// 00493e64  899e84010000         mov dword ptr [esi + 0x184], ebx
// 00493e6a  899e88010000         mov dword ptr [esi + 0x188], ebx
// 00493e70  889e8c010000         mov byte ptr [esi + 0x18c], bl
// 00493e76  889e90010000         mov byte ptr [esi + 0x190], bl
// 00493e7c  8d8e94010000         lea ecx, [esi + 0x194]
// 00493e82  c644244c04           mov byte ptr [esp + 0x4c], 4
// 00493e87  ff1560248000         call dword ptr [0x802460]
// 00493e8d  d9ee                 fldz 
// 00493e8f  889eb0010000         mov byte ptr [esi + 0x1b0], bl
// 00493e95  889eb1010000         mov byte ptr [esi + 0x1b1], bl
// 00493e9b  899eb4010000         mov dword ptr [esi + 0x1b4], ebx
// 00493ea1  33c0                 xor eax, eax
// 00493ea3  668986b8010000       mov word ptr [esi + 0x1b8], ax
// 00493eaa  33c9                 xor ecx, ecx
// 00493eac  66898eba010000       mov word ptr [esi + 0x1ba], cx
// 00493eb3  668986be010000       mov word ptr [esi + 0x1be], ax
// 00493eba  33d2                 xor edx, edx
// 00493ebc  668996bc010000       mov word ptr [esi + 0x1bc], dx
// 00493ec3  66898ec0010000       mov word ptr [esi + 0x1c0], cx
// 00493eca  668996c2010000       mov word ptr [esi + 0x1c2], dx
// 00493ed1  668986c4010000       mov word ptr [esi + 0x1c4], ax
// 00493ed8  66898ec6010000       mov word ptr [esi + 0x1c6], cx
// 00493edf  668996c8010000       mov word ptr [esi + 0x1c8], dx
// 00493ee6  668986ca010000       mov word ptr [esi + 0x1ca], ax
// 00493eed  6858218200           push 0x822158
// 00493ef2  66898ecc010000       mov word ptr [esi + 0x1cc], cx
// 00493ef9  668996ce010000       mov word ptr [esi + 0x1ce], dx
// 00493f00  dd9ed0010000         fstp qword ptr [esi + 0x1d0]
// 00493f06  6a03                 push 3
// 00493f08  c644245405           mov byte ptr [esp + 0x54], 5
// 00493f0d  e84ef8ffff           call 0x493760
// 00493f12  8bc8                 mov ecx, eax
// 00493f14  e8f758ffff           call 0x489810
// 00493f19  68384d9300           push 0x934d38
// 00493f1e  8d4c242c             lea ecx, [esp + 0x2c]
// 00493f22  ff1558248000         call dword ptr [0x802458]
// 00493f28  68a81f8200           push 0x821fa8
// 00493f2d  6a03                 push 3
// 00493f2f  c644245406           mov byte ptr [esp + 0x54], 6
// 00493f34  e827f8ffff           call 0x493760
// 00493f39  8bc8                 mov ecx, eax
// 00493f3b  e8d058ffff           call 0x489810
// 00493f40  8d442428             lea eax, [esp + 0x28]
// 00493f44  50                   push eax
// 00493f45  8bce                 mov ecx, esi
// 00493f47  e844700c00           call 0x55af90
// 00493f4c  8d4c2428             lea ecx, [esp + 0x28]
// 00493f50  c644244c05           mov byte ptr [esp + 0x4c], 5
// 00493f55  ff1568248000         call dword ptr [0x802468]
// 00493f5b  e8405c0700           call 0x509ba0
// 00493f60  d900                 fld dword ptr [eax]
// 00493f62  d905ac9b8100         fld dword ptr [0x819bac]
// 00493f68  8d4c2418             lea ecx, [esp + 0x18]
// 00493f6c  dcc1                 fadd st(1), st(0)
// 00493f6e  51                   push ecx
// 00493f6f  d94004               fld dword ptr [eax + 4]
// 00493f72  8d4c2414             lea ecx, [esp + 0x14]
// 00493f76  d8c1                 fadd st(1)
// 00493f78  d900                 fld dword ptr [eax]
// 00493f7a  d8e2                 fsub st(2)
// 00493f7c  d94004               fld dword ptr [eax + 4]
// 00493f7f  dee3                 fsubrp st(3)
// 00493f81  d95c241c             fstp dword ptr [esp + 0x1c]
// 00493f85  d9c9                 fxch st(1)
// 00493f87  d95c2420             fstp dword ptr [esp + 0x20]
// 00493f8b  d9c9                 fxch st(1)
// 00493f8d  d95c2424             fstp dword ptr [esp + 0x24]
// 00493f91  d95c2428             fstp dword ptr [esp + 0x28]
// 00493f95  e836e30700           call 0x5122d0
// 00493f9a  8b542410             mov edx, dword ptr [esp + 0x10]
// 00493f9e  8d442420             lea eax, [esp + 0x20]
// 00493fa2  50                   push eax
// 00493fa3  8d4c2414             lea ecx, [esp + 0x14]
// 00493fa7  8996b8010000         mov dword ptr [esi + 0x1b8], edx
// 00493fad  e81ee30700           call 0x5122d0
// 00493fb2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00493fb6  8d542418             lea edx, [esp + 0x18]
// 00493fba  898ebc010000         mov dword ptr [esi + 0x1bc], ecx
// 00493fc0  52                   push edx
// 00493fc1  8d4c2414             lea ecx, [esp + 0x14]
// 00493fc5  e806e30700           call 0x5122d0
// 00493fca  8b442410             mov eax, dword ptr [esp + 0x10]
// 00493fce  8d4c2420             lea ecx, [esp + 0x20]
// 00493fd2  51                   push ecx
// 00493fd3  8d4c2414             lea ecx, [esp + 0x14]
// 00493fd7  8986c0010000         mov dword ptr [esi + 0x1c0], eax
// 00493fdd  e8eee20700           call 0x5122d0
// 00493fe2  8b542410             mov edx, dword ptr [esp + 0x10]
// 00493fe6  8d442418             lea eax, [esp + 0x18]
// 00493fea  50                   push eax
// 00493feb  8d4c2414             lea ecx, [esp + 0x14]
// 00493fef  8996c4010000         mov dword ptr [esi + 0x1c4], edx
// 00493ff5  e8d6e20700           call 0x5122d0
// 00493ffa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00493ffe  8d542420             lea edx, [esp + 0x20]
// 00494002  898ec8010000         mov dword ptr [esi + 0x1c8], ecx
// 00494008  52                   push edx
// 00494009  8d4c2414             lea ecx, [esp + 0x14]
// 0049400d  e8bee20700           call 0x5122d0
// 00494012  8b442410             mov eax, dword ptr [esp + 0x10]
// 00494016  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0049401a  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 00494020  5f                   pop edi
// 00494021  8bc6                 mov eax, esi
// 00494023  5e                   pop esi
// 00494024  5d                   pop ebp
// 00494025  5b                   pop ebx
// 00494026  64890d00000000       mov dword ptr fs:[0], ecx
// 0049402d  83c440               add esp, 0x40
// 00494030  c3                   ret 

struct S
{
    char pad0[0x10];
    void* vtable10;
    char pad14[0x10];
    void* vtable24;
    char pad28[0x1c];
    void* vtable44;
    char pad48[0x1c];
    void* vtable64;
    char pad68[0x1c];
    void* vtable84;
    char pad88[0x1c];
    void* vtablea4;
    char pada8[0x1c];
    void* vtablec4;
    char padc8[0x68];
    void* vtable130;
    char pad134[0x1c];
    void* vtable150;
    char pad154[0x1c];
    int field170;
    int field174;
    int field178;
    unsigned char field17c;
    char pad17d[7];
    int field184;
    int field188;
    unsigned char field18c;
    char pad18d[3];
    unsigned char field190;
    char pad191[3];
    char field194[0x1c];
    unsigned char field1b0;
    unsigned char field1b1;
    char pad1b2[2];
    int field1b4;
    short field1b8;
    short field1ba;
    short field1bc;
    short field1be;
    short field1c0;
    short field1c2;
    short field1c4;
    short field1c6;
    short field1c8;
    short field1ca;
    short field1cc;
    short field1ce;
    double field1d0;

    S* construct();
};

struct Str
{
    char buf[0x1c];
    Str();
    Str(const char* s);
    ~Str();
};

struct Helper
{
    void init();
};

extern "C" void __stdcall sub_802460(void* p);
extern "C" void __stdcall sub_802458(void* p, const char* s);
extern "C" void __stdcall sub_802468(void* p);

void sub_4927a0(void* p);
void sub_5e9ec0(void* p);
void* sub_493760(const char* s, int n);
void sub_489810(void* p);
void sub_55af90(void* self, void* arg);
float* sub_509ba0();
void sub_5122d0(void* out, void* in);

S* S::construct()
{
    sub_4927a0(this);

    Helper* h1 = (Helper*)((char*)this + 0x130);
    h1->init();

    Helper* h2 = (Helper*)((char*)this + 0x150);
    h2->init();

    *(void**)this = (void*)0x82220c;
    *(void**)((char*)this + 0x10) = (void*)0x8221fc;
    *(void**)((char*)this + 0x14) = (void*)0x8221f4;
    *(void**)((char*)this + 0x20) = (void*)0x8221ec;
    *(void**)((char*)this + 0x24) = (void*)0x8221dc;
    *(void**)((char*)this + 0x44) = (void*)0x8221cc;
    *(void**)((char*)this + 0x64) = (void*)0x8221bc;
    *(void**)((char*)this + 0x84) = (void*)0x8221ac;
    *(void**)((char*)this + 0xa4) = (void*)0x82219c;
    *(void**)((char*)this + 0xc4) = (void*)0x82218c;
    *(void**)((char*)this + 0x130) = (void*)0x82217c;
    *(void**)((char*)this + 0x150) = (void*)0x82216c;

    field170 = 0;
    field174 = 0;
    field178 = 1;
    field17c = 1;
    field184 = 0;
    field188 = 0;
    field18c = 0;
    field190 = 0;

    sub_802460((char*)this + 0x194);

    field1b0 = 0;
    field1b1 = 0;
    field1b4 = 0;
    field1b8 = 0;
    field1ba = 0;
    field1bc = 0;
    field1be = 0;
    field1c0 = 0;
    field1c2 = 0;
    field1c4 = 0;
    field1c6 = 0;
    field1c8 = 0;
    field1ca = 0;
    field1cc = 0;
    field1ce = 0;
    field1d0 = 0.0;

    void* p1 = sub_493760("create a Player", 3);
    sub_489810(p1);

    Str s1;
    sub_802458(&s1, "Player");

    void* p2 = sub_493760("set a Player's name", 3);
    sub_489810(p2);

    sub_55af90(this, &s1);

    sub_802468(&s1);

    float* v = sub_509ba0();
    float x = v[0];
    float y = v[1];
    float g = *(float*)0x819bac;

    float a = x + g;
    float b = y + g;
    float c = x - g;
    float d = y - g;

    float r1, r2, r3, r4;
    sub_5122d0(&r1, &a);
    field1b8 = *(short*)&r1;

    sub_5122d0(&r2, &b);
    field1bc = *(short*)&r2;

    sub_5122d0(&r3, &c);
    field1c0 = *(short*)&r3;

    sub_5122d0(&r4, &d);
    field1c4 = *(short*)&r4;

    float r5, r6;
    sub_5122d0(&r5, &a);
    field1c8 = *(short*)&r5;

    sub_5122d0(&r6, &b);
    field1cc = *(short*)&r6;

    return this;
}
