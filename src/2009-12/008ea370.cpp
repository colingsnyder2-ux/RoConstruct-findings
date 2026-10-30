// roc 2009-12 008ea370  unit: CXTPRibbonGroup  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea370
//
// 008ea370  6aff                 push -1
// 008ea372  687a6a9600           push 0x966a7a
// 008ea377  64a100000000         mov eax, dword ptr fs:[0]
// 008ea37d  50                   push eax
// 008ea37e  51                   push ecx
// 008ea37f  a10052b600           mov eax, dword ptr [0xb65200]
// 008ea384  33c4                 xor eax, esp
// 008ea386  50                   push eax
// 008ea387  8d442408             lea eax, [esp + 8]
// 008ea38b  64a300000000         mov dword ptr fs:[0], eax
// 008ea391  6884000000           push 0x84
// 008ea396  e8c594f0ff           call 0x7f3860
// 008ea39b  83c404               add esp, 4
// 008ea39e  89442404             mov dword ptr [esp + 4], eax
// 008ea3a2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008ea3aa  85c0                 test eax, eax
// 008ea3ac  7417                 je 0x8ea3c5
// 008ea3ae  8bc8                 mov ecx, eax
// 008ea3b0  e8abfbffff           call 0x8e9f60
// 008ea3b5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ea3b9  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea3c0  59                   pop ecx
// 008ea3c1  83c410               add esp, 0x10
// 008ea3c4  c3                   ret 
// 008ea3c5  33c0                 xor eax, eax
// 008ea3c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ea3cb  64890d00000000       mov dword ptr fs:[0], ecx
// 008ea3d2  59                   pop ecx
// 008ea3d3  83c410               add esp, 0x10
// 008ea3d6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPRibbonGroup@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroup.cpp