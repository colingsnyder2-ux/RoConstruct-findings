// roc 2010-06 005afdc0  unit: G3D::Vector3::W4Axis::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005afdc0
//
// 005afdc0  56                   push esi
// 005afdc1  6a08                 push 8
// 005afdc3  8bf1                 mov esi, ecx
// 005afdc5  e8d67b1f00           call 0x7a79a0
// 005afdca  83c404               add esp, 4
// 005afdcd  85c0                 test eax, eax
// 005afdcf  7411                 je 0x5afde2
// 005afdd1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005afdd5  c70084ada200         mov dword ptr [eax], 0xa2ad84
// 005afddb  8b11                 mov edx, dword ptr [ecx]
// 005afddd  895004               mov dword ptr [eax + 4], edx
// 005afde0  eb02                 jmp 0x5afde4
// 005afde2  33c0                 xor eax, eax
// 005afde4  8d542408             lea edx, [esp + 8]
// 005afde8  8bc8                 mov ecx, eax
// 005afdea  3bd6                 cmp edx, esi
// 005afdec  7404                 je 0x5afdf2
// 005afdee  8b0e                 mov ecx, dword ptr [esi]
// 005afdf0  8906                 mov dword ptr [esi], eax
// 005afdf2  85c9                 test ecx, ecx
// 005afdf4  7408                 je 0x5afdfe
// 005afdf6  8b01                 mov eax, dword ptr [ecx]
// 005afdf8  8b10                 mov edx, dword ptr [eax]
// 005afdfa  6a01                 push 1
// 005afdfc  ffd2                 call edx
// 005afdfe  8bc6                 mov eax, esi
// 005afe00  5e                   pop esi
// 005afe01  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
