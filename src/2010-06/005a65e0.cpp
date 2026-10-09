// roc 2010-06 005a65e0  unit: G3D::VVector2::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005a65e0
//
// 005a65e0  56                   push esi
// 005a65e1  6a08                 push 8
// 005a65e3  8bf1                 mov esi, ecx
// 005a65e5  e8b6132000           call 0x7a79a0
// 005a65ea  83c404               add esp, 4
// 005a65ed  85c0                 test eax, eax
// 005a65ef  7411                 je 0x5a6602
// 005a65f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005a65f5  c70038a8a200         mov dword ptr [eax], 0xa2a838
// 005a65fb  8b11                 mov edx, dword ptr [ecx]
// 005a65fd  895004               mov dword ptr [eax + 4], edx
// 005a6600  eb02                 jmp 0x5a6604
// 005a6602  33c0                 xor eax, eax
// 005a6604  8d542408             lea edx, [esp + 8]
// 005a6608  8bc8                 mov ecx, eax
// 005a660a  3bd6                 cmp edx, esi
// 005a660c  7404                 je 0x5a6612
// 005a660e  8b0e                 mov ecx, dword ptr [esi]
// 005a6610  8906                 mov dword ptr [esi], eax
// 005a6612  85c9                 test ecx, ecx
// 005a6614  7408                 je 0x5a661e
// 005a6616  8b01                 mov eax, dword ptr [ecx]
// 005a6618  8b10                 mov edx, dword ptr [eax]
// 005a661a  6a01                 push 1
// 005a661c  ffd2                 call edx
// 005a661e  8bc6                 mov eax, esi
// 005a6620  5e                   pop esi
// 005a6621  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
