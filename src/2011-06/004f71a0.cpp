// roc 2011-06 004f71a0  unit: RBX::VRbxRay::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f71a0
//
// 004f71a0  56                   push esi
// 004f71a1  6a08                 push 8
// 004f71a3  8bf1                 mov esi, ecx
// 004f71a5  e8b42e3100           call 0x80a05e
// 004f71aa  83c404               add esp, 4
// 004f71ad  85c0                 test eax, eax
// 004f71af  7411                 je 0x4f71c2
// 004f71b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f71b5  c70034b3a700         mov dword ptr [eax], 0xa7b334
// 004f71bb  8b11                 mov edx, dword ptr [ecx]
// 004f71bd  895004               mov dword ptr [eax + 4], edx
// 004f71c0  eb02                 jmp 0x4f71c4
// 004f71c2  33c0                 xor eax, eax
// 004f71c4  8d542408             lea edx, [esp + 8]
// 004f71c8  8bc8                 mov ecx, eax
// 004f71ca  3bd6                 cmp edx, esi
// 004f71cc  7404                 je 0x4f71d2
// 004f71ce  8b0e                 mov ecx, dword ptr [esi]
// 004f71d0  8906                 mov dword ptr [esi], eax
// 004f71d2  85c9                 test ecx, ecx
// 004f71d4  7408                 je 0x4f71de
// 004f71d6  8b01                 mov eax, dword ptr [ecx]
// 004f71d8  8b10                 mov edx, dword ptr [eax]
// 004f71da  6a01                 push 1
// 004f71dc  ffd2                 call edx
// 004f71de  8bc6                 mov eax, esi
// 004f71e0  5e                   pop esi
// 004f71e1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
