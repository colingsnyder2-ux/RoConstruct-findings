// roc 2008-06 00406850  unit: VCApp::?$CComObject  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406850
//
// 00406850  64a100000000         mov eax, dword ptr fs:[0]
// 00406856  6aff                 push -1
// 00406858  684ece7b00           push 0x7bce4e
// 0040685d  50                   push eax
// 0040685e  b801000000           mov eax, 1
// 00406863  64892500000000       mov dword ptr fs:[0], esp
// 0040686a  8405f8c29600         test byte ptr [0x96c2f8], al
// 00406870  7530                 jne 0x4068a2
// 00406872  0905f8c29600         or dword ptr [0x96c2f8], eax
// 00406878  6aff                 push -1
// 0040687a  68384d9300           push 0x934d38
// 0040687f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00406887  e804d71400           call 0x553f90
// 0040688c  83c408               add esp, 8
// 0040688f  a3f4c29600           mov dword ptr [0x96c2f4], eax
// 00406894  8b0c24               mov ecx, dword ptr [esp]
// 00406897  64890d00000000       mov dword ptr fs:[0], ecx
// 0040689e  83c40c               add esp, 0xc
// 004068a1  c3                   ret 
// 004068a2  8b0c24               mov ecx, dword ptr [esp]
// 004068a5  a1f4c29600           mov eax, dword ptr [0x96c2f4]
// 004068aa  64890d00000000       mov dword ptr fs:[0], ecx
// 004068b1  83c40c               add esp, 0xc
// 004068b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
