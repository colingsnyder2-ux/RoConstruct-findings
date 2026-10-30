// roc 2009-12 0086c4b0  unit: CXTCaptionButton  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c4b0
//
// 0086c4b0  53                   push ebx
// 0086c4b1  56                   push esi
// 0086c4b2  8bf1                 mov esi, ecx
// 0086c4b4  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086c4b7  8b9e80000000         mov ebx, dword ptr [esi + 0x80]
// 0086c4bd  57                   push edi
// 0086c4be  85c0                 test eax, eax
// 0086c4c0  740f                 je 0x86c4d1
// 0086c4c2  50                   push eax
// 0086c4c3  ff15bccb9800         call dword ptr [0x98cbbc]
// 0086c4c9  50                   push eax
// 0086c4ca  e85b76f8ff           call 0x7f3b2a
// 0086c4cf  eb02                 jmp 0x86c4d3
// 0086c4d1  33c0                 xor eax, eax
// 0086c4d3  50                   push eax
// 0086c4d4  e877fdffff           call 0x86c250
// 0086c4d9  50                   push eax
// 0086c4da  e85f77f8ff           call 0x7f3c3e
// 0086c4df  8bf8                 mov edi, eax
// 0086c4e1  83c408               add esp, 8
// 0086c4e4  85ff                 test edi, edi
// 0086c4e6  747a                 je 0x86c562
// 0086c4e8  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 0086c4eb  8b06                 mov eax, dword ptr [esi]
// 0086c4ed  8b9074010000         mov edx, dword ptr [eax + 0x174]
// 0086c4f3  51                   push ecx
// 0086c4f4  8bce                 mov ecx, esi
// 0086c4f6  ffd2                 call edx
// 0086c4f8  8b4f78               mov ecx, dword ptr [edi + 0x78]
// 0086c4fb  8b06                 mov eax, dword ptr [esi]
// 0086c4fd  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0086c503  51                   push ecx
// 0086c504  8bce                 mov ecx, esi
// 0086c506  ffd2                 call edx
// 0086c508  e8c334fcff           call 0x82f9d0
// 0086c50d  6a15                 push 0x15
// 0086c50f  8bc8                 mov ecx, eax
// 0086c511  e8ea2bfcff           call 0x82f100
// 0086c516  8b16                 mov edx, dword ptr [esi]
// 0086c518  50                   push eax
// 0086c519  8b8280010000         mov eax, dword ptr [edx + 0x180]
// 0086c51f  8bce                 mov ecx, esi
// 0086c521  ffd0                 call eax
// 0086c523  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0086c526  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 0086c52c  6a00                 push 0
// 0086c52e  6a00                 push 0
// 0086c530  6a31                 push 0x31
// 0086c532  51                   push ecx
// 0086c533  ffd7                 call edi
// 0086c535  50                   push eax
// 0086c536  e8297ef8ff           call 0x7f4364
// 0086c53b  85c0                 test eax, eax
// 0086c53d  7403                 je 0x86c542
// 0086c53f  8b4004               mov eax, dword ptr [eax + 4]
// 0086c542  8b5620               mov edx, dword ptr [esi + 0x20]
// 0086c545  6a01                 push 1
// 0086c547  50                   push eax
// 0086c548  6a30                 push 0x30
// 0086c54a  52                   push edx
// 0086c54b  ffd7                 call edi
// 0086c54d  837c241400           cmp dword ptr [esp + 0x14], 0
// 0086c552  740e                 je 0x86c562
// 0086c554  8b4620               mov eax, dword ptr [esi + 0x20]
// 0086c557  6a01                 push 1
// 0086c559  6a00                 push 0
// 0086c55b  50                   push eax
// 0086c55c  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086c562  5f                   pop edi
// 0086c563  5e                   pop esi
// 0086c564  8bc3                 mov eax, ebx
// 0086c566  5b                   pop ebx
// 0086c567  c20800               ret 8
// copied from an identical function in another client (function ?SetXButtonStyle@CXTCaptionButton@@UAEKKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTCaption.cpp