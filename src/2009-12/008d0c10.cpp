// roc 2009-12 008d0c10  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0c10
//
// 008d0c10  6aff                 push -1
// 008d0c12  6836509600           push 0x965036
// 008d0c17  64a100000000         mov eax, dword ptr fs:[0]
// 008d0c1d  50                   push eax
// 008d0c1e  51                   push ecx
// 008d0c1f  56                   push esi
// 008d0c20  a10052b600           mov eax, dword ptr [0xb65200]
// 008d0c25  33c4                 xor eax, esp
// 008d0c27  50                   push eax
// 008d0c28  8d44240c             lea eax, [esp + 0xc]
// 008d0c2c  64a300000000         mov dword ptr fs:[0], eax
// 008d0c32  8bf1                 mov esi, ecx
// 008d0c34  89742408             mov dword ptr [esp + 8], esi
// 008d0c38  8d8e14020000         lea ecx, [esi + 0x214]
// 008d0c3e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 008d0c46  e8c5b4f9ff           call 0x86c110
// 008d0c4b  8d8e08020000         lea ecx, [esi + 0x208]
// 008d0c51  c644241400           mov byte ptr [esp + 0x14], 0
// 008d0c56  e8b5b4f9ff           call 0x86c110
// 008d0c5b  8bce                 mov ecx, esi
// 008d0c5d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008d0c65  e886600100           call 0x8e6cf0
// 008d0c6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d0c6e  64890d00000000       mov dword ptr fs:[0], ecx
// 008d0c75  59                   pop ecx
// 008d0c76  5e                   pop esi
// 008d0c77  83c410               add esp, 0x10
// 008d0c7a  c3                   ret 
// copied from an identical function in another client (function ??1CColorSetWinXP@CXTPTabPaintManager@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp