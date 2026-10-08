// roc 2007-08 004fda40  unit: RBX::Render::AggregateChunk  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fda40
//
// 004fda40  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fda44  53                   push ebx
// 004fda45  55                   push ebp
// 004fda46  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004fda4a  2bcd                 sub ecx, ebp
// 004fda4c  b867666666           mov eax, 0x66666667
// 004fda51  f7e9                 imul ecx
// 004fda53  56                   push esi
// 004fda54  c1fa05               sar edx, 5
// 004fda57  57                   push edi
// 004fda58  8bfa                 mov edi, edx
// 004fda5a  c1ef1f               shr edi, 0x1f
// 004fda5d  03fa                 add edi, edx
// 004fda5f  8bc7                 mov eax, edi
// 004fda61  99                   cdq 
// 004fda62  2bc2                 sub eax, edx
// 004fda64  8bf0                 mov esi, eax
// 004fda66  d1fe                 sar esi, 1
// 004fda68  85f6                 test esi, esi
// 004fda6a  7e2d                 jle 0x4fda99
// 004fda6c  8d1cb6               lea ebx, [esi + esi*4]
// 004fda6f  c1e304               shl ebx, 4
// 004fda72  03dd                 add ebx, ebp
// 004fda74  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004fda78  50                   push eax
// 004fda79  83ec50               sub esp, 0x50
// 004fda7c  83eb50               sub ebx, 0x50
// 004fda7f  8bcc                 mov ecx, esp
// 004fda81  53                   push ebx
// 004fda82  83ee01               sub esi, 1
// 004fda85  e8e66ef7ff           call 0x474970
// 004fda8a  57                   push edi
// 004fda8b  56                   push esi
// 004fda8c  55                   push ebp
// 004fda8d  e8eefdffff           call 0x4fd880
// 004fda92  83c460               add esp, 0x60
// 004fda95  85f6                 test esi, esi
// 004fda97  7fdb                 jg 0x4fda74
// 004fda99  5f                   pop edi
// 004fda9a  5e                   pop esi
// 004fda9b  5d                   pop ebp
// 004fda9c  5b                   pop ebx
// 004fda9d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Make_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
