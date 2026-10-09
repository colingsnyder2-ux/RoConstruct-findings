// roc 2008-06 00409cd0  unit: RBX::VSelection::?$FactoryProduct::Creator  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00409cd0
//
// 00409cd0  64a100000000         mov eax, dword ptr fs:[0]
// 00409cd6  6aff                 push -1
// 00409cd8  68fed07b00           push 0x7bd0fe
// 00409cdd  50                   push eax
// 00409cde  b801000000           mov eax, 1
// 00409ce3  64892500000000       mov dword ptr fs:[0], esp
// 00409cea  840578c39600         test byte ptr [0x96c378], al
// 00409cf0  7530                 jne 0x409d22
// 00409cf2  090578c39600         or dword ptr [0x96c378], eax
// 00409cf8  6aff                 push -1
// 00409cfa  6820b78000           push 0x80b720
// 00409cff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00409d07  e884a21400           call 0x553f90
// 00409d0c  83c408               add esp, 8
// 00409d0f  a374c39600           mov dword ptr [0x96c374], eax
// 00409d14  8b0c24               mov ecx, dword ptr [esp]
// 00409d17  64890d00000000       mov dword ptr fs:[0], ecx
// 00409d1e  83c40c               add esp, 0xc
// 00409d21  c3                   ret 
// 00409d22  8b0c24               mov ecx, dword ptr [esp]
// 00409d25  a174c39600           mov eax, dword ptr [0x96c374]
// 00409d2a  64890d00000000       mov dword ptr fs:[0], ecx
// 00409d31  83c40c               add esp, 0xc
// 00409d34  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
