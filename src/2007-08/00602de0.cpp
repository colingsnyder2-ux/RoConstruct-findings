// roc 2007-08 00602de0  unit: RBX::FallingDown  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602de0
//
// 00602de0  c70114a67b00         mov dword ptr [ecx], 0x7ba614
// 00602de6  8b4908               mov ecx, dword ptr [ecx + 8]
// 00602de9  85c9                 test ecx, ecx
// 00602deb  7408                 je 0x602df5
// 00602ded  8b01                 mov eax, dword ptr [ecx]
// 00602def  8b10                 mov edx, dword ptr [eax]
// 00602df1  6a01                 push 1
// 00602df3  ffd2                 call edx
// 00602df5  c3                   ret 
// library openrbx-client/App\v8world\ClumpStage2.cpp (function ??1ClumpStage@RBX@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/ClumpStage2.cpp
