// roc 2007-03 004f15b0  unit: seg_004f0000  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f15b0
//
// 004f15b0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f15b4  53                   push ebx
// 004f15b5  55                   push ebp
// 004f15b6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 004f15ba  2bcd                 sub ecx, ebp
// 004f15bc  b867666666           mov eax, 0x66666667
// 004f15c1  f7e9                 imul ecx
// 004f15c3  56                   push esi
// 004f15c4  c1fa05               sar edx, 5
// 004f15c7  57                   push edi
// 004f15c8  8bfa                 mov edi, edx
// 004f15ca  c1ef1f               shr edi, 0x1f
// 004f15cd  03fa                 add edi, edx
// 004f15cf  8bc7                 mov eax, edi
// 004f15d1  99                   cdq 
// 004f15d2  2bc2                 sub eax, edx
// 004f15d4  8bf0                 mov esi, eax
// 004f15d6  d1fe                 sar esi, 1
// 004f15d8  85f6                 test esi, esi
// 004f15da  7e2d                 jle 0x4f1609
// 004f15dc  8d1cb6               lea ebx, [esi + esi*4]
// 004f15df  c1e304               shl ebx, 4
// 004f15e2  03dd                 add ebx, ebp
// 004f15e4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004f15e8  50                   push eax
// 004f15e9  83ec50               sub esp, 0x50
// 004f15ec  83eb50               sub ebx, 0x50
// 004f15ef  8bcc                 mov ecx, esp
// 004f15f1  53                   push ebx
// 004f15f2  83ee01               sub esi, 1
// 004f15f5  e87634f8ff           call 0x474a70
// 004f15fa  57                   push edi
// 004f15fb  56                   push esi
// 004f15fc  55                   push ebp
// 004f15fd  e8eefdffff           call 0x4f13f0
// 004f1602  83c460               add esp, 0x60
// 004f1605  85f6                 test esi, esi
// 004f1607  7fdb                 jg 0x4f15e4
// 004f1609  5f                   pop edi
// 004f160a  5e                   pop esi
// 004f160b  5d                   pop ebp
// 004f160c  5b                   pop ebx
// 004f160d  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Make_heap@PAVGLight@G3D@@HV12@P6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0P6A_NABV12@1@ZPAH0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
