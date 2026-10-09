// roc 2009-12 005e93a0  unit: seg_005e0000  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e93a0
//
// 005e93a0  83ec50               sub esp, 0x50
// 005e93a3  53                   push ebx
// 005e93a4  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 005e93a8  55                   push ebp
// 005e93a9  56                   push esi
// 005e93aa  8b742464             mov esi, dword ptr [esp + 0x64]
// 005e93ae  2bf3                 sub esi, ebx
// 005e93b0  b867666666           mov eax, 0x66666667
// 005e93b5  f7ee                 imul esi
// 005e93b7  c1fa05               sar edx, 5
// 005e93ba  8bc2                 mov eax, edx
// 005e93bc  c1e81f               shr eax, 0x1f
// 005e93bf  03c2                 add eax, edx
// 005e93c1  83f801               cmp eax, 1
// 005e93c4  57                   push edi
// 005e93c5  7e63                 jle 0x5e942a
// 005e93c7  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 005e93cb  8d7c33b0             lea edi, [ebx + esi - 0x50]
// 005e93cf  57                   push edi
// 005e93d0  8d4c2414             lea ecx, [esp + 0x14]
// 005e93d4  e85725eeff           call 0x4cb930
// 005e93d9  53                   push ebx
// 005e93da  8bcf                 mov ecx, edi
// 005e93dc  e82f12eeff           call 0x4ca610
// 005e93e1  55                   push ebp
// 005e93e2  83ec50               sub esp, 0x50
// 005e93e5  8d442464             lea eax, [esp + 0x64]
// 005e93e9  8bcc                 mov ecx, esp
// 005e93eb  50                   push eax
// 005e93ec  e83f25eeff           call 0x4cb930
// 005e93f1  8d4eb0               lea ecx, [esi - 0x50]
// 005e93f4  b867666666           mov eax, 0x66666667
// 005e93f9  f7e9                 imul ecx
// 005e93fb  c1fa05               sar edx, 5
// 005e93fe  8bca                 mov ecx, edx
// 005e9400  c1e91f               shr ecx, 0x1f
// 005e9403  03ca                 add ecx, edx
// 005e9405  51                   push ecx
// 005e9406  6a00                 push 0
// 005e9408  53                   push ebx
// 005e9409  e882f0ffff           call 0x5e8490
// 005e940e  83ee50               sub esi, 0x50
// 005e9411  b867666666           mov eax, 0x66666667
// 005e9416  f7ee                 imul esi
// 005e9418  c1fa05               sar edx, 5
// 005e941b  8bc2                 mov eax, edx
// 005e941d  c1e81f               shr eax, 0x1f
// 005e9420  03c2                 add eax, edx
// 005e9422  83c460               add esp, 0x60
// 005e9425  83f801               cmp eax, 1
// 005e9428  7fa1                 jg 0x5e93cb
// 005e942a  5f                   pop edi
// 005e942b  5e                   pop esi
// 005e942c  5d                   pop ebp
// 005e942d  5b                   pop ebx
// 005e942e  83c450               add esp, 0x50
// 005e9431  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort_heap@PAVGLight@G3D@@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
