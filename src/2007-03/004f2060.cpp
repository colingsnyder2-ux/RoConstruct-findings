// roc 2007-03 004f2060  unit: seg_004f0000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f2060
//
// 004f2060  83ec50               sub esp, 0x50
// 004f2063  53                   push ebx
// 004f2064  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 004f2068  55                   push ebp
// 004f2069  56                   push esi
// 004f206a  8b742464             mov esi, dword ptr [esp + 0x64]
// 004f206e  2bf3                 sub esi, ebx
// 004f2070  b867666666           mov eax, 0x66666667
// 004f2075  f7ee                 imul esi
// 004f2077  c1fa05               sar edx, 5
// 004f207a  8bc2                 mov eax, edx
// 004f207c  c1e81f               shr eax, 0x1f
// 004f207f  03c2                 add eax, edx
// 004f2081  83f801               cmp eax, 1
// 004f2084  57                   push edi
// 004f2085  7e63                 jle 0x4f20ea
// 004f2087  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 004f208b  8d7c33b0             lea edi, [ebx + esi - 0x50]
// 004f208f  57                   push edi
// 004f2090  8d4c2414             lea ecx, [esp + 0x14]
// 004f2094  e8d729f8ff           call 0x474a70
// 004f2099  53                   push ebx
// 004f209a  8bcf                 mov ecx, edi
// 004f209c  e81f15f8ff           call 0x4735c0
// 004f20a1  55                   push ebp
// 004f20a2  83ec50               sub esp, 0x50
// 004f20a5  8d442464             lea eax, [esp + 0x64]
// 004f20a9  8bcc                 mov ecx, esp
// 004f20ab  50                   push eax
// 004f20ac  e8bf29f8ff           call 0x474a70
// 004f20b1  8d4eb0               lea ecx, [esi - 0x50]
// 004f20b4  b867666666           mov eax, 0x66666667
// 004f20b9  f7e9                 imul ecx
// 004f20bb  c1fa05               sar edx, 5
// 004f20be  8bca                 mov ecx, edx
// 004f20c0  c1e91f               shr ecx, 0x1f
// 004f20c3  03ca                 add ecx, edx
// 004f20c5  51                   push ecx
// 004f20c6  6a00                 push 0
// 004f20c8  53                   push ebx
// 004f20c9  e822f3ffff           call 0x4f13f0
// 004f20ce  83ee50               sub esi, 0x50
// 004f20d1  b867666666           mov eax, 0x66666667
// 004f20d6  f7ee                 imul esi
// 004f20d8  c1fa05               sar edx, 5
// 004f20db  8bc2                 mov eax, edx
// 004f20dd  c1e81f               shr eax, 0x1f
// 004f20e0  03c2                 add eax, edx
// 004f20e2  83c460               add esp, 0x60
// 004f20e5  83f801               cmp eax, 1
// 004f20e8  7fa1                 jg 0x4f208b
// 004f20ea  5f                   pop edi
// 004f20eb  5e                   pop esi
// 004f20ec  5d                   pop ebp
// 004f20ed  5b                   pop ebx
// 004f20ee  83c450               add esp, 0x50
// 004f20f1  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort_heap@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
