// from server: 57% by colin
// roc 2008-06 004100a0  unit: VCBrowserViewExternal::?$CComObject  size: 440 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004100a0
//
// 004100a0  55                   push ebp
// 004100a1  8bec                 mov ebp, esp
// 004100a3  6aff                 push -1
// 004100a5  6848d57b00           push 0x7bd548
// 004100aa  64a100000000         mov eax, dword ptr fs:[0]
// 004100b0  50                   push eax
// 004100b1  64892500000000       mov dword ptr fs:[0], esp
// 004100b8  83ec10               sub esp, 0x10
// 004100bb  8b450c               mov eax, dword ptr [ebp + 0xc]
// 004100be  53                   push ebx
// 004100bf  56                   push esi
// 004100c0  57                   push edi
// 004100c1  33ff                 xor edi, edi
// 004100c3  8965f0               mov dword ptr [ebp - 0x10], esp
// 004100c6  3bc7                 cmp eax, edi
// 004100c8  750a                 jne 0x4100d4
// 004100ca  b803400080           mov eax, 0x80004003
// 004100cf  e96e010000           jmp 0x410242
// 004100d4  6a1c                 push 0x1c
// 004100d6  8938                 mov dword ptr [eax], edi
// 004100d8  897dfc               mov dword ptr [ebp - 4], edi
// 004100db  e840082900           call 0x6a0920
// 004100e0  8bf0                 mov esi, eax
// 004100e2  83c404               add esp, 4
// 004100e5  3bf7                 cmp esi, edi
// 004100e7  7429                 je 0x410112
// 004100e9  897e04               mov dword ptr [esi + 4], edi
// 004100ec  897e10               mov dword ptr [esi + 0x10], edi
// 004100ef  897e0c               mov dword ptr [esi + 0xc], edi
// 004100f2  897e08               mov dword ptr [esi + 8], edi
// 004100f5  897e14               mov dword ptr [esi + 0x14], edi
// 004100f8  897e18               mov dword ptr [esi + 0x18], edi
// 004100fb  c70690d78000         mov dword ptr [esi], 0x80d790
// 00410101  8b0d68c29600         mov ecx, dword ptr [0x96c268]
// 00410107  8b01                 mov eax, dword ptr [ecx]
// 00410109  8b5004               mov edx, dword ptr [eax + 4]
// 0041010c  ffd2                 call edx
// 0041010e  8bde                 mov ebx, esi
// 00410110  eb02                 jmp 0x410114
// 00410112  33db                 xor ebx, ebx
// 00410114  83ceff               or esi, 0xffffffff
// 00410117  8975fc               mov dword ptr [ebp - 4], esi
// 0041011a  3bdf                 cmp ebx, edi
// 0041011c  0f8489000000         je 0x4101ab
// 00410122  f605d0cb960001       test byte ptr [0x96cbd0], 1
// 00410129  7517                 jne 0x410142
// 0041012b  830dd0cb960001       or dword ptr [0x96cbd0], 1
// 00410132  c705c8cb960004000000 mov dword ptr [0x96cbc8], 4
// 0041013c  8935cccb9600         mov dword ptr [0x96cbcc], esi
// 00410142  bfc8cb9600           mov edi, 0x96cbc8
// 00410147  c745ec00000000       mov dword ptr [ebp - 0x14], 0
// 0041014e  6a04                 push 4
// 00410150  c745fc02000000       mov dword ptr [ebp - 4], 2
// 00410157  e8b424ffff           call 0x402610
// 0041015c  83c404               add esp, 4
// 0041015f  84c0                 test al, al
// 00410161  7422                 je 0x410185
// 00410163  b804000000           mov eax, 4
// 00410168  e8b3132900           call 0x6a1520
// 0041016d  8bcc                 mov ecx, esp
// 0041016f  8965f0               mov dword ptr [ebp - 0x10], esp
// 00410172  894de8               mov dword ptr [ebp - 0x18], ecx
// 00410175  eb1d                 jmp 0x410194
// 00410177  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 0041017a  e8d1072900           call 0x6a0950
// 0041017f  b8ab014100           mov eax, 0x4101ab
// 00410184  c3                   ret 
// 00410185  6a04                 push 4
// 00410187  8d4dec               lea ecx, [ebp - 0x14]
// 0041018a  e8c12dffff           call 0x402f50
// 0041018f  8945e8               mov dword ptr [ebp - 0x18], eax
// 00410192  8bc8                 mov ecx, eax
// 00410194  85c9                 test ecx, ecx
// 00410196  751d                 jne 0x4101b5
// 00410198  8b03                 mov eax, dword ptr [ebx]
// 0041019a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 0041019d  6a01                 push 1
// 0041019f  8bcb                 mov ecx, ebx
// 004101a1  ffd2                 call edx
// 004101a3  8d4dec               lea ecx, [ebp - 0x14]
// 004101a6  e8a50fffff           call 0x401150
// 004101ab  b80e000780           mov eax, 0x8007000e
// 004101b0  e98d000000           jmp 0x410242
// 004101b5  3935c8cb9600         cmp dword ptr [0x96cbc8], esi
// 004101bb  742d                 je 0x4101ea
// 004101bd  8bf1                 mov esi, ecx
// 004101bf  90                   nop 
// 004101c0  8b07                 mov eax, dword ptr [edi]
// 004101c2  83f8fe               cmp eax, -2
// 004101c5  7511                 jne 0x4101d8
// 004101c7  8b7f04               mov edi, dword ptr [edi + 4]
// 004101ca  6a00                 push 0
// 004101cc  ffd7                 call edi
// 004101ce  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 004101d1  83c404               add esp, 4
// 004101d4  8bf8                 mov edi, eax
// 004101d6  eb0d                 jmp 0x4101e5
// 004101d8  8b5508               mov edx, dword ptr [ebp + 8]
// 004101db  03c2                 add eax, edx
// 004101dd  8906                 mov dword ptr [esi], eax
// 004101df  83c604               add esi, 4
// 004101e2  83c704               add edi, 4
// 004101e5  833fff               cmp dword ptr [edi], -1
// 004101e8  75d6                 jne 0x4101c0
// 004101ea  8b4508               mov eax, dword ptr [ebp + 8]
// 004101ed  6a03                 push 3
// 004101ef  50                   push eax
// 004101f0  8d5104               lea edx, [ecx + 4]
// 004101f3  52                   push edx
// 004101f4  51                   push ecx
// 004101f5  8bcb                 mov ecx, ebx
// 004101f7  e874f3ffff           call 0x40f570
// 004101fc  8bf8                 mov edi, eax
// 004101fe  8b03                 mov eax, dword ptr [ebx]
// 00410200  85ff                 test edi, edi
// 00410202  7d15                 jge 0x410219
// 00410204  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00410207  6a01                 push 1
// 00410209  8bcb                 mov ecx, ebx
// 0041020b  ffd2                 call edx
// 0041020d  8d4dec               lea ecx, [ebp - 0x14]
// 00410210  e83b0fffff           call 0x401150
// 00410215  8bc7                 mov eax, edi
// 00410217  eb29                 jmp 0x410242
// 00410219  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0041021c  8b10                 mov edx, dword ptr [eax]
// 0041021e  51                   push ecx
// 0041021f  68c8d78000           push 0x80d7c8
// 00410224  53                   push ebx
// 00410225  ffd2                 call edx
// 00410227  8bf0                 mov esi, eax
// 00410229  85f6                 test esi, esi
// 0041022b  7d0b                 jge 0x410238
// 0041022d  8b03                 mov eax, dword ptr [ebx]
// 0041022f  8b501c               mov edx, dword ptr [eax + 0x1c]
// 00410232  6a01                 push 1
// 00410234  8bcb                 mov ecx, ebx
// 00410236  ffd2                 call edx
// 00410238  8d4dec               lea ecx, [ebp - 0x14]
// 0041023b  e8100fffff           call 0x401150
// 00410240  8bc6                 mov eax, esi
// 00410242  8d65d8               lea esp, [ebp - 0x28]
// 00410245  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00410248  64890d00000000       mov dword ptr fs:[0], ecx
// 0041024f  5f                   pop edi
// 00410250  5e                   pop esi
// 00410251  5b                   pop ebx
// 00410252  8be5                 mov esp, ebp
// 00410254  5d                   pop ebp
// 00410255  c20800               ret 8

