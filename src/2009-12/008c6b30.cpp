// roc 2009-12 008c6b30  unit: CXTPPropertyGridInplaceEdit  size: 175 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6b30
//
// 008c6b30  6aff                 push -1
// 008c6b32  6867469600           push 0x964667
// 008c6b37  64a100000000         mov eax, dword ptr fs:[0]
// 008c6b3d  50                   push eax
// 008c6b3e  51                   push ecx
// 008c6b3f  56                   push esi
// 008c6b40  a10052b600           mov eax, dword ptr [0xb65200]
// 008c6b45  33c4                 xor eax, esp
// 008c6b47  50                   push eax
// 008c6b48  8d44240c             lea eax, [esp + 0xc]
// 008c6b4c  64a300000000         mov dword ptr fs:[0], eax
// 008c6b52  8bf1                 mov esi, ecx
// 008c6b54  89742408             mov dword ptr [esp + 8], esi
// 008c6b58  c706bc9ba000         mov dword ptr [esi], 0xa09bbc
// 008c6b5e  8d8e90000000         lea ecx, [esi + 0x90]
// 008c6b64  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008c6b6c  c70148189a00         mov dword ptr [ecx], 0x9a1848
// 008c6b72  e8b986b4ff           call 0x40f230
// 008c6b77  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c6b7d  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6b83  8d8e84000000         lea ecx, [esi + 0x84]
// 008c6b89  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008c6b91  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6b97  8d8e80000000         lea ecx, [esi + 0x80]
// 008c6b9d  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6ba3  8d4e7c               lea ecx, [esi + 0x7c]
// 008c6ba6  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6bac  8d4e78               lea ecx, [esi + 0x78]
// 008c6baf  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6bb5  8d4e74               lea ecx, [esi + 0x74]
// 008c6bb8  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6bbe  8d4e70               lea ecx, [esi + 0x70]
// 008c6bc1  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6bc7  8bce                 mov ecx, esi
// 008c6bc9  e886f80500           call 0x926454
// 008c6bce  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c6bd2  64890d00000000       mov dword ptr fs:[0], ecx
// 008c6bd9  59                   pop ecx
// 008c6bda  5e                   pop esi
// 008c6bdb  83c410               add esp, 0x10
// 008c6bde  c3                   ret 
// copied from an identical function in another client (function ??1CXTPPropertyGridInplaceEdit@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\PropertyGrid\XTPPropertyGridInplaceEdit.cpp