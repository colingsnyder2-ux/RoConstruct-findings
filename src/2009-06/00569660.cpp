// roc 2009-06 00569660  unit: RBX::RbxG3D::RenderScene  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00569660
//
// 00569660  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00569664  53                   push ebx
// 00569665  55                   push ebp
// 00569666  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0056966a  2bcd                 sub ecx, ebp
// 0056966c  b867666666           mov eax, 0x66666667
// 00569671  f7e9                 imul ecx
// 00569673  56                   push esi
// 00569674  c1fa05               sar edx, 5
// 00569677  57                   push edi
// 00569678  8bfa                 mov edi, edx
// 0056967a  c1ef1f               shr edi, 0x1f
// 0056967d  03fa                 add edi, edx
// 0056967f  8bc7                 mov eax, edi
// 00569681  99                   cdq 
// 00569682  2bc2                 sub eax, edx
// 00569684  8bf0                 mov esi, eax
// 00569686  d1fe                 sar esi, 1
// 00569688  85f6                 test esi, esi
// 0056968a  7e2b                 jle 0x5696b7
// 0056968c  8d1cb6               lea ebx, [esi + esi*4]
// 0056968f  c1e304               shl ebx, 4
// 00569692  03dd                 add ebx, ebp
// 00569694  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00569698  50                   push eax
// 00569699  83ec50               sub esp, 0x50
// 0056969c  83eb50               sub ebx, 0x50
// 0056969f  8bcc                 mov ecx, esp
// 005696a1  53                   push ebx
// 005696a2  4e                   dec esi
// 005696a3  e8185cf3ff           call 0x49f2c0
// 005696a8  57                   push edi
// 005696a9  56                   push esi
// 005696aa  55                   push ebp
// 005696ab  e8f0fdffff           call 0x5694a0
// 005696b0  83c460               add esp, 0x60
// 005696b3  85f6                 test esi, esi
// 005696b5  7fdd                 jg 0x569694
// 005696b7  5f                   pop edi
// 005696b8  5e                   pop esi
// 005696b9  5d                   pop ebp
// 005696ba  5b                   pop ebx
// 005696bb  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Make_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