// from server: 0% by king_originala
typedef unsigned long ULONG;
typedef long HRESULT;

extern "C" void* __cdecl allocate(unsigned int);
extern "C" bool __cdecl checkStack(unsigned int);
extern "C" void* __cdecl _alloca(unsigned int);
#pragma intrinsic(_alloca)

struct Module;
struct ModuleTable {
    void (__thiscall* first)(Module*);
    void (__thiscall* lock)(Module*);
};

struct Module {
    ModuleTable* table;
};

struct Object {
    void* table;
    ULONG references;
    void* field8;
    void* field12;
    void* field16;
    void* field20;
    void* field24;
};

struct AllocationState {
    unsigned int size;
    int limit;
};

extern Module* module;
extern void* objectTable[];
extern unsigned int allocationFlags;
extern AllocationState allocationState;

HRESULT __stdcall createObject(void* context, Object** result)
{
    if (!result)
        return (HRESULT)0x80004003L;

    *result = 0;
    Object* object = 0;

    try {
        Object* storage = (Object*)allocate(28);
        if (storage) {
            storage->references = 0;
            storage->field16 = 0;
            storage->field12 = 0;
            storage->field8 = 0;
            storage->field20 = 0;
            storage->field24 = 0;
            storage->table = objectTable;
            module->table->lock(module);
            object = storage;
        }
    }
    catch (...) {
        return (HRESULT)0x8007000EL;
    }

    if (!object)
        return (HRESULT)0x8007000EL;

    if (!(allocationFlags & 1)) {
        allocationFlags |= 1;
        allocationState.size = 4;
        allocationState.limit = -1;
    }

    void* buffer = 0;
    try {
        if (checkStack(4))
            buffer = _alloca(4);
        else
            buffer = allocate(4);

        if (!buffer)
            return (HRESULT)0x8007000EL;

        *(void**)buffer = context;
        *result = object;
        return 0;
    }
    catch (...) {
        return (HRESULT)0x8007000EL;
    }
}
