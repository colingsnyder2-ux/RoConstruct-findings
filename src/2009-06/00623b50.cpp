// roc 2009-06 00623b50  unit: ArchiveBinder  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00623b50
//
// 00623b50  64a100000000         mov eax, dword ptr fs:[0]
// 00623b56  6aff                 push -1
// 00623b58  68018b8600           push 0x868b01
// 00623b5d  50                   push eax
// 00623b5e  64892500000000       mov dword ptr fs:[0], esp
// 00623b65  83ec1c               sub esp, 0x1c
// 00623b68  55                   push ebp
// 00623b69  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 00623b6d  56                   push esi
// 00623b6e  57                   push edi
// 00623b6f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00623b73  57                   push edi
// 00623b74  55                   push ebp
// 00623b75  8bf1                 mov esi, ecx
// 00623b77  e894b5e1ff           call 0x43f110
// 00623b7c  84c0                 test al, al
// 00623b7e  7561                 jne 0x623be1
// 00623b80  8d4c240c             lea ecx, [esp + 0xc]
// 00623b84  ff15c0e48900         call dword ptr [0x89e4c0]
// 00623b8a  8d44240c             lea eax, [esp + 0xc]
// 00623b8e  50                   push eax
// 00623b8f  8bcd                 mov ecx, ebp
// 00623b91  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00623b99  e8725efeff           call 0x609a10
// 00623b9e  83ec08               sub esp, 8
// 00623ba1  8bcc                 mov ecx, esp
// 00623ba3  89642444             mov dword ptr [esp + 0x44], esp
// 00623ba7  57                   push edi
// 00623ba8  51                   push ecx
// 00623ba9  e8024efeff           call 0x6089b0
// 00623bae  83c408               add esp, 8
// 00623bb1  8d542414             lea edx, [esp + 0x14]
// 00623bb5  52                   push edx
// 00623bb6  8d4e1c               lea ecx, [esi + 0x1c]
// 00623bb9  c644243c01           mov byte ptr [esp + 0x3c], 1
// 00623bbe  e89dfeffff           call 0x623a60
// 00623bc3  8bc8                 mov ecx, eax
// 00623bc5  c644243800           mov byte ptr [esp + 0x38], 0
// 00623bca  e831890200           call 0x64c500
// 00623bcf  8d4c240c             lea ecx, [esp + 0xc]
// 00623bd3  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 00623bdb  ff15c4e48900         call dword ptr [0x89e4c4]
// 00623be1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00623be5  5f                   pop edi
// 00623be6  5e                   pop esi
// 00623be7  b001                 mov al, 1
// 00623be9  64890d00000000       mov dword ptr fs:[0], ecx
// 00623bf0  5d                   pop ebp
// 00623bf1  83c428               add esp, 0x28
// 00623bf4  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?processID@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
