// roc 2008-06 0045b160  unit: CRobloxWnd  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b160
//
// 0045b160  64a100000000         mov eax, dword ptr fs:[0]
// 0045b166  6aff                 push -1
// 0045b168  689e2a7c00           push 0x7c2a9e
// 0045b16d  50                   push eax
// 0045b16e  b801000000           mov eax, 1
// 0045b173  64892500000000       mov dword ptr fs:[0], esp
// 0045b17a  84056cde9600         test byte ptr [0x96de6c], al
// 0045b180  7530                 jne 0x45b1b2
// 0045b182  09056cde9600         or dword ptr [0x96de6c], eax
// 0045b188  6aff                 push -1
// 0045b18a  68b4109500           push 0x9510b4
// 0045b18f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045b197  e8f48d0f00           call 0x553f90
// 0045b19c  83c408               add esp, 8
// 0045b19f  a368de9600           mov dword ptr [0x96de68], eax
// 0045b1a4  8b0c24               mov ecx, dword ptr [esp]
// 0045b1a7  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b1ae  83c40c               add esp, 0xc
// 0045b1b1  c3                   ret 
// 0045b1b2  8b0c24               mov ecx, dword ptr [esp]
// 0045b1b5  a168de9600           mov eax, dword ptr [0x96de68]
// 0045b1ba  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b1c1  83c40c               add esp, 0xc
// 0045b1c4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
