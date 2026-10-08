// roc 2009-06 0062af90  unit: RBX::Workspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0062af90
//
// 0062af90  8b09                 mov ecx, dword ptr [ecx]
// 0062af92  85c9                 test ecx, ecx
// 0062af94  7409                 je 0x62af9f
// 0062af96  8b01                 mov eax, dword ptr [ecx]
// 0062af98  8b5030               mov edx, dword ptr [eax + 0x30]
// 0062af9b  6a01                 push 1
// 0062af9d  ffd2                 call edx
// 0062af9f  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??1?$auto_ptr@VMouseCommand@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
