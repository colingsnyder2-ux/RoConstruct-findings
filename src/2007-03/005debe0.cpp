// roc 2007-03 005debe0  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005debe0
//
// 005debe0  64a100000000         mov eax, dword ptr fs:[0]
// 005debe6  6aff                 push -1
// 005debe8  688ebb7500           push 0x75bb8e
// 005debed  50                   push eax
// 005debee  b801000000           mov eax, 1
// 005debf3  64892500000000       mov dword ptr fs:[0], esp
// 005debfa  840584078c00         test byte ptr [0x8c0784], al
// 005dec00  7530                 jne 0x5dec32
// 005dec02  090584078c00         or dword ptr [0x8c0784], eax
// 005dec08  6aff                 push -1
// 005dec0a  6868aa8a00           push 0x8aaa68
// 005dec0f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dec17  e8c4ecf4ff           call 0x52d8e0
// 005dec1c  83c408               add esp, 8
// 005dec1f  a380078c00           mov dword ptr [0x8c0780], eax
// 005dec24  8b0c24               mov ecx, dword ptr [esp]
// 005dec27  64890d00000000       mov dword ptr fs:[0], ecx
// 005dec2e  83c40c               add esp, 0xc
// 005dec31  c3                   ret 
// 005dec32  8b0c24               mov ecx, dword ptr [esp]
// 005dec35  a180078c00           mov eax, dword ptr [0x8c0780]
// 005dec3a  64890d00000000       mov dword ptr fs:[0], ecx
// 005dec41  83c40c               add esp, 0xc
// 005dec44  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
