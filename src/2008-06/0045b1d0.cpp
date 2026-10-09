// roc 2008-06 0045b1d0  unit: CRobloxWnd  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045b1d0
//
// 0045b1d0  64a100000000         mov eax, dword ptr fs:[0]
// 0045b1d6  6aff                 push -1
// 0045b1d8  68be2a7c00           push 0x7c2abe
// 0045b1dd  50                   push eax
// 0045b1de  b801000000           mov eax, 1
// 0045b1e3  64892500000000       mov dword ptr fs:[0], esp
// 0045b1ea  840574de9600         test byte ptr [0x96de74], al
// 0045b1f0  7530                 jne 0x45b222
// 0045b1f2  090574de9600         or dword ptr [0x96de74], eax
// 0045b1f8  6aff                 push -1
// 0045b1fa  686c0c9500           push 0x950c6c
// 0045b1ff  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0045b207  e8848d0f00           call 0x553f90
// 0045b20c  83c408               add esp, 8
// 0045b20f  a370de9600           mov dword ptr [0x96de70], eax
// 0045b214  8b0c24               mov ecx, dword ptr [esp]
// 0045b217  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b21e  83c40c               add esp, 0xc
// 0045b221  c3                   ret 
// 0045b222  8b0c24               mov ecx, dword ptr [esp]
// 0045b225  a170de9600           mov eax, dword ptr [0x96de70]
// 0045b22a  64890d00000000       mov dword ptr fs:[0], ecx
// 0045b231  83c40c               add esp, 0xc
// 0045b234  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
