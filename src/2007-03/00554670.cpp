// roc 2007-03 00554670  unit: seg_00550000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00554670
//
// 00554670  64a100000000         mov eax, dword ptr fs:[0]
// 00554676  6aff                 push -1
// 00554678  68ae3b7500           push 0x753bae
// 0055467d  50                   push eax
// 0055467e  b801000000           mov eax, 1
// 00554683  64892500000000       mov dword ptr fs:[0], esp
// 0055468a  84051cc18b00         test byte ptr [0x8bc11c], al
// 00554690  7530                 jne 0x5546c2
// 00554692  09051cc18b00         or dword ptr [0x8bc11c], eax
// 00554698  6aff                 push -1
// 0055469a  6834848a00           push 0x8a8434
// 0055469f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005546a7  e83492fdff           call 0x52d8e0
// 005546ac  83c408               add esp, 8
// 005546af  a318c18b00           mov dword ptr [0x8bc118], eax
// 005546b4  8b0c24               mov ecx, dword ptr [esp]
// 005546b7  64890d00000000       mov dword ptr fs:[0], ecx
// 005546be  83c40c               add esp, 0xc
// 005546c1  c3                   ret 
// 005546c2  8b0c24               mov ecx, dword ptr [esp]
// 005546c5  a118c18b00           mov eax, dword ptr [0x8bc118]
// 005546ca  64890d00000000       mov dword ptr fs:[0], ecx
// 005546d1  83c40c               add esp, 0xc
// 005546d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
