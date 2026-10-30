// roc 2009-12 008c8dc0  unit: CXTPPropertyGridInplaceEdit  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c8dc0
//
// 008c8dc0  56                   push esi
// 008c8dc1  8bf1                 mov esi, ecx
// 008c8dc3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008c8dc7  741f                 je 0x8c8de8
// 008c8dc9  837e2000             cmp dword ptr [esi + 0x20], 0
// 008c8dcd  7419                 je 0x8c8de8
// 008c8dcf  e89ed60500           call 0x926472
// 008c8dd4  a900080000           test eax, 0x800
// 008c8dd9  750d                 jne 0x8c8de8
// 008c8ddb  8d4e70               lea ecx, [esi + 0x70]
// 008c8dde  ff15bcdd9800         call dword ptr [0x98ddbc]
// 008c8de4  84c0                 test al, al
// 008c8de6  7417                 je 0x8c8dff
// 008c8de8  8b06                 mov eax, dword ptr [esi]
// 008c8dea  8b9020010000         mov edx, dword ptr [eax + 0x120]
// 008c8df0  6a00                 push 0
// 008c8df2  6a00                 push 0
// 008c8df4  6802030000           push 0x302
// 008c8df9  8bce                 mov ecx, esi
// 008c8dfb  ffd2                 call edx
// 008c8dfd  5e                   pop esi
// 008c8dfe  c3                   ret 
// 008c8dff  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c8e02  57                   push edi
// 008c8e03  85c0                 test eax, eax
// 008c8e05  7447                 je 0x8c8e4e
// 008c8e07  53                   push ebx
// 008c8e08  8d7e58               lea edi, [esi + 0x58]
// 008c8e0b  57                   push edi
// 008c8e0c  8d5e54               lea ebx, [esi + 0x54]
// 008c8e0f  53                   push ebx
// 008c8e10  68b0000000           push 0xb0
// 008c8e15  50                   push eax
// 008c8e16  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008c8e1c  8d8680000000         lea eax, [esi + 0x80]
// 008c8e22  50                   push eax
// 008c8e23  8bce                 mov ecx, esi
// 008c8e25  e81eb0f2ff           call 0x7f3e48
// 008c8e2a  8bce                 mov ecx, esi
// 008c8e2c  e84fdcffff           call 0x8c6a80
// 008c8e31  6a01                 push 1
// 008c8e33  53                   push ebx
// 008c8e34  8bce                 mov ecx, esi
// 008c8e36  e8c5efffff           call 0x8c7e00
// 008c8e3b  6a01                 push 1
// 008c8e3d  57                   push edi
// 008c8e3e  8bce                 mov ecx, esi
// 008c8e40  e8bbefffff           call 0x8c7e00
// 008c8e45  8b1b                 mov ebx, dword ptr [ebx]
// 008c8e47  391f                 cmp dword ptr [edi], ebx
// 008c8e49  7d02                 jge 0x8c8e4d
// 008c8e4b  891f                 mov dword ptr [edi], ebx
// 008c8e4d  5b                   pop ebx
// 008c8e4e  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c8e51  51                   push ecx
// 008c8e52  ff1504cc9800         call dword ptr [0x98cc04]
// 008c8e58  85c0                 test eax, eax
// 008c8e5a  7503                 jne 0x8c8e5f
// 008c8e5c  5f                   pop edi
// 008c8e5d  5e                   pop esi
// 008c8e5e  c3                   ret 
// 008c8e5f  6a01                 push 1
// 008c8e61  ff1510cc9800         call dword ptr [0x98cc10]
// 008c8e67  8bf8                 mov edi, eax
// 008c8e69  85ff                 test edi, edi
// 008c8e6b  741f                 je 0x8c8e8c
// 008c8e6d  57                   push edi
// 008c8e6e  ff15ccb19800         call dword ptr [0x98b1cc]
// 008c8e74  50                   push eax
// 008c8e75  8bce                 mov ecx, esi
// 008c8e77  e8c4fbffff           call 0x8c8a40
// 008c8e7c  57                   push edi
// 008c8e7d  ff15d0b19800         call dword ptr [0x98b1d0]
// 008c8e83  6a01                 push 1
// 008c8e85  8bce                 mov ecx, esi
// 008c8e87  e874e9ffff           call 0x8c7800
// 008c8e8c  ff150ccc9800         call dword ptr [0x98cc0c]
// 008c8e92  5f                   pop edi
// 008c8e93  b801000000           mov eax, 1
// 008c8e98  5e                   pop esi
// 008c8e99  c3                   ret 
// copied from an identical function in another client (function ?MaskPaste@?$CXTMaskEditT@VCEdit@@@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp