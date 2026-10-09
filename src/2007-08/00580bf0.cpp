// from server: 38% by colin
// roc 2007-08 00580bf0  unit: RBX::Log  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580bf0
//
// 00580bf0  55                   push ebp
// 00580bf1  8bec                 mov ebp, esp
// 00580bf3  6aff                 push -1
// 00580bf5  68c05b7500           push 0x755bc0
// 00580bfa  64a100000000         mov eax, dword ptr fs:[0]
// 00580c00  50                   push eax
// 00580c01  64892500000000       mov dword ptr fs:[0], esp
// 00580c08  51                   push ecx
// 00580c09  8b4508               mov eax, dword ptr [ebp + 8]
// 00580c0c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00580c0f  85c9                 test ecx, ecx
// 00580c11  53                   push ebx
// 00580c12  56                   push esi
// 00580c13  57                   push edi
// 00580c14  8965f0               mov dword ptr [ebp - 0x10], esp
// 00580c17  742e                 je 0x580c47
// 00580c19  50                   push eax
// 00580c1a  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00580c21  e8fafbffff           call 0x580820
// 00580c26  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00580c29  8901                 mov dword ptr [ecx], eax
// 00580c2b  83c404               add esp, 4
// 00580c2e  b001                 mov al, 1
// 00580c30  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00580c33  64890d00000000       mov dword ptr fs:[0], ecx
// 00580c3a  5f                   pop edi
// 00580c3b  5e                   pop esi
// 00580c3c  5b                   pop ebx
// 00580c3d  8be5                 mov esp, ebp
// 00580c3f  5d                   pop ebp
// 00580c40  c3                   ret 

struct Log {
    char pad[0x14];
    int field14;
};

extern "C" int __cdecl sub_580820(Log* log);

int __cdecl sub_580bf0(Log* log, int* out)
{
    if (log->field14 != 0) {
        *out = sub_580820(log);
        return 1;
    }
    return 0;
}
