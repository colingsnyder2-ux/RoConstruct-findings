// roc 2009-06 004b5ba0  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b5ba0
//
// 004b5ba0  56                   push esi
// 004b5ba1  6a08                 push 8
// 004b5ba3  8bf1                 mov esi, ecx
// 004b5ba5  e88e2e2600           call 0x718a38
// 004b5baa  83c404               add esp, 4
// 004b5bad  85c0                 test eax, eax
// 004b5baf  7411                 je 0x4b5bc2
// 004b5bb1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b5bb5  c70050458c00         mov dword ptr [eax], 0x8c4550
// 004b5bbb  8b11                 mov edx, dword ptr [ecx]
// 004b5bbd  895004               mov dword ptr [eax + 4], edx
// 004b5bc0  eb02                 jmp 0x4b5bc4
// 004b5bc2  33c0                 xor eax, eax
// 004b5bc4  8d542408             lea edx, [esp + 8]
// 004b5bc8  8bc8                 mov ecx, eax
// 004b5bca  3bd6                 cmp edx, esi
// 004b5bcc  7404                 je 0x4b5bd2
// 004b5bce  8b0e                 mov ecx, dword ptr [esi]
// 004b5bd0  8906                 mov dword ptr [esi], eax
// 004b5bd2  85c9                 test ecx, ecx
// 004b5bd4  7408                 je 0x4b5bde
// 004b5bd6  8b01                 mov eax, dword ptr [ecx]
// 004b5bd8  8b10                 mov edx, dword ptr [eax]
// 004b5bda  6a01                 push 1
// 004b5bdc  ffd2                 call edx
// 004b5bde  8bc6                 mov eax, esi
// 004b5be0  5e                   pop esi
// 004b5be1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
