// roc 2009-12 00892b80  unit: CXTPDockBar  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00892b80
//
// 00892b80  6aff                 push -1
// 00892b82  68e0139600           push 0x9613e0
// 00892b87  64a100000000         mov eax, dword ptr fs:[0]
// 00892b8d  50                   push eax
// 00892b8e  51                   push ecx
// 00892b8f  56                   push esi
// 00892b90  a10052b600           mov eax, dword ptr [0xb65200]
// 00892b95  33c4                 xor eax, esp
// 00892b97  50                   push eax
// 00892b98  8d44240c             lea eax, [esp + 0xc]
// 00892b9c  64a300000000         mov dword ptr fs:[0], eax
// 00892ba2  8bf1                 mov esi, ecx
// 00892ba4  89742408             mov dword ptr [esp + 8], esi
// 00892ba8  c7061c3da000         mov dword ptr [esi], 0xa03d1c
// 00892bae  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00892bb1  c744241402000000     mov dword ptr [esp + 0x14], 2
// 00892bb9  e81e12f6ff           call 0x7f3ddc
// 00892bbe  8d4e28               lea ecx, [esi + 0x28]
// 00892bc1  ff15c0de9800         call dword ptr [0x98dec0]
// 00892bc7  8d4e24               lea ecx, [esi + 0x24]
// 00892bca  ff15c0de9800         call dword ptr [0x98dec0]
// 00892bd0  8bce                 mov ecx, esi
// 00892bd2  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00892bda  e80318f6ff           call 0x7f43e2
// 00892bdf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00892be3  64890d00000000       mov dword ptr fs:[0], ecx
// 00892bea  59                   pop ecx
// 00892beb  5e                   pop esi
// 00892bec  83c410               add esp, 0x10
// 00892bef  c3                   ret 
// copied from an identical function in another client (function ??1CXTPMenuBarMDIMenuInfo@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp