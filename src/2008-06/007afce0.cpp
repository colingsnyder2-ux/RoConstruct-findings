// from server: 55% by colin
// from server: 53% by colin
// roc 2008-06 007afce0  unit: RBX::RenderNew::TextureProxy  size: 940 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007afce0
//
// 007afce0  6aff                 push -1
// 007afce2  68bab87c00           push 0x7cb8ba
// 007afce7  64a100000000         mov eax, dword ptr fs:[0]
// 007afced  50                   push eax
// 007afcee  64892500000000       mov dword ptr fs:[0], esp
// 007afcf5  81ec00010000         sub esp, 0x100
// 007afcfb  53                   push ebx
// 007afcfc  55                   push ebp
// 007afcfd  33c0                 xor eax, eax
// 007afcff  56                   push esi
// 007afd00  57                   push edi
// 007afd01  8bbc2434010000       mov edi, dword ptr [esp + 0x134]
// 007afd08  89442414             mov dword ptr [esp + 0x14], eax
// 007afd0c  89842418010000       mov dword ptr [esp + 0x118], eax
// 007afd13  8b07                 mov eax, dword ptr [edi]
// 007afd15  8b7044               mov esi, dword ptr [eax + 0x44]
// 007afd18  8b4050               mov eax, dword ptr [eax + 0x50]
// 007afd1b  83f808               cmp eax, 8
// 007afd1e  8be9                 mov ebp, ecx
// 007afd20  bb08000000           mov ebx, 8
// 007afd25  7d02                 jge 0x7afd29
// 007afd27  8bd8                 mov ebx, eax
// 007afd29  68310d0000           push 0xd31
// 007afd2e  e8ad3acdff           call 0x4837e0
// 007afd33  83e803               sub eax, 3
// 007afd36  83c404               add esp, 4
// 007afd39  3bf0                 cmp esi, eax
// 007afd3b  7d02                 jge 0x7afd3f
// 007afd3d  8bc6                 mov eax, esi
// 007afd3f  d9e8                 fld1 
// 007afd41  33c9                 xor ecx, ecx
// 007afd43  85c0                 test eax, eax
// 007afd45  d95d0c               fstp dword ptr [ebp + 0xc]
// 007afd48  d9ee                 fldz 
// 007afd4a  0f9ec1               setle cl
// 007afd4d  d95d10               fstp dword ptr [ebp + 0x10]
// 007afd50  c6450300             mov byte ptr [ebp + 3], 0
// 007afd54  c6450101             mov byte ptr [ebp + 1], 1
// 007afd58  c6450000             mov byte ptr [ebp], 0
// 007afd5c  c6450200             mov byte ptr [ebp + 2], 0
// 007afd60  c6450400             mov byte ptr [ebp + 4], 0
// 007afd64  c6450500             mov byte ptr [ebp + 5], 0
// 007afd68  49                   dec ecx
// 007afd69  23c8                 and ecx, eax
// 007afd6b  c6450600             mov byte ptr [ebp + 6], 0
// 007afd6f  f60520f0960001       test byte ptr [0x96f020], 1
// 007afd76  894c2410             mov dword ptr [esp + 0x10], ecx
// 007afd7a  7515                 jne 0x7afd91
// 007afd7c  8b15ac248000         mov edx, dword ptr [0x8024ac]
// 007afd82  830d20f0960001       or dword ptr [0x96f020], 1
// 007afd89  dd02                 fld qword ptr [edx]
// 007afd8b  dd1d18f09600         fstp qword ptr [0x96f018]
// 007afd91  dd0518f09600         fld qword ptr [0x96f018]
// 007afd97  8bb42420010000       mov esi, dword ptr [esp + 0x120]
// 007afd9e  d9e0                 fchs 
// 007afda0  56                   push esi
// 007afda1  d95d08               fstp dword ptr [ebp + 8]
// 007afda4  e8b73bd5ff           call 0x503960
// 007afda9  83c404               add esp, 4
// 007afdac  8b07                 mov eax, dword ptr [edi]
// 007afdae  8b0e                 mov ecx, dword ptr [esi]
// 007afdb0  50                   push eax
// 007afdb1  c784241c01000000000000 mov dword ptr [esp + 0x11c], 0
// 007afdbc  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007afdc4  e8976cd5ff           call 0x506a60
// 007afdc9  68570d0000           push 0xd57
// 007afdce  e80d3acdff           call 0x4837e0
// 007afdd3  d90590748200         fld dword ptr [0x827490]
// 007afdd9  d9842428010000       fld dword ptr [esp + 0x128]
// 007afde0  83c404               add esp, 4
// 007afde3  d8d1                 fcom st(1)
// 007afde5  dfe0                 fnstsw ax
// 007afde7  ddd9                 fstp st(1)
// 007afde9  f6c401               test ah, 1
// 007afdec  7504                 jne 0x7afdf2
// 007afdee  c6450301             mov byte ptr [ebp + 3], 1
// 007afdf2  d9842428010000       fld dword ptr [esp + 0x128]
// 007afdf9  d9058c748200         fld dword ptr [0x82748c]
// 007afdff  d8c9                 fmul st(1)
// 007afe01  d95d0c               fstp dword ptr [ebp + 0xc]
// 007afe04  d905884d8700         fld dword ptr [0x874d88]
// 007afe0a  d8da                 fcomp st(2)
// 007afe0c  dfe0                 fnstsw ax
// 007afe0e  ddd9                 fstp st(1)
// 007afe10  f6c441               test ah, 0x41
// 007afe13  7a04                 jp 0x7afe19
// 007afe15  c6450501             mov byte ptr [ebp + 5], 1
// 007afe19  80bc242c01000000     cmp byte ptr [esp + 0x12c], 0
// 007afe21  d80d88748200         fmul dword ptr [0x827488]
// 007afe27  d82594748200         fsub dword ptr [0x827494]
// 007afe2d  d95d10               fstp dword ptr [ebp + 0x10]
// 007afe30  7418                 je 0x7afe4a
// 007afe32  85db                 test ebx, ebx
// 007afe34  7e14                 jle 0x7afe4a
// 007afe36  837c241000           cmp dword ptr [esp + 0x10], 0
// 007afe3b  c6450001             mov byte ptr [ebp], 1
// 007afe3f  bb01000000           mov ebx, 1
// 007afe44  7504                 jne 0x7afe4a
// 007afe46  c6450100             mov byte ptr [ebp + 1], 0
// 007afe4a  8b06                 mov eax, dword ptr [esi]
// 007afe4c  8b784c               mov edi, dword ptr [eax + 0x4c]
// 007afe4f  8b4050               mov eax, dword ptr [eax + 0x50]
// 007afe52  8d0c80               lea ecx, [eax + eax*4]
// 007afe55  c1e104               shl ecx, 4
// 007afe58  03cf                 add ecx, edi
// 007afe5a  8bd1                 mov edx, ecx
// 007afe5c  2bd7                 sub edx, edi
// 007afe5e  b867666666           mov eax, 0x66666667
// 007afe63  f7ea                 imul edx
// 007afe65  c1fa05               sar edx, 5
// 007afe68  8bc2                 mov eax, edx
// 007afe6a  c1e81f               shr eax, 0x1f
// 007afe6d  68f0585000           push 0x5058f0
// 007afe72  03c2                 add eax, edx
// 007afe74  50                   push eax
// 007afe75  51                   push ecx
// 007afe76  57                   push edi
// 007afe77  e8046ed5ff           call 0x506c80
// 007afe7c  8b06                 mov eax, dword ptr [esi]
// 007afe7e  8b7850               mov edi, dword ptr [eax + 0x50]
// 007afe81  2bfb                 sub edi, ebx
// 007afe83  83c410               add esp, 0x10
// 007afe86  85ff                 test edi, edi
// 007afe88  7e38                 jle 0x7afec2
// 007afe8a  33db                 xor ebx, ebx
// 007afe8c  85ff                 test edi, edi
// 007afe8e  7e20                 jle 0x7afeb0
// 007afe90  8b0e                 mov ecx, dword ptr [esi]
// 007afe92  8b4150               mov eax, dword ptr [ecx + 0x50]
// 007afe95  2bc7                 sub eax, edi
// 007afe97  03c3                 add eax, ebx
// 007afe99  8d1480               lea edx, [eax + eax*4]
// 007afe9c  c1e204               shl edx, 4
// 007afe9f  03514c               add edx, dword ptr [ecx + 0x4c]
// 007afea2  83c140               add ecx, 0x40
// 007afea5  52                   push edx
// 007afea6  e85531d5ff           call 0x503000
// 007afeab  43                   inc ebx
// 007afeac  3bdf                 cmp ebx, edi
// 007afeae  7ce0                 jl 0x7afe90
// 007afeb0  8b0e                 mov ecx, dword ptr [esi]
// 007afeb2  8b4150               mov eax, dword ptr [ecx + 0x50]
// 007afeb5  6a01                 push 1
// 007afeb7  2bc7                 sub eax, edi
// 007afeb9  50                   push eax
// 007afeba  83c14c               add ecx, 0x4c
// 007afebd  e80e28d5ff           call 0x5026d0
// 007afec2  8b06                 mov eax, dword ptr [esi]
// 007afec4  8b7840               mov edi, dword ptr [eax + 0x40]
// 007afec7  8b4044               mov eax, dword ptr [eax + 0x44]
// 007afeca  8d0c80               lea ecx, [eax + eax*4]
// 007afecd  c1e104               shl ecx, 4
// 007afed0  03cf                 add ecx, edi
// 007afed2  8bd1                 mov edx, ecx
// 007afed4  2bd7                 sub edx, edi
// 007afed6  b867666666           mov eax, 0x66666667
// 007afedb  f7ea                 imul edx
// 007afedd  c1fa05               sar edx, 5
// 007afee0  8bc2                 mov eax, edx
// 007afee2  c1e81f               shr eax, 0x1f
// 007afee5  68f0585000           push 0x5058f0
// 007afeea  03c2                 add eax, edx
// 007afeec  50                   push eax
// 007afeed  51                   push ecx
// 007afeee  57                   push edi
// 007afeef  e88c6dd5ff           call 0x506c80
// 007afef4  8b0e                 mov ecx, dword ptr [esi]
// 007afef6  8b4144               mov eax, dword ptr [ecx + 0x44]
// 007afef9  2b442420             sub eax, dword ptr [esp + 0x20]
// 007afefd  83c410               add esp, 0x10
// 007aff00  85c0                 test eax, eax
// 007aff02  7e10                 jle 0x7aff14
// 007aff04  8b5144               mov edx, dword ptr [ecx + 0x44]
// 007aff07  6a01                 push 1
// 007aff09  2bd0                 sub edx, eax
// 007aff0b  52                   push edx
// 007aff0c  83c140               add ecx, 0x40
// 007aff0f  e8bc27d5ff           call 0x5026d0
// 007aff14  807d0000             cmp byte ptr [ebp], 0
// 007aff18  0f94c1               sete cl
// 007aff1b  884d02               mov byte ptr [ebp + 2], cl
// 007aff1e  8b0e                 mov ecx, dword ptr [esi]
// 007aff20  8b4944               mov ecx, dword ptr [ecx + 0x44]
// 007aff23  33c0                 xor eax, eax
// 007aff25  85c9                 test ecx, ecx
// 007aff27  7e12                 jle 0x7aff3b
// 007aff29  33d2                 xor edx, edx
// 007aff2b  eb03                 jmp 0x7aff30
// 007aff2d  8d4900               lea ecx, [ecx]
// 007aff30  8b0e                 mov ecx, dword ptr [esi]
// 007aff32  40                   inc eax
// 007aff33  83c250               add edx, 0x50
// 007aff36  3b4144               cmp eax, dword ptr [ecx + 0x44]
// 007aff39  7cf5                 jl 0x7aff30
// 007aff3b  8b0e                 mov ecx, dword ptr [esi]
// 007aff3d  33c0                 xor eax, eax
// 007aff3f  394150               cmp dword ptr [ecx + 0x50], eax
// 007aff42  7e0d                 jle 0x7aff51
// 007aff44  33d2                 xor edx, edx
// 007aff46  8b0e                 mov ecx, dword ptr [esi]
// 007aff48  40                   inc eax
// 007aff49  83c250               add edx, 0x50
// 007aff4c  3b4150               cmp eax, dword ptr [ecx + 0x50]
// 007aff4f  7cf5                 jl 0x7aff46
// 007aff51  807d0400             cmp byte ptr [ebp + 4], 0
// 007aff55  0f8400010000         je 0x7b005b
// 007aff5b  6a01                 push 1
// 007aff5d  e8fefcffff           call 0x7afc60
// 007aff62  8bc8                 mov ecx, eax
// 007aff64  e8e7160000           call 0x7b1650
// 007aff69  8d542410             lea edx, [esp + 0x10]
// 007aff6d  56                   push esi
// 007aff6e  52                   push edx
// 007aff6f  e8ecfcffff           call 0x7afc60
// 007aff74  8bc8                 mov ecx, eax
// 007aff76  e8a5250000           call 0x7b2520
// 007aff7b  8b18                 mov ebx, dword ptr [eax]
// 007aff7d  8b06                 mov eax, dword ptr [esi]
// 007aff7f  8b2dac218000         mov ebp, dword ptr [0x8021ac]
// 007aff85  c784241801000001000000 mov dword ptr [esp + 0x118], 1
// 007aff90  3bd8                 cmp ebx, eax
// 007aff92  745b                 je 0x7affef
// 007aff94  85c0                 test eax, eax
// 007aff96  7447                 je 0x7affdf
// 007aff98  83c004               add eax, 4
// 007aff9b  50                   push eax
// 007aff9c  ffd5                 call ebp
// 007aff9e  85c0                 test eax, eax
// 007affa0  7537                 jne 0x7affd9
// 007affa2  8b06                 mov eax, dword ptr [esi]
// 007affa4  8b7808               mov edi, dword ptr [eax + 8]
// 007affa7  85ff                 test edi, edi
// 007affa9  7420                 je 0x7affcb
// 007affab  eb03                 jmp 0x7affb0
// 007affad  8d4900               lea ecx, [ecx]
// 007affb0  8b0f                 mov ecx, dword ptr [edi]
// 007affb2  8b01                 mov eax, dword ptr [ecx]
// 007affb4  8b5004               mov edx, dword ptr [eax + 4]
// 007affb7  ffd2                 call edx
// 007affb9  8bc7                 mov eax, edi
// 007affbb  8b7f04               mov edi, dword ptr [edi + 4]
// 007affbe  50                   push eax
// 007affbf  e8b606efff           call 0x6a067a
// 007affc4  83c404               add esp, 4
// 007affc7  85ff                 test edi, edi
// 007affc9  75e5                 jne 0x7affb0
// 007affcb  8b0e                 mov ecx, dword ptr [esi]
// 007affcd  85c9                 test ecx, ecx
// 007affcf  7408                 je 0x7affd9
// 007affd1  8b01                 mov eax, dword ptr [ecx]
// 007affd3  8b10                 mov edx, dword ptr [eax]
// 007affd5  6a01                 push 1
// 007affd7  ffd2                 call edx
// 007affd9  c70600000000         mov dword ptr [esi], 0
// 007affdf  85db                 test ebx, ebx
// 007affe1  740c                 je 0x7affef
// 007affe3  891e                 mov dword ptr [esi], ebx
// 007affe5  83c304               add ebx, 4
// 007affe8  53                   push ebx
// 007affe9  ff15b0218000         call dword ptr [0x8021b0]
// 007affef  8b442410             mov eax, dword ptr [esp + 0x10]
// 007afff3  c684241801000000     mov byte ptr [esp + 0x118], 0
// 007afffb  85c0                 test eax, eax
// 007afffd  7440                 je 0x7b003f
// 007affff  83c004               add eax, 4
// 007b0002  50                   push eax
// 007b0003  ffd5                 call ebp
// 007b0005  85c0                 test eax, eax
// 007b0007  7536                 jne 0x7b003f
// 007b0009  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b000d  8b7908               mov edi, dword ptr [ecx + 8]
// 007b0010  85ff                 test edi, edi
// 007b0012  741f                 je 0x7b0033
// 007b0014  8b0f                 mov ecx, dword ptr [edi]
// 007b0016  8b01                 mov eax, dword ptr [ecx]
// 007b0018  8b5004               mov edx, dword ptr [eax + 4]
// 007b001b  ffd2                 call edx
// 007b001d  8bc7                 mov eax, edi
// 007b001f  8b7f04               mov edi, dword ptr [edi + 4]
// 007b0022  50                   push eax
// 007b0023  e85206efff           call 0x6a067a
// 007b0028  83c404               add esp, 4
// 007b002b  85ff                 test edi, edi
// 007b002d  75e5                 jne 0x7b0014
// 007b002f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007b0033  85c9                 test ecx, ecx
// 007b0035  7408                 je 0x7b003f
// 007b0037  8b01                 mov eax, dword ptr [ecx]
// 007b0039  8b10                 mov edx, dword ptr [eax]
// 007b003b  6a01                 push 1
// 007b003d  ffd2                 call edx
// 007b003f  8b842438010000       mov eax, dword ptr [esp + 0x138]
// 007b0046  50                   push eax
// 007b0047  8d4c241c             lea ecx, [esp + 0x1c]
// 007b004b  51                   push ecx
// 007b004c  e80ffcffff           call 0x7afc60
// 007b0051  8bc8                 mov ecx, eax
// 007b0053  e828150000           call 0x7b1580
// 007b0058  50                   push eax
// 007b0059  eb08                 jmp 0x7b0063
// 007b005b  8b942438010000       mov edx, dword ptr [esp + 0x138]
// 007b0062  52                   push edx
// 007b0063  8b8c2440010000       mov ecx, dword ptr [esp + 0x140]
// 007b006a  e8111dd5ff           call 0x501d80
// 007b006f  8b8c2410010000       mov ecx, dword ptr [esp + 0x110]
// 007b0076  5f                   pop edi
// 007b0077  8bc6                 mov eax, esi
// 007b0079  5e                   pop esi
// 007b007a  5d                   pop ebp
// 007b007b  5b                   pop ebx
// 007b007c  64890d00000000       mov dword ptr fs:[0], ecx
// 007b0083  81c40c010000         add esp, 0x10c
// 007b0089  c22000               ret 0x20

