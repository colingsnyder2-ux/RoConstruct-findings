// roc 2007-03 0059cee0  unit: seg_00590000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0059cee0
//
// 0059cee0  64a100000000         mov eax, dword ptr fs:[0]
// 0059cee6  6aff                 push -1
// 0059cee8  68be8a7500           push 0x758abe
// 0059ceed  50                   push eax
// 0059ceee  b801000000           mov eax, 1
// 0059cef3  64892500000000       mov dword ptr fs:[0], esp
// 0059cefa  840544e98b00         test byte ptr [0x8be944], al
// 0059cf00  7530                 jne 0x59cf32
// 0059cf02  090544e98b00         or dword ptr [0x8be944], eax
// 0059cf08  6aff                 push -1
// 0059cf0a  6848207b00           push 0x7b2048
// 0059cf0f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059cf17  e8c409f9ff           call 0x52d8e0
// 0059cf1c  83c408               add esp, 8
// 0059cf1f  a340e98b00           mov dword ptr [0x8be940], eax
// 0059cf24  8b0c24               mov ecx, dword ptr [esp]
// 0059cf27  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cf2e  83c40c               add esp, 0xc
// 0059cf31  c3                   ret 
// 0059cf32  8b0c24               mov ecx, dword ptr [esp]
// 0059cf35  a140e98b00           mov eax, dword ptr [0x8be940]
// 0059cf3a  64890d00000000       mov dword ptr fs:[0], ecx
// 0059cf41  83c40c               add esp, 0xc
// 0059cf44  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
