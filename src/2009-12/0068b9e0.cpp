// roc 2009-12 0068b9e0  unit: ArchiveBinder  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0068b9e0
//
// 0068b9e0  64a100000000         mov eax, dword ptr fs:[0]
// 0068b9e6  6aff                 push -1
// 0068b9e8  6881639400           push 0x946381
// 0068b9ed  50                   push eax
// 0068b9ee  64892500000000       mov dword ptr fs:[0], esp
// 0068b9f5  83ec1c               sub esp, 0x1c
// 0068b9f8  55                   push ebp
// 0068b9f9  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0068b9fd  56                   push esi
// 0068b9fe  57                   push edi
// 0068b9ff  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0068ba03  57                   push edi
// 0068ba04  55                   push ebp
// 0068ba05  8bf1                 mov esi, ecx
// 0068ba07  e8447ddbff           call 0x443750
// 0068ba0c  84c0                 test al, al
// 0068ba0e  7561                 jne 0x68ba71
// 0068ba10  8d4c240c             lea ecx, [esp + 0xc]
// 0068ba14  ff15e8b69800         call dword ptr [0x98b6e8]
// 0068ba1a  8d44240c             lea eax, [esp + 0xc]
// 0068ba1e  50                   push eax
// 0068ba1f  8bcd                 mov ecx, ebp
// 0068ba21  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0068ba29  e8c2b3feff           call 0x676df0
// 0068ba2e  83ec08               sub esp, 8
// 0068ba31  8bcc                 mov ecx, esp
// 0068ba33  89642444             mov dword ptr [esp + 0x44], esp
// 0068ba37  57                   push edi
// 0068ba38  51                   push ecx
// 0068ba39  e8f248d8ff           call 0x410330
// 0068ba3e  83c408               add esp, 8
// 0068ba41  8d542414             lea edx, [esp + 0x14]
// 0068ba45  52                   push edx
// 0068ba46  8d4e1c               lea ecx, [esi + 0x1c]
// 0068ba49  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0068ba4e  e8fd370b00           call 0x73f250
// 0068ba53  8bc8                 mov ecx, eax
// 0068ba55  c644243800           mov byte ptr [esp + 0x38], 0
// 0068ba5a  e821a10300           call 0x6c5b80
// 0068ba5f  8d4c240c             lea ecx, [esp + 0xc]
// 0068ba63  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 0068ba6b  ff15e4b69800         call dword ptr [0x98b6e4]
// 0068ba71  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0068ba75  5f                   pop edi
// 0068ba76  5e                   pop esi
// 0068ba77  b001                 mov al, 1
// 0068ba79  64890d00000000       mov dword ptr fs:[0], ecx
// 0068ba80  5d                   pop ebp
// 0068ba81  83c428               add esp, 0x28
// 0068ba84  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?processID@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8xml/SerializerV2.cpp
