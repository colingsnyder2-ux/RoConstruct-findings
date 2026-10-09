// roc 2009-12 00444c90  unit: G3D::VVector2int16::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00444c90
//
// 00444c90  56                   push esi
// 00444c91  6a08                 push 8
// 00444c93  8bf1                 mov esi, ecx
// 00444c95  e8c6eb3a00           call 0x7f3860
// 00444c9a  83c404               add esp, 4
// 00444c9d  85c0                 test eax, eax
// 00444c9f  7411                 je 0x444cb2
// 00444ca1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00444ca5  c700a4a29a00         mov dword ptr [eax], 0x9aa2a4
// 00444cab  8b11                 mov edx, dword ptr [ecx]
// 00444cad  895004               mov dword ptr [eax + 4], edx
// 00444cb0  eb02                 jmp 0x444cb4
// 00444cb2  33c0                 xor eax, eax
// 00444cb4  8d542408             lea edx, [esp + 8]
// 00444cb8  8bc8                 mov ecx, eax
// 00444cba  3bd6                 cmp edx, esi
// 00444cbc  7404                 je 0x444cc2
// 00444cbe  8b0e                 mov ecx, dword ptr [esi]
// 00444cc0  8906                 mov dword ptr [esi], eax
// 00444cc2  85c9                 test ecx, ecx
// 00444cc4  7408                 je 0x444cce
// 00444cc6  8b01                 mov eax, dword ptr [ecx]
// 00444cc8  8b10                 mov edx, dword ptr [eax]
// 00444cca  6a01                 push 1
// 00444ccc  ffd2                 call edx
// 00444cce  8bc6                 mov eax, esi
// 00444cd0  5e                   pop esi
// 00444cd1  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