struct TextureProxyBase {
    virtual void f();
    unsigned char pad[0x54];
};

struct TextureRef {
    void* ptr;
    TextureRef();
    ~TextureRef();
    TextureRef(const TextureRef&);
    TextureRef& operator=(const TextureRef&);
};

struct TextureProxy : TextureProxyBase {
    unsigned char b0;
    unsigned char b1;
    unsigned char b2;
    unsigned char b3;
    unsigned char b4;
    unsigned char b5;
    unsigned char b6;
    unsigned char pad7;
    float f8;
    float fc;
    float f10;
    TextureRef texture;
    void construct(const TextureRef&, int, int, int, int, int, int, int, int);
};

extern "C" int __cdecl sub_4837E0(int);
extern "C" void __cdecl sub_503960(void*);
extern "C" void __cdecl sub_506A60(void*, void*);
extern "C" void __cdecl sub_506C80(void*, void*, int, void*);
extern "C" void __cdecl sub_503000(void*, void*);
extern "C" void __cdecl sub_5026D0(void*, int, int);
extern "C" void __cdecl sub_6A067A(void*);
extern "C" void* __cdecl sub_7AFC60(void*, void*);
extern "C" void* __cdecl sub_7B1580(void*, void*);
extern "C" void* __cdecl sub_7B1650(void*);
extern "C" void* __cdecl sub_7B2520(void*, void*);
extern "C" void* __cdecl sub_501D80(void*, void*);

