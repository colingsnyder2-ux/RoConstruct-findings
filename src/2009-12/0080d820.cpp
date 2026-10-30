// roc 2009-12 0080d820  unit: CXTPImageManagerIconSet  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080d820
//
// 0080d820  83ec08               sub esp, 8
// 0080d823  53                   push ebx
// 0080d824  56                   push esi
// 0080d825  57                   push edi
// 0080d826  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0080d82a  57                   push edi
// 0080d82b  8bf1                 mov esi, ecx
// 0080d82d  e83efcffff           call 0x80d470
// 0080d832  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0080d836  85c0                 test eax, eax
// 0080d838  741c                 je 0x80d856
// 0080d83a  6a00                 push 0
// 0080d83c  53                   push ebx
// 0080d83d  8bc8                 mov ecx, eax
// 0080d83f  e83cfbffff           call 0x80d380
// 0080d844  85c0                 test eax, eax
// 0080d846  740e                 je 0x80d856
// 0080d848  5f                   pop edi
// 0080d849  5e                   pop esi
// 0080d84a  b801000000           mov eax, 1
// 0080d84f  5b                   pop ebx
// 0080d850  83c408               add esp, 8
// 0080d853  c20800               ret 8
// 0080d856  57                   push edi
// 0080d857  8bce                 mov ecx, esi
// 0080d859  e862f0ffff           call 0x80c8c0
// 0080d85e  85c0                 test eax, eax
// 0080d860  7414                 je 0x80d876
// 0080d862  85db                 test ebx, ebx
// 0080d864  74e2                 je 0x80d848
// 0080d866  8d4c240c             lea ecx, [esp + 0xc]
// 0080d86a  51                   push ecx
// 0080d86b  8bc8                 mov ecx, eax
// 0080d86d  e8becaffff           call 0x80a330
// 0080d872  3918                 cmp dword ptr [eax], ebx
// 0080d874  74d2                 je 0x80d848
// 0080d876  5f                   pop edi
// 0080d877  5e                   pop esi
// 0080d878  33c0                 xor eax, eax
// 0080d87a  5b                   pop ebx
// 0080d87b  83c408               add esp, 8
// 0080d87e  c20800               ret 8
// copied from an identical function in another client (function ?IsPrimaryImageExists@CXTPImageManager@@QBEHIH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp