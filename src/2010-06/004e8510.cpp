// roc 2010-06 004e8510  unit: G3D::VRay::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e8510
//
// 004e8510  56                   push esi
// 004e8511  6a08                 push 8
// 004e8513  8bf1                 mov esi, ecx
// 004e8515  e886f42b00           call 0x7a79a0
// 004e851a  83c404               add esp, 4
// 004e851d  85c0                 test eax, eax
// 004e851f  7411                 je 0x4e8532
// 004e8521  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e8525  c70098b0a100         mov dword ptr [eax], 0xa1b098
// 004e852b  8b11                 mov edx, dword ptr [ecx]
// 004e852d  895004               mov dword ptr [eax + 4], edx
// 004e8530  eb02                 jmp 0x4e8534
// 004e8532  33c0                 xor eax, eax
// 004e8534  8d542408             lea edx, [esp + 8]
// 004e8538  8bc8                 mov ecx, eax
// 004e853a  3bd6                 cmp edx, esi
// 004e853c  7404                 je 0x4e8542
// 004e853e  8b0e                 mov ecx, dword ptr [esi]
// 004e8540  8906                 mov dword ptr [esi], eax
// 004e8542  85c9                 test ecx, ecx
// 004e8544  7408                 je 0x4e854e
// 004e8546  8b01                 mov eax, dword ptr [ecx]
// 004e8548  8b10                 mov edx, dword ptr [eax]
// 004e854a  6a01                 push 1
// 004e854c  ffd2                 call edx
// 004e854e  8bc6                 mov eax, esi
// 004e8550  5e                   pop esi
// 004e8551  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
