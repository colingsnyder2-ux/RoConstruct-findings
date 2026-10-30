// roc 2009-12 0084de90  unit: CXTPPropertyGrid  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084de90
//
// 0084de90  6aff                 push -1
// 0084de92  687a6a9600           push 0x966a7a
// 0084de97  64a100000000         mov eax, dword ptr fs:[0]
// 0084de9d  50                   push eax
// 0084de9e  51                   push ecx
// 0084de9f  a10052b600           mov eax, dword ptr [0xb65200]
// 0084dea4  33c4                 xor eax, esp
// 0084dea6  50                   push eax
// 0084dea7  8d442408             lea eax, [esp + 8]
// 0084deab  64a300000000         mov dword ptr fs:[0], eax
// 0084deb1  6860010000           push 0x160
// 0084deb6  e8a559faff           call 0x7f3860
// 0084debb  83c404               add esp, 4
// 0084debe  89442404             mov dword ptr [esp + 4], eax
// 0084dec2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0084deca  85c0                 test eax, eax
// 0084decc  7417                 je 0x84dee5
// 0084dece  8bc8                 mov ecx, eax
// 0084ded0  e88ba10100           call 0x868060
// 0084ded5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084ded9  64890d00000000       mov dword ptr fs:[0], ecx
// 0084dee0  59                   pop ecx
// 0084dee1  83c410               add esp, 0x10
// 0084dee4  c3                   ret 
// 0084dee5  33c0                 xor eax, eax
// 0084dee7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0084deeb  64890d00000000       mov dword ptr fs:[0], ecx
// 0084def2  59                   pop ecx
// 0084def3  83c410               add esp, 0x10
// 0084def6  c3                   ret 
// copied from an identical function in another client (function ?CreateView@CXTPPropertyGrid@@UBEPAVCXTPPropertyGridView@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGrid.cpp