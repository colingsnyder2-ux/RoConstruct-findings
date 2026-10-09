// roc 2009-06 0043def0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0043def0
//
// 0043def0  56                   push esi
// 0043def1  6a08                 push 8
// 0043def3  8bf1                 mov esi, ecx
// 0043def5  e83eab2d00           call 0x718a38
// 0043defa  83c404               add esp, 4
// 0043defd  85c0                 test eax, eax
// 0043deff  7411                 je 0x43df12
// 0043df01  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043df05  c700b00c8b00         mov dword ptr [eax], 0x8b0cb0
// 0043df0b  8b11                 mov edx, dword ptr [ecx]
// 0043df0d  895004               mov dword ptr [eax + 4], edx
// 0043df10  eb02                 jmp 0x43df14
// 0043df12  33c0                 xor eax, eax
// 0043df14  8d542408             lea edx, [esp + 8]
// 0043df18  8bc8                 mov ecx, eax
// 0043df1a  3bd6                 cmp edx, esi
// 0043df1c  7404                 je 0x43df22
// 0043df1e  8b0e                 mov ecx, dword ptr [esi]
// 0043df20  8906                 mov dword ptr [esi], eax
// 0043df22  85c9                 test ecx, ecx
// 0043df24  7408                 je 0x43df2e
// 0043df26  8b01                 mov eax, dword ptr [ecx]
// 0043df28  8b10                 mov edx, dword ptr [eax]
// 0043df2a  6a01                 push 1
// 0043df2c  ffd2                 call edx
// 0043df2e  8bc6                 mov eax, esi
// 0043df30  5e                   pop esi
// 0043df31  c20400               ret 4
// library openrbx-client/App\v8tree\Instance.cpp (function ??$?4PBVPropertyDescriptor@Reflection@RBX@@@any@boost@@QAEAAV01@ABQBVPropertyDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
