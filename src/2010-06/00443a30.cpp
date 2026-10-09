// roc 2010-06 00443a30  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00443a30
//
// 00443a30  56                   push esi
// 00443a31  6a08                 push 8
// 00443a33  8bf1                 mov esi, ecx
// 00443a35  e8663f3600           call 0x7a79a0
// 00443a3a  83c404               add esp, 4
// 00443a3d  85c0                 test eax, eax
// 00443a3f  7411                 je 0x443a52
// 00443a41  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00443a45  c700e846a000         mov dword ptr [eax], 0xa046e8
// 00443a4b  8b11                 mov edx, dword ptr [ecx]
// 00443a4d  895004               mov dword ptr [eax + 4], edx
// 00443a50  eb02                 jmp 0x443a54
// 00443a52  33c0                 xor eax, eax
// 00443a54  8d542408             lea edx, [esp + 8]
// 00443a58  8bc8                 mov ecx, eax
// 00443a5a  3bd6                 cmp edx, esi
// 00443a5c  7404                 je 0x443a62
// 00443a5e  8b0e                 mov ecx, dword ptr [esi]
// 00443a60  8906                 mov dword ptr [esi], eax
// 00443a62  85c9                 test ecx, ecx
// 00443a64  7408                 je 0x443a6e
// 00443a66  8b01                 mov eax, dword ptr [ecx]
// 00443a68  8b10                 mov edx, dword ptr [eax]
// 00443a6a  6a01                 push 1
// 00443a6c  ffd2                 call edx
// 00443a6e  8bc6                 mov eax, esi
// 00443a70  5e                   pop esi
// 00443a71  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
