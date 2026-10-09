// from server: 60% by colin
// roc 2007-08 004a8650  unit: RBX::Network::VClient::?$FactoryProduct  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8650
//
// 004a8650  56                   push esi
// 004a8651  8bf1                 mov esi, ecx
// 004a8653  e898780500           call 0x4ffef0
// 004a8658  d9442410             fld dword ptr [esp + 0x10]
// 004a865c  dc3560647900         fdiv qword ptr [0x796460]
// 004a8662  dec1                 faddp st(1)
// 004a8664  dd5c240c             fstp qword ptr [esp + 0xc]
// 004a8668  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a866b  8b01                 mov eax, dword ptr [ecx]
// 004a866d  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004a8670  ffd2                 call edx
// 004a8672  85c0                 test eax, eax
// 004a8674  741b                 je 0x4a8691
// 004a8676  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004a8679  8b11                 mov edx, dword ptr [ecx]
// 004a867b  50                   push eax
// 004a867c  8b4240               mov eax, dword ptr [edx + 0x40]
// 004a867f  ffd0                 call eax
// 004a8681  e86a780500           call 0x4ffef0
// 004a8686  dc5c240c             fcomp qword ptr [esp + 0xc]
// 004a868a  dfe0                 fnstsw ax
// 004a868c  f6c405               test ah, 5
// 004a868f  7bd7                 jnp 0x4a8668
// 004a8691  68604e4a00           push 0x4a4e60
// 004a8696  8d8e14ffffff         lea ecx, [esi - 0xec]
// 004a869c  e89ff8fdff           call 0x487f40
// 004a86a1  5e                   pop esi
// 004a86a2  c20c00               ret 0xc

struct VClient {
    char pad[0xc];
    void* ptr0c;
    void func(float a, int b, int c);
};

extern "C" void __stdcall func_004ffef0();
extern "C" void __stdcall func_00487f40(void*);
extern double g_796460;
extern char g_4a4e60;

void VClient::func(float a, int b, int c)
{
    func_004ffef0();
    double d = (double)a / g_796460;
    d = d + 0.0;
    for (;;)
    {
        void* p = ptr0c;
        void* vt = *(void**)p;
        void* (__stdcall *get)(void*) = *(void* (__stdcall**)(void*))((char*)vt + 0x3c);
        void* r = get(p);
        if (r == 0)
            break;
        void* vt2 = *(void**)ptr0c;
        void (__stdcall *set)(void*, void*) = *(void (__stdcall**)(void*, void*))((char*)vt2 + 0x40);
        set(ptr0c, r);
        func_004ffef0();
        double cur = d;
        if (!(cur == d))
            continue;
        break;
    }
    func_00487f40((char*)this - 0xec);
}
