// roc 2009-12 007f9320  unit: CPatchedControlComboBox  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f9320
//
// 007f9320  51                   push ecx
// 007f9321  56                   push esi
// 007f9322  8bf1                 mov esi, ecx
// 007f9324  8b8600010000         mov eax, dword ptr [esi + 0x100]
// 007f932a  83b8f800000002       cmp dword ptr [eax + 0xf8], 2
// 007f9331  7450                 je 0x7f9383
// 007f9333  8b16                 mov edx, dword ptr [esi]
// 007f9335  8b5258               mov edx, dword ptr [edx + 0x58]
// 007f9338  53                   push ebx
// 007f9339  8d442408             lea eax, [esp + 8]
// 007f933d  50                   push eax
// 007f933e  ffd2                 call edx
// 007f9340  8bc8                 mov ecx, eax
// 007f9342  ff15bcdd9800         call dword ptr [0x98ddbc]
// 007f9348  8d4c2408             lea ecx, [esp + 8]
// 007f934c  8ad8                 mov bl, al
// 007f934e  ff15c0de9800         call dword ptr [0x98dec0]
// 007f9354  84db                 test bl, bl
// 007f9356  5b                   pop ebx
// 007f9357  7405                 je 0x7f935e
// 007f9359  33c0                 xor eax, eax
// 007f935b  5e                   pop esi
// 007f935c  59                   pop ecx
// 007f935d  c3                   ret 
// 007f935e  8bce                 mov ecx, esi
// 007f9360  e82bc9ffff           call 0x7f5c90
// 007f9365  83f801               cmp eax, 1
// 007f9368  7419                 je 0x7f9383
// 007f936a  83f803               cmp eax, 3
// 007f936d  7414                 je 0x7f9383
// 007f936f  83f804               cmp eax, 4
// 007f9372  740f                 je 0x7f9383
// 007f9374  33c0                 xor eax, eax
// 007f9376  83be8c01000001       cmp dword ptr [esi + 0x18c], 1
// 007f937d  5e                   pop esi
// 007f937e  0f94c0               sete al
// 007f9381  59                   pop ecx
// 007f9382  c3                   ret 
// 007f9383  b801000000           mov eax, 1
// 007f9388  5e                   pop esi
// 007f9389  59                   pop ecx
// 007f938a  c3                   ret 
// copied from an identical function in another client (function ?IsCaptionVisible@CXTPControlComboBox@@UBEHXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp