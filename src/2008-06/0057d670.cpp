// roc 2008-06 0057d670  unit: RBX::FixedCameraCommand  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057d670
//
// 0057d670  64a100000000         mov eax, dword ptr fs:[0]
// 0057d676  6aff                 push -1
// 0057d678  68be0e7d00           push 0x7d0ebe
// 0057d67d  50                   push eax
// 0057d67e  b801000000           mov eax, 1
// 0057d683  64892500000000       mov dword ptr fs:[0], esp
// 0057d68a  840594539700         test byte ptr [0x975394], al
// 0057d690  7530                 jne 0x57d6c2
// 0057d692  090594539700         or dword ptr [0x975394], eax
// 0057d698  6aff                 push -1
// 0057d69a  68a8298400           push 0x8429a8
// 0057d69f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0057d6a7  e8e468fdff           call 0x553f90
// 0057d6ac  83c408               add esp, 8
// 0057d6af  a390539700           mov dword ptr [0x975390], eax
// 0057d6b4  8b0c24               mov ecx, dword ptr [esp]
// 0057d6b7  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d6be  83c40c               add esp, 0xc
// 0057d6c1  c3                   ret 
// 0057d6c2  8b0c24               mov ecx, dword ptr [esp]
// 0057d6c5  a190539700           mov eax, dword ptr [0x975390]
// 0057d6ca  64890d00000000       mov dword ptr fs:[0], ecx
// 0057d6d1  83c40c               add esp, 0xc
// 0057d6d4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
