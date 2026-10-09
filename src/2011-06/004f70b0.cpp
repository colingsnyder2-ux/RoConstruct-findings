// roc 2011-06 004f70b0  unit: RBX::VRbxRay::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004f70b0
//
// 004f70b0  56                   push esi
// 004f70b1  6a08                 push 8
// 004f70b3  8bf1                 mov esi, ecx
// 004f70b5  e8a42f3100           call 0x80a05e
// 004f70ba  83c404               add esp, 4
// 004f70bd  85c0                 test eax, eax
// 004f70bf  7411                 je 0x4f70d2
// 004f70c1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f70c5  c70004b3a700         mov dword ptr [eax], 0xa7b304
// 004f70cb  8b11                 mov edx, dword ptr [ecx]
// 004f70cd  895004               mov dword ptr [eax + 4], edx
// 004f70d0  eb02                 jmp 0x4f70d4
// 004f70d2  33c0                 xor eax, eax
// 004f70d4  8d542408             lea edx, [esp + 8]
// 004f70d8  8bc8                 mov ecx, eax
// 004f70da  3bd6                 cmp edx, esi
// 004f70dc  7404                 je 0x4f70e2
// 004f70de  8b0e                 mov ecx, dword ptr [esi]
// 004f70e0  8906                 mov dword ptr [esi], eax
// 004f70e2  85c9                 test ecx, ecx
// 004f70e4  7408                 je 0x4f70ee
// 004f70e6  8b01                 mov eax, dword ptr [ecx]
// 004f70e8  8b10                 mov edx, dword ptr [eax]
// 004f70ea  6a01                 push 1
// 004f70ec  ffd2                 call edx
// 004f70ee  8bc6                 mov eax, esi
// 004f70f0  5e                   pop esi
// 004f70f1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
