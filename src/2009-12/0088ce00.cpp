// roc 2009-12 0088ce00  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 226 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088ce00
//
// 0088ce00  6aff                 push -1
// 0088ce02  68a9df9500           push 0x95dfa9
// 0088ce07  64a100000000         mov eax, dword ptr fs:[0]
// 0088ce0d  50                   push eax
// 0088ce0e  56                   push esi
// 0088ce0f  57                   push edi
// 0088ce10  a10052b600           mov eax, dword ptr [0xb65200]
// 0088ce15  33c4                 xor eax, esp
// 0088ce17  50                   push eax
// 0088ce18  8d44240c             lea eax, [esp + 0xc]
// 0088ce1c  64a300000000         mov dword ptr fs:[0], eax
// 0088ce22  8bf1                 mov esi, ecx
// 0088ce24  8b442420             mov eax, dword ptr [esp + 0x20]
// 0088ce28  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0088ce2c  50                   push eax
// 0088ce2d  57                   push edi
// 0088ce2e  e8edbdf6ff           call 0x7f8c20
// 0088ce33  57                   push edi
// 0088ce34  e8d7e1ffff           call 0x88b010
// 0088ce39  50                   push eax
// 0088ce3a  e8ff6df6ff           call 0x7f3c3e
// 0088ce3f  8bf8                 mov edi, eax
// 0088ce41  83c408               add esp, 8
// 0088ce44  85ff                 test edi, edi
// 0088ce46  0f8482000000         je 0x88cece
// 0088ce4c  8b8fa8010000         mov ecx, dword ptr [edi + 0x1a8]
// 0088ce52  8d542420             lea edx, [esp + 0x20]
// 0088ce56  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0088ce5c  52                   push edx
// 0088ce5d  8bcf                 mov ecx, edi
// 0088ce5f  e88cf5ffff           call 0x88c3f0
// 0088ce64  50                   push eax
// 0088ce65  8bce                 mov ecx, esi
// 0088ce67  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0088ce6f  e82cf6ffff           call 0x88c4a0
// 0088ce74  8d4c2420             lea ecx, [esp + 0x20]
// 0088ce78  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0088ce80  ff15c0de9800         call dword ptr [0x98dec0]
// 0088ce86  8b8778010000         mov eax, dword ptr [edi + 0x178]
// 0088ce8c  898678010000         mov dword ptr [esi + 0x178], eax
// 0088ce92  8b8f7c010000         mov ecx, dword ptr [edi + 0x17c]
// 0088ce98  51                   push ecx
// 0088ce99  8bce                 mov ecx, esi
// 0088ce9b  e850e9ffff           call 0x88b7f0
// 0088cea0  8d8f8c010000         lea ecx, [edi + 0x18c]
// 0088cea6  ff1580de9800         call dword ptr [0x98de80]
// 0088ceac  50                   push eax
// 0088cead  8bce                 mov ecx, esi
// 0088ceaf  e8eceeffff           call 0x88bda0
// 0088ceb4  8b97a4010000         mov edx, dword ptr [edi + 0x1a4]
// 0088ceba  52                   push edx
// 0088cebb  8bce                 mov ecx, esi
// 0088cebd  e89ee7ffff           call 0x88b660
// 0088cec2  8b87ac010000         mov eax, dword ptr [edi + 0x1ac]
// 0088cec8  8986ac010000         mov dword ptr [esi + 0x1ac], eax
// 0088cece  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088ced2  64890d00000000       mov dword ptr fs:[0], ecx
// 0088ced9  59                   pop ecx
// 0088ceda  5f                   pop edi
// 0088cedb  5e                   pop esi
// 0088cedc  83c40c               add esp, 0xc
// 0088cedf  c20800               ret 8
// copied from an identical function in another client (function ?Copy@CXTPControlEdit@@MAEXPAVCXTPControl@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp