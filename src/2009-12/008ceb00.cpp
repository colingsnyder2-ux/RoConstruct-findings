// roc 2009-12 008ceb00  unit: CXTPTabManagerNavigateButton  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ceb00
//
// 008ceb00  6aff                 push -1
// 008ceb02  68184e9600           push 0x964e18
// 008ceb07  64a100000000         mov eax, dword ptr fs:[0]
// 008ceb0d  50                   push eax
// 008ceb0e  51                   push ecx
// 008ceb0f  56                   push esi
// 008ceb10  a10052b600           mov eax, dword ptr [0xb65200]
// 008ceb15  33c4                 xor eax, esp
// 008ceb17  50                   push eax
// 008ceb18  8d44240c             lea eax, [esp + 0xc]
// 008ceb1c  64a300000000         mov dword ptr fs:[0], eax
// 008ceb22  8bf1                 mov esi, ecx
// 008ceb24  89742408             mov dword ptr [esp + 8], esi
// 008ceb28  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ceb2c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ceb30  50                   push eax
// 008ceb31  6a01                 push 1
// 008ceb33  51                   push ecx
// 008ceb34  8bce                 mov ecx, esi
// 008ceb36  e835fdffff           call 0x8ce870
// 008ceb3b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008ceb43  c706e4a6a000         mov dword ptr [esi], 0xa0a6e4
// 008ceb49  e852fdf9ff           call 0x86e8a0
// 008ceb4e  8b10                 mov edx, dword ptr [eax]
// 008ceb50  8b5208               mov edx, dword ptr [edx + 8]
// 008ceb53  6849260000           push 0x2649
// 008ceb58  8d4e28               lea ecx, [esi + 0x28]
// 008ceb5b  51                   push ecx
// 008ceb5c  8bc8                 mov ecx, eax
// 008ceb5e  ffd2                 call edx
// 008ceb60  8bc6                 mov eax, esi
// 008ceb62  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ceb66  64890d00000000       mov dword ptr fs:[0], ecx
// 008ceb6d  59                   pop ecx
// 008ceb6e  5e                   pop esi
// 008ceb6f  83c410               add esp, 0x10
// 008ceb72  c20800               ret 8
// copied from an identical function in another client (function ??0CNavigateButtonArrowRight@CXTPTabManager@@QAE@PAV1@W4XTPTabNavigateButtonFlags@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp