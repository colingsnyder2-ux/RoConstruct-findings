// roc 2008-06 0056d260  unit: G3D::VColor3::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056d260
//
// 0056d260  56                   push esi
// 0056d261  6a10                 push 0x10
// 0056d263  8bf1                 mov esi, ecx
// 0056d265  e8b6361300           call 0x6a0920
// 0056d26a  83c404               add esp, 4
// 0056d26d  85c0                 test eax, eax
// 0056d26f  741d                 je 0x56d28e
// 0056d271  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056d275  d901                 fld dword ptr [ecx]
// 0056d277  c70094f68200         mov dword ptr [eax], 0x82f694
// 0056d27d  d95804               fstp dword ptr [eax + 4]
// 0056d280  d94104               fld dword ptr [ecx + 4]
// 0056d283  d95808               fstp dword ptr [eax + 8]
// 0056d286  d94108               fld dword ptr [ecx + 8]
// 0056d289  d9580c               fstp dword ptr [eax + 0xc]
// 0056d28c  eb02                 jmp 0x56d290
// 0056d28e  33c0                 xor eax, eax
// 0056d290  8d542408             lea edx, [esp + 8]
// 0056d294  8bc8                 mov ecx, eax
// 0056d296  3bd6                 cmp edx, esi
// 0056d298  7404                 je 0x56d29e
// 0056d29a  8b0e                 mov ecx, dword ptr [esi]
// 0056d29c  8906                 mov dword ptr [esi], eax
// 0056d29e  85c9                 test ecx, ecx
// 0056d2a0  7408                 je 0x56d2aa
// 0056d2a2  8b01                 mov eax, dword ptr [ecx]
// 0056d2a4  8b10                 mov edx, dword ptr [eax]
// 0056d2a6  6a01                 push 1
// 0056d2a8  ffd2                 call edx
// 0056d2aa  8bc6                 mov eax, esi
// 0056d2ac  5e                   pop esi
// 0056d2ad  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
