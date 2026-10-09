// roc 2011-06 005c5380  unit: G3D::Vector3::W4Axis::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005c5380
//
// 005c5380  56                   push esi
// 005c5381  6a08                 push 8
// 005c5383  8bf1                 mov esi, ecx
// 005c5385  e8d44c2400           call 0x80a05e
// 005c538a  83c404               add esp, 4
// 005c538d  85c0                 test eax, eax
// 005c538f  7411                 je 0x5c53a2
// 005c5391  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c5395  c70030eea800         mov dword ptr [eax], 0xa8ee30
// 005c539b  8b11                 mov edx, dword ptr [ecx]
// 005c539d  895004               mov dword ptr [eax + 4], edx
// 005c53a0  eb02                 jmp 0x5c53a4
// 005c53a2  33c0                 xor eax, eax
// 005c53a4  8d542408             lea edx, [esp + 8]
// 005c53a8  8bc8                 mov ecx, eax
// 005c53aa  3bd6                 cmp edx, esi
// 005c53ac  7404                 je 0x5c53b2
// 005c53ae  8b0e                 mov ecx, dword ptr [esi]
// 005c53b0  8906                 mov dword ptr [esi], eax
// 005c53b2  85c9                 test ecx, ecx
// 005c53b4  7408                 je 0x5c53be
// 005c53b6  8b01                 mov eax, dword ptr [ecx]
// 005c53b8  8b10                 mov edx, dword ptr [eax]
// 005c53ba  6a01                 push 1
// 005c53bc  ffd2                 call edx
// 005c53be  8bc6                 mov eax, esi
// 005c53c0  5e                   pop esi
// 005c53c1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
