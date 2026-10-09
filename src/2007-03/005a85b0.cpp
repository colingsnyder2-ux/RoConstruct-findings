// roc 2007-03 005a85b0  unit: seg_005a0000  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005a85b0
//
// 005a85b0  c701bc5c7b00         mov dword ptr [ecx], 0x7b5cbc
// 005a85b6  8b4908               mov ecx, dword ptr [ecx + 8]
// 005a85b9  85c9                 test ecx, ecx
// 005a85bb  7408                 je 0x5a85c5
// 005a85bd  8b01                 mov eax, dword ptr [ecx]
// 005a85bf  8b10                 mov edx, dword ptr [eax]
// 005a85c1  6a01                 push 1
// 005a85c3  ffd2                 call edx
// 005a85c5  c3                   ret 
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??1ClumpStage@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
