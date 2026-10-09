// from server: 33% by colin
// roc 2007-08 00580b80  unit: RBX::Log  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00580b80
//
// 00580b80  55                   push ebp
// 00580b81  8bec                 mov ebp, esp
// 00580b83  6aff                 push -1
// 00580b85  68b05b7500           push 0x755bb0
// 00580b8a  64a100000000         mov eax, dword ptr fs:[0]
// 00580b90  50                   push eax
// 00580b91  64892500000000       mov dword ptr fs:[0], esp
// 00580b98  51                   push ecx
// 00580b99  8b4508               mov eax, dword ptr [ebp + 8]
// 00580b9c  8b4814               mov ecx, dword ptr [eax + 0x14]
// 00580b9f  85c9                 test ecx, ecx
// 00580ba1  53                   push ebx
// 00580ba2  56                   push esi
// 00580ba3  57                   push edi
// 00580ba4  8965f0               mov dword ptr [ebp - 0x10], esp
// 00580ba7  742e                 je 0x580bd7
// 00580ba9  50                   push eax
// 00580baa  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00580bb1  e84afbffff           call 0x580700
// 00580bb6  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00580bb9  8901                 mov dword ptr [ecx], eax
// 00580bbb  83c404               add esp, 4
// 00580bbe  b001                 mov al, 1
// 00580bc0  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00580bc3  64890d00000000       mov dword ptr fs:[0], ecx
// 00580bca  5f                   pop edi
// 00580bcb  5e                   pop esi
// 00580bcc  5b                   pop ebx
// 00580bcd  8be5                 mov esp, ebp
// 00580bcf  5d                   pop ebp
// 00580bd0  c3                   ret 

struct RBX_Log;

struct RBX_Log_Provider {
    virtual RBX_Log* provideLog();
};

struct RBX_Log {
    char pad[0x14];
    RBX_Log_Provider* provider;
};

extern "C" void* __cdecl sub_00580700(RBX_Log*);

bool sub_00580b80(RBX_Log* log, RBX_Log** out)
{
    if (log->provider == 0) {
        return false;
    }
    *out = (RBX_Log*)sub_00580700(log);
    return true;
}
