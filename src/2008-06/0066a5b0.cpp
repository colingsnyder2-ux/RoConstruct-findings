// roc 2008-06 0066a5b0  unit: RBX::GroupDragTool  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066a5b0
//
// 0066a5b0  64a100000000         mov eax, dword ptr fs:[0]
// 0066a5b6  6aff                 push -1
// 0066a5b8  688ec47d00           push 0x7dc48e
// 0066a5bd  50                   push eax
// 0066a5be  b801000000           mov eax, 1
// 0066a5c3  64892500000000       mov dword ptr fs:[0], esp
// 0066a5ca  840504da9700         test byte ptr [0x97da04], al
// 0066a5d0  7530                 jne 0x66a602
// 0066a5d2  090504da9700         or dword ptr [0x97da04], eax
// 0066a5d8  6aff                 push -1
// 0066a5da  68542c9600           push 0x962c54
// 0066a5df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0066a5e7  e8a499eeff           call 0x553f90
// 0066a5ec  83c408               add esp, 8
// 0066a5ef  a300da9700           mov dword ptr [0x97da00], eax
// 0066a5f4  8b0c24               mov ecx, dword ptr [esp]
// 0066a5f7  64890d00000000       mov dword ptr fs:[0], ecx
// 0066a5fe  83c40c               add esp, 0xc
// 0066a601  c3                   ret 
// 0066a602  8b0c24               mov ecx, dword ptr [esp]
// 0066a605  a100da9700           mov eax, dword ptr [0x97da00]
// 0066a60a  64890d00000000       mov dword ptr fs:[0], ecx
// 0066a611  83c40c               add esp, 0xc
// 0066a614  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
