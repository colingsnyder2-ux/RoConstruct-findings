// roc 2011-06 004a81c0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004a81c0
//
// 004a81c0  56                   push esi
// 004a81c1  6a08                 push 8
// 004a81c3  8bf1                 mov esi, ecx
// 004a81c5  e8941e3600           call 0x80a05e
// 004a81ca  83c404               add esp, 4
// 004a81cd  85c0                 test eax, eax
// 004a81cf  7411                 je 0x4a81e2
// 004a81d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a81d5  c700386ea700         mov dword ptr [eax], 0xa76e38
// 004a81db  8b11                 mov edx, dword ptr [ecx]
// 004a81dd  895004               mov dword ptr [eax + 4], edx
// 004a81e0  eb02                 jmp 0x4a81e4
// 004a81e2  33c0                 xor eax, eax
// 004a81e4  8d542408             lea edx, [esp + 8]
// 004a81e8  8bc8                 mov ecx, eax
// 004a81ea  3bd6                 cmp edx, esi
// 004a81ec  7404                 je 0x4a81f2
// 004a81ee  8b0e                 mov ecx, dword ptr [esi]
// 004a81f0  8906                 mov dword ptr [esi], eax
// 004a81f2  85c9                 test ecx, ecx
// 004a81f4  7408                 je 0x4a81fe
// 004a81f6  8b01                 mov eax, dword ptr [ecx]
// 004a81f8  8b10                 mov edx, dword ptr [eax]
// 004a81fa  6a01                 push 1
// 004a81fc  ffd2                 call edx
// 004a81fe  8bc6                 mov eax, esi
// 004a8200  5e                   pop esi
// 004a8201  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
