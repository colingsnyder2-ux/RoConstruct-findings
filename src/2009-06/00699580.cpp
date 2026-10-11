// from server: 74% by atomic.potato
// roc 2009-06 00699580  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00699580
//
// 00699580  56                   push esi
// 00699581  57                   push edi
// 00699582  68bca1a300           push 0xa3a1bc
// 00699587  8bf1                 mov esi, ecx
// 00699589  ff15d0e18900         call dword ptr [0x89e1d0]
// 0069958f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00699593  c706f4ff8a00         mov dword ptr [esi], 0x8afff4
// 00699599  c6460501             mov byte ptr [esi + 5], 1
// 0069959d  33ff                 xor edi, edi
// 0069959f  897e08               mov dword ptr [esi + 8], edi
// 006995a2  a140f88e00           mov eax, dword ptr [0x8ef840]
// 006995a7  8d5620               lea edx, [esi + 0x20]
// 006995aa  52                   push edx
// 006995ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 006995af  89460c               mov dword ptr [esi + 0xc], eax
// 006995b2  894e10               mov dword ptr [esi + 0x10], ecx
// 006995b5  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006995b9  83ec10               sub esp, 0x10
// 006995bc  8bc4                 mov eax, esp
// 006995be  8908                 mov dword ptr [eax], ecx
// 006995c0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006995c4  895004               mov dword ptr [eax + 4], edx
// 006995c7  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006995cb  894808               mov dword ptr [eax + 8], ecx
// 006995ce  b9ecf6a100           mov ecx, 0xa1f6ec
// 006995d3  c70678bf8b00         mov dword ptr [esi], 0x8bbf78
// 006995d9  89500c               mov dword ptr [eax + 0xc], edx
// 006995dc  e8df39f6ff           call 0x5fcfc0
// 006995e1  0fb6c0               movzx eax, al
// 006995e4  f7d8                 neg eax
// 006995e6  1bc0                 sbb eax, eax
// 006995e8  25ecf6a100           and eax, 0xa1f6ec
// 006995ed  894618               mov dword ptr [esi + 0x18], eax
// 006995f0  897e38               mov dword ptr [esi + 0x38], edi
// 006995f3  897e3c               mov dword ptr [esi + 0x3c], edi
// 006995f6  897e40               mov dword ptr [esi + 0x40], edi
// 006995f9  897e44               mov dword ptr [esi + 0x44], edi
// 006995fc  5f                   pop edi
// 006995fd  8bc6                 mov eax, esi
// 006995ff  5e                   pop esi
// 00699600  c21400               ret 0x14

extern "C" int __stdcall InterlockedIncrement(int*);
extern "C" void __stdcall sub_0089e1d0(const char*);
extern "C" char __fastcall sub_005fcfc0(int, int, int, int, int, int);

struct S_00699580 {
    void* f_0;
    char pad_4[1];
    char f_5;
    char pad_6[2];
    int f_8;
    int f_c;
    int f_10;
    char pad_14[4];
    int f_18;
    char pad_1c[4];
    char f_20[0x18];
    int f_38;
    int f_3c;
    int f_40;
    int f_44;
    S_00699580* init(int, int, int, int, int);
};

extern int g_008ef840;
extern char g_00a1f6ec;
extern char g_00a3a1bc;
extern char g_008afff4;
extern char g_008bbf78;

S_00699580* S_00699580::init(int a1, int a2, int a3, int a4, int a5) {
    sub_0089e1d0(&g_00a3a1bc);
    f_0 = &g_008afff4;
    f_5 = 1;
    f_8 = 0;
    f_c = g_008ef840;
    f_10 = a1;
    f_0 = &g_008bbf78;
    unsigned char r = (unsigned char)sub_005fcfc0((int)&g_00a1f6ec, a2, a3, a4, a5, (int)f_20);
    f_18 = (r != 0) ? (int)&g_00a1f6ec : 0;
    f_38 = 0;
    f_3c = 0;
    f_40 = 0;
    f_44 = 0;
    return this;
}
