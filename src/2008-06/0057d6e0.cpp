// roc 2008-06 0057d6e0  unit: RBX::FixedCameraCommand  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d6e0
//
// 0057d6e0  64a100000000         mov eax, dword ptr fs:[0]
// 0057d6e6  6aff                 push -1
// 0057d6e8  68de0e7d00           push 0x7d0ede
// 0057d6ed  50                   push eax
// 0057d6ee  b801000000           mov eax, 1
// 0057d6f3  64892500000000       mov dword ptr fs:[0], esp
// 0057d6fa  84059c539700         test byte ptr [0x97539c], al
// 0057d700  7530                 jne 0x57d732
// 0057d702  09059c539700         or dword ptr [0x97539c], eax
// 0057d708  6aff                 push -1
// 0057d70a  68a0298400           push 0x8429a0
// 0057d70f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057d717  e87468fdff           call 0x553f90
// 0057d71c  83c408               add esp, 8
// 0057d71f  a398539700           mov dword ptr [0x975398], eax
// 0057d724  8b0c24               mov ecx, dword ptr [esp]
// 0057d727  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d72e  83c40c               add esp, 0xc
// 0057d731  c3                   ret 
// 0057d732  8b0c24               mov ecx, dword ptr [esp]
// 0057d735  a198539700           mov eax, dword ptr [0x975398]
// 0057d73a  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d741  83c40c               add esp, 0xc
// 0057d744  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
