// roc 2010-06 005f2ef0  unit: ArchiveBinder  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f2ef0
//
// 005f2ef0  64a100000000         mov eax, dword ptr fs:[0]
// 005f2ef6  6aff                 push -1
// 005f2ef8  68e1879900           push 0x9987e1
// 005f2efd  50                   push eax
// 005f2efe  64892500000000       mov dword ptr fs:[0], esp
// 005f2f05  83ec1c               sub esp, 0x1c
// 005f2f08  55                   push ebp
// 005f2f09  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 005f2f0d  56                   push esi
// 005f2f0e  57                   push edi
// 005f2f0f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 005f2f13  57                   push edi
// 005f2f14  55                   push ebp
// 005f2f15  8bf1                 mov esi, ecx
// 005f2f17  e8241de5ff           call 0x444c40
// 005f2f1c  84c0                 test al, al
// 005f2f1e  7561                 jne 0x5f2f81
// 005f2f20  8d4c240c             lea ecx, [esp + 0xc]
// 005f2f24  ff1504a49e00         call dword ptr [0x9ea404]
// 005f2f2a  8d44240c             lea eax, [esp + 0xc]
// 005f2f2e  50                   push eax
// 005f2f2f  8bcd                 mov ecx, ebp
// 005f2f31  c744243400000000     mov dword ptr [esp + 0x34], 0
// 005f2f39  e832cdfeff           call 0x5dfc70
// 005f2f3e  83ec08               sub esp, 8
// 005f2f41  8bcc                 mov ecx, esp
// 005f2f43  89642444             mov dword ptr [esp + 0x44], esp
// 005f2f47  57                   push edi
// 005f2f48  51                   push ecx
// 005f2f49  e87268eeff           call 0x4d97c0
// 005f2f4e  83c408               add esp, 8
// 005f2f51  8d542414             lea edx, [esp + 0x14]
// 005f2f55  52                   push edx
// 005f2f56  8d4e1c               lea ecx, [esi + 0x1c]
// 005f2f59  c644243c01           mov byte ptr [esp + 0x3c], 1
// 005f2f5e  e8cdc00c00           call 0x6bf030
// 005f2f63  8bc8                 mov ecx, eax
// 005f2f65  c644243800           mov byte ptr [esp + 0x38], 0
// 005f2f6a  e8b1e90300           call 0x631920
// 005f2f6f  8d4c240c             lea ecx, [esp + 0xc]
// 005f2f73  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 005f2f7b  ff1500a49e00         call dword ptr [0x9ea400]
// 005f2f81  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005f2f85  5f                   pop edi
// 005f2f86  5e                   pop esi
// 005f2f87  b001                 mov al, 1
// 005f2f89  64890d00000000       mov dword ptr fs:[0], ecx
// 005f2f90  5d                   pop ebp
// 005f2f91  83c428               add esp, 0x28
// 005f2f94  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?processID@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
