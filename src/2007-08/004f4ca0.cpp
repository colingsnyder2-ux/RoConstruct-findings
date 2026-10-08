// roc 2007-08 004f4ca0  unit: boost::bad_lexical_cast  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f4ca0
//
// 004f4ca0  83ec08               sub esp, 8
// 004f4ca3  56                   push esi
// 004f4ca4  8bf1                 mov esi, ecx
// 004f4ca6  8b4604               mov eax, dword ptr [esi + 4]
// 004f4ca9  3b4608               cmp eax, dword ptr [esi + 8]
// 004f4cac  8b0e                 mov ecx, dword ptr [esi]
// 004f4cae  7d20                 jge 0x4f4cd0
// 004f4cb0  8d04c1               lea eax, [ecx + eax*8]
// 004f4cb3  85c0                 test eax, eax
// 004f4cb5  740e                 je 0x4f4cc5
// 004f4cb7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004f4cbb  d901                 fld dword ptr [ecx]
// 004f4cbd  d918                 fstp dword ptr [eax]
// 004f4cbf  d94104               fld dword ptr [ecx + 4]
// 004f4cc2  d95804               fstp dword ptr [eax + 4]
// 004f4cc5  83460401             add dword ptr [esi + 4], 1
// 004f4cc9  5e                   pop esi
// 004f4cca  83c408               add esp, 8
// 004f4ccd  c20400               ret 4
// 004f4cd0  57                   push edi
// 004f4cd1  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004f4cd5  3bf9                 cmp edi, ecx
// 004f4cd7  7228                 jb 0x4f4d01
// 004f4cd9  8d14c1               lea edx, [ecx + eax*8]
// 004f4cdc  3bfa                 cmp edi, edx
// 004f4cde  7321                 jae 0x4f4d01
// 004f4ce0  d907                 fld dword ptr [edi]
// 004f4ce2  8d442408             lea eax, [esp + 8]
// 004f4ce6  d95c2408             fstp dword ptr [esp + 8]
// 004f4cea  50                   push eax
// 004f4ceb  d94704               fld dword ptr [edi + 4]
// 004f4cee  8bce                 mov ecx, esi
// 004f4cf0  d95c2410             fstp dword ptr [esp + 0x10]
// 004f4cf4  e8a7ffffff           call 0x4f4ca0
// 004f4cf9  5f                   pop edi
// 004f4cfa  5e                   pop esi
// 004f4cfb  83c408               add esp, 8
// 004f4cfe  c20400               ret 4
// 004f4d01  6a00                 push 0
// 004f4d03  83c001               add eax, 1
// 004f4d06  50                   push eax
// 004f4d07  8bce                 mov ecx, esi
// 004f4d09  e802f5ffff           call 0x4f4210
// 004f4d0e  d907                 fld dword ptr [edi]
// 004f4d10  8b4e04               mov ecx, dword ptr [esi + 4]
// 004f4d13  8b16                 mov edx, dword ptr [esi]
// 004f4d15  d95ccaf8             fstp dword ptr [edx + ecx*8 - 8]
// 004f4d19  d94704               fld dword ptr [edi + 4]
// 004f4d1c  8d44caf8             lea eax, [edx + ecx*8 - 8]
// 004f4d20  5f                   pop edi
// 004f4d21  d95804               fstp dword ptr [eax + 4]
// 004f4d24  5e                   pop esi
// 004f4d25  83c408               add esp, 8
// 004f4d28  c20400               ret 4
// library rbxgs-render/Mesh.cpp (function ?append@?$Array@VVector2@G3D@@@G3D@@QAEXABVVector2@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render Mesh.cpp
