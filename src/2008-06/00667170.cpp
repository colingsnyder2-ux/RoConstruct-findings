// roc 2008-06 00667170  unit: RBX::HUMAN::StrafingNoPhysics  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00667170
//
// 00667170  64a100000000         mov eax, dword ptr fs:[0]
// 00667176  6aff                 push -1
// 00667178  681ec27d00           push 0x7dc21e
// 0066717d  50                   push eax
// 0066717e  b801000000           mov eax, 1
// 00667183  64892500000000       mov dword ptr fs:[0], esp
// 0066718a  8405bcd99700         test byte ptr [0x97d9bc], al
// 00667190  7530                 jne 0x6671c2
// 00667192  0905bcd99700         or dword ptr [0x97d9bc], eax
// 00667198  6aff                 push -1
// 0066719a  6880cd8400           push 0x84cd80
// 0066719f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 006671a7  e8e4cdeeff           call 0x553f90
// 006671ac  83c408               add esp, 8
// 006671af  a3b8d99700           mov dword ptr [0x97d9b8], eax
// 006671b4  8b0c24               mov ecx, dword ptr [esp]
// 006671b7  64890d00000000       mov dword ptr fs:[0], ecx
// 006671be  83c40c               add esp, 0xc
// 006671c1  c3                   ret 
// 006671c2  8b0c24               mov ecx, dword ptr [esp]
// 006671c5  a1b8d99700           mov eax, dword ptr [0x97d9b8]
// 006671ca  64890d00000000       mov dword ptr fs:[0], ecx
// 006671d1  83c40c               add esp, 0xc
// 006671d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
