// roc 2008-06 00773910  unit: VCEdit::?$CXTMaskEditT  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00773910
//
// 00773910  53                   push ebx
// 00773911  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00773915  0fbec3               movsx eax, bl
// 00773918  56                   push esi
// 00773919  50                   push eax
// 0077391a  8bf1                 mov esi, ecx
// 0077391c  ff1518268000         call dword ptr [0x802618]
// 00773922  83c404               add esp, 4
// 00773925  85c0                 test eax, eax
// 00773927  7516                 jne 0x77393f
// 00773929  8b16                 mov edx, dword ptr [esi]
// 0077392b  8b8254010000         mov eax, dword ptr [edx + 0x154]
// 00773931  53                   push ebx
// 00773932  8bce                 mov ecx, esi
// 00773934  ffd0                 call eax
// 00773936  85c0                 test eax, eax
// 00773938  7505                 jne 0x77393f
// 0077393a  5e                   pop esi
// 0077393b  5b                   pop ebx
// 0077393c  c20400               ret 4
// 0077393f  5e                   pop esi
// 00773940  b801000000           mov eax, 1
// 00773945  5b                   pop ebx
// 00773946  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTMaskEdit.cpp (function ?IsPrintChar@?$CXTMaskEditT@VCEdit@@@@MAEHD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTMaskEdit.cpp
