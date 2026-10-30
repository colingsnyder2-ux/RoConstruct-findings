// roc 2009-12 00846be0  unit: CXTPControls  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00846be0
//
// 00846be0  6aff                 push -1
// 00846be2  6833d19500           push 0x95d133
// 00846be7  64a100000000         mov eax, dword ptr fs:[0]
// 00846bed  50                   push eax
// 00846bee  51                   push ecx
// 00846bef  56                   push esi
// 00846bf0  a10052b600           mov eax, dword ptr [0xb65200]
// 00846bf5  33c4                 xor eax, esp
// 00846bf7  50                   push eax
// 00846bf8  8d44240c             lea eax, [esp + 0xc]
// 00846bfc  64a300000000         mov dword ptr fs:[0], eax
// 00846c02  8bf1                 mov esi, ecx
// 00846c04  89742408             mov dword ptr [esp + 8], esi
// 00846c08  c706fca59f00         mov dword ptr [esi], 0x9fa5fc
// 00846c0e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00846c16  e8c5e6ffff           call 0x8452e0
// 00846c1b  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00846c1e  85c9                 test ecx, ecx
// 00846c20  740c                 je 0x846c2e
// 00846c22  e8b5d1faff           call 0x7f3ddc
// 00846c27  c7463c00000000       mov dword ptr [esi + 0x3c], 0
// 00846c2e  8d4e24               lea ecx, [esi + 0x24]
// 00846c31  c644241400           mov byte ptr [esp + 0x14], 0
// 00846c36  e8650cfbff           call 0x7f78a0
// 00846c3b  8bce                 mov ecx, esi
// 00846c3d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00846c45  e898d7faff           call 0x7f43e2
// 00846c4a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00846c4e  64890d00000000       mov dword ptr fs:[0], ecx
// 00846c55  59                   pop ecx
// 00846c56  5e                   pop esi
// 00846c57  83c410               add esp, 0x10
// 00846c5a  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControls@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp