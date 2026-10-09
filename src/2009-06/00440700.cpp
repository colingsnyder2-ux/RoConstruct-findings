// roc 2009-06 00440700  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00440700
//
// 00440700  56                   push esi
// 00440701  6a08                 push 8
// 00440703  8bf1                 mov esi, ecx
// 00440705  e82e832d00           call 0x718a38
// 0044070a  83c404               add esp, 4
// 0044070d  85c0                 test eax, eax
// 0044070f  7411                 je 0x440722
// 00440711  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00440715  c70038628b00         mov dword ptr [eax], 0x8b6238
// 0044071b  8b11                 mov edx, dword ptr [ecx]
// 0044071d  895004               mov dword ptr [eax + 4], edx
// 00440720  eb02                 jmp 0x440724
// 00440722  33c0                 xor eax, eax
// 00440724  8d542408             lea edx, [esp + 8]
// 00440728  8bc8                 mov ecx, eax
// 0044072a  3bd6                 cmp edx, esi
// 0044072c  7404                 je 0x440732
// 0044072e  8b0e                 mov ecx, dword ptr [esi]
// 00440730  8906                 mov dword ptr [esi], eax
// 00440732  85c9                 test ecx, ecx
// 00440734  7408                 je 0x44073e
// 00440736  8b01                 mov eax, dword ptr [ecx]
// 00440738  8b10                 mov edx, dword ptr [eax]
// 0044073a  6a01                 push 1
// 0044073c  ffd2                 call edx
// 0044073e  8bc6                 mov eax, esi
// 00440740  5e                   pop esi
// 00440741  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
