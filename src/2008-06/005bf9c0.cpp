// roc 2008-06 005bf9c0  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf9c0
//
// 005bf9c0  64a100000000         mov eax, dword ptr fs:[0]
// 005bf9c6  6aff                 push -1
// 005bf9c8  680e417d00           push 0x7d410e
// 005bf9cd  50                   push eax
// 005bf9ce  b801000000           mov eax, 1
// 005bf9d3  64892500000000       mov dword ptr fs:[0], esp
// 005bf9da  840590779700         test byte ptr [0x977790], al
// 005bf9e0  7530                 jne 0x5bfa12
// 005bf9e2  090590779700         or dword ptr [0x977790], eax
// 005bf9e8  6aff                 push -1
// 005bf9ea  68a8c39500           push 0x95c3a8
// 005bf9ef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf9f7  e89445f9ff           call 0x553f90
// 005bf9fc  83c408               add esp, 8
// 005bf9ff  a38c779700           mov dword ptr [0x97778c], eax
// 005bfa04  8b0c24               mov ecx, dword ptr [esp]
// 005bfa07  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfa0e  83c40c               add esp, 0xc
// 005bfa11  c3                   ret 
// 005bfa12  8b0c24               mov ecx, dword ptr [esp]
// 005bfa15  a18c779700           mov eax, dword ptr [0x97778c]
// 005bfa1a  64890d00000000       mov dword ptr fs:[0], ecx
// 005bfa21  83c40c               add esp, 0xc
// 005bfa24  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
