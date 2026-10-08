// roc 2007-08 00574900  unit: RBX::P8PartInstance::?$GetSetImpl  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00574900
//
// 00574900  83ec60               sub esp, 0x60
// 00574903  8d0424               lea eax, [esp]
// 00574906  50                   push eax
// 00574907  e804ffffff           call 0x574810
// 0057490c  b801000000           mov eax, 1
// 00574911  8405fc2a8c00         test byte ptr [0x8c2afc], al
// 00574917  7520                 jne 0x574939
// 00574919  d9e8                 fld1 
// 0057491b  0905fc2a8c00         or dword ptr [0x8c2afc], eax
// 00574921  d915f02a8c00         fst dword ptr [0x8c2af0]
// 00574927  d905b07e7900         fld dword ptr [0x797eb0]
// 0057492d  d91df42a8c00         fstp dword ptr [0x8c2af4]
// 00574933  d91df82a8c00         fstp dword ptr [0x8c2af8]
// 00574939  68f02a8c00           push 0x8c2af0
// 0057493e  8d4c2404             lea ecx, [esp + 4]
// 00574942  51                   push ecx
// 00574943  8d542438             lea edx, [esp + 0x38]
// 00574947  52                   push edx
// 00574948  e843770300           call 0x5ac090
// 0057494d  d90598447a00         fld dword ptr [0x7a4498]
// 00574953  83c404               add esp, 4
// 00574956  d9542404             fst dword ptr [esp + 4]
// 0057495a  8d442438             lea eax, [esp + 0x38]
// 0057495e  d91c24               fstp dword ptr [esp]
// 00574961  50                   push eax
// 00574962  8d4c240c             lea ecx, [esp + 0xc]
// 00574966  51                   push ecx
// 00574967  e8846a0300           call 0x5ab3f0
// 0057496c  83c470               add esp, 0x70
// 0057496f  c3                   ret 
// library rbxgs/v8datamodel\PartInstance.cpp (function ?aligned@PartInstance@RBX@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/PartInstance.cpp
