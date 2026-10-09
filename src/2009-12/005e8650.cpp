// roc 2009-12 005e8650  unit: RBX::VBeveledBlockMesh::?$CustomizableMesh  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e8650
//
// 005e8650  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e8654  53                   push ebx
// 005e8655  55                   push ebp
// 005e8656  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005e865a  2bcd                 sub ecx, ebp
// 005e865c  b867666666           mov eax, 0x66666667
// 005e8661  f7e9                 imul ecx
// 005e8663  56                   push esi
// 005e8664  c1fa05               sar edx, 5
// 005e8667  57                   push edi
// 005e8668  8bfa                 mov edi, edx
// 005e866a  c1ef1f               shr edi, 0x1f
// 005e866d  03fa                 add edi, edx
// 005e866f  8bc7                 mov eax, edi
// 005e8671  99                   cdq 
// 005e8672  2bc2                 sub eax, edx
// 005e8674  8bf0                 mov esi, eax
// 005e8676  d1fe                 sar esi, 1
// 005e8678  85f6                 test esi, esi
// 005e867a  7e2b                 jle 0x5e86a7
// 005e867c  8d1cb6               lea ebx, [esi + esi*4]
// 005e867f  c1e304               shl ebx, 4
// 005e8682  03dd                 add ebx, ebp
// 005e8684  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005e8688  50                   push eax
// 005e8689  83ec50               sub esp, 0x50
// 005e868c  83eb50               sub ebx, 0x50
// 005e868f  8bcc                 mov ecx, esp
// 005e8691  53                   push ebx
// 005e8692  4e                   dec esi
// 005e8693  e89832eeff           call 0x4cb930
// 005e8698  57                   push edi
// 005e8699  56                   push esi
// 005e869a  55                   push ebp
// 005e869b  e8f0fdffff           call 0x5e8490
// 005e86a0  83c460               add esp, 0x60
// 005e86a3  85f6                 test esi, esi
// 005e86a5  7fdd                 jg 0x5e8684
// 005e86a7  5f                   pop edi
// 005e86a8  5e                   pop esi
// 005e86a9  5d                   pop ebp
// 005e86aa  5b                   pop ebx
// 005e86ab  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Make_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
