// roc 2007-03 004e8700  unit: seg_004e0000  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004e8700
//
// 004e8700  83ec08               sub esp, 8
// 004e8703  56                   push esi
// 004e8704  8bf1                 mov esi, ecx
// 004e8706  8b4604               mov eax, dword ptr [esi + 4]
// 004e8709  3b4608               cmp eax, dword ptr [esi + 8]
// 004e870c  8b0e                 mov ecx, dword ptr [esi]
// 004e870e  7d20                 jge 0x4e8730
// 004e8710  8d04c1               lea eax, [ecx + eax*8]
// 004e8713  85c0                 test eax, eax
// 004e8715  740e                 je 0x4e8725
// 004e8717  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004e871b  d901                 fld dword ptr [ecx]
// 004e871d  d918                 fstp dword ptr [eax]
// 004e871f  d94104               fld dword ptr [ecx + 4]
// 004e8722  d95804               fstp dword ptr [eax + 4]
// 004e8725  83460401             add dword ptr [esi + 4], 1
// 004e8729  5e                   pop esi
// 004e872a  83c408               add esp, 8
// 004e872d  c20400               ret 4
// 004e8730  57                   push edi
// 004e8731  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004e8735  3bf9                 cmp edi, ecx
// 004e8737  7228                 jb 0x4e8761
// 004e8739  8d14c1               lea edx, [ecx + eax*8]
// 004e873c  3bfa                 cmp edi, edx
// 004e873e  7321                 jae 0x4e8761
// 004e8740  d907                 fld dword ptr [edi]
// 004e8742  8d442408             lea eax, [esp + 8]
// 004e8746  d95c2408             fstp dword ptr [esp + 8]
// 004e874a  50                   push eax
// 004e874b  d94704               fld dword ptr [edi + 4]
// 004e874e  8bce                 mov ecx, esi
// 004e8750  d95c2410             fstp dword ptr [esp + 0x10]
// 004e8754  e8a7ffffff           call 0x4e8700
// 004e8759  5f                   pop edi
// 004e875a  5e                   pop esi
// 004e875b  83c408               add esp, 8
// 004e875e  c20400               ret 4
// 004e8761  6a00                 push 0
// 004e8763  83c001               add eax, 1
// 004e8766  50                   push eax
// 004e8767  8bce                 mov ecx, esi
// 004e8769  e822f4ffff           call 0x4e7b90
// 004e876e  d907                 fld dword ptr [edi]
// 004e8770  8b4e04               mov ecx, dword ptr [esi + 4]
// 004e8773  8b16                 mov edx, dword ptr [esi]
// 004e8775  d95ccaf8             fstp dword ptr [edx + ecx*8 - 8]
// 004e8779  d94704               fld dword ptr [edi + 4]
// 004e877c  8d44caf8             lea eax, [edx + ecx*8 - 8]
// 004e8780  5f                   pop edi
// 004e8781  d95804               fstp dword ptr [eax + 4]
// 004e8784  5e                   pop esi
// 004e8785  83c408               add esp, 8
// 004e8788  c20400               ret 4
// library rbxgs-render/Mesh.cpp (function ?append@?$Array@VVector2@G3D@@@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
