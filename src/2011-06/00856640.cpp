// roc 2011-06 00856640  unit: CXTPPopupBar  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00856640
//
// 00856640  56                   push esi
// 00856641  8bf1                 mov esi, ecx
// 00856643  83beb001000000       cmp dword ptr [esi + 0x1b0], 0
// 0085664a  57                   push edi
// 0085664b  0f8485000000         je 0x8566d6
// 00856651  8b442414             mov eax, dword ptr [esp + 0x14]
// 00856655  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00856659  50                   push eax
// 0085665a  51                   push ecx
// 0085665b  8d96b4010000         lea edx, [esi + 0x1b4]
// 00856661  52                   push edx
// 00856662  ff15101ca400         call dword ptr [0xa41c10]
// 00856668  85c0                 test eax, eax
// 0085666a  746a                 je 0x8566d6
// 0085666c  8bce                 mov ecx, esi
// 0085666e  e84d44fcff           call 0x81aac0
// 00856673  85c0                 test eax, eax
// 00856675  755f                 jne 0x8566d6
// 00856677  e8a03cfbff           call 0x80a31c
// 0085667c  68867f0000           push 0x7f86
// 00856681  6a00                 push 0
// 00856683  ff15081aa400         call dword ptr [0xa41a08]
// 00856689  50                   push eax
// 0085668a  ff15f41ba400         call dword ptr [0xa41bf4]
// 00856690  68b0cb8000           push 0x80cbb0
// 00856695  b9e88ed100           mov ecx, 0xd18ee8
// 0085669a  e8255f1700           call 0x9cc5c4
// 0085669f  8bf8                 mov edi, eax
// 008566a1  85ff                 test edi, edi
// 008566a3  7505                 jne 0x8566aa
// 008566a5  e8603cfbff           call 0x80a30a
// 008566aa  b801000000           mov eax, 1
// 008566af  014704               add dword ptr [edi + 4], eax
// 008566b2  8bce                 mov ecx, esi
// 008566b4  8986e0010000         mov dword ptr [esi + 0x1e0], eax
// 008566ba  e821edffff           call 0x8553e0
// 008566bf  c786e001000000000000 mov dword ptr [esi + 0x1e0], 0
// 008566c9  ff4f04               dec dword ptr [edi + 4]
// 008566cc  e8bf9d0200           call 0x880490
// 008566d1  5f                   pop edi
// 008566d2  5e                   pop esi
// 008566d3  c20c00               ret 0xc
// 008566d6  83bed401000000       cmp dword ptr [esi + 0x1d4], 0
// 008566dd  7441                 je 0x856720
// 008566df  8d442410             lea eax, [esp + 0x10]
// 008566e3  50                   push eax
// 008566e4  8bce                 mov ecx, esi
// 008566e6  e805efffff           call 0x8555f0
// 008566eb  85c0                 test eax, eax
// 008566ed  7431                 je 0x856720
// 008566ef  68b0cb8000           push 0x80cbb0
// 008566f4  b9e88ed100           mov ecx, 0xd18ee8
// 008566f9  e8c65e1700           call 0x9cc5c4
// 008566fe  8bf8                 mov edi, eax
// 00856700  85ff                 test edi, edi
// 00856702  7505                 jne 0x856709
// 00856704  e8013cfbff           call 0x80a30a
// 00856709  ff4704               inc dword ptr [edi + 4]
// 0085670c  8bce                 mov ecx, esi
// 0085670e  e83deaffff           call 0x855150
// 00856713  ff4f04               dec dword ptr [edi + 4]
// 00856716  e8759d0200           call 0x880490
// 0085671b  5f                   pop edi
// 0085671c  5e                   pop esi
// 0085671d  c20c00               ret 0xc
// 00856720  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00856724  8b542410             mov edx, dword ptr [esp + 0x10]
// 00856728  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0085672c  51                   push ecx
// 0085672d  52                   push edx
// 0085672e  50                   push eax
// 0085672f  8bce                 mov ecx, esi
// 00856731  e86a74fcff           call 0x81dba0
// 00856736  5f                   pop edi
// 00856737  5e                   pop esi
// 00856738  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?OnLButtonDown@CXTPPopupBar@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
