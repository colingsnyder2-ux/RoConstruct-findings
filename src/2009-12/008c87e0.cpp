// roc 2009-12 008c87e0  unit: CXTPPropertyGridInplaceEdit  size: 166 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c87e0
//
// 008c87e0  56                   push esi
// 008c87e1  8bf1                 mov esi, ecx
// 008c87e3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c87e7  741f                 je 0x8c8808
// 008c87e9  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c87ed  7419                 je 0x8c8808
// 008c87ef  e87edc0500           call 0x926472
// 008c87f4  a900080000           test eax, 0x800
// 008c87f9  750d                 jne 0x8c8808
// 008c87fb  8d4e70               lea ecx, [esi + 0x70]
// 008c87fe  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c8804  84c0                 test al, al
// 008c8806  7417                 je 0x8c881f
// 008c8808  8b06                 mov eax, dword ptr [esi]
// 008c880a  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008c8810  6a00                 push 0
// 008c8812  6a00                 push 0
// 008c8814  6803030000           push 0x303
// 008c8819  8bce                 mov ecx, esi
// 008c881b  ffd2                 call edx
// 008c881d  5e                   pop esi
// 008c881e  c3                   ret 
// 008c881f  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c8822  85c0                 test eax, eax
// 008c8824  7449                 je 0x8c886f
// 008c8826  53                   push ebx
// 008c8827  57                   push edi
// 008c8828  8d7e58               lea edi, [esi + 0x58]
// 008c882b  57                   push edi
// 008c882c  8d5e54               lea ebx, [esi + 0x54]
// 008c882f  53                   push ebx
// 008c8830  68b0000000           push 0xb0
// 008c8835  50                   push eax
// 008c8836  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c883c  8d8680000000         lea eax, [esi + 0x80]
// 008c8842  50                   push eax
// 008c8843  8bce                 mov ecx, esi
// 008c8845  e8feb5f2ff           call 0x7f3e48
// 008c884a  8bce                 mov ecx, esi
// 008c884c  e82fe2ffff           call 0x8c6a80
// 008c8851  6a01                 push 1
// 008c8853  53                   push ebx
// 008c8854  8bce                 mov ecx, esi
// 008c8856  e8a5f5ffff           call 0x8c7e00
// 008c885b  6a01                 push 1
// 008c885d  57                   push edi
// 008c885e  8bce                 mov ecx, esi
// 008c8860  e89bf5ffff           call 0x8c7e00
// 008c8865  8b1b                 mov ebx, dword ptr [ebx]
// 008c8867  391f                 cmp dword ptr [edi], ebx
// 008c8869  7d02                 jge 0x8c886d
// 008c886b  891f                 mov dword ptr [edi], ebx
// 008c886d  5f                   pop edi
// 008c886e  5b                   pop ebx
// 008c886f  8bce                 mov ecx, esi
// 008c8871  e8aafbffff           call 0x8c8420
// 008c8876  6a01                 push 1
// 008c8878  8bce                 mov ecx, esi
// 008c887a  e881efffff           call 0x8c7800
// 008c887f  b801000000           mov eax, 1
// 008c8884  5e                   pop esi
// 008c8885  c3                   ret 
// copied from an identical function in another client (function ?MaskClear@?$CXTMaskEditT@VCEdit@@@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp