// roc 2007-03 00455940  unit: seg_00450000  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455940
//
// 00455940  8bc1                 mov eax, ecx
// 00455942  33c9                 xor ecx, ecx
// 00455944  c700981f7900         mov dword ptr [eax], 0x791f98
// 0045594a  894810               mov dword ptr [eax + 0x10], ecx
// 0045594d  89480c               mov dword ptr [eax + 0xc], ecx
// 00455950  894808               mov dword ptr [eax + 8], ecx
// 00455953  894804               mov dword ptr [eax + 4], ecx
// 00455956  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ??0GImage@G3D@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
