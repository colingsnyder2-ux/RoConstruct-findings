// roc 2008-06 0044a0e0  unit: CIDEDocManager  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044a0e0
//
// 0044a0e0  64a100000000         mov eax, dword ptr fs:[0]
// 0044a0e6  6aff                 push -1
// 0044a0e8  68ee107c00           push 0x7c10ee
// 0044a0ed  50                   push eax
// 0044a0ee  b801000000           mov eax, 1
// 0044a0f3  64892500000000       mov dword ptr fs:[0], esp
// 0044a0fa  840508dd9600         test byte ptr [0x96dd08], al
// 0044a100  7530                 jne 0x44a132
// 0044a102  090508dd9600         or dword ptr [0x96dd08], eax
// 0044a108  6aff                 push -1
// 0044a10a  6878848300           push 0x838478
// 0044a10f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0044a117  e8749e1000           call 0x553f90
// 0044a11c  83c408               add esp, 8
// 0044a11f  a304dd9600           mov dword ptr [0x96dd04], eax
// 0044a124  8b0c24               mov ecx, dword ptr [esp]
// 0044a127  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a12e  83c40c               add esp, 0xc
// 0044a131  c3                   ret 
// 0044a132  8b0c24               mov ecx, dword ptr [esp]
// 0044a135  a104dd9600           mov eax, dword ptr [0x96dd04]
// 0044a13a  64890d00000000       mov dword ptr fs:[0], ecx
// 0044a141  83c40c               add esp, 0xc
// 0044a144  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
