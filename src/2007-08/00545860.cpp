// from server: 37% by colin
// roc 2007-08 00545860  unit: RBX::MD5HasherImpl  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00545860
//
// 00545860  6aff                 push -1
// 00545862  681bb67500           push 0x75b61b
// 00545867  64a100000000         mov eax, dword ptr fs:[0]
// 0054586d  50                   push eax
// 0054586e  64892500000000       mov dword ptr fs:[0], esp
// 00545875  51                   push ecx
// 00545876  6a28                 push 0x28
// 00545878  e879a60e00           call 0x62fef6
// 0054587d  83c404               add esp, 4
// 00545880  890424               mov dword ptr [esp], eax
// 00545883  85c0                 test eax, eax
// 00545885  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0054588d  7416                 je 0x5458a5
// 0054588f  8bc8                 mov ecx, eax
// 00545891  e86afcffff           call 0x545500
// 00545896  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0054589a  64890d00000000       mov dword ptr fs:[0], ecx
// 005458a1  83c410               add esp, 0x10
// 005458a4  c3                   ret 
// 005458a5  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005458a9  33c0                 xor eax, eax
// 005458ab  64890d00000000       mov dword ptr fs:[0], ecx
// 005458b2  83c410               add esp, 0x10
// 005458b5  c3                   ret 

struct MD5HasherImpl {
    void* context;
    MD5HasherImpl();
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl MD5_Init(void* ctx);

MD5HasherImpl::MD5HasherImpl()
{
    context = operator_new(0x28);
    if (context) {
        MD5_Init(context);
    }
}
