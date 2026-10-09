// roc 2008-06 005bf870  unit: RBX::VGameSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf870
//
// 005bf870  64a100000000         mov eax, dword ptr fs:[0]
// 005bf876  6aff                 push -1
// 005bf878  68ae407d00           push 0x7d40ae
// 005bf87d  50                   push eax
// 005bf87e  b801000000           mov eax, 1
// 005bf883  64892500000000       mov dword ptr fs:[0], esp
// 005bf88a  840578779700         test byte ptr [0x977778], al
// 005bf890  7530                 jne 0x5bf8c2
// 005bf892  090578779700         or dword ptr [0x977778], eax
// 005bf898  6aff                 push -1
// 005bf89a  68d4b69500           push 0x95b6d4
// 005bf89f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005bf8a7  e8e446f9ff           call 0x553f90
// 005bf8ac  83c408               add esp, 8
// 005bf8af  a374779700           mov dword ptr [0x977774], eax
// 005bf8b4  8b0c24               mov ecx, dword ptr [esp]
// 005bf8b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf8be  83c40c               add esp, 0xc
// 005bf8c1  c3                   ret 
// 005bf8c2  8b0c24               mov ecx, dword ptr [esp]
// 005bf8c5  a174779700           mov eax, dword ptr [0x977774]
// 005bf8ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf8d1  83c40c               add esp, 0xc
// 005bf8d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
