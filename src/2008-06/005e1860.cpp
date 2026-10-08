// roc 2008-06 005e1860  unit: RBX::VLighting::?$BoundFuncDesc  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e1860
//
// 005e1860  8b442404             mov eax, dword ptr [esp + 4]
// 005e1864  83ec0c               sub esp, 0xc
// 005e1867  56                   push esi
// 005e1868  6a00                 push 0
// 005e186a  6864499500           push 0x954964
// 005e186f  68fc919200           push 0x9291fc
// 005e1874  6a00                 push 0
// 005e1876  50                   push eax
// 005e1877  8bf1                 mov esi, ecx
// 005e1879  e848ff0b00           call 0x6a17c6
// 005e187e  83c414               add esp, 0x14
// 005e1881  85c0                 test eax, eax
// 005e1883  751e                 jne 0x5e18a3
// 005e1885  6834ba8000           push 0x80ba34
// 005e188a  8d4c2408             lea ecx, [esp + 8]
// 005e188e  ff1564288000         call dword ptr [0x802864]
// 005e1894  682c368d00           push 0x8d362c
// 005e1899  8d4c2408             lea ecx, [esp + 8]
// 005e189d  51                   push ecx
// 005e189e  e8e9fc0b00           call 0x6a158c
// 005e18a3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005e18a7  83c204               add edx, 4
// 005e18aa  52                   push edx
// 005e18ab  50                   push eax
// 005e18ac  8bce                 mov ecx, esi
// 005e18ae  e83dffffff           call 0x5e17f0
// 005e18b3  5e                   pop esi
// 005e18b4  83c40c               add esp, 0xc
// 005e18b7  c20800               ret 8
// library rbxgs/v8datamodel\Lighting.cpp (function ?execute@?$BoundFuncDesc@VLighting@RBX@@$$A6AMXZ$0A@@Reflection@RBX@@UBEXPAVDescribedBase@23@AAVArguments@FunctionDescriptor@23@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
