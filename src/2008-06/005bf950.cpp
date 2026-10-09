// roc 2008-06 005bf950  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf950
//
// 005bf950  64a100000000         mov eax, dword ptr fs:[0]
// 005bf956  6aff                 push -1
// 005bf958  68ee407d00           push 0x7d40ee
// 005bf95d  50                   push eax
// 005bf95e  b801000000           mov eax, 1
// 005bf963  64892500000000       mov dword ptr fs:[0], esp
// 005bf96a  840588779700         test byte ptr [0x977788], al
// 005bf970  7530                 jne 0x5bf9a2
// 005bf972  090588779700         or dword ptr [0x977788], eax
// 005bf978  6aff                 push -1
// 005bf97a  68185f8400           push 0x845f18
// 005bf97f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf987  e80446f9ff           call 0x553f90
// 005bf98c  83c408               add esp, 8
// 005bf98f  a384779700           mov dword ptr [0x977784], eax
// 005bf994  8b0c24               mov ecx, dword ptr [esp]
// 005bf997  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf99e  83c40c               add esp, 0xc
// 005bf9a1  c3                   ret 
// 005bf9a2  8b0c24               mov ecx, dword ptr [esp]
// 005bf9a5  a184779700           mov eax, dword ptr [0x977784]
// 005bf9aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf9b1  83c40c               add esp, 0xc
// 005bf9b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
