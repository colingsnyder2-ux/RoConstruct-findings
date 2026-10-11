// roc 2009-12 006342f0  unit: VAuthoringSettings::?$FactoryProduct  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006342f0
//
// 006342f0  8b442404             mov eax, dword ptr [esp + 4]
// 006342f4  83ec0c               sub esp, 0xc
// 006342f7  6a00                 push 0
// 006342f9  6840feaf00           push 0xaffe40
// 006342fe  684000b000           push 0xb00040
// 00634303  6a00                 push 0
// 00634305  50                   push eax
// 00634306  e89f071c00           call 0x7f4aaa
// 0063430b  83c414               add esp, 0x14
// 0063430e  85c0                 test eax, eax
// 00634310  751e                 jne 0x634330
// 00634312  689cfe9900           push 0x99fe9c
// 00634317  8d4c2404             lea ecx, [esp + 4]
// 0063431b  ff15a4b79800         call dword ptr [0x98b7a4]
// 00634321  6814d8a900           push 0xa9d814
// 00634326  8d4c2404             lea ecx, [esp + 4]
// 0063432a  51                   push ecx
// 0063432b  e848051c00           call 0x7f4878
// 00634330  83c40c               add esp, 0xc
// 00634333  c3                   ret 
// library openrbx-client/App\v8tree\Instance.cpp (function ??$polymorphic_cast@PAVInstance@RBX@@VDescribedBase@Reflection@2@@boost@@YAPAVInstance@RBX@@PAVDescribedBase@Reflection@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8tree/Instance.cpp
