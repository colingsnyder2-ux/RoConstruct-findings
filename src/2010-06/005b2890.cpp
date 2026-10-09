// roc 2010-06 005b2890  unit: RBX::GuiService::W4SpecialKey::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005b2890
//
// 005b2890  56                   push esi
// 005b2891  6a08                 push 8
// 005b2893  8bf1                 mov esi, ecx
// 005b2895  e806511f00           call 0x7a79a0
// 005b289a  83c404               add esp, 4
// 005b289d  85c0                 test eax, eax
// 005b289f  7411                 je 0x5b28b2
// 005b28a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b28a5  c70024b0a200         mov dword ptr [eax], 0xa2b024
// 005b28ab  8b11                 mov edx, dword ptr [ecx]
// 005b28ad  895004               mov dword ptr [eax + 4], edx
// 005b28b0  eb02                 jmp 0x5b28b4
// 005b28b2  33c0                 xor eax, eax
// 005b28b4  8d542408             lea edx, [esp + 8]
// 005b28b8  8bc8                 mov ecx, eax
// 005b28ba  3bd6                 cmp edx, esi
// 005b28bc  7404                 je 0x5b28c2
// 005b28be  8b0e                 mov ecx, dword ptr [esi]
// 005b28c0  8906                 mov dword ptr [esi], eax
// 005b28c2  85c9                 test ecx, ecx
// 005b28c4  7408                 je 0x5b28ce
// 005b28c6  8b01                 mov eax, dword ptr [ecx]
// 005b28c8  8b10                 mov edx, dword ptr [eax]
// 005b28ca  6a01                 push 1
// 005b28cc  ffd2                 call edx
// 005b28ce  8bc6                 mov eax, esi
// 005b28d0  5e                   pop esi
// 005b28d1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
