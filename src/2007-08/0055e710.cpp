// roc 2007-08 0055e710  unit: RBX::FixedCameraCommand  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0055e710
//
// 0055e710  64a100000000         mov eax, dword ptr fs:[0]
// 0055e716  6aff                 push -1
// 0055e718  686e3c7500           push 0x753c6e
// 0055e71d  50                   push eax
// 0055e71e  b801000000           mov eax, 1
// 0055e723  64892500000000       mov dword ptr fs:[0], esp
// 0055e72a  840508238c00         test byte ptr [0x8c2308], al
// 0055e730  7530                 jne 0x55e762
// 0055e732  090508238c00         or dword ptr [0x8c2308], eax
// 0055e738  6aff                 push -1
// 0055e73a  6840bf7b00           push 0x7bbf40
// 0055e73f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0055e747  e8f4e1fcff           call 0x52c940
// 0055e74c  83c408               add esp, 8
// 0055e74f  a304238c00           mov dword ptr [0x8c2304], eax
// 0055e754  8b0c24               mov ecx, dword ptr [esp]
// 0055e757  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e75e  83c40c               add esp, 0xc
// 0055e761  c3                   ret 
// 0055e762  8b0c24               mov ecx, dword ptr [esp]
// 0055e765  a104238c00           mov eax, dword ptr [0x8c2304]
// 0055e76a  64890d00000000       mov dword ptr fs:[0], ecx
// 0055e771  83c40c               add esp, 0xc
// 0055e774  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
