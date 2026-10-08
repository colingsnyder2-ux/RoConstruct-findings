// roc 2007-08 00587d30  unit: RBX::Reflection::EnumDescriptor  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00587d30
//
// 00587d30  64a100000000         mov eax, dword ptr fs:[0]
// 00587d36  6aff                 push -1
// 00587d38  687e5f7500           push 0x755f7e
// 00587d3d  50                   push eax
// 00587d3e  b801000000           mov eax, 1
// 00587d43  64892500000000       mov dword ptr fs:[0], esp
// 00587d4a  8405f8348c00         test byte ptr [0x8c34f8], al
// 00587d50  7530                 jne 0x587d82
// 00587d52  0905f8348c00         or dword ptr [0x8c34f8], eax
// 00587d58  6aff                 push -1
// 00587d5a  68d0288a00           push 0x8a28d0
// 00587d5f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00587d67  e8d44bfaff           call 0x52c940
// 00587d6c  83c408               add esp, 8
// 00587d6f  a3f4348c00           mov dword ptr [0x8c34f4], eax
// 00587d74  8b0c24               mov ecx, dword ptr [esp]
// 00587d77  64890d00000000       mov dword ptr fs:[0], ecx
// 00587d7e  83c40c               add esp, 0xc
// 00587d81  c3                   ret 
// 00587d82  8b0c24               mov ecx, dword ptr [esp]
// 00587d85  a1f4348c00           mov eax, dword ptr [0x8c34f4]
// 00587d8a  64890d00000000       mov dword ptr fs:[0], ecx
// 00587d91  83c40c               add esp, 0xc
// 00587d94  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
