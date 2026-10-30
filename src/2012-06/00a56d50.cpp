// roc 2012-06 00a56d50  unit: VCEdit::?$CXTMaskEditT  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56d50
//
// 00a56d50  53                   push ebx
// 00a56d51  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a56d55  0fbec3               movsx eax, bl
// 00a56d58  56                   push esi
// 00a56d59  50                   push eax
// 00a56d5a  8bf1                 mov esi, ecx
// 00a56d5c  ff15702ab200         call dword ptr [0xb22a70]
// 00a56d62  83c404               add esp, 4
// 00a56d65  85c0                 test eax, eax
// 00a56d67  7516                 jne 0xa56d7f
// 00a56d69  8b16                 mov edx, dword ptr [esi]
// 00a56d6b  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00a56d71  53                   push ebx
// 00a56d72  8bce                 mov ecx, esi
// 00a56d74  ffd0                 call eax
// 00a56d76  85c0                 test eax, eax
// 00a56d78  7505                 jne 0xa56d7f
// 00a56d7a  5e                   pop esi
// 00a56d7b  5b                   pop ebx
// 00a56d7c  c20400               ret 4
// 00a56d7f  5e                   pop esi
// 00a56d80  b801000000           mov eax, 1
// 00a56d85  5b                   pop ebx
// 00a56d86  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Deprecated\XTFlatComboBox.cpp (function ?IsPrintChar@?$CXTPMaskEditT@VCEdit@@@@MAEHD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Deprecated/XTFlatComboBox.cpp
