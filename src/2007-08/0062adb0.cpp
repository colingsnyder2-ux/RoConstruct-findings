// roc 2007-08 0062adb0  unit: RBX::GroupDragTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062adb0
//
// 0062adb0  64a100000000         mov eax, dword ptr fs:[0]
// 0062adb6  6aff                 push -1
// 0062adb8  68fed47500           push 0x75d4fe
// 0062adbd  50                   push eax
// 0062adbe  b801000000           mov eax, 1
// 0062adc3  64892500000000       mov dword ptr fs:[0], esp
// 0062adca  8405fc828c00         test byte ptr [0x8c82fc], al
// 0062add0  7530                 jne 0x62ae02
// 0062add2  0905fc828c00         or dword ptr [0x8c82fc], eax
// 0062add8  6aff                 push -1
// 0062adda  686c508b00           push 0x8b506c
// 0062addf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0062ade7  e8541bf0ff           call 0x52c940
// 0062adec  83c408               add esp, 8
// 0062adef  a3f8828c00           mov dword ptr [0x8c82f8], eax
// 0062adf4  8b0c24               mov ecx, dword ptr [esp]
// 0062adf7  64890d00000000       mov dword ptr fs:[0], ecx
// 0062adfe  83c40c               add esp, 0xc
// 0062ae01  c3                   ret 
// 0062ae02  8b0c24               mov ecx, dword ptr [esp]
// 0062ae05  a1f8828c00           mov eax, dword ptr [0x8c82f8]
// 0062ae0a  64890d00000000       mov dword ptr fs:[0], ecx
// 0062ae11  83c40c               add esp, 0xc
// 0062ae14  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
