// roc 2009-06 0056a260  unit: RBX::RbxG3D::RenderScene  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056a260
//
// 0056a260  83ec50               sub esp, 0x50
// 0056a263  53                   push ebx
// 0056a264  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0056a268  55                   push ebp
// 0056a269  56                   push esi
// 0056a26a  8b742464             mov esi, dword ptr [esp + 0x64]
// 0056a26e  2bf3                 sub esi, ebx
// 0056a270  b867666666           mov eax, 0x66666667
// 0056a275  f7ee                 imul esi
// 0056a277  c1fa05               sar edx, 5
// 0056a27a  8bc2                 mov eax, edx
// 0056a27c  c1e81f               shr eax, 0x1f
// 0056a27f  03c2                 add eax, edx
// 0056a281  83f801               cmp eax, 1
// 0056a284  57                   push edi
// 0056a285  7e63                 jle 0x56a2ea
// 0056a287  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 0056a28b  8d7c33b0             lea edi, [ebx + esi - 0x50]
// 0056a28f  57                   push edi
// 0056a290  8d4c2414             lea ecx, [esp + 0x14]
// 0056a294  e82750f3ff           call 0x49f2c0
// 0056a299  53                   push ebx
// 0056a29a  8bcf                 mov ecx, edi
// 0056a29c  e86f3df3ff           call 0x49e010
// 0056a2a1  55                   push ebp
// 0056a2a2  83ec50               sub esp, 0x50
// 0056a2a5  8d442464             lea eax, [esp + 0x64]
// 0056a2a9  8bcc                 mov ecx, esp
// 0056a2ab  50                   push eax
// 0056a2ac  e80f50f3ff           call 0x49f2c0
// 0056a2b1  8d4eb0               lea ecx, [esi - 0x50]
// 0056a2b4  b867666666           mov eax, 0x66666667
// 0056a2b9  f7e9                 imul ecx
// 0056a2bb  c1fa05               sar edx, 5
// 0056a2be  8bca                 mov ecx, edx
// 0056a2c0  c1e91f               shr ecx, 0x1f
// 0056a2c3  03ca                 add ecx, edx
// 0056a2c5  51                   push ecx
// 0056a2c6  6a00                 push 0
// 0056a2c8  53                   push ebx
// 0056a2c9  e8d2f1ffff           call 0x5694a0
// 0056a2ce  83ee50               sub esi, 0x50
// 0056a2d1  b867666666           mov eax, 0x66666667
// 0056a2d6  f7ee                 imul esi
// 0056a2d8  c1fa05               sar edx, 5
// 0056a2db  8bc2                 mov eax, edx
// 0056a2dd  c1e81f               shr eax, 0x1f
// 0056a2e0  03c2                 add eax, edx
// 0056a2e2  83c460               add esp, 0x60
// 0056a2e5  83f801               cmp eax, 1
// 0056a2e8  7fa1                 jg 0x56a28b
// 0056a2ea  5f                   pop edi
// 0056a2eb  5e                   pop esi
// 0056a2ec  5d                   pop ebp
// 0056a2ed  5b                   pop ebx
// 0056a2ee  83c450               add esp, 0x50
// 0056a2f1  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort_heap@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
