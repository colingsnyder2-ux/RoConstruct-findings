// roc 2009-12 008cea80  unit: CXTPTabManagerNavigateButton  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008cea80
//
// 008cea80  6aff                 push -1
// 008cea82  68184e9600           push 0x964e18
// 008cea87  64a100000000         mov eax, dword ptr fs:[0]
// 008cea8d  50                   push eax
// 008cea8e  51                   push ecx
// 008cea8f  56                   push esi
// 008cea90  a10052b600           mov eax, dword ptr [0xb65200]
// 008cea95  33c4                 xor eax, esp
// 008cea97  50                   push eax
// 008cea98  8d44240c             lea eax, [esp + 0xc]
// 008cea9c  64a300000000         mov dword ptr fs:[0], eax
// 008ceaa2  8bf1                 mov esi, ecx
// 008ceaa4  89742408             mov dword ptr [esp + 8], esi
// 008ceaa8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008ceaac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ceab0  50                   push eax
// 008ceab1  6a00                 push 0
// 008ceab3  51                   push ecx
// 008ceab4  8bce                 mov ecx, esi
// 008ceab6  e8b5fdffff           call 0x8ce870
// 008ceabb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008ceac3  c706c4a6a000         mov dword ptr [esi], 0xa0a6c4
// 008ceac9  e8d2fdf9ff           call 0x86e8a0
// 008ceace  8b10                 mov edx, dword ptr [eax]
// 008cead0  8b5208               mov edx, dword ptr [edx + 8]
// 008cead3  6848260000           push 0x2648
// 008cead8  8d4e28               lea ecx, [esi + 0x28]
// 008ceadb  51                   push ecx
// 008ceadc  8bc8                 mov ecx, eax
// 008ceade  ffd2                 call edx
// 008ceae0  8bc6                 mov eax, esi
// 008ceae2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008ceae6  64890d00000000       mov dword ptr fs:[0], ecx
// 008ceaed  59                   pop ecx
// 008ceaee  5e                   pop esi
// 008ceaef  83c410               add esp, 0x10
// 008ceaf2  c20800               ret 8
// copied from an identical function in another client (function ??0CNavigateButtonArrowLeft@CXTPTabManager@@QAE@PAV1@W4XTPTabNavigateButtonFlags@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp