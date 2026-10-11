// roc 2011-06 00614660  unit: ArchiveBinder  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614660
//
// 00614660  64a100000000         mov eax, dword ptr fs:[0]
// 00614666  6aff                 push -1
// 00614668  6841899e00           push 0x9e8941
// 0061466d  50                   push eax
// 0061466e  64892500000000       mov dword ptr fs:[0], esp
// 00614675  83ec1c               sub esp, 0x1c
// 00614678  55                   push ebp
// 00614679  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0061467d  56                   push esi
// 0061467e  57                   push edi
// 0061467f  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00614683  57                   push edi
// 00614684  55                   push ebp
// 00614685  8bf1                 mov esi, ecx
// 00614687  e864cae3ff           call 0x4510f0
// 0061468c  84c0                 test al, al
// 0061468e  7561                 jne 0x6146f1
// 00614690  8d4c240c             lea ecx, [esp + 0xc]
// 00614694  ff15bc04a400         call dword ptr [0xa404bc]
// 0061469a  8d44240c             lea eax, [esp + 0xc]
// 0061469e  50                   push eax
// 0061469f  8bcd                 mov ecx, ebp
// 006146a1  c744243400000000     mov dword ptr [esp + 0x34], 0
// 006146a9  e842e3feff           call 0x6029f0
// 006146ae  83ec08               sub esp, 8
// 006146b1  8bcc                 mov ecx, esp
// 006146b3  89642444             mov dword ptr [esp + 0x44], esp
// 006146b7  57                   push edi
// 006146b8  51                   push ecx
// 006146b9  e862ce1000           call 0x721520
// 006146be  83c408               add esp, 8
// 006146c1  8d542414             lea edx, [esp + 0x14]
// 006146c5  52                   push edx
// 006146c6  8d4e14               lea ecx, [esi + 0x14]
// 006146c9  c644243c01           mov byte ptr [esp + 0x3c], 1
// 006146ce  e8cdfeffff           call 0x6145a0
// 006146d3  8bc8                 mov ecx, eax
// 006146d5  c644243800           mov byte ptr [esp + 0x38], 0
// 006146da  e831730400           call 0x65ba10
// 006146df  8d4c240c             lea ecx, [esp + 0xc]
// 006146e3  c7442430ffffffff     mov dword ptr [esp + 0x30], 0xffffffff
// 006146eb  ff15d004a400         call dword ptr [0xa404d0]
// 006146f1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006146f5  5f                   pop edi
// 006146f6  5e                   pop esi
// 006146f7  b001                 mov al, 1
// 006146f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00614700  5d                   pop ebp
// 00614701  83c428               add esp, 0x28
// 00614704  c20800               ret 8
// library openrbx-client/App\v8xml\SerializerV2.cpp (function ?processID@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8xml/SerializerV2.cpp
