// roc 2010-06 0080b4e0  unit: CXTPTabClientWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080b4e0
//
// 0080b4e0  56                   push esi
// 0080b4e1  8bf1                 mov esi, ecx
// 0080b4e3  e898f0ffff           call 0x80a580
// 0080b4e8  85c0                 test eax, eax
// 0080b4ea  750c                 jne 0x80b4f8
// 0080b4ec  8b06                 mov eax, dword ptr [esi]
// 0080b4ee  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 0080b4f4  6aff                 push -1
// 0080b4f6  ffd2                 call edx
// 0080b4f8  8bce                 mov ecx, esi
// 0080b4fa  e881f0ffff           call 0x80a580
// 0080b4ff  85c0                 test eax, eax
// 0080b501  7504                 jne 0x80b507
// 0080b503  5e                   pop esi
// 0080b504  c20400               ret 4
// 0080b507  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 0080b50d  85c0                 test eax, eax
// 0080b50f  7515                 jne 0x80b526
// 0080b511  e86af0ffff           call 0x80a580
// 0080b516  83e801               sub eax, 1
// 0080b519  7813                 js 0x80b52e
// 0080b51b  3b4670               cmp eax, dword ptr [esi + 0x70]
// 0080b51e  7d0e                 jge 0x80b52e
// 0080b520  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0080b523  8b0481               mov eax, dword ptr [ecx + eax*4]
// 0080b526  5e                   pop esi
// 0080b527  8bc8                 mov ecx, eax
// 0080b529  e942e4ffff           jmp 0x809970
// 0080b52e  e819c7f9ff           call 0x7a7c4c
// copied from an identical function in another client (function ?AddItem@CXTPTabClientWnd@@MAEPAVCXTPTabManagerItem@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp