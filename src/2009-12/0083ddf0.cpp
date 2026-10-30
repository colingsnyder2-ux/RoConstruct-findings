// roc 2009-12 0083ddf0  unit: CXTPCustomizeSheet  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083ddf0
//
// 0083ddf0  8b442404             mov eax, dword ptr [esp + 4]
// 0083ddf4  8d905ddcffff         lea edx, [eax - 0x23a3]
// 0083ddfa  83fa0b               cmp edx, 0xb
// 0083ddfd  7709                 ja 0x83de08
// 0083ddff  89442404             mov dword ptr [esp + 4], eax
// 0083de03  e90c8a0e00           jmp 0x926814
// 0083de08  8b542408             mov edx, dword ptr [esp + 8]
// 0083de0c  85d2                 test edx, edx
// 0083de0e  7520                 jne 0x83de30
// 0083de10  83f802               cmp eax, 2
// 0083de13  740a                 je 0x83de1f
// 0083de15  83f801               cmp eax, 1
// 0083de18  7405                 je 0x83de1f
// 0083de1a  83f809               cmp eax, 9
// 0083de1d  7511                 jne 0x83de30
// 0083de1f  c744240800000000     mov dword ptr [esp + 8], 0
// 0083de27  89442404             mov dword ptr [esp + 4], eax
// 0083de2b  e9e4890e00           jmp 0x926814
// 0083de30  8b89b8000000         mov ecx, dword ptr [ecx + 0xb8]
// 0083de36  8b89a0000000         mov ecx, dword ptr [ecx + 0xa0]
// 0083de3c  56                   push esi
// 0083de3d  8b31                 mov esi, dword ptr [ecx]
// 0083de3f  57                   push edi
// 0083de40  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0083de44  57                   push edi
// 0083de45  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0083de49  57                   push edi
// 0083de4a  52                   push edx
// 0083de4b  8b5614               mov edx, dword ptr [esi + 0x14]
// 0083de4e  50                   push eax
// 0083de4f  ffd2                 call edx
// 0083de51  5f                   pop edi
// 0083de52  5e                   pop esi
// 0083de53  c21000               ret 0x10
// copied from an identical function in another client (function ?OnCmdMsg@CXTPCustomizeSheet@@MAEHIHPAXPAUAFX_CMDHANDLERINFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp