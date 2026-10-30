// roc 2009-12 008902f0  unit: CXTPToolBar::CControlButtonHide  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008902f0
//
// 008902f0  53                   push ebx
// 008902f1  56                   push esi
// 008902f2  8bf1                 mov esi, ecx
// 008902f4  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008902fa  57                   push edi
// 008902fb  83f8ff               cmp eax, -1
// 008902fe  750f                 jne 0x89030f
// 00890300  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00890306  85c9                 test ecx, ecx
// 00890308  7405                 je 0x89030f
// 0089030a  e8a162f6ff           call 0x7f65b0
// 0089030f  85c0                 test eax, eax
// 00890311  0f8491000000         je 0x8903a8
// 00890317  8bce                 mov ecx, esi
// 00890319  e8925bf6ff           call 0x7f5eb0
// 0089031e  85c0                 test eax, eax
// 00890320  743f                 je 0x890361
// 00890322  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00890328  6a00                 push 0
// 0089032a  6aff                 push -1
// 0089032c  e86f62f7ff           call 0x8065a0
// 00890331  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00890337  8b01                 mov eax, dword ptr [ecx]
// 00890339  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0089033f  6a00                 push 0
// 00890341  6aff                 push -1
// 00890343  ffd2                 call edx
// 00890345  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00890349  8b06                 mov eax, dword ptr [esi]
// 0089034b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0089034f  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 00890355  51                   push ecx
// 00890356  52                   push edx
// 00890357  8bce                 mov ecx, esi
// 00890359  ffd0                 call eax
// 0089035b  5f                   pop edi
// 0089035c  5e                   pop esi
// 0089035d  5b                   pop ebx
// 0089035e  c20c00               ret 0xc
// 00890361  837c241000           cmp dword ptr [esp + 0x10], 0
// 00890366  7534                 jne 0x89039c
// 00890368  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0089036e  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 00890375  7431                 je 0x8903a8
// 00890377  83ec10               sub esp, 0x10
// 0089037a  8bc4                 mov eax, esp
// 0089037c  33c9                 xor ecx, ecx
// 0089037e  8908                 mov dword ptr [eax], ecx
// 00890380  33d2                 xor edx, edx
// 00890382  33ff                 xor edi, edi
// 00890384  895004               mov dword ptr [eax + 4], edx
// 00890387  33db                 xor ebx, ebx
// 00890389  897808               mov dword ptr [eax + 8], edi
// 0089038c  8bce                 mov ecx, esi
// 0089038e  89580c               mov dword ptr [eax + 0xc], ebx
// 00890391  e80a7ff6ff           call 0x7f82a0
// 00890396  5f                   pop edi
// 00890397  5e                   pop esi
// 00890398  5b                   pop ebx
// 00890399  c20c00               ret 0xc
// 0089039c  8b16                 mov edx, dword ptr [esi]
// 0089039e  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 008903a4  8bce                 mov ecx, esi
// 008903a6  ffd0                 call eax
// 008903a8  5f                   pop edi
// 008903a9  5e                   pop esi
// 008903aa  5b                   pop ebx
// 008903ab  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnClick@CXTPControlButton@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControlButton.cpp