// from server: 100% by colin
// roc 2007-08 005bb0a0  unit: RBX::VModelInstance::?$FactoryProduct  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bb0a0
//
// 005bb0a0  8b442404             mov eax, dword ptr [esp + 4]
// 005bb0a4  56                   push esi
// 005bb0a5  50                   push eax
// 005bb0a6  8bf1                 mov esi, ecx
// 005bb0a8  e8e369f8ff           call 0x541a90
// 005bb0ad  b001                 mov al, 1
// 005bb0af  88862c010000         mov byte ptr [esi + 0x12c], al
// 005bb0b5  8886f9000000         mov byte ptr [esi + 0xf9], al
// 005bb0bb  888611010000         mov byte ptr [esi + 0x111], al
// 005bb0c1  5e                   pop esi
// 005bb0c2  c20400               ret 4

struct S_func_005bb0a0 {
    char pad0[0xf9];
    unsigned char m_f9;
    char pad1[0x111 - 0xfa];
    unsigned char m_111;
    char pad2[0x12c - 0x112];
    unsigned char m_12c;
    void f(void* arg);
};

extern "C" void __stdcall sub_00541a90(void* arg);

void S_func_005bb0a0::f(void* arg)
{
    sub_00541a90(arg);
    m_12c = 1;
    m_f9 = 1;
    m_111 = 1;
}
