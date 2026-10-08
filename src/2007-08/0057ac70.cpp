// roc 2007-08 0057ac70  unit: RBX::Workspace  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057ac70
//
// 0057ac70  64a100000000         mov eax, dword ptr fs:[0]
// 0057ac76  6aff                 push -1
// 0057ac78  68ae557500           push 0x7555ae
// 0057ac7d  50                   push eax
// 0057ac7e  b801000000           mov eax, 1
// 0057ac83  64892500000000       mov dword ptr fs:[0], esp
// 0057ac8a  840534308c00         test byte ptr [0x8c3034], al
// 0057ac90  7530                 jne 0x57acc2
// 0057ac92  090534308c00         or dword ptr [0x8c3034], eax
// 0057ac98  6aff                 push -1
// 0057ac9a  6890e18a00           push 0x8ae190
// 0057ac9f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057aca7  e8941cfbff           call 0x52c940
// 0057acac  83c408               add esp, 8
// 0057acaf  a330308c00           mov dword ptr [0x8c3030], eax
// 0057acb4  8b0c24               mov ecx, dword ptr [esp]
// 0057acb7  64890d00000000       mov dword ptr fs:[0], ecx
// 0057acbe  83c40c               add esp, 0xc
// 0057acc1  c3                   ret 
// 0057acc2  8b0c24               mov ecx, dword ptr [esp]
// 0057acc5  a130308c00           mov eax, dword ptr [0x8c3030]
// 0057acca  64890d00000000       mov dword ptr fs:[0], ecx
// 0057acd1  83c40c               add esp, 0xc
// 0057acd4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
