// roc 2008-06 00505ee0  unit: RBX::Render::RenderScene  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00505ee0
//
// 00505ee0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00505ee4  53                   push ebx
// 00505ee5  55                   push ebp
// 00505ee6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00505eea  2bcd                 sub ecx, ebp
// 00505eec  b867666666           mov eax, 0x66666667
// 00505ef1  f7e9                 imul ecx
// 00505ef3  56                   push esi
// 00505ef4  c1fa05               sar edx, 5
// 00505ef7  57                   push edi
// 00505ef8  8bfa                 mov edi, edx
// 00505efa  c1ef1f               shr edi, 0x1f
// 00505efd  03fa                 add edi, edx
// 00505eff  8bc7                 mov eax, edi
// 00505f01  99                   cdq 
// 00505f02  2bc2                 sub eax, edx
// 00505f04  8bf0                 mov esi, eax
// 00505f06  d1fe                 sar esi, 1
// 00505f08  85f6                 test esi, esi
// 00505f0a  7e2b                 jle 0x505f37
// 00505f0c  8d1cb6               lea ebx, [esi + esi*4]
// 00505f0f  c1e304               shl ebx, 4
// 00505f12  03dd                 add ebx, ebp
// 00505f14  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00505f18  50                   push eax
// 00505f19  83ec50               sub esp, 0x50
// 00505f1c  83eb50               sub ebx, 0x50
// 00505f1f  8bcc                 mov ecx, esp
// 00505f21  53                   push ebx
// 00505f22  4e                   dec esi
// 00505f23  e8281df7ff           call 0x477c50
// 00505f28  57                   push edi
// 00505f29  56                   push esi
// 00505f2a  55                   push ebp
// 00505f2b  e8f0fdffff           call 0x505d20
// 00505f30  83c460               add esp, 0x60
// 00505f33  85f6                 test esi, esi
// 00505f35  7fdd                 jg 0x505f14
// 00505f37  5f                   pop edi
// 00505f38  5e                   pop esi
// 00505f39  5d                   pop ebp
// 00505f3a  5b                   pop ebx
// 00505f3b  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Make_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
