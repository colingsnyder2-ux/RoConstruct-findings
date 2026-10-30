// roc 2009-12 008c5c30  unit: CXTPControlCustom  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c5c30
//
// 008c5c30  6aff                 push -1
// 008c5c32  6896459600           push 0x964596
// 008c5c37  64a100000000         mov eax, dword ptr fs:[0]
// 008c5c3d  50                   push eax
// 008c5c3e  51                   push ecx
// 008c5c3f  55                   push ebp
// 008c5c40  56                   push esi
// 008c5c41  57                   push edi
// 008c5c42  a10052b600           mov eax, dword ptr [0xb65200]
// 008c5c47  33c4                 xor eax, esp
// 008c5c49  50                   push eax
// 008c5c4a  8d442414             lea eax, [esp + 0x14]
// 008c5c4e  64a300000000         mov dword ptr fs:[0], eax
// 008c5c54  8bf1                 mov esi, ecx
// 008c5c56  89742410             mov dword ptr [esp + 0x10], esi
// 008c5c5a  e801a5fcff           call 0x890160
// 008c5c5f  8dbe74010000         lea edi, [esi + 0x174]
// 008c5c65  33ed                 xor ebp, ebp
// 008c5c67  8bcf                 mov ecx, edi
// 008c5c69  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008c5c6d  e82ea8faff           call 0x8704a0
// 008c5c72  8d8680010000         lea eax, [esi + 0x180]
// 008c5c78  50                   push eax
// 008c5c79  c644242001           mov byte ptr [esp + 0x20], 1
// 008c5c7e  c7062499a000         mov dword ptr [esi], 0xa09924
// 008c5c84  c74620c498a000       mov dword ptr [esi + 0x20], 0xa098c4
// 008c5c8b  c707b898a000         mov dword ptr [edi], 0xa098b8
// 008c5c91  89ae7c010000         mov dword ptr [esi + 0x17c], ebp
// 008c5c97  ff159cca9800         call dword ptr [0x98ca9c]
// 008c5c9d  8bce                 mov ecx, esi
// 008c5c9f  89ae9c010000         mov dword ptr [esi + 0x19c], ebp
// 008c5ca5  c7869001000001000000 mov dword ptr [esi + 0x190], 1
// 008c5caf  c786d400000010000000 mov dword ptr [esi + 0xd4], 0x10
// 008c5cb9  89aea0010000         mov dword ptr [esi + 0x1a0], ebp
// 008c5cbf  e884070600           call 0x926448
// 008c5cc4  8bc6                 mov eax, esi
// 008c5cc6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c5cca  64890d00000000       mov dword ptr fs:[0], ecx
// 008c5cd1  59                   pop ecx
// 008c5cd2  5f                   pop edi
// 008c5cd3  5e                   pop esi
// 008c5cd4  5d                   pop ebp
// 008c5cd5  83c410               add esp, 0x10
// 008c5cd8  c3                   ret 
// copied from an identical function in another client (function ??0CXTPControlCustom@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlCustom.cpp