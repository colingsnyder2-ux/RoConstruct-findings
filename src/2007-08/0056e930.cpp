// roc 2007-08 0056e930  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056e930
//
// 0056e930  83ec0c               sub esp, 0xc
// 0056e933  d9ee                 fldz 
// 0056e935  56                   push esi
// 0056e936  8d442404             lea eax, [esp + 4]
// 0056e93a  d9542404             fst dword ptr [esp + 4]
// 0056e93e  8bf1                 mov esi, ecx
// 0056e940  d9542408             fst dword ptr [esp + 8]
// 0056e944  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0056e948  d95c240c             fstp dword ptr [esp + 0xc]
// 0056e94c  50                   push eax
// 0056e94d  51                   push ecx
// 0056e94e  e83de80100           call 0x58d190
// 0056e953  83c408               add esp, 8
// 0056e956  84c0                 test al, al
// 0056e958  741d                 je 0x56e977
// 0056e95a  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0056e95d  8b11                 mov edx, dword ptr [ecx]
// 0056e95f  8b5208               mov edx, dword ptr [edx + 8]
// 0056e962  8d442404             lea eax, [esp + 4]
// 0056e966  50                   push eax
// 0056e967  8b442418             mov eax, dword ptr [esp + 0x18]
// 0056e96b  50                   push eax
// 0056e96c  ffd2                 call edx
// 0056e96e  b001                 mov al, 1
// 0056e970  5e                   pop esi
// 0056e971  83c40c               add esp, 0xc
// 0056e974  c20800               ret 8
// 0056e977  32c0                 xor al, al
// 0056e979  5e                   pop esi
// 0056e97a  83c40c               add esp, 0xc
// 0056e97d  c20800               ret 8
// library rbxgs/v8tree\EnumProperty.cpp (function ?setStringValue@?$TypedPropertyDescriptor@VVector3@G3D@@@Reflection@RBX@@UBE_NPAVDescribedBase@23@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/EnumProperty.cpp
