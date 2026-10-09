// roc 2008-06 00506ae0  unit: RBX::Render::RenderScene  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00506ae0
//
// 00506ae0  83ec50               sub esp, 0x50
// 00506ae3  53                   push ebx
// 00506ae4  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00506ae8  55                   push ebp
// 00506ae9  56                   push esi
// 00506aea  8b742464             mov esi, dword ptr [esp + 0x64]
// 00506aee  2bf3                 sub esi, ebx
// 00506af0  b867666666           mov eax, 0x66666667
// 00506af5  f7ee                 imul esi
// 00506af7  c1fa05               sar edx, 5
// 00506afa  8bc2                 mov eax, edx
// 00506afc  c1e81f               shr eax, 0x1f
// 00506aff  03c2                 add eax, edx
// 00506b01  83f801               cmp eax, 1
// 00506b04  57                   push edi
// 00506b05  7e63                 jle 0x506b6a
// 00506b07  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 00506b0b  8d7c33b0             lea edi, [ebx + esi - 0x50]
// 00506b0f  57                   push edi
// 00506b10  8d4c2414             lea ecx, [esp + 0x14]
// 00506b14  e83711f7ff           call 0x477c50
// 00506b19  53                   push ebx
// 00506b1a  8bcf                 mov ecx, edi
// 00506b1c  e87ffef6ff           call 0x4769a0
// 00506b21  55                   push ebp
// 00506b22  83ec50               sub esp, 0x50
// 00506b25  8d442464             lea eax, [esp + 0x64]
// 00506b29  8bcc                 mov ecx, esp
// 00506b2b  50                   push eax
// 00506b2c  e81f11f7ff           call 0x477c50
// 00506b31  8d4eb0               lea ecx, [esi - 0x50]
// 00506b34  b867666666           mov eax, 0x66666667
// 00506b39  f7e9                 imul ecx
// 00506b3b  c1fa05               sar edx, 5
// 00506b3e  8bca                 mov ecx, edx
// 00506b40  c1e91f               shr ecx, 0x1f
// 00506b43  03ca                 add ecx, edx
// 00506b45  51                   push ecx
// 00506b46  6a00                 push 0
// 00506b48  53                   push ebx
// 00506b49  e8d2f1ffff           call 0x505d20
// 00506b4e  83ee50               sub esi, 0x50
// 00506b51  b867666666           mov eax, 0x66666667
// 00506b56  f7ee                 imul esi
// 00506b58  c1fa05               sar edx, 5
// 00506b5b  8bc2                 mov eax, edx
// 00506b5d  c1e81f               shr eax, 0x1f
// 00506b60  03c2                 add eax, edx
// 00506b62  83c460               add esp, 0x60
// 00506b65  83f801               cmp eax, 1
// 00506b68  7fa1                 jg 0x506b0b
// 00506b6a  5f                   pop edi
// 00506b6b  5e                   pop esi
// 00506b6c  5d                   pop ebp
// 00506b6d  5b                   pop ebx
// 00506b6e  83c450               add esp, 0x50
// 00506b71  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort_heap@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
