// roc 2009-12 008ea080  unit: CXTPRibbonGroup  size: 151 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea080
//
// 008ea080  6aff                 push -1
// 008ea082  68df649600           push 0x9664df
// 008ea087  64a100000000         mov eax, dword ptr fs:[0]
// 008ea08d  50                   push eax
// 008ea08e  51                   push ecx
// 008ea08f  56                   push esi
// 008ea090  a10052b600           mov eax, dword ptr [0xb65200]
// 008ea095  33c4                 xor eax, esp
// 008ea097  50                   push eax
// 008ea098  8d44240c             lea eax, [esp + 0xc]
// 008ea09c  64a300000000         mov dword ptr fs:[0], eax
// 008ea0a2  8bf1                 mov esi, ecx
// 008ea0a4  89742408             mov dword ptr [esp + 8], esi
// 008ea0a8  c706dccfa000         mov dword ptr [esi], 0xa0cfdc
// 008ea0ae  c744241402000000     mov dword ptr [esp + 0x14], 2
// 008ea0b6  e865f7ffff           call 0x8e9820
// 008ea0bb  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 008ea0be  85c9                 test ecx, ecx
// 008ea0c0  740c                 je 0x8ea0ce
// 008ea0c2  e8159df0ff           call 0x7f3ddc
// 008ea0c7  c7466800000000       mov dword ptr [esi + 0x68], 0
// 008ea0ce  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 008ea0d1  85c9                 test ecx, ecx
// 008ea0d3  740c                 je 0x8ea0e1
// 008ea0d5  e8029df0ff           call 0x7f3ddc
// 008ea0da  c7466c00000000       mov dword ptr [esi + 0x6c], 0
// 008ea0e1  8d4e44               lea ecx, [esi + 0x44]
// 008ea0e4  c644241401           mov byte ptr [esp + 0x14], 1
// 008ea0e9  e8b2d7f0ff           call 0x7f78a0
// 008ea0ee  8d4e28               lea ecx, [esi + 0x28]
// 008ea0f1  ff15c0de9800         call dword ptr [0x98dec0]
// 008ea0f7  8bce                 mov ecx, esi
// 008ea0f9  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008ea101  e8dca2f0ff           call 0x7f43e2
// 008ea106  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ea10a  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea111  59                   pop ecx
// 008ea112  5e                   pop esi
// 008ea113  83c410               add esp, 0x10
// 008ea116  c3                   ret 
// copied from an identical function in another client (function ??1CXTPRibbonGroup@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp