// roc 2009-12 00893c70  unit: CXTPMenuBar  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00893c70
//
// 00893c70  6aff                 push -1
// 00893c72  68c8159600           push 0x9615c8
// 00893c77  64a100000000         mov eax, dword ptr fs:[0]
// 00893c7d  50                   push eax
// 00893c7e  51                   push ecx
// 00893c7f  56                   push esi
// 00893c80  a10052b600           mov eax, dword ptr [0xb65200]
// 00893c85  33c4                 xor eax, esp
// 00893c87  50                   push eax
// 00893c88  8d44240c             lea eax, [esp + 0xc]
// 00893c8c  64a300000000         mov dword ptr fs:[0], eax
// 00893c92  8bf1                 mov esi, ecx
// 00893c94  89742408             mov dword ptr [esp + 8], esi
// 00893c98  c7065444a000         mov dword ptr [esi], 0xa04454
// 00893c9e  c746544444a000       mov dword ptr [esi + 0x54], 0xa04444
// 00893ca5  c7465ce443a000       mov dword ptr [esi + 0x5c], 0xa043e4
// 00893cac  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00893cb4  e8b7f7ffff           call 0x893470
// 00893cb9  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 00893cbf  85c9                 test ecx, ecx
// 00893cc1  740f                 je 0x893cd2
// 00893cc3  e81401f6ff           call 0x7f3ddc
// 00893cc8  c786bc01000000000000 mov dword ptr [esi + 0x1bc], 0
// 00893cd2  8b86b0010000         mov eax, dword ptr [esi + 0x1b0]
// 00893cd8  85c0                 test eax, eax
// 00893cda  7407                 je 0x893ce3
// 00893cdc  50                   push eax
// 00893cdd  ff15e4c99800         call dword ptr [0x98c9e4]
// 00893ce3  8bce                 mov ecx, esi
// 00893ce5  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00893ced  e8eed7f7ff           call 0x8114e0
// 00893cf2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00893cf6  64890d00000000       mov dword ptr fs:[0], ecx
// 00893cfd  59                   pop ecx
// 00893cfe  5e                   pop esi
// 00893cff  83c410               add esp, 0x10
// 00893d02  c3                   ret 
// copied from an identical function in another client (function ??1CXTPMenuBar@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPMenuBar.cpp