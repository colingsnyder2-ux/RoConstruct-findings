// roc 2009-12 00539fa0  unit: G3D::VRay::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00539fa0
//
// 00539fa0  56                   push esi
// 00539fa1  6a08                 push 8
// 00539fa3  8bf1                 mov esi, ecx
// 00539fa5  e8b6982b00           call 0x7f3860
// 00539faa  83c404               add esp, 4
// 00539fad  85c0                 test eax, eax
// 00539faf  7411                 je 0x539fc2
// 00539fb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00539fb5  c700c8d19b00         mov dword ptr [eax], 0x9bd1c8
// 00539fbb  8b11                 mov edx, dword ptr [ecx]
// 00539fbd  895004               mov dword ptr [eax + 4], edx
// 00539fc0  eb02                 jmp 0x539fc4
// 00539fc2  33c0                 xor eax, eax
// 00539fc4  8d542408             lea edx, [esp + 8]
// 00539fc8  8bc8                 mov ecx, eax
// 00539fca  3bd6                 cmp edx, esi
// 00539fcc  7404                 je 0x539fd2
// 00539fce  8b0e                 mov ecx, dword ptr [esi]
// 00539fd0  8906                 mov dword ptr [esi], eax
// 00539fd2  85c9                 test ecx, ecx
// 00539fd4  7408                 je 0x539fde
// 00539fd6  8b01                 mov eax, dword ptr [ecx]
// 00539fd8  8b10                 mov edx, dword ptr [eax]
// 00539fda  6a01                 push 1
// 00539fdc  ffd2                 call edx
// 00539fde  8bc6                 mov eax, esi
// 00539fe0  5e                   pop esi
// 00539fe1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
