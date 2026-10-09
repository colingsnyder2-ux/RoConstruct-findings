// roc 2009-12 007131f0  unit: RBX::Lighting  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007131f0
//
// 007131f0  8b442404             mov eax, dword ptr [esp + 4]
// 007131f4  6a00                 push 0
// 007131f6  685469b300           push 0xb36954
// 007131fb  6840feaf00           push 0xaffe40
// 00713200  6a00                 push 0
// 00713202  50                   push eax
// 00713203  e8a2180e00           call 0x7f4aaa
// 00713208  83c414               add esp, 0x14
// 0071320b  f7d8                 neg eax
// 0071320d  1bc0                 sbb eax, eax
// 0071320f  f7d8                 neg eax
// 00713211  c20400               ret 4
// library rbxgs/v8datamodel\Lighting.cpp (function ?askAddChild@Lighting@RBX@@MBE_NPBVInstance@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
