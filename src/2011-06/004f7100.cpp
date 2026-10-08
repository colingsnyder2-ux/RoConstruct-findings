// roc 2011-06 004f7100  unit: RBX::VRbxRay::?$holder  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f7100
//
// 004f7100  56                   push esi
// 004f7101  6a10                 push 0x10
// 004f7103  8bf1                 mov esi, ecx
// 004f7105  e8542f3100           call 0x80a05e
// 004f710a  83c404               add esp, 4
// 004f710d  85c0                 test eax, eax
// 004f710f  741d                 je 0x4f712e
// 004f7111  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f7115  d901                 fld dword ptr [ecx]
// 004f7117  c70014b3a700         mov dword ptr [eax], 0xa7b314
// 004f711d  d95804               fstp dword ptr [eax + 4]
// 004f7120  d94104               fld dword ptr [ecx + 4]
// 004f7123  d95808               fstp dword ptr [eax + 8]
// 004f7126  d94108               fld dword ptr [ecx + 8]
// 004f7129  d9580c               fstp dword ptr [eax + 0xc]
// 004f712c  eb02                 jmp 0x4f7130
// 004f712e  33c0                 xor eax, eax
// 004f7130  8d542408             lea edx, [esp + 8]
// 004f7134  8bc8                 mov ecx, eax
// 004f7136  3bd6                 cmp edx, esi
// 004f7138  7404                 je 0x4f713e
// 004f713a  8b0e                 mov ecx, dword ptr [esi]
// 004f713c  8906                 mov dword ptr [esi], eax
// 004f713e  85c9                 test ecx, ecx
// 004f7140  7408                 je 0x4f714a
// 004f7142  8b01                 mov eax, dword ptr [ecx]
// 004f7144  8b10                 mov edx, dword ptr [eax]
// 004f7146  6a01                 push 1
// 004f7148  ffd2                 call edx
// 004f714a  8bc6                 mov eax, esi
// 004f714c  5e                   pop esi
// 004f714d  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ??$?4VVector3@G3D@@@any@boost@@QAEAAV01@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
