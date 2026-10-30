// roc 2009-12 00807550  unit: CXTPCommandBar  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00807550
//
// 00807550  6aff                 push -1
// 00807552  6813979500           push 0x959713
// 00807557  64a100000000         mov eax, dword ptr fs:[0]
// 0080755d  50                   push eax
// 0080755e  51                   push ecx
// 0080755f  56                   push esi
// 00807560  a10052b600           mov eax, dword ptr [0xb65200]
// 00807565  33c4                 xor eax, esp
// 00807567  50                   push eax
// 00807568  8d44240c             lea eax, [esp + 0xc]
// 0080756c  64a300000000         mov dword ptr fs:[0], eax
// 00807572  8bf1                 mov esi, ecx
// 00807574  89742408             mov dword ptr [esp + 8], esi
// 00807578  c706a42d9f00         mov dword ptr [esi], 0x9f2da4
// 0080757e  c744241401000000     mov dword ptr [esp + 0x14], 1
// 00807586  e895edffff           call 0x806320
// 0080758b  8d4e24               lea ecx, [esi + 0x24]
// 0080758e  c644241400           mov byte ptr [esp + 0x14], 0
// 00807593  e8f8ecffff           call 0x806290
// 00807598  8bce                 mov ecx, esi
// 0080759a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008075a2  e83bcefeff           call 0x7f43e2
// 008075a7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008075ab  64890d00000000       mov dword ptr fs:[0], ecx
// 008075b2  59                   pop ecx
// 008075b3  5e                   pop esi
// 008075b4  83c410               add esp, 0x10
// 008075b7  c3                   ret 
// copied from an identical function in another client (function ??1CXTPCommandBarList@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp