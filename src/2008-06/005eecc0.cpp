// from server: 100% by king_originala
// roc 2008-06 005eecc0  unit: RBX::$00::?$SurfaceDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005eecc0
//
// 005eecc0  8b442404             mov eax, dword ptr [esp + 4]
// 005eecc4  85c0                 test eax, eax
// 005eecc6  7405                 je 0x5eeccd
// 005eecc8  8d48ec               lea ecx, [eax - 0x14]
// 005eeccb  eb02                 jmp 0x5eeccf
// 005eeccd  33c9                 xor ecx, ecx
// 005eeccf  e80ca1faff           call 0x598de0
// 005eecd4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005eecd8  8b542408             mov edx, dword ptr [esp + 8]
// 005eecdc  51                   push ecx
// 005eecdd  52                   push edx
// 005eecde  8bc8                 mov ecx, eax
// 005eece0  e8bb2a0000           call 0x5f17a0
// 005eece5  c20c00               ret 0xc

struct S_func_00598de0 {
    char pad0[500];
    int m_x;
    int* f();
};

struct S_func_005f17a0 {
    int f(int a2, int a3);
};

int __stdcall func_005eecc0(char* a1, int a2, int a3)
{
    S_func_00598de0* p =
        a1 ? reinterpret_cast<S_func_00598de0*>(a1 - 20) : 0;
    int* result = p->f();
    return reinterpret_cast<S_func_005f17a0*>(result)->f(a2, a3);
}
