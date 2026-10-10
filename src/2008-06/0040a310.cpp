// from server: 100% by tester
// roc 2008-06 005a0310  unit: RBX::Workspace  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a0310
//
// 005a0310  8b09                 mov ecx, dword ptr [ecx]
// 005a0312  85c9                 test ecx, ecx
// 005a0314  7409                 je 0x5a031f
// 005a0316  8b01                 mov eax, dword ptr [ecx]
// 005a0318  8b5030               mov edx, dword ptr [eax + 0x30]
// 005a031b  6a01                 push 1
// 005a031d  ffd2                 call edx
// 005a031f  c3                   ret 
// library rbxgs/v8datamodel\Workspace.cpp (function ??1?$auto_ptr@VMouseCommand@RBX@@@std@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Workspace.cpp
