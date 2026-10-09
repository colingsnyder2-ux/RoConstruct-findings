// roc 2010-06 0054bc20  unit: RBX::AggregateChunk  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0054bc20
//
// 0054bc20  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054bc24  53                   push ebx
// 0054bc25  55                   push ebp
// 0054bc26  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0054bc2a  2bcd                 sub ecx, ebp
// 0054bc2c  b867666666           mov eax, 0x66666667
// 0054bc31  f7e9                 imul ecx
// 0054bc33  56                   push esi
// 0054bc34  c1fa05               sar edx, 5
// 0054bc37  57                   push edi
// 0054bc38  8bfa                 mov edi, edx
// 0054bc3a  c1ef1f               shr edi, 0x1f
// 0054bc3d  03fa                 add edi, edx
// 0054bc3f  8bc7                 mov eax, edi
// 0054bc41  99                   cdq 
// 0054bc42  2bc2                 sub eax, edx
// 0054bc44  8bf0                 mov esi, eax
// 0054bc46  d1fe                 sar esi, 1
// 0054bc48  85f6                 test esi, esi
// 0054bc4a  7e2b                 jle 0x54bc77
// 0054bc4c  8d1cb6               lea ebx, [esi + esi*4]
// 0054bc4f  c1e304               shl ebx, 4
// 0054bc52  03dd                 add ebx, ebp
// 0054bc54  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054bc58  50                   push eax
// 0054bc59  83ec50               sub esp, 0x50
// 0054bc5c  83eb50               sub ebx, 0x50
// 0054bc5f  8bcc                 mov ecx, esp
// 0054bc61  53                   push ebx
// 0054bc62  4e                   dec esi
// 0054bc63  e86865f4ff           call 0x4921d0
// 0054bc68  57                   push edi
// 0054bc69  56                   push esi
// 0054bc6a  55                   push ebp
// 0054bc6b  e8f0fdffff           call 0x54ba60
// 0054bc70  83c460               add esp, 0x60
// 0054bc73  85f6                 test esi, esi
// 0054bc75  7fdd                 jg 0x54bc54
// 0054bc77  5f                   pop edi
// 0054bc78  5e                   pop esi
// 0054bc79  5d                   pop ebp
// 0054bc7a  5b                   pop ebx
// 0054bc7b  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Make_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
