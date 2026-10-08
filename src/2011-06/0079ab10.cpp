// roc 2011-06 0079ab10  unit: RBX::$$A6AXABVStepped::?$signal::Vslot::?$callable  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0079ab10
//
// 0079ab10  56                   push esi
// 0079ab11  8bf1                 mov esi, ecx
// 0079ab13  8d4e08               lea ecx, [esi + 8]
// 0079ab16  c7460400000000       mov dword ptr [esi + 4], 0
// 0079ab1d  e86e6ddaff           call 0x541890
// 0079ab22  8d4e38               lea ecx, [esi + 0x38]
// 0079ab25  e8666ddaff           call 0x541890
// 0079ab2a  8d4e68               lea ecx, [esi + 0x68]
// 0079ab2d  e85e6ddaff           call 0x541890
// 0079ab32  8d8e98000000         lea ecx, [esi + 0x98]
// 0079ab38  e8536ddaff           call 0x541890
// 0079ab3d  e8ee710000           call 0x7a1d30
// 0079ab42  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 0079ab48  8bc6                 mov eax, esi
// 0079ab4a  5e                   pop esi
// 0079ab4b  c3                   ret 
// library rbxgs/v8kernel\Link.cpp (function ??0Link@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Link.cpp
