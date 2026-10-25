// from server: 37% by atomic.potato
// roc 2011-06 007f4ed0  unit: RBX::HUMAN::GettingUp  size: 311 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007f4ed0
//
// 007f4ed0  83ec20               sub esp, 0x20
// 007f4ed3  55                   push ebp
// 007f4ed4  56                   push esi
// 007f4ed5  8be9                 mov ebp, ecx
// 007f4ed7  e8e4a10e00           call 0x8df0c0
// 007f4edc  8bc8                 mov ecx, eax
// 007f4ede  e8fdc4e8ff           call 0x6813e0
// 007f4ee3  8bf0                 mov esi, eax
// 007f4ee5  85f6                 test esi, esi
// 007f4ee7  0f8412010000         je 0x7f4fff
// 007f4eed  53                   push ebx
// 007f4eee  8bcd                 mov ecx, ebp
// 007f4ef0  e89b6efaff           call 0x79bd90
// 007f4ef5  8bd8                 mov ebx, eax
// 007f4ef7  85db                 test ebx, ebx
// 007f4ef9  0f84ff000000         je 0x7f4ffe
// 007f4eff  57                   push edi
// 007f4f00  8b7e34               mov edi, dword ptr [esi + 0x34]
// 007f4f03  85ff                 test edi, edi
// 007f4f05  740e                 je 0x7f4f15
// 007f4f07  8bcf                 mov ecx, edi
// 007f4f09  e8523ffcff           call 0x7b8e60
// 007f4f0e  f30f104714           movss xmm0, dword ptr [edi + 0x14]
// 007f4f13  eb08                 jmp 0x7f4f1d
// 007f4f15  f30f108698000000     movss xmm0, dword ptr [esi + 0x98]
// 007f4f1d  8b8308010000         mov eax, dword ptr [ebx + 0x108]
// 007f4f23  8b7034               mov esi, dword ptr [eax + 0x34]
// 007f4f26  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 007f4f2c  5f                   pop edi
// 007f4f2d  85f6                 test esi, esi
// 007f4f2f  740e                 je 0x7f4f3f
// 007f4f31  8bce                 mov ecx, esi
// 007f4f33  e8283ffcff           call 0x7b8e60
// 007f4f38  f30f104614           movss xmm0, dword ptr [esi + 0x14]
// 007f4f3d  eb08                 jmp 0x7f4f47
// 007f4f3f  f30f108098000000     movss xmm0, dword ptr [eax + 0x98]
// 007f4f47  f30f104c240c         movss xmm1, dword ptr [esp + 0xc]
// 007f4f4d  0f2fc8               comiss xmm1, xmm0
// 007f4f50  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 007f4f56  8d442410             lea eax, [esp + 0x10]
// 007f4f5a  7704                 ja 0x7f4f60
// 007f4f5c  8d44240c             lea eax, [esp + 0xc]
// 007f4f60  f30f1000             movss xmm0, dword ptr [eax]
// 007f4f64  b801000000           mov eax, 1
// 007f4f69  f30f11442410         movss dword ptr [esp + 0x10], xmm0
// 007f4f6f  0f57c0               xorps xmm0, xmm0
// 007f4f72  84058056cd00         test byte ptr [0xcd5680], al
// 007f4f78  7526                 jne 0x7f4fa0
// 007f4f7a  f30f100d60c4ab00     movss xmm1, dword ptr [0xabc460]
// 007f4f82  09058056cd00         or dword ptr [0xcd5680], eax
// 007f4f88  f30f11057456cd00     movss dword ptr [0xcd5674], xmm0
// 007f4f90  f30f110d7856cd00     movss dword ptr [0xcd5678], xmm1
// 007f4f98  f30f11057c56cd00     movss dword ptr [0xcd567c], xmm0
// 007f4fa0  8d442420             lea eax, [esp + 0x20]
// 007f4fa4  687456cd00           push 0xcd5674
// 007f4fa9  50                   push eax
// 007f4faa  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 007f4fb0  e81b65ffff           call 0x7eb4d0
// 007f4fb5  8b8b08010000         mov ecx, dword ptr [ebx + 0x108]
// 007f4fbb  f30f104004           movss xmm0, dword ptr [eax + 4]
// 007f4fc0  f30f59442418         mulss xmm0, dword ptr [esp + 0x18]
// 007f4fc6  f30f59442438         mulss xmm0, dword ptr [esp + 0x38]
// 007f4fcc  8b5130               mov edx, dword ptr [ecx + 0x30]
// 007f4fcf  f30f5905685ba700     mulss xmm0, dword ptr [0xa75b68]
// 007f4fd7  8b4a38               mov ecx, dword ptr [edx + 0x38]
// 007f4fda  83c408               add esp, 8
// 007f4fdd  f30f11442418         movss dword ptr [esp + 0x18], xmm0
// 007f4fe3  0f57c0               xorps xmm0, xmm0
// 007f4fe6  f30f1144241c         movss dword ptr [esp + 0x1c], xmm0
// 007f4fec  85c9                 test ecx, ecx
// 007f4fee  740e                 je 0x7f4ffe
// 007f4ff0  83c538               add ebp, 0x38
// 007f4ff3  55                   push ebp
// 007f4ff4  8d442418             lea eax, [esp + 0x18]
// 007f4ff8  50                   push eax
// 007f4ff9  e89296e6ff           call 0x65e690
// 007f4ffe  5b                   pop ebx
// 007f4fff  5e                   pop esi
// 007f5000  5d                   pop ebp
// 007f5001  83c420               add esp, 0x20
// 007f5004  c20400               ret 4

