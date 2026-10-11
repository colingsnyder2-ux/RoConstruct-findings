// from server: 48% by atomic.potato
// roc 2009-06 00621600  unit: RBX::RootInstance  size: 280 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00621600
//
// 00621600  83ec24               sub esp, 0x24
// 00621603  53                   push ebx
// 00621604  8b5c242c             mov ebx, dword ptr [esp + 0x2c]
// 00621608  8b430c               mov eax, dword ptr [ebx + 0xc]
// 0062160b  56                   push esi
// 0062160c  8bf1                 mov esi, ecx
// 0062160e  8b4b10               mov ecx, dword ptr [ebx + 0x10]
// 00621611  2bc8                 sub ecx, eax
// 00621613  83e1f8               and ecx, 0xfffffff8
// 00621616  57                   push edi
// 00621617  83f908               cmp ecx, 8
// 0062161a  7559                 jne 0x621675
// 0062161c  8b38                 mov edi, dword ptr [eax]
// 0062161e  6a00                 push 0
// 00621620  680499a000           push 0xa09904
// 00621625  6840be9d00           push 0x9dbe40
// 0062162a  6a00                 push 0
// 0062162c  57                   push edi
// 0062162d  e848860f00           call 0x719c7a
// 00621632  83c414               add esp, 0x14
// 00621635  85c0                 test eax, eax
// 00621637  741a                 je 0x621653
// 00621639  56                   push esi
// 0062163a  e801ffffff           call 0x621540
// 0062163f  83c404               add esp, 4
// 00621642  50                   push eax
// 00621643  8bcf                 mov ecx, edi
// 00621645  e80608fbff           call 0x5d1e50
// 0062164a  5f                   pop edi
// 0062164b  5e                   pop esi
// 0062164c  5b                   pop ebx
// 0062164d  83c424               add esp, 0x24
// 00621650  c21000               ret 0x10
// 00621653  6a00                 push 0
// 00621655  68c86f9e00           push 0x9e6fc8
// 0062165a  6840be9d00           push 0x9dbe40
// 0062165f  6a00                 push 0
// 00621661  57                   push edi
// 00621662  e813860f00           call 0x719c7a
// 00621667  83c414               add esp, 0x14
// 0062166a  85c0                 test eax, eax
// 0062166c  7407                 je 0x621675
// 0062166e  837c243c00           cmp dword ptr [esp + 0x3c], 0
// 00621673  74c4                 je 0x621639
// 00621675  8d54240c             lea edx, [esp + 0xc]
// 00621679  52                   push edx
// 0062167a  8bce                 mov ecx, esi
// 0062167c  e87ff3ffff           call 0x620a00
// 00621681  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00621685  57                   push edi
// 00621686  56                   push esi
// 00621687  53                   push ebx
// 00621688  8bce                 mov ecx, esi
// 0062168a  e891f5ffff           call 0x620c20
// 0062168f  807c244000           cmp byte ptr [esp + 0x40], 0
// 00621694  7579                 jne 0x62170f
// 00621696  8b4710               mov eax, dword ptr [edi + 0x10]
// 00621699  2b470c               sub eax, dword ptr [edi + 0xc]
// 0062169c  a9f8ffffff           test eax, 0xfffffff8
// 006216a1  746c                 je 0x62170f
// 006216a3  8d4c240c             lea ecx, [esp + 0xc]
// 006216a7  51                   push ecx
// 006216a8  57                   push edi
// 006216a9  8bce                 mov ecx, esi
// 006216ab  e820f4ffff           call 0x620ad0
// 006216b0  8d542418             lea edx, [esp + 0x18]
// 006216b4  57                   push edi
// 006216b5  52                   push edx
// 006216b6  e8852c0900           call 0x6b4340
// 006216bb  d944242c             fld dword ptr [esp + 0x2c]
// 006216bf  d8442420             fadd dword ptr [esp + 0x20]
// 006216c3  8b9618010000         mov edx, dword ptr [esi + 0x118]
// 006216c9  d9442430             fld dword ptr [esp + 0x30]
// 006216cd  8d8e18010000         lea ecx, [esi + 0x118]
// 006216d3  d8442424             fadd dword ptr [esp + 0x24]
// 006216d7  83c408               add esp, 8
// 006216da  d944242c             fld dword ptr [esp + 0x2c]
// 006216de  8d44240c             lea eax, [esp + 0xc]
// 006216e2  d8442420             fadd dword ptr [esp + 0x20]
// 006216e6  50                   push eax
// 006216e7  d9054cad8b00         fld dword ptr [0x8bad4c]
// 006216ed  8b4204               mov eax, dword ptr [edx + 4]
// 006216f0  dccb                 fmul st(3), st(0)
// 006216f2  d9cb                 fxch st(3)
// 006216f4  d95c2410             fstp dword ptr [esp + 0x10]
// 006216f8  d9c9                 fxch st(1)
// 006216fa  d8ca                 fmul st(2)
// 006216fc  d95c2414             fstp dword ptr [esp + 0x14]
// 00621700  dec9                 fmulp st(1)
// 00621702  d95c2418             fstp dword ptr [esp + 0x18]
// 00621706  ffd0                 call eax
// 00621708  8bc8                 mov ecx, eax
// 0062170a  e8217e0300           call 0x659530
// 0062170f  5f                   pop edi
// 00621710  5e                   pop esi
// 00621711  5b                   pop ebx
// 00621712  83c424               add esp, 0x24
// 00621715  c21000               ret 0x10

