// roc 2007-08 0056b390  unit: ArchiveBinder  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0056b390
//
// 0056b390  64a100000000         mov eax, dword ptr fs:[0]
// 0056b396  6aff                 push -1
// 0056b398  6821467500           push 0x754621
// 0056b39d  50                   push eax
// 0056b39e  64892500000000       mov dword ptr fs:[0], esp
// 0056b3a5  83ec1c               sub esp, 0x1c
// 0056b3a8  55                   push ebp
// 0056b3a9  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0056b3ad  56                   push esi
// 0056b3ae  57                   push edi
// 0056b3af  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0056b3b3  57                   push edi
// 0056b3b4  55                   push ebp
// 0056b3b5  8bf1                 mov esi, ecx
// 0056b3b7  e89483edff           call 0x443750
// 0056b3bc  84c0                 test al, al
// 0056b3be  7561                 jne 0x56b421
// 0056b3c0  8d4c240c             lea ecx, [esp + 0xc]
// 0056b3c4  ff15a4e67700         call dword ptr [0x77e6a4]
// 0056b3ca  8d44240c             lea eax, [esp + 0xc]
// 0056b3ce  50                   push eax
// 0056b3cf  8bcd                 mov ecx, ebp
// 0056b3d1  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0056b3d9  e8321fffff           call 0x55d310
// 0056b3de  83ec08               sub esp, 8
// 0056b3e1  8bcc                 mov ecx, esp
// 0056b3e3  89642444             mov dword ptr [esp + 0x44], esp
// 0056b3e7  57                   push edi
// 0056b3e8  51                   push ecx
// 0056b3e9  e88222f3ff           call 0x49d670
// 0056b3ee  83c408               add esp, 8
// 0056b3f1  8d542414             lea edx, [esp + 0x14]
// 0056b3f5  52                   push edx
// 0056b3f6  8d4e14               lea ecx, [esi + 0x14]
// 0056b3f9  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0056b3fe  e8bdfeffff           call 0x56b2c0
// 0056b403  8bc8                 mov ecx, eax
// 0056b405  c644243800           mov byte ptr [esp + 0x38], 0
// 0056b40a  e881220200           call 0x58d690
// 0056b40f  8d4c240c             lea ecx, [esp + 0xc]
// 0056b413  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0056b41b  ff15ace67700         call dword ptr [0x77e6ac]
// 0056b421  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056b425  5f                   pop edi
// 0056b426  5e                   pop esi
// 0056b427  b001                 mov al, 1
// 0056b429  64890d00000000       mov dword ptr fs:[0], ecx
// 0056b430  5d                   pop ebp
// 0056b431  83c428               add esp, 0x28
// 0056b434  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?processID@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
