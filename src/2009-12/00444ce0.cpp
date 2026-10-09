// roc 2009-12 00444ce0  unit: G3D::VVector2int16::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444ce0
//
// 00444ce0  56                   push esi
// 00444ce1  6a08                 push 8
// 00444ce3  8bf1                 mov esi, ecx
// 00444ce5  e876eb3a00           call 0x7f3860
// 00444cea  83c404               add esp, 4
// 00444ced  85c0                 test eax, eax
// 00444cef  7411                 je 0x444d02
// 00444cf1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00444cf5  c70070399a00         mov dword ptr [eax], 0x9a3970
// 00444cfb  d901                 fld dword ptr [ecx]
// 00444cfd  d95804               fstp dword ptr [eax + 4]
// 00444d00  eb02                 jmp 0x444d04
// 00444d02  33c0                 xor eax, eax
// 00444d04  8d542408             lea edx, [esp + 8]
// 00444d08  8bc8                 mov ecx, eax
// 00444d0a  3bd6                 cmp edx, esi
// 00444d0c  7404                 je 0x444d12
// 00444d0e  8b0e                 mov ecx, dword ptr [esi]
// 00444d10  8906                 mov dword ptr [esi], eax
// 00444d12  85c9                 test ecx, ecx
// 00444d14  7408                 je 0x444d1e
// 00444d16  8b01                 mov eax, dword ptr [ecx]
// 00444d18  8b10                 mov edx, dword ptr [eax]
// 00444d1a  6a01                 push 1
// 00444d1c  ffd2                 call edx
// 00444d1e  8bc6                 mov eax, esi
// 00444d20  5e                   pop esi
// 00444d21  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$?4M@any@boost@@QAEAAV01@ABM@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
