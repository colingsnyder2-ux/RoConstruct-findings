// roc 2010-06 004e8560  unit: G3D::VRay::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004e8560
//
// 004e8560  56                   push esi
// 004e8561  6a08                 push 8
// 004e8563  8bf1                 mov esi, ecx
// 004e8565  e836f42b00           call 0x7a79a0
// 004e856a  83c404               add esp, 4
// 004e856d  85c0                 test eax, eax
// 004e856f  7411                 je 0x4e8582
// 004e8571  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004e8575  c700a8b0a100         mov dword ptr [eax], 0xa1b0a8
// 004e857b  8b11                 mov edx, dword ptr [ecx]
// 004e857d  895004               mov dword ptr [eax + 4], edx
// 004e8580  eb02                 jmp 0x4e8584
// 004e8582  33c0                 xor eax, eax
// 004e8584  8d542408             lea edx, [esp + 8]
// 004e8588  8bc8                 mov ecx, eax
// 004e858a  3bd6                 cmp edx, esi
// 004e858c  7404                 je 0x4e8592
// 004e858e  8b0e                 mov ecx, dword ptr [esi]
// 004e8590  8906                 mov dword ptr [esi], eax
// 004e8592  85c9                 test ecx, ecx
// 004e8594  7408                 je 0x4e859e
// 004e8596  8b01                 mov eax, dword ptr [ecx]
// 004e8598  8b10                 mov edx, dword ptr [eax]
// 004e859a  6a01                 push 1
// 004e859c  ffd2                 call edx
// 004e859e  8bc6                 mov eax, esi
// 004e85a0  5e                   pop esi
// 004e85a1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