extern float g_827490;
extern float g_82748C;
extern float g_827488;
extern float g_827494;
extern float g_874D88;
extern double g_96F018;
extern int g_96F020;
extern double* g_8024AC;
extern void* g_8021AC;
extern void* g_8021B0;

void TextureProxy::construct(const TextureRef& tex, int a, int b, int c, int d, int e, int f, int g, int h)
{
    void* p = tex.ptr;
    int v44 = *(int*)((char*)p + 0x44);
    int v50 = *(int*)((char*)p + 0x50);
    int ebx = 8;
    if (v50 < 8) ebx = v50;
    int r = sub_4837E0(0xD31) - 3;
    if (v44 < r) r = v44;
    fc = 1.0f;
    f10 = 0.0f;
    b3 = 0;
    b1 = 1;
    b0 = 0;
    b2 = 0;
    b4 = 0;
    b5 = 0;
    b6 = 0;
    int ecx = (r > 0) ? 0 : -1;
    ecx &= r;
    if ((g_96F020 & 1) == 0) {
        g_96F020 |= 1;
        g_96F018 = *g_8024AC;
    }
    f8 = -(float)g_96F018;
    sub_503960((void*)&texture);
    sub_506A60((void*)texture.ptr, p);
    sub_4837E0(0xD57);
    float t = *(float*)((char*)&tex + 0);
    (void)t;
    if (!(g_827490 < *(float*)((char*)&a))) {
        b3 = 1;
    }
    fc = g_82748C * *(float*)((char*)&a);
    if (!(g_874D88 < *(float*)((char*)&a))) {
        b5 = 1;
    }
    f10 = *(float*)((char*)&a) * g_827488 - g_827494;
    if (*(unsigned char*)((char*)&b) != 0 && ebx > 0) {
        b0 = 1;
        ebx = 1;
        if (ecx != 0) {
            b1 = 0;
        }
    }
    {
        void* q = texture.ptr;
        int v4c = *(int*)((char*)q + 0x4C);
        int v50b = *(int*)((char*)q + 0x50);
        int end = v50b + v4c * 0x50;
        int cnt = (end - v4c) / 0x50;
        sub_506C80((void*)v4c, (void*)end, cnt, (void*)0x5058F0);
    }
    {
        void* q = texture.ptr;
        int v50c = *(int*)((char*)q + 0x50);
        int n = v50c - ebx;
        if (0 < n) {
            int i = 0;
            while (i < n) {
                void* q2 = texture.ptr;
                int v50d = *(int*)((char*)q2 + 0x50);
                int idx = v50d - n + i;
                void* elem = (void*)(*(int*)((char*)q2 + 0x4C) + idx * 0x50);
                sub_503000((void*)((char*)q2 + 0x40), elem);
                i++;
            }
            void* q3 = texture.ptr;
            int v50e = *(int*)((char*)q3 + 0x50);
            sub_5026D0((void*)((char*)q3 + 0x4C), v50e - n, 1);
        }
    }
    {
        void* q = texture.ptr;
        int v40 = *(int*)((char*)q + 0x40);
        int v44b = *(int*)((char*)q + 0x44);
        int end = v40 + v44b * 0x50;
        int cnt = (end - v40) / 0x50;
        sub_506C80((void*)v40, (void*)end, cnt, (void*)0x5058F0);
    }
    {
        void* q = texture.ptr;
        int v44c = *(int*)((char*)q + 0x44);
        int n = v44c - ecx;
        if (n > 0) {
            int v44d = *(int*)((char*)q + 0x44);
            sub_5026D0((void*)((char*)q + 0x40), v44d - n, 1);
        }
    }
    b2 = (b0 == 0) ? 1 : 0;
    {
        void* q = texture.ptr;
        int v44e = *(int*)((char*)q + 0x44);
        int i = 0;
        while (i < v44e) {
            void* q2 = texture.ptr;
            i++;
            if (i >= *(int*)((char*)q2 + 0x44)) break;
        }
    }
    {
        void* q = texture.ptr;
        int v50f = *(int*)((char*)q + 0x50);
        int i = 0;
        while (i < v50f) {
            void* q2 = texture.ptr;
            i++;
            if (i >= *(int*)((char*)q2 + 0x50)) break;
        }
    }
    if (b4 != 0) {
        void* t1 = sub_7AFC60((void*)&texture, (void*)0);
        sub_7B1650(t1);
        void* t2 = sub_7AFC60((void*)&texture, (void*)&tex);
        void* t3 = sub_7B2520(t2, (void*)&tex);
        void* nb = *(void**)t3;
        void* old = texture.ptr;
        if (nb != old) {
            if (old != 0) {
                if (((int(__stdcall*)(void*))g_8021AC)((char*)old + 4) == 0) {
                    void* node = *(void**)((char*)old + 8);
                    while (node != 0) {
                        void* vt = *(void**)node;
                        ((void(__thiscall*)(void*))(*(void**)((char*)vt + 4)))(node);
                        void* cur = node;
                        node = *(void**)((char*)node + 4);
                        sub_6A067A(cur);
                    }
                    if (old != 0) {
                        void* vt = *(void**)old;
                        ((void(__thiscall*)(void*, int))(*(void**)vt))(old, 1);
                    }
                }
            }
            texture.ptr = 0;
        }
        if (nb != 0) {
            texture.ptr = nb;
            ((void(__stdcall*)(void*))g_8021B0)((char*)nb + 4);
        }
    }
    {
        void* tmp = (void*)0;
        if (tmp != 0) {
            if (((int(__stdcall*)(void*))g_8021AC)((char*)tmp + 4) == 0) {
                void* node = *(void**)((char*)tmp + 8);
                while (node != 0) {
                    void* vt = *(void**)node;
                    ((void(__thiscall*)(void*))(*(void**)((char*)vt + 4)))(node);
                    void* cur = node;
                    node = *(void**)((char*)node + 4);
                    sub_6A067A(cur);
                }
                if (tmp != 0) {
                    void* vt = *(void**)tmp;
                    ((void(__thiscall*)(void*, int))(*(void**)vt))(tmp, 1);
                }
            }
        }
    }
    void* t4 = sub_7AFC60((void*)&tex, (void*)&h);
    void* t5 = sub_7B1580(t4, (void*)&h);
    sub_501D80((void*)this, t5);
}
