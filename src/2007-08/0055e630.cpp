// roc 2007-08 0055e630  unit: RBX::FixedCameraCommand  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e630
//
// 0055e630  64a100000000         mov eax, dword ptr fs:[0]
// 0055e636  6aff                 push -1
// 0055e638  682e3c7500           push 0x753c2e
// 0055e63d  50                   push eax
// 0055e63e  b801000000           mov eax, 1
// 0055e643  64892500000000       mov dword ptr fs:[0], esp
// 0055e64a  8405f8228c00         test byte ptr [0x8c22f8], al
// 0055e650  7530                 jne 0x55e682
// 0055e652  0905f8228c00         or dword ptr [0x8c22f8], eax
// 0055e658  6aff                 push -1
// 0055e65a  6830bf7b00           push 0x7bbf30
// 0055e65f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055e667  e8d4e2fcff           call 0x52c940
// 0055e66c  83c408               add esp, 8
// 0055e66f  a3f4228c00           mov dword ptr [0x8c22f4], eax
// 0055e674  8b0c24               mov ecx, dword ptr [esp]
// 0055e677  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e67e  83c40c               add esp, 0xc
// 0055e681  c3                   ret 
// 0055e682  8b0c24               mov ecx, dword ptr [esp]
// 0055e685  a1f4228c00           mov eax, dword ptr [0x8c22f4]
// 0055e68a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e691  83c40c               add esp, 0xc
// 0055e694  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
