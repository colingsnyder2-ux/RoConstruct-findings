// from server: 45% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 44% by colin
// roc 2008-06 004f8e50  unit: RBX::ViewNew::WedgeBuilder  size: 719 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f8e50
//
// 004f8e50  83ec40               sub esp, 0x40
// 004f8e53  53                   push ebx
// 004f8e54  55                   push ebp
// 004f8e55  8b6910               mov ebp, dword ptr [ecx + 0x10]
// 004f8e58  56                   push esi
// 004f8e59  894c2410             mov dword ptr [esp + 0x10], ecx
// 004f8e5d  57                   push edi
// 004f8e5e  83c104               add ecx, 4
// 004f8e61  51                   push ecx
// 004f8e62  8d44243c             lea eax, [esp + 0x3c]
// 004f8e66  83e507               and ebp, 7
// 004f8e69  50                   push eax
// 004f8e6a  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004f8e6e  e82d330f00           call 0x5ec1a0
// 004f8e73  d9442448             fld dword ptr [esp + 0x48]
// 004f8e77  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 004f8e7b  d9e1                 fabs 
// 004f8e7d  d9442444             fld dword ptr [esp + 0x44]
// 004f8e81  83c408               add esp, 8
// 004f8e84  d9e1                 fabs 
// 004f8e86  d9442438             fld dword ptr [esp + 0x38]
// 004f8e8a  d9e1                 fabs 
// 004f8e8c  d9542444             fst dword ptr [esp + 0x44]
// 004f8e90  d9c9                 fxch st(1)
// 004f8e92  d9542448             fst dword ptr [esp + 0x48]
// 004f8e96  d9ca                 fxch st(2)
// 004f8e98  d95c244c             fstp dword ptr [esp + 0x4c]
// 004f8e9c  85c9                 test ecx, ecx
// 004f8e9e  750d                 jne 0x4f8ead
// 004f8ea0  ded9                 fcompp 
// 004f8ea2  dfe0                 fnstsw ax
// 004f8ea4  f6c405               test ah, 5
// 004f8ea7  7a08                 jp 0x4f8eb1
// 004f8ea9  b001                 mov al, 1
// 004f8eab  eb06                 jmp 0x4f8eb3
// 004f8ead  ddd8                 fstp st(0)
// 004f8eaf  ddd8                 fstp st(0)
// 004f8eb1  32c0                 xor al, al
// 004f8eb3  33d2                 xor edx, edx
// 004f8eb5  84c0                 test al, al
// 004f8eb7  0f94c2               sete dl
// 004f8eba  8bf2                 mov esi, edx
// 004f8ebc  85c9                 test ecx, ecx
// 004f8ebe  752f                 jne 0x4f8eef
// 004f8ec0  85ed                 test ebp, ebp
// 004f8ec2  742b                 je 0x4f8eef
// 004f8ec4  d944b444             fld dword ptr [esp + esi*4 + 0x44]
// 004f8ec8  83ec08               sub esp, 8
// 004f8ecb  d80dac9b8100         fmul dword ptr [0x819bac]
// 004f8ed1  dd1c24               fstp qword ptr [esp]
// 004f8ed4  ff15ec278000         call dword ptr [0x8027ec]
// 004f8eda  d95c2420             fstp dword ptr [esp + 0x20]
// 004f8ede  83c408               add esp, 8
// 004f8ee1  d9442418             fld dword ptr [esp + 0x18]
// 004f8ee5  db5c2410             fistp dword ptr [esp + 0x10]
// 004f8ee9  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004f8eed  eb05                 jmp 0x4f8ef4
// 004f8eef  bb01000000           mov ebx, 1
// 004f8ef4  33c9                 xor ecx, ecx
// 004f8ef6  33c0                 xor eax, eax
// 004f8ef8  66894c2412           mov word ptr [esp + 0x12], cx
// 004f8efd  8d0c36               lea ecx, [esi + esi]
// 004f8f00  8d54245e             lea edx, [esp + 0x5e]
// 004f8f04  2bd1                 sub edx, ecx
// 004f8f06  0fb73a               movzx edi, word ptr [edx]
// 004f8f09  6689442410           mov word ptr [esp + 0x10], ax
// 004f8f0e  0fbfc7               movsx eax, di
// 004f8f11  99                   cdq 
// 004f8f12  f7fb                 idiv ebx
// 004f8f14  ba01000000           mov edx, 1
// 004f8f19  c744242001000000     mov dword ptr [esp + 0x20], 1
// 004f8f21  0fb7c0               movzx eax, ax
// 004f8f24  89442418             mov dword ptr [esp + 0x18], eax
// 004f8f28  663bd0               cmp dx, ax
// 004f8f2b  8d442418             lea eax, [esp + 0x18]
// 004f8f2f  7c04                 jl 0x4f8f35
// 004f8f31  8d442420             lea eax, [esp + 0x20]
// 004f8f35  668b00               mov ax, word ptr [eax]
// 004f8f38  d944244c             fld dword ptr [esp + 0x4c]
// 004f8f3c  6689440c10           mov word ptr [esp + ecx + 0x10], ax
// 004f8f41  d95c2420             fstp dword ptr [esp + 0x20]
// 004f8f45  8d542412             lea edx, [esp + 0x12]
// 004f8f49  2bd1                 sub edx, ecx
// 004f8f4b  8d442438             lea eax, [esp + 0x38]
// 004f8f4f  50                   push eax
// 004f8f50  8d4c2448             lea ecx, [esp + 0x48]
// 004f8f54  66893a               mov word ptr [edx], di
// 004f8f57  e874f60100           call 0x5185d0
// 004f8f5c  d900                 fld dword ptr [eax]
// 004f8f5e  d9e0                 fchs 
// 004f8f60  8d4c2430             lea ecx, [esp + 0x30]
// 004f8f64  d94004               fld dword ptr [eax + 4]
// 004f8f67  51                   push ecx
// 004f8f68  d9e0                 fchs 
// 004f8f6a  8d4c2448             lea ecx, [esp + 0x48]
// 004f8f6e  d9c9                 fxch st(1)
// 004f8f70  d95c243c             fstp dword ptr [esp + 0x3c]
// 004f8f74  d95c2440             fstp dword ptr [esp + 0x40]
// 004f8f78  e853f60100           call 0x5185d0
// 004f8f7d  d9ee                 fldz 
// 004f8f7f  8b442460             mov eax, dword ptr [esp + 0x60]
// 004f8f83  83e800               sub eax, 0
// 004f8f86  d9542428             fst dword ptr [esp + 0x28]
// 004f8f8a  d954242c             fst dword ptr [esp + 0x2c]
// 004f8f8e  d9542418             fst dword ptr [esp + 0x18]
// 004f8f92  d954241c             fst dword ptr [esp + 0x1c]
// 004f8f96  7444                 je 0x4f8fdc
// 004f8f98  83e801               sub eax, 1
// 004f8f9b  741e                 je 0x4f8fbb
// 004f8f9d  83e801               sub eax, 1
// 004f8fa0  0f85ac000000         jne 0x4f9052
// 004f8fa6  d9542428             fst dword ptr [esp + 0x28]
// 004f8faa  d954242c             fst dword ptr [esp + 0x2c]
// 004f8fae  d9542418             fst dword ptr [esp + 0x18]
// 004f8fb2  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f8fb6  e999000000           jmp 0x4f9054
// 004f8fbb  8b442414             mov eax, dword ptr [esp + 0x14]
// 004f8fbf  d95c2428             fstp dword ptr [esp + 0x28]
// 004f8fc3  d9401c               fld dword ptr [eax + 0x1c]
// 004f8fc6  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f8fca  d94018               fld dword ptr [eax + 0x18]
// 004f8fcd  d95c2418             fstp dword ptr [esp + 0x18]
// 004f8fd1  d9401c               fld dword ptr [eax + 0x1c]
// 004f8fd4  d9e0                 fchs 
// 004f8fd6  d95c241c             fstp dword ptr [esp + 0x1c]
// 004f8fda  eb78                 jmp 0x4f9054
// 004f8fdc  85ed                 test ebp, ebp
// 004f8fde  7529                 jne 0x4f9009
// 004f8fe0  d905e4a38300         fld dword ptr [0x83a3e4]
// 004f8fe6  8d04b500000000       lea eax, [esi*4]
// 004f8fed  d95c2428             fstp dword ptr [esp + 0x28]
// 004f8ff1  8d54241c             lea edx, [esp + 0x1c]
// 004f8ff5  d905ac9b8100         fld dword ptr [0x819bac]
// 004f8ffb  2bd0                 sub edx, eax
// 004f8ffd  d95c242c             fstp dword ptr [esp + 0x2c]
// 004f9001  d912                 fst dword ptr [edx]
// 004f9003  d95c0418             fstp dword ptr [esp + eax + 0x18]
// 004f9007  eb4b                 jmp 0x4f9054
// 004f9009  8d3cb500000000       lea edi, [esi*4]
// 004f9010  8d44242c             lea eax, [esp + 0x2c]
// 004f9014  2bc7                 sub eax, edi
// 004f9016  55                   push ebp
// 004f9017  d918                 fstp dword ptr [eax]
// 004f9019  e8d28fffff           call 0x4f1ff0
// 004f901e  d95c3c2c             fstp dword ptr [esp + edi + 0x2c]
// 004f9022  8d4c244c             lea ecx, [esp + 0x4c]
// 004f9026  2bcf                 sub ecx, edi
// 004f9028  d901                 fld dword ptr [ecx]
// 004f902a  8d542420             lea edx, [esp + 0x20]
// 004f902e  dcc0                 fadd st(0), st(0)
// 004f9030  2bd7                 sub edx, edi
// 004f9032  83c404               add esp, 4
// 004f9035  d91a                 fstp dword ptr [edx]
// 004f9037  d905ac9b8100         fld dword ptr [0x819bac]
// 004f903d  d95c3c18             fstp dword ptr [esp + edi + 0x18]
// 004f9041  83fe01               cmp esi, 1
// 004f9044  750e                 jne 0x4f9054
// 004f9046  d9442418             fld dword ptr [esp + 0x18]
// 004f904a  d9e0                 fchs 
// 004f904c  d95c2418             fstp dword ptr [esp + 0x18]
// 004f9050  eb02                 jmp 0x4f9054
// 004f9052  ddd8                 fstp st(0)
// 004f9054  33ff                 xor edi, edi
// 004f9056  85db                 test ebx, ebx
// 004f9058  0f8eb7000000         jle 0x4f9115
// 004f905e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004f9062  8d43ff               lea eax, [ebx - 1]
// 004f9065  3bf8                 cmp edi, eax
// 004f9067  752a                 jne 0x4f9093
// 004f9069  837c246000           cmp dword ptr [esp + 0x60], 0
// 004f906e  d944b444             fld dword ptr [esp + esi*4 + 0x44]
// 004f9072  d954b430             fst dword ptr [esp + esi*4 + 0x30]
// 004f9076  752b                 jne 0x4f90a3
// 004f9078  837c242400           cmp dword ptr [esp + 0x24], 0
// 004f907d  7424                 je 0x4f90a3
// 004f907f  d864b438             fsub dword ptr [esp + esi*4 + 0x38]
// 004f9083  d84cb418             fmul dword ptr [esp + esi*4 + 0x18]
// 004f9087  d80de4a38300         fmul dword ptr [0x83a3e4]
// 004f908d  d95cb418             fstp dword ptr [esp + esi*4 + 0x18]
// 004f9091  eb12                 jmp 0x4f90a5
// 004f9093  d944b438             fld dword ptr [esp + esi*4 + 0x38]
// 004f9097  d8056c6e8200         fadd dword ptr [0x826e6c]
// 004f909d  d95cb430             fstp dword ptr [esp + esi*4 + 0x30]
// 004f90a1  eb02                 jmp 0x4f90a5
// 004f90a3  ddd8                 fstp st(0)
// 004f90a5  d9442418             fld dword ptr [esp + 0x18]
// 004f90a9  55                   push ebp
// 004f90aa  56                   push esi
// 004f90ab  83ec08               sub esp, 8
// 004f90ae  8bc4                 mov eax, esp
// 004f90b0  d918                 fstp dword ptr [eax]
// 004f90b2  83ec08               sub esp, 8
// 004f90b5  d9442434             fld dword ptr [esp + 0x34]
// 004f90b9  8d4c2448             lea ecx, [esp + 0x48]
// 004f90bd  d95804               fstp dword ptr [eax + 4]
// 004f90c0  8bc4                 mov eax, esp
// 004f90c2  d9442440             fld dword ptr [esp + 0x40]
// 004f90c6  83ec14               sub esp, 0x14
// 004f90c9  d918                 fstp dword ptr [eax]
// 004f90cb  8d542464             lea edx, [esp + 0x64]
// 004f90cf  d9442458             fld dword ptr [esp + 0x58]
// 004f90d3  d95804               fstp dword ptr [eax + 4]
// 004f90d6  8bc4                 mov eax, esp
// 004f90d8  d944244c             fld dword ptr [esp + 0x4c]
// 004f90dc  d95c2410             fstp dword ptr [esp + 0x10]
// 004f90e0  51                   push ecx
// 004f90e1  52                   push edx
// 004f90e2  50                   push eax
// 004f90e3  e8e8a4ffff           call 0x4f35d0
// 004f90e8  8b842490000000       mov eax, dword ptr [esp + 0x90]
// 004f90ef  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 004f90f6  83c40c               add esp, 0xc
// 004f90f9  50                   push eax
// 004f90fa  51                   push ecx
// 004f90fb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004f90ff  e88cecffff           call 0x4f7d90
// 004f9104  d944b430             fld dword ptr [esp + esi*4 + 0x30]
// 004f9108  47                   inc edi
// 004f9109  d95cb438             fstp dword ptr [esp + esi*4 + 0x38]
// 004f910d  3bfb                 cmp edi, ebx
// 004f910f  0f8c4dffffff         jl 0x4f9062
// 004f9115  5f                   pop edi
// 004f9116  5e                   pop esi
// 004f9117  5d                   pop ebp
// 004f9118  5b                   pop ebx
// 004f9119  83c440               add esp, 0x40
// 004f911c  c21000               ret 0x10

