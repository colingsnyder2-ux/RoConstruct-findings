// roc 2009-12 008e8400  unit: CXTPTabPaintManager::CColorSetOffice2007  size: 1198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8400
//
// 008e8400  6aff                 push -1
// 008e8402  6886639600           push 0x966386
// 008e8407  64a100000000         mov eax, dword ptr fs:[0]
// 008e840d  50                   push eax
// 008e840e  83ec08               sub esp, 8
// 008e8411  55                   push ebp
// 008e8412  56                   push esi
// 008e8413  57                   push edi
// 008e8414  a10052b600           mov eax, dword ptr [0xb65200]
// 008e8419  33c4                 xor eax, esp
// 008e841b  50                   push eax
// 008e841c  8d442418             lea eax, [esp + 0x18]
// 008e8420  64a300000000         mov dword ptr fs:[0], eax
// 008e8426  8bf1                 mov esi, ecx
// 008e8428  e8d3f8ffff           call 0x8e7d00
// 008e842d  e8ce93ffff           call 0x8e1800
// 008e8432  8bc8                 mov ecx, eax
// 008e8434  e8a77affff           call 0x8dfee0
// 008e8439  85c0                 test eax, eax
// 008e843b  0f8467030000         je 0x8e87a8
// 008e8441  51                   push ecx
// 008e8442  8bcc                 mov ecx, esp
// 008e8444  89642414             mov dword ptr [esp + 0x14], esp
// 008e8448  33ff                 xor edi, edi
// 008e844a  6804cca000           push 0xa0cc04
// 008e844f  89becc000000         mov dword ptr [esi + 0xcc], edi
// 008e8455  ff15b8de9800         call dword ptr [0x98deb8]
// 008e845b  51                   push ecx
// 008e845c  8bcc                 mov ecx, esp
// 008e845e  8964241c             mov dword ptr [esp + 0x1c], esp
// 008e8462  68f8cba000           push 0xa0cbf8
// 008e8467  897c242c             mov dword ptr [esp + 0x2c], edi
// 008e846b  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8471  c644242801           mov byte ptr [esp + 0x28], 1
// 008e8476  e88593ffff           call 0x8e1800
// 008e847b  83cfff               or edi, 0xffffffff
// 008e847e  8bc8                 mov ecx, eax
// 008e8480  897c2428             mov dword ptr [esp + 0x28], edi
// 008e8484  e8778cffff           call 0x8e1100
// 008e8489  894648               mov dword ptr [esi + 0x48], eax
// 008e848c  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e848f  3bc7                 cmp eax, edi
// 008e8491  7503                 jne 0x8e8496
// 008e8493  8b4648               mov eax, dword ptr [esi + 0x48]
// 008e8496  51                   push ecx
// 008e8497  8bcc                 mov ecx, esp
// 008e8499  89642418             mov dword ptr [esp + 0x18], esp
// 008e849d  68eccba000           push 0xa0cbec
// 008e84a2  898654010000         mov dword ptr [esi + 0x154], eax
// 008e84a8  ff15b8de9800         call dword ptr [0x98deb8]
// 008e84ae  51                   push ecx
// 008e84af  8bcc                 mov ecx, esp
// 008e84b1  89642418             mov dword ptr [esp + 0x18], esp
// 008e84b5  68f8cba000           push 0xa0cbf8
// 008e84ba  c744242c02000000     mov dword ptr [esp + 0x2c], 2
// 008e84c2  ff15b8de9800         call dword ptr [0x98deb8]
// 008e84c8  c644242803           mov byte ptr [esp + 0x28], 3
// 008e84cd  e82e93ffff           call 0x8e1800
// 008e84d2  8bc8                 mov ecx, eax
// 008e84d4  897c2428             mov dword ptr [esp + 0x28], edi
// 008e84d8  e8238cffff           call 0x8e1100
// 008e84dd  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008e84e3  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 008e84e9  3bc7                 cmp eax, edi
// 008e84eb  7506                 jne 0x8e84f3
// 008e84ed  8b863c010000         mov eax, dword ptr [esi + 0x13c]
// 008e84f3  51                   push ecx
// 008e84f4  8bcc                 mov ecx, esp
// 008e84f6  89642418             mov dword ptr [esp + 0x18], esp
// 008e84fa  68e0cba000           push 0xa0cbe0
// 008e84ff  898648010000         mov dword ptr [esi + 0x148], eax
// 008e8505  ff15b8de9800         call dword ptr [0x98deb8]
// 008e850b  51                   push ecx
// 008e850c  8bcc                 mov ecx, esp
// 008e850e  89642418             mov dword ptr [esp + 0x18], esp
// 008e8512  68f8cba000           push 0xa0cbf8
// 008e8517  c744242c04000000     mov dword ptr [esp + 0x2c], 4
// 008e851f  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8525  c644242805           mov byte ptr [esp + 0x28], 5
// 008e852a  e8d192ffff           call 0x8e1800
// 008e852f  8bc8                 mov ecx, eax
// 008e8531  897c2428             mov dword ptr [esp + 0x28], edi
// 008e8535  e8c68bffff           call 0x8e1100
// 008e853a  898630010000         mov dword ptr [esi + 0x130], eax
// 008e8540  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 008e8546  3bc7                 cmp eax, edi
// 008e8548  7506                 jne 0x8e8550
// 008e854a  8b8630010000         mov eax, dword ptr [esi + 0x130]
// 008e8550  51                   push ecx
// 008e8551  8bcc                 mov ecx, esp
// 008e8553  89642418             mov dword ptr [esp + 0x18], esp
// 008e8557  68080fa000           push 0xa00f08
// 008e855c  898660010000         mov dword ptr [esi + 0x160], eax
// 008e8562  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008e856c  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8572  51                   push ecx
// 008e8573  8bcc                 mov ecx, esp
// 008e8575  89642418             mov dword ptr [esp + 0x18], esp
// 008e8579  68000fa000           push 0xa00f00
// 008e857e  c744242c06000000     mov dword ptr [esp + 0x2c], 6
// 008e8586  ff15b8de9800         call dword ptr [0x98deb8]
// 008e858c  c644242807           mov byte ptr [esp + 0x28], 7
// 008e8591  e86a92ffff           call 0x8e1800
// 008e8596  8bc8                 mov ecx, eax
// 008e8598  897c2428             mov dword ptr [esp + 0x28], edi
// 008e859c  e85f8bffff           call 0x8e1100
// 008e85a1  8d6e04               lea ebp, [esi + 4]
// 008e85a4  50                   push eax
// 008e85a5  8bcd                 mov ecx, ebp
// 008e85a7  e87473f4ff           call 0x82f920
// 008e85ac  55                   push ebp
// 008e85ad  8d4e24               lea ecx, [esi + 0x24]
// 008e85b0  e8cb68f4ff           call 0x82ee80
// 008e85b5  51                   push ecx
// 008e85b6  8bcc                 mov ecx, esp
// 008e85b8  89642418             mov dword ptr [esp + 0x18], esp
// 008e85bc  689023a000           push 0xa02390
// 008e85c1  ff15b8de9800         call dword ptr [0x98deb8]
// 008e85c7  51                   push ecx
// 008e85c8  8bcc                 mov ecx, esp
// 008e85ca  89642418             mov dword ptr [esp + 0x18], esp
// 008e85ce  68b8589b00           push 0x9b58b8
// 008e85d3  c744242c08000000     mov dword ptr [esp + 0x2c], 8
// 008e85db  ff15b8de9800         call dword ptr [0x98deb8]
// 008e85e1  c644242809           mov byte ptr [esp + 0x28], 9
// 008e85e6  e81592ffff           call 0x8e1800
// 008e85eb  8bc8                 mov ecx, eax
// 008e85ed  897c2428             mov dword ptr [esp + 0x28], edi
// 008e85f1  e80a8bffff           call 0x8e1100
// 008e85f6  51                   push ecx
// 008e85f7  8bcc                 mov ecx, esp
// 008e85f9  89642418             mov dword ptr [esp + 0x18], esp
// 008e85fd  68ac22a000           push 0xa022ac
// 008e8602  89869c000000         mov dword ptr [esi + 0x9c], eax
// 008e8608  ff15b8de9800         call dword ptr [0x98deb8]
// 008e860e  51                   push ecx
// 008e860f  8bcc                 mov ecx, esp
// 008e8611  89642418             mov dword ptr [esp + 0x18], esp
// 008e8615  68b8589b00           push 0x9b58b8
// 008e861a  c744242c0a000000     mov dword ptr [esp + 0x2c], 0xa
// 008e8622  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8628  c64424280b           mov byte ptr [esp + 0x28], 0xb
// 008e862d  e8ce91ffff           call 0x8e1800
// 008e8632  8bc8                 mov ecx, eax
// 008e8634  897c2428             mov dword ptr [esp + 0x28], edi
// 008e8638  e8c38affff           call 0x8e1100
// 008e863d  51                   push ecx
// 008e863e  8bcc                 mov ecx, esp
// 008e8640  89642418             mov dword ptr [esp + 0x18], esp
// 008e8644  680423a000           push 0xa02304
// 008e8649  894678               mov dword ptr [esi + 0x78], eax
// 008e864c  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8652  51                   push ecx
// 008e8653  8bcc                 mov ecx, esp
// 008e8655  89642418             mov dword ptr [esp + 0x18], esp
// 008e8659  68b8589b00           push 0x9b58b8
// 008e865e  c744242c0c000000     mov dword ptr [esp + 0x2c], 0xc
// 008e8666  ff15b8de9800         call dword ptr [0x98deb8]
// 008e866c  c64424280d           mov byte ptr [esp + 0x28], 0xd
// 008e8671  e88a91ffff           call 0x8e1800
// 008e8676  897c2428             mov dword ptr [esp + 0x28], edi
// 008e867a  8bc8                 mov ecx, eax
// 008e867c  e87f8affff           call 0x8e1100
// 008e8681  51                   push ecx
// 008e8682  8bcc                 mov ecx, esp
// 008e8684  89642418             mov dword ptr [esp + 0x18], esp
// 008e8688  68ec23a000           push 0xa023ec
// 008e868d  898684000000         mov dword ptr [esi + 0x84], eax
// 008e8693  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8699  51                   push ecx
// 008e869a  8bcc                 mov ecx, esp
// 008e869c  89642418             mov dword ptr [esp + 0x18], esp
// 008e86a0  68b8589b00           push 0x9b58b8
// 008e86a5  c744242c0e000000     mov dword ptr [esp + 0x2c], 0xe
// 008e86ad  ff15b8de9800         call dword ptr [0x98deb8]
// 008e86b3  c64424280f           mov byte ptr [esp + 0x28], 0xf
// 008e86b8  e84391ffff           call 0x8e1800
// 008e86bd  8bc8                 mov ecx, eax
// 008e86bf  897c2428             mov dword ptr [esp + 0x28], edi
// 008e86c3  e8388affff           call 0x8e1100
// 008e86c8  51                   push ecx
// 008e86c9  8bcc                 mov ecx, esp
// 008e86cb  89642418             mov dword ptr [esp + 0x18], esp
// 008e86cf  68f00ea000           push 0xa00ef0
// 008e86d4  89860c020000         mov dword ptr [esi + 0x20c], eax
// 008e86da  ff15b8de9800         call dword ptr [0x98deb8]
// 008e86e0  51                   push ecx
// 008e86e1  8bcc                 mov ecx, esp
// 008e86e3  89642418             mov dword ptr [esp + 0x18], esp
// 008e86e7  68000fa000           push 0xa00f00
// 008e86ec  c744242c10000000     mov dword ptr [esp + 0x2c], 0x10
// 008e86f4  ff15b8de9800         call dword ptr [0x98deb8]
// 008e86fa  c644242811           mov byte ptr [esp + 0x28], 0x11
// 008e86ff  e8fc90ffff           call 0x8e1800
// 008e8704  8bc8                 mov ecx, eax
// 008e8706  897c2428             mov dword ptr [esp + 0x28], edi
// 008e870a  e8f189ffff           call 0x8e1100
// 008e870f  51                   push ecx
// 008e8710  8bcc                 mov ecx, esp
// 008e8712  89642418             mov dword ptr [esp + 0x18], esp
// 008e8716  68f00ea000           push 0xa00ef0
// 008e871b  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008e8721  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8727  51                   push ecx
// 008e8728  8bcc                 mov ecx, esp
// 008e872a  89642418             mov dword ptr [esp + 0x18], esp
// 008e872e  68000fa000           push 0xa00f00
// 008e8733  c744242c12000000     mov dword ptr [esp + 0x2c], 0x12
// 008e873b  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8741  c644242813           mov byte ptr [esp + 0x28], 0x13
// 008e8746  e8b590ffff           call 0x8e1800
// 008e874b  8bc8                 mov ecx, eax
// 008e874d  897c2428             mov dword ptr [esp + 0x28], edi
// 008e8751  e8aa89ffff           call 0x8e1100
// 008e8756  51                   push ecx
// 008e8757  8bcc                 mov ecx, esp
// 008e8759  89642418             mov dword ptr [esp + 0x18], esp
// 008e875d  68e00ea000           push 0xa00ee0
// 008e8762  8986a8000000         mov dword ptr [esi + 0xa8], eax
// 008e8768  ff15b8de9800         call dword ptr [0x98deb8]
// 008e876e  51                   push ecx
// 008e876f  8bcc                 mov ecx, esp
// 008e8771  89642418             mov dword ptr [esp + 0x18], esp
// 008e8775  68000fa000           push 0xa00f00
// 008e877a  c744242c14000000     mov dword ptr [esp + 0x2c], 0x14
// 008e8782  ff15b8de9800         call dword ptr [0x98deb8]
// 008e8788  c644242815           mov byte ptr [esp + 0x28], 0x15
// 008e878d  e86e90ffff           call 0x8e1800
// 008e8792  8bc8                 mov ecx, eax
// 008e8794  897c2428             mov dword ptr [esp + 0x28], edi
// 008e8798  e86389ffff           call 0x8e1100
// 008e879d  8986c0000000         mov dword ptr [esi + 0xc0], eax
// 008e87a3  e9e9000000           jmp 0x8e8891
// 008e87a8  e82372f4ff           call 0x82f9d0
// 008e87ad  6a21                 push 0x21
// 008e87af  8bc8                 mov ecx, eax
// 008e87b1  e84a69f4ff           call 0x82f100
// 008e87b6  898690000000         mov dword ptr [esi + 0x90], eax
// 008e87bc  e80f72f4ff           call 0x82f9d0
// 008e87c1  6a12                 push 0x12
// 008e87c3  8bc8                 mov ecx, eax
// 008e87c5  e83669f4ff           call 0x82f100
// 008e87ca  8986cc000000         mov dword ptr [esi + 0xcc], eax
// 008e87d0  c746483b619c00       mov dword ptr [esi + 0x48], 0x9c613b
// 008e87d7  8b464c               mov eax, dword ptr [esi + 0x4c]
// 008e87da  83f8ff               cmp eax, -1
// 008e87dd  7503                 jne 0x8e87e2
// 008e87df  8b4648               mov eax, dword ptr [esi + 0x48]
// 008e87e2  898654010000         mov dword ptr [esi + 0x154], eax
// 008e87e8  b800359a00           mov eax, 0x9a3500
// 008e87ed  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008e87f3  898648010000         mov dword ptr [esi + 0x148], eax
// 008e87f9  b875a6f100           mov eax, 0xf1a675
// 008e87fe  68ffc06f00           push 0x6fc0ff
// 008e8803  8d8ee0000000         lea ecx, [esi + 0xe0]
// 008e8809  898630010000         mov dword ptr [esi + 0x130], eax
// 008e880f  898660010000         mov dword ptr [esi + 0x160], eax
// 008e8815  c7866c010000ffffff00 mov dword ptr [esi + 0x16c], 0xffffff
// 008e881f  e8fc70f4ff           call 0x82f920
// 008e8824  6800008000           push 0x800000
// 008e8829  8d8e00010000         lea ecx, [esi + 0x100]
// 008e882f  e8ec70f4ff           call 0x82f920
// 008e8834  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e883a  51                   push ecx
// 008e883b  d91c24               fstp dword ptr [esp]
// 008e883e  68fcfdfe00           push 0xfefdfc
// 008e8843  68c4dafa00           push 0xfadac4
// 008e8848  8d4e04               lea ecx, [esi + 4]
// 008e884b  e81066f4ff           call 0x82ee60
// 008e8850  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008e8856  51                   push ecx
// 008e8857  d91c24               fstp dword ptr [esp]
// 008e885a  68c4dafa00           push 0xfadac4
// 008e885f  689ebef500           push 0xf5be9e
// 008e8864  8d4e24               lea ecx, [esi + 0x24]
// 008e8867  c7869c000000a2c0f600 mov dword ptr [esi + 0x9c], 0xf6c0a2
// 008e8871  c74678ffc27300       mov dword ptr [esi + 0x78], 0x73c2ff
// 008e8878  c78684000000fff0c900 mov dword ptr [esi + 0x84], 0xc9f0ff
// 008e8882  e8d965f4ff           call 0x82ee60
// 008e8887  c7860c02000000008000 mov dword ptr [esi + 0x20c], 0x800000
// 008e8891  c7861402000001000000 mov dword ptr [esi + 0x214], 1
// 008e889b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008e889f  64890d00000000       mov dword ptr fs:[0], ecx
// 008e88a6  59                   pop ecx
// 008e88a7  5f                   pop edi
// 008e88a8  5e                   pop esi
// 008e88a9  5d                   pop ebp
// 008e88aa  83c414               add esp, 0x14
// 008e88ad  c3                   ret 
// copied from an identical function in another client (function ?RefreshMetrics@CColorSetOffice2007@CXTPTabPaintManager@@EAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp