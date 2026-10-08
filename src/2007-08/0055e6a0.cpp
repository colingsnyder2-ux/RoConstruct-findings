// roc 2007-08 0055e6a0  unit: RBX::FixedCameraCommand  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e6a0
//
// 0055e6a0  64a100000000         mov eax, dword ptr fs:[0]
// 0055e6a6  6aff                 push -1
// 0055e6a8  684e3c7500           push 0x753c4e
// 0055e6ad  50                   push eax
// 0055e6ae  b801000000           mov eax, 1
// 0055e6b3  64892500000000       mov dword ptr fs:[0], esp
// 0055e6ba  840500238c00         test byte ptr [0x8c2300], al
// 0055e6c0  7530                 jne 0x55e6f2
// 0055e6c2  090500238c00         or dword ptr [0x8c2300], eax
// 0055e6c8  6aff                 push -1
// 0055e6ca  6828bf7b00           push 0x7bbf28
// 0055e6cf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055e6d7  e864e2fcff           call 0x52c940
// 0055e6dc  83c408               add esp, 8
// 0055e6df  a3fc228c00           mov dword ptr [0x8c22fc], eax
// 0055e6e4  8b0c24               mov ecx, dword ptr [esp]
// 0055e6e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e6ee  83c40c               add esp, 0xc
// 0055e6f1  c3                   ret 
// 0055e6f2  8b0c24               mov ecx, dword ptr [esp]
// 0055e6f5  a1fc228c00           mov eax, dword ptr [0x8c22fc]
// 0055e6fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e701  83c40c               add esp, 0xc
// 0055e704  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
