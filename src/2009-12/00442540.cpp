// roc 2009-12 00442540  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00442540
//
// 00442540  56                   push esi
// 00442541  6a08                 push 8
// 00442543  8bf1                 mov esi, ecx
// 00442545  e816133b00           call 0x7f3860
// 0044254a  83c404               add esp, 4
// 0044254d  85c0                 test eax, eax
// 0044254f  7411                 je 0x442562
// 00442551  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00442555  c70090399a00         mov dword ptr [eax], 0x9a3990
// 0044255b  8b11                 mov edx, dword ptr [ecx]
// 0044255d  895004               mov dword ptr [eax + 4], edx
// 00442560  eb02                 jmp 0x442564
// 00442562  33c0                 xor eax, eax
// 00442564  8d542408             lea edx, [esp + 8]
// 00442568  8bc8                 mov ecx, eax
// 0044256a  3bd6                 cmp edx, esi
// 0044256c  7404                 je 0x442572
// 0044256e  8b0e                 mov ecx, dword ptr [esi]
// 00442570  8906                 mov dword ptr [esi], eax
// 00442572  85c9                 test ecx, ecx
// 00442574  7408                 je 0x44257e
// 00442576  8b01                 mov eax, dword ptr [ecx]
// 00442578  8b10                 mov edx, dword ptr [eax]
// 0044257a  6a01                 push 1
// 0044257c  ffd2                 call edx
// 0044257e  8bc6                 mov eax, esi
// 00442580  5e                   pop esi
// 00442581  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
