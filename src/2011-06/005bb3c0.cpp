// roc 2011-06 005bb3c0  unit: RBX::VRegion3::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005bb3c0
//
// 005bb3c0  56                   push esi
// 005bb3c1  6a08                 push 8
// 005bb3c3  8bf1                 mov esi, ecx
// 005bb3c5  e894ec2400           call 0x80a05e
// 005bb3ca  83c404               add esp, 4
// 005bb3cd  85c0                 test eax, eax
// 005bb3cf  7411                 je 0x5bb3e2
// 005bb3d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005bb3d5  c70058e7a800         mov dword ptr [eax], 0xa8e758
// 005bb3db  8b11                 mov edx, dword ptr [ecx]
// 005bb3dd  895004               mov dword ptr [eax + 4], edx
// 005bb3e0  eb02                 jmp 0x5bb3e4
// 005bb3e2  33c0                 xor eax, eax
// 005bb3e4  8d542408             lea edx, [esp + 8]
// 005bb3e8  8bc8                 mov ecx, eax
// 005bb3ea  3bd6                 cmp edx, esi
// 005bb3ec  7404                 je 0x5bb3f2
// 005bb3ee  8b0e                 mov ecx, dword ptr [esi]
// 005bb3f0  8906                 mov dword ptr [esi], eax
// 005bb3f2  85c9                 test ecx, ecx
// 005bb3f4  7408                 je 0x5bb3fe
// 005bb3f6  8b01                 mov eax, dword ptr [ecx]
// 005bb3f8  8b10                 mov edx, dword ptr [eax]
// 005bb3fa  6a01                 push 1
// 005bb3fc  ffd2                 call edx
// 005bb3fe  8bc6                 mov eax, esi
// 005bb400  5e                   pop esi
// 005bb401  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
