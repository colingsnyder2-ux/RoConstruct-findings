// roc 2008-06 00584750  unit: G3D::VCoordinateFrame::?$TypedPropertyDescriptor  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00584750
//
// 00584750  56                   push esi
// 00584751  57                   push edi
// 00584752  8bf9                 mov edi, ecx
// 00584754  e8a7520100           call 0x599a00
// 00584759  8907                 mov dword ptr [edi], eax
// 0058475b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0058475f  50                   push eax
// 00584760  8d4c2410             lea ecx, [esp + 0x10]
// 00584764  8d7704               lea esi, [edi + 4]
// 00584767  e81482feff           call 0x56c980
// 0058476c  3bc6                 cmp eax, esi
// 0058476e  7408                 je 0x584778
// 00584770  8b16                 mov edx, dword ptr [esi]
// 00584772  8b08                 mov ecx, dword ptr [eax]
// 00584774  8910                 mov dword ptr [eax], edx
// 00584776  890e                 mov dword ptr [esi], ecx
// 00584778  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058477c  85c9                 test ecx, ecx
// 0058477e  7408                 je 0x584788
// 00584780  8b01                 mov eax, dword ptr [ecx]
// 00584782  8b10                 mov edx, dword ptr [eax]
// 00584784  6a01                 push 1
// 00584786  ffd2                 call edx
// 00584788  8bc7                 mov eax, edi
// 0058478a  5f                   pop edi
// 0058478b  5e                   pop esi
// 0058478c  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4VFunctionRef@Lua@RBX@@@Value@Reflection@RBX@@QAEAAV012@ABVFunctionRef@Lua@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
