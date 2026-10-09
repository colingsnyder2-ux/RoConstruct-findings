// roc 2007-03 00554830  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554830
//
// 00554830  64a100000000         mov eax, dword ptr fs:[0]
// 00554836  6aff                 push -1
// 00554838  682e3c7500           push 0x753c2e
// 0055483d  50                   push eax
// 0055483e  b801000000           mov eax, 1
// 00554843  64892500000000       mov dword ptr fs:[0], esp
// 0055484a  84053cc18b00         test byte ptr [0x8bc13c], al
// 00554850  7530                 jne 0x554882
// 00554852  09053cc18b00         or dword ptr [0x8bc13c], eax
// 00554858  6aff                 push -1
// 0055485a  6854848a00           push 0x8a8454
// 0055485f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00554867  e87490fdff           call 0x52d8e0
// 0055486c  83c408               add esp, 8
// 0055486f  a338c18b00           mov dword ptr [0x8bc138], eax
// 00554874  8b0c24               mov ecx, dword ptr [esp]
// 00554877  64890d00000000       mov dword ptr fs:[0], ecx
// 0055487e  83c40c               add esp, 0xc
// 00554881  c3                   ret 
// 00554882  8b0c24               mov ecx, dword ptr [esp]
// 00554885  a138c18b00           mov eax, dword ptr [0x8bc138]
// 0055488a  64890d00000000       mov dword ptr fs:[0], ecx
// 00554891  83c40c               add esp, 0xc
// 00554894  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
