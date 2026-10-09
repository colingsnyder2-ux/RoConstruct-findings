// from server: 50% by colin
// roc 2007-08 005e5f10  unit: RBX::NullTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e5f10
//
// 005e5f10  6aff                 push -1
// 005e5f12  681bb67500           push 0x75b61b
// 005e5f17  64a100000000         mov eax, dword ptr fs:[0]
// 005e5f1d  50                   push eax
// 005e5f1e  64892500000000       mov dword ptr fs:[0], esp
// 005e5f25  51                   push ecx
// 005e5f26  56                   push esi
// 005e5f27  57                   push edi
// 005e5f28  6a20                 push 0x20
// 005e5f2a  8bf9                 mov edi, ecx
// 005e5f2c  e8c59f0400           call 0x62fef6
// 005e5f31  8bf0                 mov esi, eax
// 005e5f33  83c404               add esp, 4
// 005e5f36  89742408             mov dword ptr [esp + 8], esi
// 005e5f3a  33c0                 xor eax, eax
// 005e5f3c  3bf0                 cmp esi, eax
// 005e5f3e  89442414             mov dword ptr [esp + 0x14], eax
// 005e5f42  741a                 je 0x5e5f5e
// 005e5f44  8b4718               mov eax, dword ptr [edi + 0x18]
// 005e5f47  50                   push eax
// 005e5f48  8bce                 mov ecx, esi
// 005e5f4a  e8c1ddffff           call 0x5e3d10
// 005e5f4f  c70624d27b00         mov dword ptr [esi], 0x7bd224
// 005e5f55  c746040cd27b00       mov dword ptr [esi + 4], 0x7bd20c
// 005e5f5c  8bc6                 mov eax, esi
// 005e5f5e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e5f62  5f                   pop edi
// 005e5f63  5e                   pop esi
// 005e5f64  64890d00000000       mov dword ptr fs:[0], ecx
// 005e5f6b  83c410               add esp, 0x10
// 005e5f6e  c3                   ret 

struct NullTool {
    char pad[0x18];
    int field_18;
    void* create();
};

struct Alloc {
    void* __thiscall ctor(int);
};

extern "C" void* __cdecl func_0062fef6(unsigned int);

void* NullTool::create()
{
    void* p = func_0062fef6(0x20);
    if (p) {
        ((Alloc*)p)->ctor(field_18);
        *(int*)p = 0x7bd224;
        *(int*)((char*)p + 4) = 0x7bd20c;
    }
    return p;
}
