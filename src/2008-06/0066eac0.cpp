// roc 2008-06 0066eac0  unit: RBX::HUMAN::GettingUp  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066eac0
//
// 0066eac0  64a100000000         mov eax, dword ptr fs:[0]
// 0066eac6  6aff                 push -1
// 0066eac8  687ec67d00           push 0x7dc67e
// 0066eacd  50                   push eax
// 0066eace  b801000000           mov eax, 1
// 0066ead3  64892500000000       mov dword ptr fs:[0], esp
// 0066eada  84054cda9700         test byte ptr [0x97da4c], al
// 0066eae0  7530                 jne 0x66eb12
// 0066eae2  09054cda9700         or dword ptr [0x97da4c], eax
// 0066eae8  6aff                 push -1
// 0066eaea  6808d18400           push 0x84d108
// 0066eaef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0066eaf7  e89454eeff           call 0x553f90
// 0066eafc  83c408               add esp, 8
// 0066eaff  a348da9700           mov dword ptr [0x97da48], eax
// 0066eb04  8b0c24               mov ecx, dword ptr [esp]
// 0066eb07  64890d00000000       mov dword ptr fs:[0], ecx
// 0066eb0e  83c40c               add esp, 0xc
// 0066eb11  c3                   ret 
// 0066eb12  8b0c24               mov ecx, dword ptr [esp]
// 0066eb15  a148da9700           mov eax, dword ptr [0x97da48]
// 0066eb1a  64890d00000000       mov dword ptr fs:[0], ecx
// 0066eb21  83c40c               add esp, 0xc
// 0066eb24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
