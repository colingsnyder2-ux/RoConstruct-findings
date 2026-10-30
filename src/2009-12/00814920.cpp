// roc 2009-12 00814920  unit: PAVCXTPCommandBarKeyboardTip::?$CArray  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814920
//
// 00814920  6aff                 push -1
// 00814922  6816a49500           push 0x95a416
// 00814927  64a100000000         mov eax, dword ptr fs:[0]
// 0081492d  50                   push eax
// 0081492e  51                   push ecx
// 0081492f  56                   push esi
// 00814930  a10052b600           mov eax, dword ptr [0xb65200]
// 00814935  33c4                 xor eax, esp
// 00814937  50                   push eax
// 00814938  8d44240c             lea eax, [esp + 0xc]
// 0081493c  64a300000000         mov dword ptr fs:[0], eax
// 00814942  8bf1                 mov esi, ecx
// 00814944  89742408             mov dword ptr [esp + 8], esi
// 00814948  8d8ea8000000         lea ecx, [esi + 0xa8]
// 0081494e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00814956  e8d52ffeff           call 0x7f7930
// 0081495b  8d8e8c000000         lea ecx, [esi + 0x8c]
// 00814961  c644241400           mov byte ptr [esp + 0x14], 0
// 00814966  e8c52ffeff           call 0x7f7930
// 0081496b  8bce                 mov ecx, esi
// 0081496d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00814975  e868fafdff           call 0x7f43e2
// 0081497a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0081497e  64890d00000000       mov dword ptr fs:[0], ecx
// 00814985  59                   pop ecx
// 00814986  5e                   pop esi
// 00814987  83c410               add esp, 0x10
// 0081498a  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCommandBarsOptions@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp