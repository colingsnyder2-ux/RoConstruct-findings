// roc 2010-06 00446020  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00446020
//
// 00446020  56                   push esi
// 00446021  6a08                 push 8
// 00446023  8bf1                 mov esi, ecx
// 00446025  e876193600           call 0x7a79a0
// 0044602a  83c404               add esp, 4
// 0044602d  85c0                 test eax, eax
// 0044602f  7411                 je 0x446042
// 00446031  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00446035  c700c846a000         mov dword ptr [eax], 0xa046c8
// 0044603b  d901                 fld dword ptr [ecx]
// 0044603d  d95804               fstp dword ptr [eax + 4]
// 00446040  eb02                 jmp 0x446044
// 00446042  33c0                 xor eax, eax
// 00446044  8d542408             lea edx, [esp + 8]
// 00446048  8bc8                 mov ecx, eax
// 0044604a  3bd6                 cmp edx, esi
// 0044604c  7404                 je 0x446052
// 0044604e  8b0e                 mov ecx, dword ptr [esi]
// 00446050  8906                 mov dword ptr [esi], eax
// 00446052  85c9                 test ecx, ecx
// 00446054  7408                 je 0x44605e
// 00446056  8b01                 mov eax, dword ptr [ecx]
// 00446058  8b10                 mov edx, dword ptr [eax]
// 0044605a  6a01                 push 1
// 0044605c  ffd2                 call edx
// 0044605e  8bc6                 mov eax, esi
// 00446060  5e                   pop esi
// 00446061  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4M@any@boost@@QAEAAV01@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
