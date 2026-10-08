// roc 2007-03 004a0280  unit: seg_004a0000  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004a0280
//
// 004a0280  8b442404             mov eax, dword ptr [esp + 4]
// 004a0284  53                   push ebx
// 004a0285  56                   push esi
// 004a0286  57                   push edi
// 004a0287  8bf1                 mov esi, ecx
// 004a0289  8b7e04               mov edi, dword ptr [esi + 4]
// 004a028c  8b4f04               mov ecx, dword ptr [edi + 4]
// 004a028f  50                   push eax
// 004a0290  51                   push ecx
// 004a0291  57                   push edi
// 004a0292  8bce                 mov ecx, esi
// 004a0294  e837c3f8ff           call 0x42c5d0
// 004a0299  6a01                 push 1
// 004a029b  8bce                 mov ecx, esi
// 004a029d  8bd8                 mov ebx, eax
// 004a029f  e8ccd3ffff           call 0x49d670
// 004a02a4  895f04               mov dword ptr [edi + 4], ebx
// 004a02a7  8b5304               mov edx, dword ptr [ebx + 4]
// 004a02aa  5f                   pop edi
// 004a02ab  5e                   pop esi
// 004a02ac  891a                 mov dword ptr [edx], ebx
// 004a02ae  5b                   pop ebx
// 004a02af  c20400               ret 4
// library rbxgs/reflection\type.cpp (function ?push_back@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXABUItem@SignatureDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/type.cpp
