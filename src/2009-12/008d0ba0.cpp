// roc 2009-12 008d0ba0  unit: CXTPTabPaintManager::CAppearanceSetVisio  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d0ba0
//
// 008d0ba0  6aff                 push -1
// 008d0ba2  6836509600           push 0x965036
// 008d0ba7  64a100000000         mov eax, dword ptr fs:[0]
// 008d0bad  50                   push eax
// 008d0bae  51                   push ecx
// 008d0baf  56                   push esi
// 008d0bb0  a10052b600           mov eax, dword ptr [0xb65200]
// 008d0bb5  33c4                 xor eax, esp
// 008d0bb7  50                   push eax
// 008d0bb8  8d44240c             lea eax, [esp + 0xc]
// 008d0bbc  64a300000000         mov dword ptr fs:[0], eax
// 008d0bc2  8bf1                 mov esi, ecx
// 008d0bc4  89742408             mov dword ptr [esp + 8], esi
// 008d0bc8  e813640100           call 0x8e6fe0
// 008d0bcd  6a01                 push 1
// 008d0bcf  8d8e08020000         lea ecx, [esi + 0x208]
// 008d0bd5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008d0bdd  c7068caaa000         mov dword ptr [esi], 0xa0aa8c
// 008d0be3  e858abf9ff           call 0x86b740
// 008d0be8  6a01                 push 1
// 008d0bea  8d8e14020000         lea ecx, [esi + 0x214]
// 008d0bf0  c644241801           mov byte ptr [esp + 0x18], 1
// 008d0bf5  e846abf9ff           call 0x86b740
// 008d0bfa  8bc6                 mov eax, esi
// 008d0bfc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008d0c00  64890d00000000       mov dword ptr fs:[0], ecx
// 008d0c07  59                   pop ecx
// 008d0c08  5e                   pop esi
// 008d0c09  83c410               add esp, 0x10
// 008d0c0c  c3                   ret 
// copied from an identical function in another client (function ??0CColorSetWinXP@CXTPTabPaintManager@@QAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManager.cpp