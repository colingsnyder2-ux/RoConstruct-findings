// roc 2008-06 00409b80  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409b80
//
// 00409b80  64a100000000         mov eax, dword ptr fs:[0]
// 00409b86  6aff                 push -1
// 00409b88  689ed07b00           push 0x7bd09e
// 00409b8d  50                   push eax
// 00409b8e  b801000000           mov eax, 1
// 00409b93  64892500000000       mov dword ptr fs:[0], esp
// 00409b9a  840560c39600         test byte ptr [0x96c360], al
// 00409ba0  7530                 jne 0x409bd2
// 00409ba2  090560c39600         or dword ptr [0x96c360], eax
// 00409ba8  6aff                 push -1
// 00409baa  68d0009300           push 0x9300d0
// 00409baf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409bb7  e8d4a31400           call 0x553f90
// 00409bbc  83c408               add esp, 8
// 00409bbf  a35cc39600           mov dword ptr [0x96c35c], eax
// 00409bc4  8b0c24               mov ecx, dword ptr [esp]
// 00409bc7  64890d00000000       mov dword ptr fs:[0], ecx
// 00409bce  83c40c               add esp, 0xc
// 00409bd1  c3                   ret 
// 00409bd2  8b0c24               mov ecx, dword ptr [esp]
// 00409bd5  a15cc39600           mov eax, dword ptr [0x96c35c]
// 00409bda  64890d00000000       mov dword ptr fs:[0], ecx
// 00409be1  83c40c               add esp, 0xc
// 00409be4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
