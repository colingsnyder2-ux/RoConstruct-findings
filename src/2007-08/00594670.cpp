// from server: 43% by colin
// roc 2007-08 00594670  unit: RBX::StudsTool  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00594670
//
// 00594670  6aff                 push -1
// 00594672  681bb67500           push 0x75b61b
// 00594677  64a100000000         mov eax, dword ptr fs:[0]
// 0059467d  50                   push eax
// 0059467e  64892500000000       mov dword ptr fs:[0], esp
// 00594685  51                   push ecx
// 00594686  56                   push esi
// 00594687  57                   push edi
// 00594688  6a4c                 push 0x4c
// 0059468a  8bf9                 mov edi, ecx
// 0059468c  e865b80900           call 0x62fef6
// 00594691  8bf0                 mov esi, eax
// 00594693  83c404               add esp, 4
// 00594696  89742408             mov dword ptr [esp + 8], esi
// 0059469a  33c0                 xor eax, eax
// 0059469c  3bf0                 cmp esi, eax
// 0059469e  89442414             mov dword ptr [esp + 0x14], eax
// 005946a2  741a                 je 0x5946be
// 005946a4  8b4718               mov eax, dword ptr [edi + 0x18]
// 005946a7  50                   push eax
// 005946a8  8bce                 mov ecx, esi
// 005946aa  e8c16d0600           call 0x5fb470
// 005946af  c706d4067b00         mov dword ptr [esi], 0x7b06d4
// 005946b5  c74604b8067b00       mov dword ptr [esi + 4], 0x7b06b8
// 005946bc  8bc6                 mov eax, esi
// 005946be  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005946c2  5f                   pop edi
// 005946c3  5e                   pop esi
// 005946c4  64890d00000000       mov dword ptr fs:[0], ecx
// 005946cb  83c410               add esp, 0x10
// 005946ce  c3                   ret 

struct SurfaceTool {
    void construct(int);
};

struct StudsTool : SurfaceTool {
    StudsTool(int);
};

extern "C" void* __cdecl operator_new(unsigned int);
extern "C" void __cdecl studs_ctor_helper();

StudsTool::StudsTool(int workspace)
{
    void* mem = operator_new(0x4c);
    if (mem) {
        SurfaceTool::construct(workspace);
        *(void**)mem = (void*)0x7b06d4;
        *(void**)((char*)mem + 4) = (void*)0x7b06b8;
    }
}
