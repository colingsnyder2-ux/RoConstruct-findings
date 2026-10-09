// roc 2011-06 0040c4a0  unit: boost::gregorian::Ubad_month::?$error_info_injector  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040c4a0
//
// 0040c4a0  56                   push esi
// 0040c4a1  6a08                 push 8
// 0040c4a3  8bf1                 mov esi, ecx
// 0040c4a5  e8b4db3f00           call 0x80a05e
// 0040c4aa  83c404               add esp, 4
// 0040c4ad  85c0                 test eax, eax
// 0040c4af  7411                 je 0x40c4c2
// 0040c4b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0040c4b5  c700e4c1a500         mov dword ptr [eax], 0xa5c1e4
// 0040c4bb  8b11                 mov edx, dword ptr [ecx]
// 0040c4bd  895004               mov dword ptr [eax + 4], edx
// 0040c4c0  eb02                 jmp 0x40c4c4
// 0040c4c2  33c0                 xor eax, eax
// 0040c4c4  8d542408             lea edx, [esp + 8]
// 0040c4c8  8bc8                 mov ecx, eax
// 0040c4ca  3bd6                 cmp edx, esi
// 0040c4cc  7404                 je 0x40c4d2
// 0040c4ce  8b0e                 mov ecx, dword ptr [esi]
// 0040c4d0  8906                 mov dword ptr [esi], eax
// 0040c4d2  85c9                 test ecx, ecx
// 0040c4d4  7408                 je 0x40c4de
// 0040c4d6  8b01                 mov eax, dword ptr [ecx]
// 0040c4d8  8b10                 mov edx, dword ptr [eax]
// 0040c4da  6a01                 push 1
// 0040c4dc  ffd2                 call edx
// 0040c4de  8bc6                 mov eax, esi
// 0040c4e0  5e                   pop esi
// 0040c4e1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
