// roc 2010-06 005ad450  unit: RBX::CRenderSettings::W4AASamples::?$EnumDesc  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005ad450
//
// 005ad450  56                   push esi
// 005ad451  6a08                 push 8
// 005ad453  8bf1                 mov esi, ecx
// 005ad455  e846a51f00           call 0x7a79a0
// 005ad45a  83c404               add esp, 4
// 005ad45d  85c0                 test eax, eax
// 005ad45f  7411                 je 0x5ad472
// 005ad461  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005ad465  c700e4aaa200         mov dword ptr [eax], 0xa2aae4
// 005ad46b  8b11                 mov edx, dword ptr [ecx]
// 005ad46d  895004               mov dword ptr [eax + 4], edx
// 005ad470  eb02                 jmp 0x5ad474
// 005ad472  33c0                 xor eax, eax
// 005ad474  8d542408             lea edx, [esp + 8]
// 005ad478  8bc8                 mov ecx, eax
// 005ad47a  3bd6                 cmp edx, esi
// 005ad47c  7404                 je 0x5ad482
// 005ad47e  8b0e                 mov ecx, dword ptr [esi]
// 005ad480  8906                 mov dword ptr [esi], eax
// 005ad482  85c9                 test ecx, ecx
// 005ad484  7408                 je 0x5ad48e
// 005ad486  8b01                 mov eax, dword ptr [ecx]
// 005ad488  8b10                 mov edx, dword ptr [eax]
// 005ad48a  6a01                 push 1
// 005ad48c  ffd2                 call edx
// 005ad48e  8bc6                 mov eax, esi
// 005ad490  5e                   pop esi
// 005ad491  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
