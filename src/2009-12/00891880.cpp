// roc 2009-12 00891880  unit: CXTPDockBar::UDOCK_INFO::?$CArray  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00891880
//
// 00891880  6aff                 push -1
// 00891882  687a6a9600           push 0x966a7a
// 00891887  64a100000000         mov eax, dword ptr fs:[0]
// 0089188d  50                   push eax
// 0089188e  51                   push ecx
// 0089188f  a10052b600           mov eax, dword ptr [0xb65200]
// 00891894  33c4                 xor eax, esp
// 00891896  50                   push eax
// 00891897  8d442408             lea eax, [esp + 8]
// 0089189b  64a300000000         mov dword ptr fs:[0], eax
// 008918a1  6a70                 push 0x70
// 008918a3  e8b81ff6ff           call 0x7f3860
// 008918a8  83c404               add esp, 4
// 008918ab  89442404             mov dword ptr [esp + 4], eax
// 008918af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 008918b7  85c0                 test eax, eax
// 008918b9  7417                 je 0x8918d2
// 008918bb  8bc8                 mov ecx, eax
// 008918bd  e86efcffff           call 0x891530
// 008918c2  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008918c6  64890d00000000       mov dword ptr fs:[0], ecx
// 008918cd  59                   pop ecx
// 008918ce  83c410               add esp, 0x10
// 008918d1  c3                   ret 
// 008918d2  33c0                 xor eax, eax
// 008918d4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008918d8  64890d00000000       mov dword ptr fs:[0], ecx
// 008918df  59                   pop ecx
// 008918e0  83c410               add esp, 0x10
// 008918e3  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPDockBar@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPDockBar.cpp