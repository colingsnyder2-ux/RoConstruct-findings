// roc 2009-12 008ceb80  unit: CXTPTabManagerNavigateButton  size: 117 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ceb80
//
// 008ceb80  6aff                 push -1
// 008ceb82  68484e9600           push 0x964e48
// 008ceb87  64a100000000         mov eax, dword ptr fs:[0]
// 008ceb8d  50                   push eax
// 008ceb8e  51                   push ecx
// 008ceb8f  56                   push esi
// 008ceb90  a10052b600           mov eax, dword ptr [0xb65200]
// 008ceb95  33c4                 xor eax, esp
// 008ceb97  50                   push eax
// 008ceb98  8d44240c             lea eax, [esp + 0xc]
// 008ceb9c  64a300000000         mov dword ptr fs:[0], eax
// 008ceba2  8bf1                 mov esi, ecx
// 008ceba4  89742408             mov dword ptr [esp + 8], esi
// 008ceba8  8b442420             mov eax, dword ptr [esp + 0x20]
// 008cebac  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008cebb0  50                   push eax
// 008cebb1  6a02                 push 2
// 008cebb3  51                   push ecx
// 008cebb4  8bce                 mov ecx, esi
// 008cebb6  e8b5fcffff           call 0x8ce870
// 008cebbb  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008cebc3  c70604a7a000         mov dword ptr [esi], 0xa0a704
// 008cebc9  e8d2fcf9ff           call 0x86e8a0
// 008cebce  8b10                 mov edx, dword ptr [eax]
// 008cebd0  8b5208               mov edx, dword ptr [edx + 8]
// 008cebd3  684a260000           push 0x264a
// 008cebd8  8d4e28               lea ecx, [esi + 0x28]
// 008cebdb  51                   push ecx
// 008cebdc  8bc8                 mov ecx, eax
// 008cebde  ffd2                 call edx
// 008cebe0  8bc6                 mov eax, esi
// 008cebe2  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008cebe6  64890d00000000       mov dword ptr fs:[0], ecx
// 008cebed  59                   pop ecx
// 008cebee  5e                   pop esi
// 008cebef  83c410               add esp, 0x10
// 008cebf2  c20800               ret 8
// copied from an identical function in another client (function ??0CNavigateButtonClose@CXTPTabManager@@QAE@PAV1@W4XTPTabNavigateButtonFlags@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\TabManager\XTPTabManager.cpp