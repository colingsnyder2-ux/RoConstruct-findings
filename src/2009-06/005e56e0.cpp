// roc 2009-06 005e56e0  unit: RBX::Reflection::Descriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005e56e0
//
// 005e56e0  56                   push esi
// 005e56e1  6a10                 push 0x10
// 005e56e3  8bf1                 mov esi, ecx
// 005e56e5  e84e331300           call 0x718a38
// 005e56ea  83c404               add esp, 4
// 005e56ed  85c0                 test eax, eax
// 005e56ef  741d                 je 0x5e570e
// 005e56f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e56f5  d901                 fld dword ptr [ecx]
// 005e56f7  c700ac5c8d00         mov dword ptr [eax], 0x8d5cac
// 005e56fd  d95804               fstp dword ptr [eax + 4]
// 005e5700  d94104               fld dword ptr [ecx + 4]
// 005e5703  d95808               fstp dword ptr [eax + 8]
// 005e5706  d94108               fld dword ptr [ecx + 8]
// 005e5709  d9580c               fstp dword ptr [eax + 0xc]
// 005e570c  eb02                 jmp 0x5e5710
// 005e570e  33c0                 xor eax, eax
// 005e5710  8d542408             lea edx, [esp + 8]
// 005e5714  8bc8                 mov ecx, eax
// 005e5716  3bd6                 cmp edx, esi
// 005e5718  7404                 je 0x5e571e
// 005e571a  8b0e                 mov ecx, dword ptr [esi]
// 005e571c  8906                 mov dword ptr [esi], eax
// 005e571e  85c9                 test ecx, ecx
// 005e5720  7408                 je 0x5e572a
// 005e5722  8b01                 mov eax, dword ptr [ecx]
// 005e5724  8b10                 mov edx, dword ptr [eax]
// 005e5726  6a01                 push 1
// 005e5728  ffd2                 call edx
// 005e572a  8bc6                 mov eax, esi
// 005e572c  5e                   pop esi
// 005e572d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
