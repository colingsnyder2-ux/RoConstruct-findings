// from server: 35% by colin
// roc 2007-08 0072669e  unit: boost::thread_resource_error  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0072669e
//
// 0072669e  33c0                 xor eax, eax
// 007266a0  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 007266a3  64890d00000000       mov dword ptr fs:[0], ecx
// 007266aa  59                   pop ecx
// 007266ab  5f                   pop edi
// 007266ac  5e                   pop esi
// 007266ad  5b                   pop ebx
// 007266ae  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 007266b1  33cd                 xor ecx, ebp
// 007266b3  e866a3f0ff           call 0x630a1e
// 007266b8  8be5                 mov esp, ebp
// 007266ba  5d                   pop ebp
// 007266bb  c20400               ret 4

extern "C" void __cdecl func_00630a1e();

struct S {
    void func_0072669e(int);
};

void S::func_0072669e(int)
{
    func_00630a1e();
}
