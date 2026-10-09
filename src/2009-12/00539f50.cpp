// roc 2009-12 00539f50  unit: G3D::VRay::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00539f50
//
// 00539f50  56                   push esi
// 00539f51  6a08                 push 8
// 00539f53  8bf1                 mov esi, ecx
// 00539f55  e806992b00           call 0x7f3860
// 00539f5a  83c404               add esp, 4
// 00539f5d  85c0                 test eax, eax
// 00539f5f  7411                 je 0x539f72
// 00539f61  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539f65  c700b8d19b00         mov dword ptr [eax], 0x9bd1b8
// 00539f6b  8b11                 mov edx, dword ptr [ecx]
// 00539f6d  895004               mov dword ptr [eax + 4], edx
// 00539f70  eb02                 jmp 0x539f74
// 00539f72  33c0                 xor eax, eax
// 00539f74  8d542408             lea edx, [esp + 8]
// 00539f78  8bc8                 mov ecx, eax
// 00539f7a  3bd6                 cmp edx, esi
// 00539f7c  7404                 je 0x539f82
// 00539f7e  8b0e                 mov ecx, dword ptr [esi]
// 00539f80  8906                 mov dword ptr [esi], eax
// 00539f82  85c9                 test ecx, ecx
// 00539f84  7408                 je 0x539f8e
// 00539f86  8b01                 mov eax, dword ptr [ecx]
// 00539f88  8b10                 mov edx, dword ptr [eax]
// 00539f8a  6a01                 push 1
// 00539f8c  ffd2                 call edx
// 00539f8e  8bc6                 mov eax, esi
// 00539f90  5e                   pop esi
// 00539f91  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