struct WedgeBuilder {
    char pad0[4];
    int field4;
    char pad8[8];
    int field10;
    int method(int a, int b, int c, int d);
};

extern "C" {
    int __cdecl sub_5EC1A0(int* a, int* b);
    void __cdecl sub_5185D0(float* a, float* b);
    float __cdecl sub_4F1FF0(int a);
    void __cdecl sub_4F35D0(float* a, float* b, float* c, int d, int e, float* f, float* g);
    void __cdecl sub_4F7D90(int a, int b, int c);
    double __cdecl ceil(double x);
}

extern float g_819bac;
extern float g_826e6c;
extern float g_83a3e4;

int WedgeBuilder::method(int a, int b, int c, int d)
{
    char buf[0x40];
    float* f44 = (float*)(buf + 0x04);
    float* f48 = (float*)(buf + 0x08);
    float* f4c = (float*)(buf + 0x0c);
    float* f18 = (float*)(buf + 0x18);
    float* f1c = (float*)(buf + 0x1c);
    float* f20 = (float*)(buf + 0x20);
    float* f24 = (float*)(buf + 0x24);
    float* f28 = (float*)(buf + 0x28);
    float* f2c = (float*)(buf + 0x2c);
    float* f30 = (float*)(buf + 0x30);
    float* f34 = (float*)(buf + 0x34);
    float* f38 = (float*)(buf + 0x38);
    float* f3c = (float*)(buf + 0x3c);
    float* f40 = (float*)(buf + 0x40);
    short* s10 = (short*)(buf + 0x10);
    short* s12 = (short*)(buf + 0x12);
    int* p10 = (int*)(buf + 0x10);
    int* p14 = (int*)(buf + 0x14);
    int* p18 = (int*)(buf + 0x18);
    int* p20 = (int*)(buf + 0x20);
    int* p24 = (int*)(buf + 0x24);

    int ebp = this->field10 & 7;
    *p10 = (int)this;

    sub_5EC1A0(&this->field4, (int*)(buf + 0x3c));

    float v44 = *f44;
    float v48 = *f48;
    float v38 = *f38;

    float af44 = v44 < 0 ? -v44 : v44;
    float af48 = v48 < 0 ? -v48 : v48;
    float af38 = v38 < 0 ? -v38 : v38;

    *f44 = af44;
    *f48 = af48;
    *f4c = af38;

    int ecx = *(int*)(buf + 0x58);
    bool al;
    if (ecx == 0) {
        al = (af44 == af48);
    } else {
        al = false;
    }
    int esi = al ? 0 : 1;

    int ebx;
    if (ecx == 0 && ebp != 0) {
        float v = *(float*)((char*)f44 + esi * 4);
        v = v * g_819bac;
        double dv = (double)v;
        float r = (float)ceil(dv);
        *f20 = r;
        ebx = *p10;
    } else {
        ebx = 1;
    }

    int ecx2 = esi + esi;
    short* edx = (short*)(buf + 0x4e - ecx2);
    unsigned short di = *(unsigned short*)edx;
    *s10 = 0;
    int eax = (int)(short)di;
    int idiv_result = eax / ebx;
    int edx2 = 1;
    *p20 = 1;
    unsigned short ax = (unsigned short)idiv_result;
    *p18 = (int)ax;
    short* ptr;
    if ((short)edx2 < (short)ax) {
        ptr = (short*)p18;
    } else {
        ptr = (short*)p20;
    }
    short ax2 = *ptr;
    float f4cv = *f4c;
    *(short*)((char*)s10 + ecx2) = ax2;
    *f20 = f4cv;
    short* edx3 = (short*)(buf + 0x02 - ecx2);
    *edx3 = (short)di;

    sub_5185D0(f48, f38);
    float* eax2 = f48;
    float v1 = -eax2[0];
    float v2 = -eax2[1];
    *f3c = v1;
    *f40 = v2;

    sub_5185D0(f48, f30);

    float zero = 0.0f;
    int eax3 = *(int*)(buf + 0x50);
    *f28 = zero;
    *f2c = zero;
    *f18 = zero;
    *f1c = zero;

    if (eax3 == 0) {
        if (ebp == 0) {
            float g1 = g_83a3e4;
            int eax4 = esi * 4;
            *f28 = g1;
            float g2 = g_819bac;
            *f2c = g2;
            float* edx4 = (float*)((char*)f1c - eax4);
            *edx4 = g2;
            *(float*)((char*)f18 + eax4) = g2;
        } else {
            int edi = esi * 4;
            float* eax5 = (float*)((char*)f2c - edi);
            *eax5 = zero;
            float r = sub_4F1FF0(ebp);
            *(float*)((char*)f2c + edi) = r;
            float* ecx3 = (float*)((char*)f4c - edi);
            float v3 = *ecx3;
            v3 = v3 + v3;
            float* edx5 = (float*)((char*)f20 - edi);
            *edx5 = v3;
            *(float*)((char*)f18 + edi) = g_819bac;
            if (esi == 1) {
                float v4 = *f18;
                v4 = -v4;
                *f18 = v4;
            }
        }
    } else if (eax3 == 1) {
        int eax6 = *p14;
        *f28 = zero;
        float v5 = *(float*)(eax6 + 0x1c);
        *f2c = v5;
        float v6 = *(float*)(eax6 + 0x18);
        *f18 = v6;
        float v7 = *(float*)(eax6 + 0x1c);
        v7 = -v7;
        *f1c = v7;
    } else if (eax3 == 2) {
        *f28 = zero;
        *f2c = zero;
        *f18 = zero;
        *f1c = zero;
    }

    int edi2 = 0;
    if (ebx > 0) {
        int ebp2 = *p10;
        do {
            int eax7 = ebx - 1;
            if (edi2 != eax7) {
                float v8 = *(float*)((char*)f38 + esi * 4);
                v8 = v8 + g_826e6c;
                *(float*)((char*)f30 + esi * 4) = v8;
            } else {
                float v9 = *(float*)((char*)f44 + esi * 4);
                *(float*)((char*)f30 + esi * 4) = v9;
                if (*(int*)(buf + 0x50) == 0 && *p24 != 0) {
                    float v10 = v9 - *(float*)((char*)f38 + esi * 4);
                    v10 = v10 * *(float*)((char*)f18 + esi * 4);
                    v10 = v10 * g_83a3e4;
                    *(float*)((char*)f18 + esi * 4) = v10;
                }
            }

            float f18v = *f18;
            float f2cv = *f2c;
            float f30v = *f30;
            float f38v = *f38;
            float f4c2 = *f4c;

            sub_4F35D0(&f18v, &f2cv, &f30v, ebp2, esi, &f38v, &f4c2);

            int a1 = *(int*)(buf + 0x58);
            int a2 = *(int*)(buf + 0x54);
            sub_4F7D90((int)this, a2, a1);

            float v11 = *(float*)((char*)f30 + esi * 4);
            edi2++;
            *(float*)((char*)f38 + esi * 4) = v11;
        } while (edi2 < ebx);
    }

    return 0;
}