struct RBX_Instance;
struct RBX_ServiceProvider;

extern "C" void* __stdcall sub_719C7A(void*, void*, void*, void*, void*);
extern "C" void* __stdcall sub_6B4340(void*, void*);

struct RBX_RootInstance {
    char pad0[0xc];
    void* field_c;
    void* field_10;
    char pad14[0x104];
    void* field_118;
    void* field_11c;

    void sub_621600(void* arg0, void* arg1, void* arg2, char arg3);
};

void RBX_RootInstance::sub_621600(void* arg0, void* arg1, void* arg2, char arg3) {
    void* p = field_c;
    int n = (int)((char*)field_10 - (char*)field_c) & 0xfffffff8;
    if (n == 8) {
        void* v = *(void**)p;
        if (sub_719C7A(v, (void*)0x9dbe40, (void*)0xa09904, 0, 0)) {
            void* r = ((void* (__thiscall*)(void*))0x621540)(this);
            ((void (__thiscall*)(void*, void*))0x5d1e50)(v, r);
            return;
        }
        if (sub_719C7A(v, (void*)0x9dbe40, (void*)0x9e6fc8, 0, 0)) {
            if (arg2 == 0) {
                void* r = ((void* (__thiscall*)(void*))0x621540)(this);
                ((void (__thiscall*)(void*, void*))0x5d1e50)(v, r);
                return;
            }
        }
    }
    char buf[12];
    ((void (__thiscall*)(void*, void*))0x620a00)(this, buf);
    void* edi = arg1;
    ((void (__thiscall*)(void*, void*, void*, void*))0x620c20)(this, arg0, this, edi);
    if (arg3 != 0) return;
    if ((((int)((char*)field_10 - (char*)field_c)) & 0xfffffff8) == 0) return;
    ((void (__thiscall*)(void*, void*, void*))0x620ad0)(this, edi, buf);
    float tmp[3];
    sub_6B4340(tmp, edi);
    float f = *(float*)0x8bad4c;
    float x = tmp[0] + *(float*)(buf + 0);
    float y = tmp[1] + *(float*)(buf + 4);
    float z = tmp[2] + *(float*)(buf + 8);
    x *= f; y *= f; z *= f;
    void* vt = field_118;
    void* fn = *(void**)((char*)vt + 4);
    ((void (__thiscall*)(void*, float*))fn)(vt, tmp);
    ((void (__thiscall*)(void*, void*))0x659530)(this, 0);
}
