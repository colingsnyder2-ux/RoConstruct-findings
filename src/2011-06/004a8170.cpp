// roc 2011-06 004a8170  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a8170
//
// 004a8170  56                   push esi
// 004a8171  6a08                 push 8
// 004a8173  8bf1                 mov esi, ecx
// 004a8175  e8e41e3600           call 0x80a05e
// 004a817a  83c404               add esp, 4
// 004a817d  85c0                 test eax, eax
// 004a817f  7411                 je 0x4a8192
// 004a8181  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a8185  c700286ea700         mov dword ptr [eax], 0xa76e28
// 004a818b  8b11                 mov edx, dword ptr [ecx]
// 004a818d  895004               mov dword ptr [eax + 4], edx
// 004a8190  eb02                 jmp 0x4a8194
// 004a8192  33c0                 xor eax, eax
// 004a8194  8d542408             lea edx, [esp + 8]
// 004a8198  8bc8                 mov ecx, eax
// 004a819a  3bd6                 cmp edx, esi
// 004a819c  7404                 je 0x4a81a2
// 004a819e  8b0e                 mov ecx, dword ptr [esi]
// 004a81a0  8906                 mov dword ptr [esi], eax
// 004a81a2  85c9                 test ecx, ecx
// 004a81a4  7408                 je 0x4a81ae
// 004a81a6  8b01                 mov eax, dword ptr [ecx]
// 004a81a8  8b10                 mov edx, dword ptr [eax]
// 004a81aa  6a01                 push 1
// 004a81ac  ffd2                 call edx
// 004a81ae  8bc6                 mov eax, esi
// 004a81b0  5e                   pop esi
// 004a81b1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
