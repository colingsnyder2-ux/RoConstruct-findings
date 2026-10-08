// roc 2007-03 00474670  unit: seg_00470000  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00474670
//
// 00474670  8b442404             mov eax, dword ptr [esp + 4]
// 00474674  56                   push esi
// 00474675  57                   push edi
// 00474676  8db138080000         lea esi, [ecx + 0x838]
// 0047467c  b910000000           mov ecx, 0x10
// 00474681  8bf8                 mov edi, eax
// 00474683  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00474685  5f                   pop edi
// 00474686  5e                   pop esi
// 00474687  c20400               ret 4
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?getProjectionMatrix@RenderDevice@G3D@@QBE?AVMatrix4@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
