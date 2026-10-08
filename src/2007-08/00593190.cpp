// roc 2007-08 00593190  unit: RBX::VVisit::?$BoundFuncDesc  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00593190
//
// 00593190  64a100000000         mov eax, dword ptr fs:[0]
// 00593196  6aff                 push -1
// 00593198  682e6f7500           push 0x756f2e
// 0059319d  50                   push eax
// 0059319e  b801000000           mov eax, 1
// 005931a3  64892500000000       mov dword ptr fs:[0], esp
// 005931aa  8405f44c8c00         test byte ptr [0x8c4cf4], al
// 005931b0  7530                 jne 0x5931e2
// 005931b2  0905f44c8c00         or dword ptr [0x8c4cf4], eax
// 005931b8  6aff                 push -1
// 005931ba  6804288a00           push 0x8a2804
// 005931bf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005931c7  e87497f9ff           call 0x52c940
// 005931cc  83c408               add esp, 8
// 005931cf  a3f04c8c00           mov dword ptr [0x8c4cf0], eax
// 005931d4  8b0c24               mov ecx, dword ptr [esp]
// 005931d7  64890d00000000       mov dword ptr fs:[0], ecx
// 005931de  83c40c               add esp, 0xc
// 005931e1  c3                   ret 
// 005931e2  8b0c24               mov ecx, dword ptr [esp]
// 005931e5  a1f04c8c00           mov eax, dword ptr [0x8c4cf0]
// 005931ea  64890d00000000       mov dword ptr fs:[0], ecx
// 005931f1  83c40c               add esp, 0xc
// 005931f4  c3                   ret 
// library openrbx-client/App\script\LuaInstanceBridge.cpp (function ??$doDeclare@$1?sDecal@RBX@@3PADA@Name@RBX@@CAABV01@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaInstanceBridge.cpp
