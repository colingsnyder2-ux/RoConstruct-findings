// roc 2009-12 0083c460  unit: CXTPAccessible  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083c460
//
// 0083c460  56                   push esi
// 0083c461  57                   push edi
// 0083c462  8bf9                 mov edi, ecx
// 0083c464  837f4000             cmp dword ptr [edi + 0x40], 0
// 0083c468  750d                 jne 0x83c477
// 0083c46a  68e4839f00           push 0x9f83e4
// 0083c46f  8d4f38               lea ecx, [edi + 0x38]
// 0083c472  e859ffffff           call 0x83c3d0
// 0083c477  837f1000             cmp dword ptr [edi + 0x10], 0
// 0083c47b  8d7710               lea esi, [edi + 0x10]
// 0083c47e  7510                 jne 0x83c490
// 0083c480  6a00                 push 0
// 0083c482  68c8839f00           push 0x9f83c8
// 0083c487  56                   push esi
// 0083c488  8d4f38               lea ecx, [edi + 0x38]
// 0083c48b  e860f4ffff           call 0x83b8f0
// 0083c490  8b36                 mov esi, dword ptr [esi]
// 0083c492  85f6                 test esi, esi
// 0083c494  741b                 je 0x83c4b1
// 0083c496  8b442418             mov eax, dword ptr [esp + 0x18]
// 0083c49a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0083c49e  8b542410             mov edx, dword ptr [esp + 0x10]
// 0083c4a2  50                   push eax
// 0083c4a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 0083c4a7  51                   push ecx
// 0083c4a8  52                   push edx
// 0083c4a9  50                   push eax
// 0083c4aa  ffd6                 call esi
// 0083c4ac  5f                   pop edi
// 0083c4ad  5e                   pop esi
// 0083c4ae  c21000               ret 0x10
// 0083c4b1  5f                   pop edi
// 0083c4b2  b805400080           mov eax, 0x80004005
// 0083c4b7  5e                   pop esi
// 0083c4b8  c21000               ret 0x10
// copied from an identical function in another client (function ?AccessibleObjectFromWindow@CXTPAccessible@@IAEJPAUHWND__@@KABU_GUID@@PAPAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPSystemHelpers.cpp