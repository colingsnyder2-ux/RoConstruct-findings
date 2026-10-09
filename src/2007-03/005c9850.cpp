// roc 2007-03 005c9850  unit: seg_005c0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c9850
//
// 005c9850  64a100000000         mov eax, dword ptr fs:[0]
// 005c9856  6aff                 push -1
// 005c9858  682ea77500           push 0x75a72e
// 005c985d  50                   push eax
// 005c985e  b801000000           mov eax, 1
// 005c9863  64892500000000       mov dword ptr fs:[0], esp
// 005c986a  840594ff8b00         test byte ptr [0x8bff94], al
// 005c9870  7530                 jne 0x5c98a2
// 005c9872  090594ff8b00         or dword ptr [0x8bff94], eax
// 005c9878  6aff                 push -1
// 005c987a  681c858a00           push 0x8a851c
// 005c987f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c9887  e85440f6ff           call 0x52d8e0
// 005c988c  83c408               add esp, 8
// 005c988f  a390ff8b00           mov dword ptr [0x8bff90], eax
// 005c9894  8b0c24               mov ecx, dword ptr [esp]
// 005c9897  64890d00000000       mov dword ptr fs:[0], ecx
// 005c989e  83c40c               add esp, 0xc
// 005c98a1  c3                   ret 
// 005c98a2  8b0c24               mov ecx, dword ptr [esp]
// 005c98a5  a190ff8b00           mov eax, dword ptr [0x8bff90]
// 005c98aa  64890d00000000       mov dword ptr fs:[0], ecx
// 005c98b1  83c40c               add esp, 0xc
// 005c98b4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
