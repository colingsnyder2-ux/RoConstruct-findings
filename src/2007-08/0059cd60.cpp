// roc 2007-08 0059cd60  unit: RBX::VWidget::?$NonFactoryProduct  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059cd60
//
// 0059cd60  64a100000000         mov eax, dword ptr fs:[0]
// 0059cd66  6aff                 push -1
// 0059cd68  68ce797500           push 0x7579ce
// 0059cd6d  50                   push eax
// 0059cd6e  b801000000           mov eax, 1
// 0059cd73  64892500000000       mov dword ptr fs:[0], esp
// 0059cd7a  84059c508c00         test byte ptr [0x8c509c], al
// 0059cd80  7530                 jne 0x59cdb2
// 0059cd82  09059c508c00         or dword ptr [0x8c509c], eax
// 0059cd88  6aff                 push -1
// 0059cd8a  68c0197b00           push 0x7b19c0
// 0059cd8f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059cd97  e8a4fbf8ff           call 0x52c940
// 0059cd9c  83c408               add esp, 8
// 0059cd9f  a398508c00           mov dword ptr [0x8c5098], eax
// 0059cda4  8b0c24               mov ecx, dword ptr [esp]
// 0059cda7  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cdae  83c40c               add esp, 0xc
// 0059cdb1  c3                   ret 
// 0059cdb2  8b0c24               mov ecx, dword ptr [esp]
// 0059cdb5  a198508c00           mov eax, dword ptr [0x8c5098]
// 0059cdba  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cdc1  83c40c               add esp, 0xc
// 0059cdc4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
