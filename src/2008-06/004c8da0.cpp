// from server: 100% by king_originala
// roc 2008-06 004c8da0  unit: RBX::Network::DirectPhysicsReceiver  size: 132 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c8da0
//
// 004c8da0  55                   push ebp
// 004c8da1  8bec                 mov ebp, esp
// 004c8da3  6aff                 push -1
// 004c8da5  68d0967c00           push 0x7c96d0
// 004c8daa  64a100000000         mov eax, dword ptr fs:[0]
// 004c8db0  50                   push eax
// 004c8db1  64892500000000       mov dword ptr fs:[0], esp
// 004c8db8  83ec08               sub esp, 8
// 004c8dbb  8b4514               mov eax, dword ptr [ebp + 0x14]
// 004c8dbe  8b550c               mov edx, dword ptr [ebp + 0xc]
// 004c8dc1  53                   push ebx
// 004c8dc2  56                   push esi
// 004c8dc3  57                   push edi
// 004c8dc4  8b7d18               mov edi, dword ptr [ebp + 0x18]
// 004c8dc7  8965f0               mov dword ptr [ebp - 0x10], esp
// 004c8dca  8bf1                 mov esi, ecx
// 004c8dcc  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 004c8dcf  50                   push eax
// 004c8dd0  51                   push ecx
// 004c8dd1  52                   push edx
// 004c8dd2  8bcf                 mov ecx, edi
// 004c8dd4  8975ec               mov dword ptr [ebp - 0x14], esi
// 004c8dd7  ff5508               call dword ptr [ebp + 8]
// 004c8dda  57                   push edi
// 004c8ddb  8d4e0c               lea ecx, [esi + 0xc]
// 004c8dde  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004c8de5  e886fdffff           call 0x4c8b70
// 004c8dea  84c0                 test al, al
// 004c8dec  7521                 jne 0x4c8e0f
// 004c8dee  57                   push edi
// 004c8def  e886781d00           call 0x6a067a
// 004c8df4  ff4e30               dec dword ptr [esi + 0x30]
// 004c8df7  83c404               add esp, 4
// 004c8dfa  32c0                 xor al, al
// 004c8dfc  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c8dff  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8e06  5f                   pop edi
// 004c8e07  5e                   pop esi
// 004c8e08  5b                   pop ebx
// 004c8e09  8be5                 mov esp, ebp
// 004c8e0b  5d                   pop ebp
// 004c8e0c  c21400               ret 0x14
// 004c8e0f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 004c8e12  5f                   pop edi
// 004c8e13  5e                   pop esi
// 004c8e14  b001                 mov al, 1
// 004c8e16  64890d00000000       mov dword ptr fs:[0], ecx
// 004c8e1d  5b                   pop ebx
// 004c8e1e  8be5                 mov esp, ebp
// 004c8e20  5d                   pop ebp
// 004c8e21  c21400               ret 0x14

typedef void (__thiscall *ConstructFunction)(void*, unsigned int,
                                           unsigned int, unsigned int);

extern "C" void __cdecl releaseObject(void* object);

struct ObjectSet
{
    bool insert(void* object);
};

struct Receiver
{
    char padding0[12];
    ObjectSet objects;
    char padding1[35];
    unsigned int count;

    bool construct(ConstructFunction function, unsigned int a,
                   unsigned int b, unsigned int c, void* object);
};

bool Receiver::construct(ConstructFunction function, unsigned int a,
                         unsigned int b, unsigned int c, void* object)
{
    function(object, a, b, c);

    try
    {
        if (!objects.insert(object))
        {
            releaseObject(object);
            --count;
            return false;
        }
        return true;
    }
    catch (...)
    {
        releaseObject(object);
        --count;
        throw;
    }
}
