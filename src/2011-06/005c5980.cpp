// roc 2011-06 005c5980  unit: RBX::DataModel::W4CreatorType::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5980
//
// 005c5980  56                   push esi
// 005c5981  6a08                 push 8
// 005c5983  8bf1                 mov esi, ecx
// 005c5985  e8d4462400           call 0x80a05e
// 005c598a  83c404               add esp, 4
// 005c598d  85c0                 test eax, eax
// 005c598f  7411                 je 0x5c59a2
// 005c5991  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c5995  c70090eea800         mov dword ptr [eax], 0xa8ee90
// 005c599b  8b11                 mov edx, dword ptr [ecx]
// 005c599d  895004               mov dword ptr [eax + 4], edx
// 005c59a0  eb02                 jmp 0x5c59a4
// 005c59a2  33c0                 xor eax, eax
// 005c59a4  8d542408             lea edx, [esp + 8]
// 005c59a8  8bc8                 mov ecx, eax
// 005c59aa  3bd6                 cmp edx, esi
// 005c59ac  7404                 je 0x5c59b2
// 005c59ae  8b0e                 mov ecx, dword ptr [esi]
// 005c59b0  8906                 mov dword ptr [esi], eax
// 005c59b2  85c9                 test ecx, ecx
// 005c59b4  7408                 je 0x5c59be
// 005c59b6  8b01                 mov eax, dword ptr [ecx]
// 005c59b8  8b10                 mov edx, dword ptr [eax]
// 005c59ba  6a01                 push 1
// 005c59bc  ffd2                 call edx
// 005c59be  8bc6                 mov eax, esi
// 005c59c0  5e                   pop esi
// 005c59c1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
