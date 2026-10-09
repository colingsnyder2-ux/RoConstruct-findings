// roc 2008-06 0057d750  unit: RBX::FixedCameraCommand  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d750
//
// 0057d750  64a100000000         mov eax, dword ptr fs:[0]
// 0057d756  6aff                 push -1
// 0057d758  68fe0e7d00           push 0x7d0efe
// 0057d75d  50                   push eax
// 0057d75e  b801000000           mov eax, 1
// 0057d763  64892500000000       mov dword ptr fs:[0], esp
// 0057d76a  8405a4539700         test byte ptr [0x9753a4], al
// 0057d770  7530                 jne 0x57d7a2
// 0057d772  0905a4539700         or dword ptr [0x9753a4], eax
// 0057d778  6aff                 push -1
// 0057d77a  68b8298400           push 0x8429b8
// 0057d77f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057d787  e80468fdff           call 0x553f90
// 0057d78c  83c408               add esp, 8
// 0057d78f  a3a0539700           mov dword ptr [0x9753a0], eax
// 0057d794  8b0c24               mov ecx, dword ptr [esp]
// 0057d797  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d79e  83c40c               add esp, 0xc
// 0057d7a1  c3                   ret 
// 0057d7a2  8b0c24               mov ecx, dword ptr [esp]
// 0057d7a5  a1a0539700           mov eax, dword ptr [0x9753a0]
// 0057d7aa  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d7b1  83c40c               add esp, 0xc
// 0057d7b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