struct Sub1 { char pad[0x14]; float f14; };
struct Sub2 { char pad[0x98]; float f98; };
struct Sub3 { char pad[0x30]; void* p30; };
struct Sub4 { char pad[0x34]; void* p34; };
struct Sub5 { char pad[0x38]; void* p38; };
struct Sub6 { char pad[0x108]; Sub3* p108; };

extern "C" int __cdecl f_8df0c0();
extern "C" int __cdecl f_6813e0(int);
extern "C" int __cdecl f_79bd90();
extern "C" void __cdecl f_7b8e60();
extern "C" int __cdecl f_7eb4d0(void*, void*);
extern "C" void __cdecl f_65e690(void*, void*);

extern float g_a75b68;
extern float g_abc460;
extern float g_cd5674;
extern float g_cd5678;
extern float g_cd567c;
extern int g_cd5680;

struct S {
    char pad[0x38];
    int f38;
    void func(int);
};

void S::func(int)
{
    int v = f_8df0c0();
    int esi = f_6813e0(v);
    if (esi == 0)
        return;
    int ebx = f_79bd90();
    if (ebx == 0)
        return;
    Sub4* edi = (Sub4*)((Sub4*)esi)->p34;
    float xmm0;
    if (edi != 0) {
        f_7b8e60();
        xmm0 = ((Sub1*)edi)->f14;
    } else {
        xmm0 = ((Sub2*)esi)->f98;
    }
    Sub6* eax6 = ((Sub6*)ebx);
    Sub4* esi2 = (Sub4*)eax6->p108->p30;
    float s10 = xmm0;
    if (esi2 != 0) {
        f_7b8e60();
        xmm0 = ((Sub1*)esi2)->f14;
    } else {
        xmm0 = ((Sub2*)eax6->p108)->f98;
    }
    float s0c;
    if (s0c > xmm0) {
        s10 = xmm0;
    } else {
        s10 = s0c;
    }
    float xmm0b = s10;
    float zero = 0.0f;
    if ((g_cd5680 & 1) == 0) {
        float xmm1 = g_abc460;
        g_cd5680 |= 1;
        g_cd5674 = zero;
        g_cd5678 = xmm1;
        g_cd567c = zero;
    }
    float tmp;
    f_7eb4d0(&tmp, &g_cd5674);
    Sub3* ecx3 = ((Sub6*)ebx)->p108;
    float xmm0c = ((float*)&tmp)[1];
    xmm0c *= s10;
    xmm0c *= ((float*)&tmp)[2];
    xmm0c *= g_a75b68;
    void* ecx4 = ((Sub5*)ecx3)->p38;
    float s18 = xmm0c;
    float s1c = 0.0f;
    if (ecx4 != 0) {
        f_65e690(&s18, &this->f38);
    }
}
