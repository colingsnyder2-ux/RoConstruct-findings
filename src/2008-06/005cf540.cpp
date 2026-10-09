// roc 2008-06 005cf540  unit: RBX::VWidget::?$NonFactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf540
//
// 005cf540  64a100000000         mov eax, dword ptr fs:[0]
// 005cf546  6aff                 push -1
// 005cf548  688e557d00           push 0x7d558e
// 005cf54d  50                   push eax
// 005cf54e  b801000000           mov eax, 1
// 005cf553  64892500000000       mov dword ptr fs:[0], esp
// 005cf55a  8405f49a9700         test byte ptr [0x979af4], al
// 005cf560  7530                 jne 0x5cf592
// 005cf562  0905f49a9700         or dword ptr [0x979af4], eax
// 005cf568  6aff                 push -1
// 005cf56a  6830a78300           push 0x83a730
// 005cf56f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005cf577  e8144af8ff           call 0x553f90
// 005cf57c  83c408               add esp, 8
// 005cf57f  a3f09a9700           mov dword ptr [0x979af0], eax
// 005cf584  8b0c24               mov ecx, dword ptr [esp]
// 005cf587  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf58e  83c40c               add esp, 0xc
// 005cf591  c3                   ret 
// 005cf592  8b0c24               mov ecx, dword ptr [esp]
// 005cf595  a1f09a9700           mov eax, dword ptr [0x979af0]
// 005cf59a  64890d00000000       mov dword ptr fs:[0], ecx
// 005cf5a1  83c40c               add esp, 0xc
// 005cf5a4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
