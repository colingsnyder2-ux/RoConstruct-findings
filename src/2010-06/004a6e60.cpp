// roc 2010-06 004a6e60  unit: RBX::Reflection::VValue::$$CBV?$vector::V?$shared_ptr::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a6e60
//
// 004a6e60  56                   push esi
// 004a6e61  6a08                 push 8
// 004a6e63  8bf1                 mov esi, ecx
// 004a6e65  e8360b3000           call 0x7a79a0
// 004a6e6a  83c404               add esp, 4
// 004a6e6d  85c0                 test eax, eax
// 004a6e6f  7411                 je 0x4a6e82
// 004a6e71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004a6e75  c700647ea100         mov dword ptr [eax], 0xa17e64
// 004a6e7b  8b11                 mov edx, dword ptr [ecx]
// 004a6e7d  895004               mov dword ptr [eax + 4], edx
// 004a6e80  eb02                 jmp 0x4a6e84
// 004a6e82  33c0                 xor eax, eax
// 004a6e84  8d542408             lea edx, [esp + 8]
// 004a6e88  8bc8                 mov ecx, eax
// 004a6e8a  3bd6                 cmp edx, esi
// 004a6e8c  7404                 je 0x4a6e92
// 004a6e8e  8b0e                 mov ecx, dword ptr [esi]
// 004a6e90  8906                 mov dword ptr [esi], eax
// 004a6e92  85c9                 test ecx, ecx
// 004a6e94  7408                 je 0x4a6e9e
// 004a6e96  8b01                 mov eax, dword ptr [ecx]
// 004a6e98  8b10                 mov edx, dword ptr [eax]
// 004a6e9a  6a01                 push 1
// 004a6e9c  ffd2                 call edx
// 004a6e9e  8bc6                 mov eax, esi
// 004a6ea0  5e                   pop esi
// 004a6ea1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
