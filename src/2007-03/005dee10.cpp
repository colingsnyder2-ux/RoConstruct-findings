// roc 2007-03 005dee10  unit: seg_005d0000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005dee10
//
// 005dee10  64a100000000         mov eax, dword ptr fs:[0]
// 005dee16  6aff                 push -1
// 005dee18  682ebc7500           push 0x75bc2e
// 005dee1d  50                   push eax
// 005dee1e  b801000000           mov eax, 1
// 005dee23  64892500000000       mov dword ptr fs:[0], esp
// 005dee2a  8405ac078c00         test byte ptr [0x8c07ac], al
// 005dee30  7530                 jne 0x5dee62
// 005dee32  0905ac078c00         or dword ptr [0x8c07ac], eax
// 005dee38  6aff                 push -1
// 005dee3a  68a8aa8a00           push 0x8aaaa8
// 005dee3f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005dee47  e894eaf4ff           call 0x52d8e0
// 005dee4c  83c408               add esp, 8
// 005dee4f  a3a8078c00           mov dword ptr [0x8c07a8], eax
// 005dee54  8b0c24               mov ecx, dword ptr [esp]
// 005dee57  64890d00000000       mov dword ptr fs:[0], ecx
// 005dee5e  83c40c               add esp, 0xc
// 005dee61  c3                   ret 
// 005dee62  8b0c24               mov ecx, dword ptr [esp]
// 005dee65  a1a8078c00           mov eax, dword ptr [0x8c07a8]
// 005dee6a  64890d00000000       mov dword ptr fs:[0], ecx
// 005dee71  83c40c               add esp, 0xc
// 005dee74  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
