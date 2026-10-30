// roc 2009-12 008e44c0  unit: CXTCaptionThemeFactory  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e44c0
//
// 008e44c0  6aff                 push -1
// 008e44c2  68786c9600           push 0x966c78
// 008e44c7  64a100000000         mov eax, dword ptr fs:[0]
// 008e44cd  50                   push eax
// 008e44ce  51                   push ecx
// 008e44cf  56                   push esi
// 008e44d0  a10052b600           mov eax, dword ptr [0xb65200]
// 008e44d5  33c4                 xor eax, esp
// 008e44d7  50                   push eax
// 008e44d8  8d44240c             lea eax, [esp + 0xc]
// 008e44dc  64a300000000         mov dword ptr fs:[0], eax
// 008e44e2  8bf1                 mov esi, ecx
// 008e44e4  89742408             mov dword ptr [esp + 8], esi
// 008e44e8  e8335af7ff           call 0x859f20
// 008e44ed  8d4e14               lea ecx, [esi + 0x14]
// 008e44f0  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008e44f8  c706ecc3a000         mov dword ptr [esi], 0xa0c3ec
// 008e44fe  e80da9f4ff           call 0x82ee10
// 008e4503  8d4e20               lea ecx, [esi + 0x20]
// 008e4506  e805a9f4ff           call 0x82ee10
// 008e450b  8bc6                 mov eax, esi
// 008e450d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008e4511  64890d00000000       mov dword ptr fs:[0], ecx
// 008e4518  59                   pop ecx
// 008e4519  5e                   pop esi
// 008e451a  83c410               add esp, 0x10
// 008e451d  c3                   ret 
// copied from an identical function in another client (function ??0CXTCaptionTheme@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaptionTheme.cpp