// from server: 41% by colin
// roc 2007-08 0041706a  unit: Marshaller  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041706a
//
// 0041706a  33c0                 xor eax, eax
// 0041706c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0041706f  64890d00000000       mov dword ptr fs:[0], ecx
// 00417076  59                   pop ecx
// 00417077  5f                   pop edi
// 00417078  5e                   pop esi
// 00417079  5b                   pop ebx
// 0041707a  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 0041707d  33cd                 xor ecx, ebp
// 0041707f  e89a992100           call 0x630a1e
// 00417084  8be5                 mov esp, ebp
// 00417086  5d                   pop ebp
// 00417087  c21000               ret 0x10

extern "C" void __cdecl __security_check_cookie(int cookie);

struct Marshaller {
    void destroy(unsigned int a, unsigned int b, unsigned int c, unsigned int d);
};

void Marshaller::destroy(unsigned int a, unsigned int b, unsigned int c, unsigned int d) {
    __security_check_cookie(0);
}
