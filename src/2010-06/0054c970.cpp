// roc 2010-06 0054c970  unit: RBX::AggregateChunk  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054c970
//
// 0054c970  83ec50               sub esp, 0x50
// 0054c973  53                   push ebx
// 0054c974  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 0054c978  55                   push ebp
// 0054c979  56                   push esi
// 0054c97a  8b742464             mov esi, dword ptr [esp + 0x64]
// 0054c97e  2bf3                 sub esi, ebx
// 0054c980  b867666666           mov eax, 0x66666667
// 0054c985  f7ee                 imul esi
// 0054c987  c1fa05               sar edx, 5
// 0054c98a  8bc2                 mov eax, edx
// 0054c98c  c1e81f               shr eax, 0x1f
// 0054c98f  03c2                 add eax, edx
// 0054c991  83f801               cmp eax, 1
// 0054c994  57                   push edi
// 0054c995  7e63                 jle 0x54c9fa
// 0054c997  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 0054c99b  8d7c33b0             lea edi, [ebx + esi - 0x50]
// 0054c99f  57                   push edi
// 0054c9a0  8d4c2414             lea ecx, [esp + 0x14]
// 0054c9a4  e82758f4ff           call 0x4921d0
// 0054c9a9  53                   push ebx
// 0054c9aa  8bcf                 mov ecx, edi
// 0054c9ac  e8ff44f4ff           call 0x490eb0
// 0054c9b1  55                   push ebp
// 0054c9b2  83ec50               sub esp, 0x50
// 0054c9b5  8d442464             lea eax, [esp + 0x64]
// 0054c9b9  8bcc                 mov ecx, esp
// 0054c9bb  50                   push eax
// 0054c9bc  e80f58f4ff           call 0x4921d0
// 0054c9c1  8d4eb0               lea ecx, [esi - 0x50]
// 0054c9c4  b867666666           mov eax, 0x66666667
// 0054c9c9  f7e9                 imul ecx
// 0054c9cb  c1fa05               sar edx, 5
// 0054c9ce  8bca                 mov ecx, edx
// 0054c9d0  c1e91f               shr ecx, 0x1f
// 0054c9d3  03ca                 add ecx, edx
// 0054c9d5  51                   push ecx
// 0054c9d6  6a00                 push 0
// 0054c9d8  53                   push ebx
// 0054c9d9  e882f0ffff           call 0x54ba60
// 0054c9de  83ee50               sub esi, 0x50
// 0054c9e1  b867666666           mov eax, 0x66666667
// 0054c9e6  f7ee                 imul esi
// 0054c9e8  c1fa05               sar edx, 5
// 0054c9eb  8bc2                 mov eax, edx
// 0054c9ed  c1e81f               shr eax, 0x1f
// 0054c9f0  03c2                 add eax, edx
// 0054c9f2  83c460               add esp, 0x60
// 0054c9f5  83f801               cmp eax, 1
// 0054c9f8  7fa1                 jg 0x54c99b
// 0054c9fa  5f                   pop edi
// 0054c9fb  5e                   pop esi
// 0054c9fc  5d                   pop ebp
// 0054c9fd  5b                   pop ebx
// 0054c9fe  83c450               add esp, 0x50
// 0054ca01  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort_heap@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
