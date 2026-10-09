// roc 2008-06 00445950  unit: G3D::VVector2int16::?$holder  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445950
//
// 00445950  56                   push esi
// 00445951  6a08                 push 8
// 00445953  8bf1                 mov esi, ecx
// 00445955  e8c6af2500           call 0x6a0920
// 0044595a  83c404               add esp, 4
// 0044595d  85c0                 test eax, eax
// 0044595f  7411                 je 0x445972
// 00445961  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445965  c700c45d8100         mov dword ptr [eax], 0x815dc4
// 0044596b  8b11                 mov edx, dword ptr [ecx]
// 0044596d  895004               mov dword ptr [eax + 4], edx
// 00445970  eb02                 jmp 0x445974
// 00445972  33c0                 xor eax, eax
// 00445974  8d542408             lea edx, [esp + 8]
// 00445978  8bc8                 mov ecx, eax
// 0044597a  3bd6                 cmp edx, esi
// 0044597c  7404                 je 0x445982
// 0044597e  8b0e                 mov ecx, dword ptr [esi]
// 00445980  8906                 mov dword ptr [esi], eax
// 00445982  85c9                 test ecx, ecx
// 00445984  7408                 je 0x44598e
// 00445986  8b01                 mov eax, dword ptr [ecx]
// 00445988  8b10                 mov edx, dword ptr [eax]
// 0044598a  6a01                 push 1
// 0044598c  ffd2                 call edx
// 0044598e  8bc6                 mov eax, esi
// 00445990  5e                   pop esi
// 00445991  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
