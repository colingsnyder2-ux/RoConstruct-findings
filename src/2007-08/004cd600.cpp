// roc 2007-08 004cd600  unit: G3D::_WeakPtr  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd600
//
// 004cd600  64a100000000         mov eax, dword ptr fs:[0]
// 004cd606  6aff                 push -1
// 004cd608  680ec07400           push 0x74c00e
// 004cd60d  50                   push eax
// 004cd60e  b801000000           mov eax, 1
// 004cd613  64892500000000       mov dword ptr fs:[0], esp
// 004cd61a  8405d4f98b00         test byte ptr [0x8bf9d4], al
// 004cd620  7530                 jne 0x4cd652
// 004cd622  0905d4f98b00         or dword ptr [0x8bf9d4], eax
// 004cd628  6aff                 push -1
// 004cd62a  6848a78a00           push 0x8aa748
// 004cd62f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 004cd637  e804f30500           call 0x52c940
// 004cd63c  83c408               add esp, 8
// 004cd63f  a3d0f98b00           mov dword ptr [0x8bf9d0], eax
// 004cd644  8b0c24               mov ecx, dword ptr [esp]
// 004cd647  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd64e  83c40c               add esp, 0xc
// 004cd651  c3                   ret 
// 004cd652  8b0c24               mov ecx, dword ptr [esp]
// 004cd655  a1d0f98b00           mov eax, dword ptr [0x8bf9d0]
// 004cd65a  64890d00000000       mov dword ptr fs:[0], ecx
// 004cd661  83c40c               add esp, 0xc
// 004cd664  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
