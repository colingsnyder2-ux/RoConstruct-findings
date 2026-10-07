// roc 2009-06 00440750  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00440750
//
// 00440750  56                   push esi
// 00440751  6a08                 push 8
// 00440753  8bf1                 mov esi, ecx
// 00440755  e8de822d00           call 0x718a38
// 0044075a  83c404               add esp, 4
// 0044075d  85c0                 test eax, eax
// 0044075f  7411                 je 0x440772
// 00440761  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00440765  c700900c8b00         mov dword ptr [eax], 0x8b0c90
// 0044076b  d901                 fld dword ptr [ecx]
// 0044076d  d95804               fstp dword ptr [eax + 4]
// 00440770  eb02                 jmp 0x440774
// 00440772  33c0                 xor eax, eax
// 00440774  8d542408             lea edx, [esp + 8]
// 00440778  8bc8                 mov ecx, eax
// 0044077a  3bd6                 cmp edx, esi
// 0044077c  7404                 je 0x440782
// 0044077e  8b0e                 mov ecx, dword ptr [esi]
// 00440780  8906                 mov dword ptr [esi], eax
// 00440782  85c9                 test ecx, ecx
// 00440784  7408                 je 0x44078e
// 00440786  8b01                 mov eax, dword ptr [ecx]
// 00440788  8b10                 mov edx, dword ptr [eax]
// 0044078a  6a01                 push 1
// 0044078c  ffd2                 call edx
// 0044078e  8bc6                 mov eax, esi
// 00440790  5e                   pop esi
// 00440791  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4M@any@boost@@QAEAAV01@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
