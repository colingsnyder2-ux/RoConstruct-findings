// roc 2009-06 0040a200  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0040a200
//
// 0040a200  56                   push esi
// 0040a201  8bf1                 mov esi, ecx
// 0040a203  8b4624               mov eax, dword ptr [esi + 0x24]
// 0040a206  57                   push edi
// 0040a207  33ff                 xor edi, edi
// 0040a209  3bc7                 cmp eax, edi
// 0040a20b  7409                 je 0x40a216
// 0040a20d  50                   push eax
// 0040a20e  e81fe83000           call 0x718a32
// 0040a213  83c404               add esp, 4
// 0040a216  8b4618               mov eax, dword ptr [esi + 0x18]
// 0040a219  50                   push eax
// 0040a21a  897e24               mov dword ptr [esi + 0x24], edi
// 0040a21d  897e28               mov dword ptr [esi + 0x28], edi
// 0040a220  897e2c               mov dword ptr [esi + 0x2c], edi
// 0040a223  e80ae83000           call 0x718a32
// 0040a228  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040a22b  83c404               add esp, 4
// 0040a22e  3bc7                 cmp eax, edi
// 0040a230  7409                 je 0x40a23b
// 0040a232  50                   push eax
// 0040a233  e8fae73000           call 0x718a32
// 0040a238  83c404               add esp, 4
// 0040a23b  8b0e                 mov ecx, dword ptr [esi]
// 0040a23d  51                   push ecx
// 0040a23e  897e0c               mov dword ptr [esi + 0xc], edi
// 0040a241  897e10               mov dword ptr [esi + 0x10], edi
// 0040a244  897e14               mov dword ptr [esi + 0x14], edi
// 0040a247  e8e6e73000           call 0x718a32
// 0040a24c  83c404               add esp, 4
// 0040a24f  5f                   pop edi
// 0040a250  5e                   pop esi
// 0040a251  c3                   ret 
// library rbxgs/reflection\reflection_object.cpp (function ??1?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
