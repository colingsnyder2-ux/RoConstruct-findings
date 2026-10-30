// roc 2010-06 00826340  unit: CXTPControlGalleryPaintManager  size: 3093 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00826340
//
// 00826340  81ec84000000         sub esp, 0x84
// 00826346  53                   push ebx
// 00826347  8b9c2490000000       mov ebx, dword ptr [esp + 0x90]
// 0082634e  8b4360               mov eax, dword ptr [ebx + 0x60]
// 00826351  55                   push ebp
// 00826352  56                   push esi
// 00826353  57                   push edi
// 00826354  898c2480000000       mov dword ptr [esp + 0x80], ecx
// 0082635b  85c0                 test eax, eax
// 0082635d  741d                 je 0x82637c
// 0082635f  83c9ff               or ecx, 0xffffffff
// 00826362  83783000             cmp dword ptr [eax + 0x30], 0
// 00826366  750b                 jne 0x826373
// 00826368  833800               cmp dword ptr [eax], 0
// 0082636b  7506                 jne 0x826373
// 0082636d  894c2410             mov dword ptr [esp + 0x10], ecx
// 00826371  eb14                 jmp 0x826387
// 00826373  8b4358               mov eax, dword ptr [ebx + 0x58]
// 00826376  89442410             mov dword ptr [esp + 0x10], eax
// 0082637a  eb0b                 jmp 0x826387
// 0082637c  8b4b58               mov ecx, dword ptr [ebx + 0x58]
// 0082637f  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00826387  8b5320               mov edx, dword ptr [ebx + 0x20]
// 0082638a  2b531c               sub edx, dword ptr [ebx + 0x1c]
// 0082638d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00826391  85d2                 test edx, edx
// 00826393  0f8eaf0b0000         jle 0x826f48
// 00826399  8b4308               mov eax, dword ptr [ebx + 8]
// 0082639c  2b430c               sub eax, dword ptr [ebx + 0xc]
// 0082639f  2b4304               sub eax, dword ptr [ebx + 4]
// 008263a2  40                   inc eax
// 008263a3  85c0                 test eax, eax
// 008263a5  7e14                 jle 0x8263bb
// 008263a7  8b13                 mov edx, dword ptr [ebx]
// 008263a9  8b4204               mov eax, dword ptr [edx + 4]
// 008263ac  8bcb                 mov ecx, ebx
// 008263ae  ffd0                 call eax
// 008263b0  85c0                 test eax, eax
// 008263b2  7407                 je 0x8263bb
// 008263b4  bf01000000           mov edi, 1
// 008263b9  eb02                 jmp 0x8263bd
// 008263bb  33ff                 xor edi, edi
// 008263bd  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 008263c0  8b4338               mov eax, dword ptr [ebx + 0x38]
// 008263c3  8bf1                 mov esi, ecx
// 008263c5  2bf0                 sub esi, eax
// 008263c7  2b4328               sub eax, dword ptr [ebx + 0x28]
// 008263ca  8944244c             mov dword ptr [esp + 0x4c], eax
// 008263ce  85ff                 test edi, edi
// 008263d0  7405                 je 0x8263d7
// 008263d2  3b4b2c               cmp ecx, dword ptr [ebx + 0x2c]
// 008263d5  7e06                 jle 0x8263dd
// 008263d7  33f6                 xor esi, esi
// 008263d9  8974244c             mov dword ptr [esp + 0x4c], esi
// 008263dd  8bcb                 mov ecx, ebx
// 008263df  e83c520700           call 0x89b620
// 008263e4  837b5c00             cmp dword ptr [ebx + 0x5c], 0
// 008263e8  89442448             mov dword ptr [esp + 0x48], eax
// 008263ec  0f84b1050000         je 0x8269a3
// 008263f2  8d4b48               lea ecx, [ebx + 0x48]
// 008263f5  51                   push ecx
// 008263f6  8d942488000000       lea edx, [esp + 0x88]
// 008263fd  52                   push edx
// 008263fe  ff1548bc9e00         call dword ptr [0x9ebc48]
// 00826404  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 00826407  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0082640e  8b5328               mov edx, dword ptr [ebx + 0x28]
// 00826411  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00826418  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0082641c  8bac2490000000       mov ebp, dword ptr [esp + 0x90]
// 00826423  896c2424             mov dword ptr [esp + 0x24], ebp
// 00826427  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0082642b  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0082642f  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00826433  89542444             mov dword ptr [esp + 0x44], edx
// 00826437  89542454             mov dword ptr [esp + 0x54], edx
// 0082643b  89542474             mov dword ptr [esp + 0x74], edx
// 0082643f  03d5                 add edx, ebp
// 00826441  03f2                 add esi, edx
// 00826443  89442438             mov dword ptr [esp + 0x38], eax
// 00826447  89442418             mov dword ptr [esp + 0x18], eax
// 0082644b  89442450             mov dword ptr [esp + 0x50], eax
// 0082644f  89442470             mov dword ptr [esp + 0x70], eax
// 00826453  89442428             mov dword ptr [esp + 0x28], eax
// 00826457  89442460             mov dword ptr [esp + 0x60], eax
// 0082645b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0082645f  894c243c             mov dword ptr [esp + 0x3c], ecx
// 00826463  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0082646a  8954247c             mov dword ptr [esp + 0x7c], edx
// 0082646e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00826472  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00826476  894c2440             mov dword ptr [esp + 0x40], ecx
// 0082647a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0082647e  894c2458             mov dword ptr [esp + 0x58], ecx
// 00826482  894c2478             mov dword ptr [esp + 0x78], ecx
// 00826486  894c2430             mov dword ptr [esp + 0x30], ecx
// 0082648a  89742434             mov dword ptr [esp + 0x34], esi
// 0082648e  89742464             mov dword ptr [esp + 0x64], esi
// 00826492  894c2468             mov dword ptr [esp + 0x68], ecx
// 00826496  8954246c             mov dword ptr [esp + 0x6c], edx
// 0082649a  83f803               cmp eax, 3
// 0082649d  0f85fc010000         jne 0x82669f
// 008264a3  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 008264aa  83c620               add esi, 0x20
// 008264ad  8bce                 mov ecx, esi
// 008264af  e80c97ffff           call 0x81fbc0
// 008264b4  85c0                 test eax, eax
// 008264b6  0f8443030000         je 0x8267ff
// 008264bc  85ff                 test edi, edi
// 008264be  7505                 jne 0x8264c5
// 008264c0  8d4f04               lea ecx, [edi + 4]
// 008264c3  eb1a                 jmp 0x8264df
// 008264c5  b83c000000           mov eax, 0x3c
// 008264ca  39442410             cmp dword ptr [esp + 0x10], eax
// 008264ce  7505                 jne 0x8264d5
// 008264d0  8d48c7               lea ecx, [eax - 0x39]
// 008264d3  eb0a                 jmp 0x8264df
// 008264d5  33c9                 xor ecx, ecx
// 008264d7  39442414             cmp dword ptr [esp + 0x14], eax
// 008264db  0f94c1               sete cl
// 008264de  41                   inc ecx
// 008264df  8b9c2498000000       mov ebx, dword ptr [esp + 0x98]
// 008264e6  85db                 test ebx, ebx
// 008264e8  7504                 jne 0x8264ee
// 008264ea  33c0                 xor eax, eax
// 008264ec  eb03                 jmp 0x8264f1
// 008264ee  8b4304               mov eax, dword ptr [ebx + 4]
// 008264f1  6a00                 push 0
// 008264f3  8d54243c             lea edx, [esp + 0x3c]
// 008264f7  52                   push edx
// 008264f8  51                   push ecx
// 008264f9  6a01                 push 1
// 008264fb  50                   push eax
// 008264fc  8bce                 mov ecx, esi
// 008264fe  e83d93ffff           call 0x81f840
// 00826503  85ff                 test edi, edi
// 00826505  7505                 jne 0x82650c
// 00826507  8d4f08               lea ecx, [edi + 8]
// 0082650a  eb1c                 jmp 0x826528
// 0082650c  b83d000000           mov eax, 0x3d
// 00826511  39442410             cmp dword ptr [esp + 0x10], eax
// 00826515  7505                 jne 0x82651c
// 00826517  8d48ca               lea ecx, [eax - 0x36]
// 0082651a  eb0c                 jmp 0x826528
// 0082651c  33c9                 xor ecx, ecx
// 0082651e  39442414             cmp dword ptr [esp + 0x14], eax
// 00826522  0f94c1               sete cl
// 00826525  83c105               add ecx, 5
// 00826528  85db                 test ebx, ebx
// 0082652a  7504                 jne 0x826530
// 0082652c  33c0                 xor eax, eax
// 0082652e  eb03                 jmp 0x826533
// 00826530  8b4304               mov eax, dword ptr [ebx + 4]
// 00826533  6a00                 push 0
// 00826535  8d54241c             lea edx, [esp + 0x1c]
// 00826539  52                   push edx
// 0082653a  51                   push ecx
// 0082653b  6a01                 push 1
// 0082653d  50                   push eax
// 0082653e  8bce                 mov ecx, esi
// 00826540  e8fb92ffff           call 0x81f840
// 00826545  8b2d44bc9e00         mov ebp, dword ptr [0x9ebc44]
// 0082654b  8d442450             lea eax, [esp + 0x50]
// 0082654f  50                   push eax
// 00826550  ffd5                 call ebp
// 00826552  85c0                 test eax, eax
// 00826554  0f85ee090000         jne 0x826f48
// 0082655a  8d4c2470             lea ecx, [esp + 0x70]
// 0082655e  51                   push ecx
// 0082655f  ffd5                 call ebp
// 00826561  85c0                 test eax, eax
// 00826563  7540                 jne 0x8265a5
// 00826565  85ff                 test edi, edi
// 00826567  7505                 jne 0x82656e
// 00826569  8d4804               lea ecx, [eax + 4]
// 0082656c  eb1a                 jmp 0x826588
// 0082656e  b83e000000           mov eax, 0x3e
// 00826573  39442410             cmp dword ptr [esp + 0x10], eax
// 00826577  7505                 jne 0x82657e
// 00826579  8d48c5               lea ecx, [eax - 0x3b]
// 0082657c  eb0a                 jmp 0x826588
// 0082657e  33c9                 xor ecx, ecx
// 00826580  39442414             cmp dword ptr [esp + 0x14], eax
// 00826584  0f94c1               sete cl
// 00826587  41                   inc ecx
// 00826588  85db                 test ebx, ebx
// 0082658a  7504                 jne 0x826590
// 0082658c  33c0                 xor eax, eax
// 0082658e  eb03                 jmp 0x826593
// 00826590  8b4304               mov eax, dword ptr [ebx + 4]
// 00826593  6a00                 push 0
// 00826595  8d542474             lea edx, [esp + 0x74]
// 00826599  52                   push edx
// 0082659a  51                   push ecx
// 0082659b  6a06                 push 6
// 0082659d  50                   push eax
// 0082659e  8bce                 mov ecx, esi
// 008265a0  e89b92ffff           call 0x81f840
// 008265a5  8d442428             lea eax, [esp + 0x28]
// 008265a9  50                   push eax
// 008265aa  ffd5                 call ebp
// 008265ac  85c0                 test eax, eax
// 008265ae  0f858f000000         jne 0x826643
// 008265b4  b840000000           mov eax, 0x40
// 008265b9  85ff                 test edi, edi
// 008265bb  7505                 jne 0x8265c2
// 008265bd  8d48c4               lea ecx, [eax - 0x3c]
// 008265c0  eb17                 jmp 0x8265d9
// 008265c2  39442410             cmp dword ptr [esp + 0x10], eax
// 008265c6  7507                 jne 0x8265cf
// 008265c8  b903000000           mov ecx, 3
// 008265cd  eb0a                 jmp 0x8265d9
// 008265cf  33c9                 xor ecx, ecx
// 008265d1  39442414             cmp dword ptr [esp + 0x14], eax
// 008265d5  0f94c1               sete cl
// 008265d8  41                   inc ecx
// 008265d9  85db                 test ebx, ebx
// 008265db  7504                 jne 0x8265e1
// 008265dd  33c0                 xor eax, eax
// 008265df  eb03                 jmp 0x8265e4
// 008265e1  8b4304               mov eax, dword ptr [ebx + 4]
// 008265e4  6a00                 push 0
// 008265e6  8d54242c             lea edx, [esp + 0x2c]
// 008265ea  52                   push edx
// 008265eb  51                   push ecx
// 008265ec  6a03                 push 3
// 008265ee  50                   push eax
// 008265ef  8bce                 mov ecx, esi
// 008265f1  e84a92ffff           call 0x81f840
// 008265f6  8b442434             mov eax, dword ptr [esp + 0x34]
// 008265fa  2b44242c             sub eax, dword ptr [esp + 0x2c]
// 008265fe  83f80d               cmp eax, 0xd
// 00826601  7e40                 jle 0x826643
// 00826603  85ff                 test edi, edi
// 00826605  7505                 jne 0x82660c
// 00826607  8d4f04               lea ecx, [edi + 4]
// 0082660a  eb1a                 jmp 0x826626
// 0082660c  b840000000           mov eax, 0x40
// 00826611  39442410             cmp dword ptr [esp + 0x10], eax
// 00826615  7505                 jne 0x82661c
// 00826617  8d48c3               lea ecx, [eax - 0x3d]
// 0082661a  eb0a                 jmp 0x826626
// 0082661c  33c9                 xor ecx, ecx
// 0082661e  39442414             cmp dword ptr [esp + 0x14], eax
// 00826622  0f94c1               sete cl
// 00826625  41                   inc ecx
// 00826626  85db                 test ebx, ebx
// 00826628  7504                 jne 0x82662e
// 0082662a  33c0                 xor eax, eax
// 0082662c  eb03                 jmp 0x826631
// 0082662e  8b4304               mov eax, dword ptr [ebx + 4]
// 00826631  6a00                 push 0
// 00826633  8d54242c             lea edx, [esp + 0x2c]
// 00826637  52                   push edx
// 00826638  51                   push ecx
// 00826639  6a09                 push 9
// 0082663b  50                   push eax
// 0082663c  8bce                 mov ecx, esi
// 0082663e  e8fd91ffff           call 0x81f840
// 00826643  8d442460             lea eax, [esp + 0x60]
// 00826647  50                   push eax
// 00826648  ffd5                 call ebp
// 0082664a  85c0                 test eax, eax
// 0082664c  0f85f6080000         jne 0x826f48
// 00826652  85ff                 test edi, edi
// 00826654  7505                 jne 0x82665b
// 00826656  8d4804               lea ecx, [eax + 4]
// 00826659  eb1a                 jmp 0x826675
// 0082665b  b83f000000           mov eax, 0x3f
// 00826660  39442410             cmp dword ptr [esp + 0x10], eax
// 00826664  7505                 jne 0x82666b
// 00826666  8d48c4               lea ecx, [eax - 0x3c]
// 00826669  eb0a                 jmp 0x826675
// 0082666b  33c9                 xor ecx, ecx
// 0082666d  39442414             cmp dword ptr [esp + 0x14], eax
// 00826671  0f94c1               sete cl
// 00826674  41                   inc ecx
// 00826675  85db                 test ebx, ebx
// 00826677  7504                 jne 0x82667d
// 00826679  33c0                 xor eax, eax
// 0082667b  eb03                 jmp 0x826680
// 0082667d  8b4304               mov eax, dword ptr [ebx + 4]
// 00826680  6a00                 push 0
// 00826682  8d542464             lea edx, [esp + 0x64]
// 00826686  52                   push edx
// 00826687  51                   push ecx
// 00826688  6a07                 push 7
// 0082668a  50                   push eax
// 0082668b  8bce                 mov ecx, esi
// 0082668d  e8ae91ffff           call 0x81f840
// 00826692  5f                   pop edi
// 00826693  5e                   pop esi
// 00826694  5d                   pop ebp
// 00826695  5b                   pop ebx
// 00826696  81c484000000         add esp, 0x84
// 0082669c  c20800               ret 8
// 0082669f  83f802               cmp eax, 2
// 008266a2  0f8557010000         jne 0x8267ff
// 008266a8  e873d4fbff           call 0x7e3b20
// 008266ad  6a0f                 push 0xf
// 008266af  8bc8                 mov ecx, eax
// 008266b1  e8facbfbff           call 0x7e32b0
// 008266b6  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 008266bd  50                   push eax
// 008266be  8d44243c             lea eax, [esp + 0x3c]
// 008266c2  50                   push eax
// 008266c3  8bce                 mov ecx, esi
// 008266c5  e87420f8ff           call 0x7a873e
// 008266ca  85ff                 test edi, edi
// 008266cc  742e                 je 0x8266fc
// 008266ce  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 008266d3  7527                 jne 0x8266fc
// 008266d5  e846d4fbff           call 0x7e3b20
// 008266da  6a14                 push 0x14
// 008266dc  8bc8                 mov ecx, eax
// 008266de  e8cdcbfbff           call 0x7e32b0
// 008266e3  8be8                 mov ebp, eax
// 008266e5  e836d4fbff           call 0x7e3b20
// 008266ea  6a10                 push 0x10
// 008266ec  8bc8                 mov ecx, eax
// 008266ee  e8bdcbfbff           call 0x7e32b0
// 008266f3  55                   push ebp
// 008266f4  50                   push eax
// 008266f5  8d4c2440             lea ecx, [esp + 0x40]
// 008266f9  51                   push ecx
// 008266fa  eb25                 jmp 0x826721
// 008266fc  e81fd4fbff           call 0x7e3b20
// 00826701  6a10                 push 0x10
// 00826703  8bc8                 mov ecx, eax
// 00826705  e8a6cbfbff           call 0x7e32b0
// 0082670a  8be8                 mov ebp, eax
// 0082670c  e80fd4fbff           call 0x7e3b20
// 00826711  6a14                 push 0x14
// 00826713  8bc8                 mov ecx, eax
// 00826715  e896cbfbff           call 0x7e32b0
// 0082671a  55                   push ebp
// 0082671b  50                   push eax
// 0082671c  8d542440             lea edx, [esp + 0x40]
// 00826720  52                   push edx
// 00826721  8bce                 mov ecx, esi
// 00826723  e81020f8ff           call 0x7a8738
// 00826728  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0082672c  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00826730  57                   push edi
// 00826731  6a01                 push 1
// 00826733  6a00                 push 0
// 00826735  83ec10               sub esp, 0x10
// 00826738  8bc4                 mov eax, esp
// 0082673a  8908                 mov dword ptr [eax], ecx
// 0082673c  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00826740  895004               mov dword ptr [eax + 4], edx
// 00826743  8b542460             mov edx, dword ptr [esp + 0x60]
// 00826747  894808               mov dword ptr [eax + 8], ecx
// 0082674a  56                   push esi
// 0082674b  89500c               mov dword ptr [eax + 0xc], edx
// 0082674e  e8bdfaffff           call 0x826210
// 00826753  83c420               add esp, 0x20
// 00826756  e8c5d3fbff           call 0x7e3b20
// 0082675b  6a0f                 push 0xf
// 0082675d  8bc8                 mov ecx, eax
// 0082675f  e84ccbfbff           call 0x7e32b0
// 00826764  50                   push eax
// 00826765  8d44241c             lea eax, [esp + 0x1c]
// 00826769  50                   push eax
// 0082676a  8bce                 mov ecx, esi
// 0082676c  e8cd1ff8ff           call 0x7a873e
// 00826771  85ff                 test edi, edi
// 00826773  742e                 je 0x8267a3
// 00826775  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 0082677a  7527                 jne 0x8267a3
// 0082677c  e89fd3fbff           call 0x7e3b20
// 00826781  6a14                 push 0x14
// 00826783  8bc8                 mov ecx, eax
// 00826785  e826cbfbff           call 0x7e32b0
// 0082678a  8be8                 mov ebp, eax
// 0082678c  e88fd3fbff           call 0x7e3b20
// 00826791  6a10                 push 0x10
// 00826793  8bc8                 mov ecx, eax
// 00826795  e816cbfbff           call 0x7e32b0
// 0082679a  55                   push ebp
// 0082679b  50                   push eax
// 0082679c  8d4c2420             lea ecx, [esp + 0x20]
// 008267a0  51                   push ecx
// 008267a1  eb25                 jmp 0x8267c8
// 008267a3  e878d3fbff           call 0x7e3b20
// 008267a8  6a10                 push 0x10
// 008267aa  8bc8                 mov ecx, eax
// 008267ac  e8ffcafbff           call 0x7e32b0
// 008267b1  8be8                 mov ebp, eax
// 008267b3  e868d3fbff           call 0x7e3b20
// 008267b8  6a14                 push 0x14
// 008267ba  8bc8                 mov ecx, eax
// 008267bc  e8efcafbff           call 0x7e32b0
// 008267c1  55                   push ebp
// 008267c2  50                   push eax
// 008267c3  8d542420             lea edx, [esp + 0x20]
// 008267c7  52                   push edx
// 008267c8  8bce                 mov ecx, esi
// 008267ca  e8691ff8ff           call 0x7a8738
// 008267cf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008267d3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008267d7  57                   push edi
// 008267d8  6a00                 push 0
// 008267da  6a00                 push 0
// 008267dc  83ec10               sub esp, 0x10
// 008267df  8bc4                 mov eax, esp
// 008267e1  8908                 mov dword ptr [eax], ecx
// 008267e3  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 008267e7  895004               mov dword ptr [eax + 4], edx
// 008267ea  8b542440             mov edx, dword ptr [esp + 0x40]
// 008267ee  894808               mov dword ptr [eax + 8], ecx
// 008267f1  56                   push esi
// 008267f2  89500c               mov dword ptr [eax + 0xc], edx
// 008267f5  e816faffff           call 0x826210
// 008267fa  83c420               add esp, 0x20
// 008267fd  eb72                 jmp 0x826871
// 008267ff  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00826806  85f6                 test esi, esi
// 00826808  7504                 jne 0x82680e
// 0082680a  33c0                 xor eax, eax
// 0082680c  eb03                 jmp 0x826811
// 0082680e  8b4604               mov eax, dword ptr [esi + 4]
// 00826811  f7df                 neg edi
// 00826813  1bff                 sbb edi, edi
// 00826815  8b2decbb9e00         mov ebp, dword ptr [0x9ebbec]
// 0082681b  33c9                 xor ecx, ecx
// 0082681d  81e700ffffff         and edi, 0xffffff00
// 00826823  81c700010000         add edi, 0x100
// 00826829  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 0082682e  8d542438             lea edx, [esp + 0x38]
// 00826832  0f95c1               setne cl
// 00826835  49                   dec ecx
// 00826836  81e100020000         and ecx, 0x200
// 0082683c  0bcf                 or ecx, edi
// 0082683e  51                   push ecx
// 0082683f  6a03                 push 3
// 00826841  52                   push edx
// 00826842  50                   push eax
// 00826843  ffd5                 call ebp
// 00826845  85f6                 test esi, esi
// 00826847  7504                 jne 0x82684d
// 00826849  33c0                 xor eax, eax
// 0082684b  eb03                 jmp 0x826850
// 0082684d  8b4604               mov eax, dword ptr [esi + 4]
// 00826850  33c9                 xor ecx, ecx
// 00826852  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00826857  8d542418             lea edx, [esp + 0x18]
// 0082685b  0f95c1               setne cl
// 0082685e  49                   dec ecx
// 0082685f  81e100020000         and ecx, 0x200
// 00826865  0bcf                 or ecx, edi
// 00826867  83c901               or ecx, 1
// 0082686a  51                   push ecx
// 0082686b  6a03                 push 3
// 0082686d  52                   push edx
// 0082686e  50                   push eax
// 0082686f  ffd5                 call ebp
// 00826871  8b03                 mov eax, dword ptr [ebx]
// 00826873  8b5008               mov edx, dword ptr [eax + 8]
// 00826876  8bcb                 mov ecx, ebx
// 00826878  ffd2                 call edx
// 0082687a  85c0                 test eax, eax
// 0082687c  7504                 jne 0x826882
// 0082687e  33d2                 xor edx, edx
// 00826880  eb03                 jmp 0x826885
// 00826882  8b5020               mov edx, dword ptr [eax + 0x20]
// 00826885  85f6                 test esi, esi
// 00826887  7504                 jne 0x82688d
// 00826889  33c9                 xor ecx, ecx
// 0082688b  eb03                 jmp 0x826890
// 0082688d  8b4e04               mov ecx, dword ptr [esi + 4]
// 00826890  85c0                 test eax, eax
// 00826892  7403                 je 0x826897
// 00826894  8b4020               mov eax, dword ptr [eax + 0x20]
// 00826897  52                   push edx
// 00826898  51                   push ecx
// 00826899  6837010000           push 0x137
// 0082689e  50                   push eax
// 0082689f  ff157cbb9e00         call dword ptr [0x9ebb7c]
// 008268a5  85f6                 test esi, esi
// 008268a7  7504                 jne 0x8268ad
// 008268a9  33c9                 xor ecx, ecx
// 008268ab  eb03                 jmp 0x8268b0
// 008268ad  8b4e04               mov ecx, dword ptr [esi + 4]
// 008268b0  50                   push eax
// 008268b1  8d442454             lea eax, [esp + 0x54]
// 008268b5  50                   push eax
// 008268b6  51                   push ecx
// 008268b7  ff151cba9e00         call dword ptr [0x9eba1c]
// 008268bd  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008268c1  8b2ddcba9e00         mov ebp, dword ptr [0x9ebadc]
// 008268c7  83fb3e               cmp ebx, 0x3e
// 008268ca  7513                 jne 0x8268df
// 008268cc  85f6                 test esi, esi
// 008268ce  7504                 jne 0x8268d4
// 008268d0  33c0                 xor eax, eax
// 008268d2  eb03                 jmp 0x8268d7
// 008268d4  8b4604               mov eax, dword ptr [esi + 4]
// 008268d7  8d4c2470             lea ecx, [esp + 0x70]
// 008268db  51                   push ecx
// 008268dc  50                   push eax
// 008268dd  ffd5                 call ebp
// 008268df  8b3d44bc9e00         mov edi, dword ptr [0x9ebc44]
// 008268e5  8d542450             lea edx, [esp + 0x50]
// 008268e9  52                   push edx
// 008268ea  ffd7                 call edi
// 008268ec  85c0                 test eax, eax
// 008268ee  7579                 jne 0x826969
// 008268f0  8d442428             lea eax, [esp + 0x28]
// 008268f4  50                   push eax
// 008268f5  ffd7                 call edi
// 008268f7  85c0                 test eax, eax
// 008268f9  756e                 jne 0x826969
// 008268fb  e820d2fbff           call 0x7e3b20
// 00826900  6a0f                 push 0xf
// 00826902  8bc8                 mov ecx, eax
// 00826904  e8a7c9fbff           call 0x7e32b0
// 00826909  50                   push eax
// 0082690a  8d4c242c             lea ecx, [esp + 0x2c]
// 0082690e  51                   push ecx
// 0082690f  8bce                 mov ecx, esi
// 00826911  e8281ef8ff           call 0x7a873e
// 00826916  837c244802           cmp dword ptr [esp + 0x48], 2
// 0082691b  752e                 jne 0x82694b
// 0082691d  e8fed1fbff           call 0x7e3b20
// 00826922  6a10                 push 0x10
// 00826924  8bc8                 mov ecx, eax
// 00826926  e885c9fbff           call 0x7e32b0
// 0082692b  8bf8                 mov edi, eax
// 0082692d  e8eed1fbff           call 0x7e3b20
// 00826932  6a14                 push 0x14
// 00826934  8bc8                 mov ecx, eax
// 00826936  e875c9fbff           call 0x7e32b0
// 0082693b  57                   push edi
// 0082693c  50                   push eax
// 0082693d  8d542430             lea edx, [esp + 0x30]
// 00826941  52                   push edx
// 00826942  8bce                 mov ecx, esi
// 00826944  e8ef1df8ff           call 0x7a8738
// 00826949  eb1e                 jmp 0x826969
// 0082694b  85f6                 test esi, esi
// 0082694d  7504                 jne 0x826953
// 0082694f  33c0                 xor eax, eax
// 00826951  eb03                 jmp 0x826956
// 00826953  8b4604               mov eax, dword ptr [esi + 4]
// 00826956  680f200000           push 0x200f
// 0082695b  6a05                 push 5
// 0082695d  8d4c2430             lea ecx, [esp + 0x30]
// 00826961  51                   push ecx
// 00826962  50                   push eax
// 00826963  ff1540ba9e00         call dword ptr [0x9eba40]
// 00826969  83fb3f               cmp ebx, 0x3f
// 0082696c  0f85d6050000         jne 0x826f48
// 00826972  85f6                 test esi, esi
// 00826974  7515                 jne 0x82698b
// 00826976  8d542460             lea edx, [esp + 0x60]
// 0082697a  52                   push edx
// 0082697b  56                   push esi
// 0082697c  ffd5                 call ebp
// 0082697e  5f                   pop edi
// 0082697f  5e                   pop esi
// 00826980  5d                   pop ebp
// 00826981  5b                   pop ebx
// 00826982  81c484000000         add esp, 0x84
// 00826988  c20800               ret 8
// 0082698b  8b7604               mov esi, dword ptr [esi + 4]
// 0082698e  8d542460             lea edx, [esp + 0x60]
// 00826992  52                   push edx
// 00826993  56                   push esi
// 00826994  ffd5                 call ebp
// 00826996  5f                   pop edi
// 00826997  5e                   pop esi
// 00826998  5d                   pop ebp
// 00826999  5b                   pop ebx
// 0082699a  81c484000000         add esp, 0x84
// 008269a0  c20800               ret 8
// 008269a3  8d4348               lea eax, [ebx + 0x48]
// 008269a6  50                   push eax
// 008269a7  8d8c2488000000       lea ecx, [esp + 0x88]
// 008269ae  51                   push ecx
// 008269af  ff1548bc9e00         call dword ptr [0x9ebc48]
// 008269b5  8b6b2c               mov ebp, dword ptr [ebx + 0x2c]
// 008269b8  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008269bf  8b942484000000       mov edx, dword ptr [esp + 0x84]
// 008269c6  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008269cd  896c2418             mov dword ptr [esp + 0x18], ebp
// 008269d1  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 008269d8  896c2420             mov dword ptr [esp + 0x20], ebp
// 008269dc  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 008269e0  89542428             mov dword ptr [esp + 0x28], edx
// 008269e4  8b5328               mov edx, dword ptr [ebx + 0x28]
// 008269e7  8944242c             mov dword ptr [esp + 0x2c], eax
// 008269eb  8944241c             mov dword ptr [esp + 0x1c], eax
// 008269ef  89442454             mov dword ptr [esp + 0x54], eax
// 008269f3  89442464             mov dword ptr [esp + 0x64], eax
// 008269f7  8944243c             mov dword ptr [esp + 0x3c], eax
// 008269fb  89442474             mov dword ptr [esp + 0x74], eax
// 008269ff  8b442418             mov eax, dword ptr [esp + 0x18]
// 00826a03  896c2458             mov dword ptr [esp + 0x58], ebp
// 00826a07  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 00826a0b  89542430             mov dword ptr [esp + 0x30], edx
// 00826a0f  89542450             mov dword ptr [esp + 0x50], edx
// 00826a13  89542460             mov dword ptr [esp + 0x60], edx
// 00826a17  03d5                 add edx, ebp
// 00826a19  03f2                 add esi, edx
// 00826a1b  89442478             mov dword ptr [esp + 0x78], eax
// 00826a1f  8b442448             mov eax, dword ptr [esp + 0x48]
// 00826a23  894c2434             mov dword ptr [esp + 0x34], ecx
// 00826a27  894c2424             mov dword ptr [esp + 0x24], ecx
// 00826a2b  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00826a2f  89542468             mov dword ptr [esp + 0x68], edx
// 00826a33  894c246c             mov dword ptr [esp + 0x6c], ecx
// 00826a37  89542438             mov dword ptr [esp + 0x38], edx
// 00826a3b  89742440             mov dword ptr [esp + 0x40], esi
// 00826a3f  894c2444             mov dword ptr [esp + 0x44], ecx
// 00826a43  89742470             mov dword ptr [esp + 0x70], esi
// 00826a47  894c247c             mov dword ptr [esp + 0x7c], ecx
// 00826a4b  83f803               cmp eax, 3
// 00826a4e  0f85fe010000         jne 0x826c52
// 00826a54  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 00826a5b  83c620               add esi, 0x20
// 00826a5e  8bce                 mov ecx, esi
// 00826a60  e85b91ffff           call 0x81fbc0
// 00826a65  85c0                 test eax, eax
// 00826a67  0f8445030000         je 0x826db2
// 00826a6d  85ff                 test edi, edi
// 00826a6f  7505                 jne 0x826a76
// 00826a71  8d4f0c               lea ecx, [edi + 0xc]
// 00826a74  eb1c                 jmp 0x826a92
// 00826a76  b83c000000           mov eax, 0x3c
// 00826a7b  39442410             cmp dword ptr [esp + 0x10], eax
// 00826a7f  7505                 jne 0x826a86
// 00826a81  8d48cf               lea ecx, [eax - 0x31]
// 00826a84  eb0c                 jmp 0x826a92
// 00826a86  33c9                 xor ecx, ecx
// 00826a88  39442414             cmp dword ptr [esp + 0x14], eax
// 00826a8c  0f94c1               sete cl
// 00826a8f  83c109               add ecx, 9
// 00826a92  8bac2498000000       mov ebp, dword ptr [esp + 0x98]
// 00826a99  85ed                 test ebp, ebp
// 00826a9b  7504                 jne 0x826aa1
// 00826a9d  33c0                 xor eax, eax
// 00826a9f  eb03                 jmp 0x826aa4
// 00826aa1  8b4504               mov eax, dword ptr [ebp + 4]
// 00826aa4  6a00                 push 0
// 00826aa6  8d54242c             lea edx, [esp + 0x2c]
// 00826aaa  52                   push edx
// 00826aab  51                   push ecx
// 00826aac  6a01                 push 1
// 00826aae  50                   push eax
// 00826aaf  8bce                 mov ecx, esi
// 00826ab1  e88a8dffff           call 0x81f840
// 00826ab6  85ff                 test edi, edi
// 00826ab8  7505                 jne 0x826abf
// 00826aba  8d4f10               lea ecx, [edi + 0x10]
// 00826abd  eb1c                 jmp 0x826adb
// 00826abf  b83d000000           mov eax, 0x3d
// 00826ac4  39442410             cmp dword ptr [esp + 0x10], eax
// 00826ac8  7505                 jne 0x826acf
// 00826aca  8d48d2               lea ecx, [eax - 0x2e]
// 00826acd  eb0c                 jmp 0x826adb
// 00826acf  33c9                 xor ecx, ecx
// 00826ad1  39442414             cmp dword ptr [esp + 0x14], eax
// 00826ad5  0f94c1               sete cl
// 00826ad8  83c10d               add ecx, 0xd
// 00826adb  85ed                 test ebp, ebp
// 00826add  7504                 jne 0x826ae3
// 00826adf  33c0                 xor eax, eax
// 00826ae1  eb03                 jmp 0x826ae6
// 00826ae3  8b4504               mov eax, dword ptr [ebp + 4]
// 00826ae6  6a00                 push 0
// 00826ae8  8d54241c             lea edx, [esp + 0x1c]
// 00826aec  52                   push edx
// 00826aed  51                   push ecx
// 00826aee  6a01                 push 1
// 00826af0  50                   push eax
// 00826af1  8bce                 mov ecx, esi
// 00826af3  e8488dffff           call 0x81f840
// 00826af8  8b1d44bc9e00         mov ebx, dword ptr [0x9ebc44]
// 00826afe  8d442450             lea eax, [esp + 0x50]
// 00826b02  50                   push eax
// 00826b03  ffd3                 call ebx
// 00826b05  85c0                 test eax, eax
// 00826b07  0f853b040000         jne 0x826f48
// 00826b0d  8d4c2460             lea ecx, [esp + 0x60]
// 00826b11  51                   push ecx
// 00826b12  ffd3                 call ebx
// 00826b14  85c0                 test eax, eax
// 00826b16  7540                 jne 0x826b58
// 00826b18  85ff                 test edi, edi
// 00826b1a  7505                 jne 0x826b21
// 00826b1c  8d4804               lea ecx, [eax + 4]
// 00826b1f  eb1a                 jmp 0x826b3b
// 00826b21  b83e000000           mov eax, 0x3e
// 00826b26  39442410             cmp dword ptr [esp + 0x10], eax
// 00826b2a  7505                 jne 0x826b31
// 00826b2c  8d48c5               lea ecx, [eax - 0x3b]
// 00826b2f  eb0a                 jmp 0x826b3b
// 00826b31  33c9                 xor ecx, ecx
// 00826b33  39442414             cmp dword ptr [esp + 0x14], eax
// 00826b37  0f94c1               sete cl
// 00826b3a  41                   inc ecx
// 00826b3b  85ed                 test ebp, ebp
// 00826b3d  7504                 jne 0x826b43
// 00826b3f  33c0                 xor eax, eax
// 00826b41  eb03                 jmp 0x826b46
// 00826b43  8b4504               mov eax, dword ptr [ebp + 4]
// 00826b46  6a00                 push 0
// 00826b48  8d542464             lea edx, [esp + 0x64]
// 00826b4c  52                   push edx
// 00826b4d  51                   push ecx
// 00826b4e  6a04                 push 4
// 00826b50  50                   push eax
// 00826b51  8bce                 mov ecx, esi
// 00826b53  e8e88cffff           call 0x81f840
// 00826b58  8d442438             lea eax, [esp + 0x38]
// 00826b5c  50                   push eax
// 00826b5d  ffd3                 call ebx
// 00826b5f  85c0                 test eax, eax
// 00826b61  0f858f000000         jne 0x826bf6
// 00826b67  b840000000           mov eax, 0x40
// 00826b6c  85ff                 test edi, edi
// 00826b6e  7505                 jne 0x826b75
// 00826b70  8d48c4               lea ecx, [eax - 0x3c]
// 00826b73  eb17                 jmp 0x826b8c
// 00826b75  39442410             cmp dword ptr [esp + 0x10], eax
// 00826b79  7507                 jne 0x826b82
// 00826b7b  b903000000           mov ecx, 3
// 00826b80  eb0a                 jmp 0x826b8c
// 00826b82  33c9                 xor ecx, ecx
// 00826b84  39442414             cmp dword ptr [esp + 0x14], eax
// 00826b88  0f94c1               sete cl
// 00826b8b  41                   inc ecx
// 00826b8c  85ed                 test ebp, ebp
// 00826b8e  7504                 jne 0x826b94
// 00826b90  33c0                 xor eax, eax
// 00826b92  eb03                 jmp 0x826b97
// 00826b94  8b4504               mov eax, dword ptr [ebp + 4]
// 00826b97  6a00                 push 0
// 00826b99  8d54243c             lea edx, [esp + 0x3c]
// 00826b9d  52                   push edx
// 00826b9e  51                   push ecx
// 00826b9f  6a02                 push 2
// 00826ba1  50                   push eax
// 00826ba2  8bce                 mov ecx, esi
// 00826ba4  e8978cffff           call 0x81f840
// 00826ba9  8b442440             mov eax, dword ptr [esp + 0x40]
// 00826bad  2b442438             sub eax, dword ptr [esp + 0x38]
// 00826bb1  83f80d               cmp eax, 0xd
// 00826bb4  7e40                 jle 0x826bf6
// 00826bb6  85ff                 test edi, edi
// 00826bb8  7505                 jne 0x826bbf
// 00826bba  8d4f04               lea ecx, [edi + 4]
// 00826bbd  eb1a                 jmp 0x826bd9
// 00826bbf  b840000000           mov eax, 0x40
// 00826bc4  39442410             cmp dword ptr [esp + 0x10], eax
// 00826bc8  7505                 jne 0x826bcf
// 00826bca  8d48c3               lea ecx, [eax - 0x3d]
// 00826bcd  eb0a                 jmp 0x826bd9
// 00826bcf  33c9                 xor ecx, ecx
// 00826bd1  39442414             cmp dword ptr [esp + 0x14], eax
// 00826bd5  0f94c1               sete cl
// 00826bd8  41                   inc ecx
// 00826bd9  85ed                 test ebp, ebp
// 00826bdb  7504                 jne 0x826be1
// 00826bdd  33c0                 xor eax, eax
// 00826bdf  eb03                 jmp 0x826be4
// 00826be1  8b4504               mov eax, dword ptr [ebp + 4]
// 00826be4  6a00                 push 0
// 00826be6  8d54243c             lea edx, [esp + 0x3c]
// 00826bea  52                   push edx
// 00826beb  51                   push ecx
// 00826bec  6a08                 push 8
// 00826bee  50                   push eax
// 00826bef  8bce                 mov ecx, esi
// 00826bf1  e84a8cffff           call 0x81f840
// 00826bf6  8d442470             lea eax, [esp + 0x70]
// 00826bfa  50                   push eax
// 00826bfb  ffd3                 call ebx
// 00826bfd  85c0                 test eax, eax
// 00826bff  0f8543030000         jne 0x826f48
// 00826c05  85ff                 test edi, edi
// 00826c07  7505                 jne 0x826c0e
// 00826c09  8d4804               lea ecx, [eax + 4]
// 00826c0c  eb1a                 jmp 0x826c28
// 00826c0e  b83f000000           mov eax, 0x3f
// 00826c13  39442410             cmp dword ptr [esp + 0x10], eax
// 00826c17  7505                 jne 0x826c1e
// 00826c19  8d48c4               lea ecx, [eax - 0x3c]
// 00826c1c  eb0a                 jmp 0x826c28
// 00826c1e  33c9                 xor ecx, ecx
// 00826c20  39442414             cmp dword ptr [esp + 0x14], eax
// 00826c24  0f94c1               sete cl
// 00826c27  41                   inc ecx
// 00826c28  85ed                 test ebp, ebp
// 00826c2a  7504                 jne 0x826c30
// 00826c2c  33c0                 xor eax, eax
// 00826c2e  eb03                 jmp 0x826c33
// 00826c30  8b4504               mov eax, dword ptr [ebp + 4]
// 00826c33  6a00                 push 0
// 00826c35  8d542474             lea edx, [esp + 0x74]
// 00826c39  52                   push edx
// 00826c3a  51                   push ecx
// 00826c3b  6a05                 push 5
// 00826c3d  50                   push eax
// 00826c3e  8bce                 mov ecx, esi
// 00826c40  e8fb8bffff           call 0x81f840
// 00826c45  5f                   pop edi
// 00826c46  5e                   pop esi
// 00826c47  5d                   pop ebp
// 00826c48  5b                   pop ebx
// 00826c49  81c484000000         add esp, 0x84
// 00826c4f  c20800               ret 8
// 00826c52  83f802               cmp eax, 2
// 00826c55  0f8557010000         jne 0x826db2
// 00826c5b  e8c0cefbff           call 0x7e3b20
// 00826c60  6a0f                 push 0xf
// 00826c62  8bc8                 mov ecx, eax
// 00826c64  e847c6fbff           call 0x7e32b0
// 00826c69  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00826c70  50                   push eax
// 00826c71  8d44242c             lea eax, [esp + 0x2c]
// 00826c75  50                   push eax
// 00826c76  8bce                 mov ecx, esi
// 00826c78  e8c11af8ff           call 0x7a873e
// 00826c7d  85ff                 test edi, edi
// 00826c7f  742e                 je 0x826caf
// 00826c81  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00826c86  7527                 jne 0x826caf
// 00826c88  e893cefbff           call 0x7e3b20
// 00826c8d  6a14                 push 0x14
// 00826c8f  8bc8                 mov ecx, eax
// 00826c91  e81ac6fbff           call 0x7e32b0
// 00826c96  8be8                 mov ebp, eax
// 00826c98  e883cefbff           call 0x7e3b20
// 00826c9d  6a10                 push 0x10
// 00826c9f  8bc8                 mov ecx, eax
// 00826ca1  e80ac6fbff           call 0x7e32b0
// 00826ca6  55                   push ebp
// 00826ca7  50                   push eax
// 00826ca8  8d4c2430             lea ecx, [esp + 0x30]
// 00826cac  51                   push ecx
// 00826cad  eb25                 jmp 0x826cd4
// 00826caf  e86ccefbff           call 0x7e3b20
// 00826cb4  6a10                 push 0x10
// 00826cb6  8bc8                 mov ecx, eax
// 00826cb8  e8f3c5fbff           call 0x7e32b0
// 00826cbd  8be8                 mov ebp, eax
// 00826cbf  e85ccefbff           call 0x7e3b20
// 00826cc4  6a14                 push 0x14
// 00826cc6  8bc8                 mov ecx, eax
// 00826cc8  e8e3c5fbff           call 0x7e32b0
// 00826ccd  55                   push ebp
// 00826cce  50                   push eax
// 00826ccf  8d542430             lea edx, [esp + 0x30]
// 00826cd3  52                   push edx
// 00826cd4  8bce                 mov ecx, esi
// 00826cd6  e85d1af8ff           call 0x7a8738
// 00826cdb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00826cdf  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 00826ce3  57                   push edi
// 00826ce4  6a01                 push 1
// 00826ce6  6a01                 push 1
// 00826ce8  83ec10               sub esp, 0x10
// 00826ceb  8bc4                 mov eax, esp
// 00826ced  8908                 mov dword ptr [eax], ecx
// 00826cef  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 00826cf3  895004               mov dword ptr [eax + 4], edx
// 00826cf6  8b542450             mov edx, dword ptr [esp + 0x50]
// 00826cfa  894808               mov dword ptr [eax + 8], ecx
// 00826cfd  56                   push esi
// 00826cfe  89500c               mov dword ptr [eax + 0xc], edx
// 00826d01  e80af5ffff           call 0x826210
// 00826d06  83c420               add esp, 0x20
// 00826d09  e812cefbff           call 0x7e3b20
// 00826d0e  6a0f                 push 0xf
// 00826d10  8bc8                 mov ecx, eax
// 00826d12  e899c5fbff           call 0x7e32b0
// 00826d17  50                   push eax
// 00826d18  8d44241c             lea eax, [esp + 0x1c]
// 00826d1c  50                   push eax
// 00826d1d  8bce                 mov ecx, esi
// 00826d1f  e81a1af8ff           call 0x7a873e
// 00826d24  85ff                 test edi, edi
// 00826d26  742e                 je 0x826d56
// 00826d28  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00826d2d  7527                 jne 0x826d56
// 00826d2f  e8eccdfbff           call 0x7e3b20
// 00826d34  6a14                 push 0x14
// 00826d36  8bc8                 mov ecx, eax
// 00826d38  e873c5fbff           call 0x7e32b0
// 00826d3d  8be8                 mov ebp, eax
// 00826d3f  e8dccdfbff           call 0x7e3b20
// 00826d44  6a10                 push 0x10
// 00826d46  8bc8                 mov ecx, eax
// 00826d48  e863c5fbff           call 0x7e32b0
// 00826d4d  55                   push ebp
// 00826d4e  50                   push eax
// 00826d4f  8d4c2420             lea ecx, [esp + 0x20]
// 00826d53  51                   push ecx
// 00826d54  eb25                 jmp 0x826d7b
// 00826d56  e8c5cdfbff           call 0x7e3b20
// 00826d5b  6a10                 push 0x10
// 00826d5d  8bc8                 mov ecx, eax
// 00826d5f  e84cc5fbff           call 0x7e32b0
// 00826d64  8be8                 mov ebp, eax
// 00826d66  e8b5cdfbff           call 0x7e3b20
// 00826d6b  6a14                 push 0x14
// 00826d6d  8bc8                 mov ecx, eax
// 00826d6f  e83cc5fbff           call 0x7e32b0
// 00826d74  55                   push ebp
// 00826d75  50                   push eax
// 00826d76  8d542420             lea edx, [esp + 0x20]
// 00826d7a  52                   push edx
// 00826d7b  8bce                 mov ecx, esi
// 00826d7d  e8b619f8ff           call 0x7a8738
// 00826d82  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00826d86  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00826d8a  57                   push edi
// 00826d8b  6a00                 push 0
// 00826d8d  6a01                 push 1
// 00826d8f  83ec10               sub esp, 0x10
// 00826d92  8bc4                 mov eax, esp
// 00826d94  8908                 mov dword ptr [eax], ecx
// 00826d96  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00826d9a  895004               mov dword ptr [eax + 4], edx
// 00826d9d  8b542440             mov edx, dword ptr [esp + 0x40]
// 00826da1  894808               mov dword ptr [eax + 8], ecx
// 00826da4  56                   push esi
// 00826da5  89500c               mov dword ptr [eax + 0xc], edx
// 00826da8  e863f4ffff           call 0x826210
// 00826dad  83c420               add esp, 0x20
// 00826db0  eb75                 jmp 0x826e27
// 00826db2  8bb42498000000       mov esi, dword ptr [esp + 0x98]
// 00826db9  85f6                 test esi, esi
// 00826dbb  7504                 jne 0x826dc1
// 00826dbd  33c0                 xor eax, eax
// 00826dbf  eb03                 jmp 0x826dc4
// 00826dc1  8b4604               mov eax, dword ptr [esi + 4]
// 00826dc4  f7df                 neg edi
// 00826dc6  1bff                 sbb edi, edi
// 00826dc8  33c9                 xor ecx, ecx
// 00826dca  8b2decbb9e00         mov ebp, dword ptr [0x9ebbec]
// 00826dd0  81e700ffffff         and edi, 0xffffff00
// 00826dd6  81c700010000         add edi, 0x100
// 00826ddc  837c24103c           cmp dword ptr [esp + 0x10], 0x3c
// 00826de1  8d542428             lea edx, [esp + 0x28]
// 00826de5  0f95c1               setne cl
// 00826de8  49                   dec ecx
// 00826de9  81e100020000         and ecx, 0x200
// 00826def  0bcf                 or ecx, edi
// 00826df1  83c902               or ecx, 2
// 00826df4  51                   push ecx
// 00826df5  6a03                 push 3
// 00826df7  52                   push edx
// 00826df8  50                   push eax
// 00826df9  ffd5                 call ebp
// 00826dfb  85f6                 test esi, esi
// 00826dfd  7504                 jne 0x826e03
// 00826dff  33c0                 xor eax, eax
// 00826e01  eb03                 jmp 0x826e06
// 00826e03  8b4604               mov eax, dword ptr [esi + 4]
// 00826e06  33c9                 xor ecx, ecx
// 00826e08  837c24103d           cmp dword ptr [esp + 0x10], 0x3d
// 00826e0d  8d542418             lea edx, [esp + 0x18]
// 00826e11  0f95c1               setne cl
// 00826e14  49                   dec ecx
// 00826e15  81e100020000         and ecx, 0x200
// 00826e1b  0bcf                 or ecx, edi
// 00826e1d  83c903               or ecx, 3
// 00826e20  51                   push ecx
// 00826e21  6a03                 push 3
// 00826e23  52                   push edx
// 00826e24  50                   push eax
// 00826e25  ffd5                 call ebp
// 00826e27  8b03                 mov eax, dword ptr [ebx]
// 00826e29  8b5008               mov edx, dword ptr [eax + 8]
// 00826e2c  8bcb                 mov ecx, ebx
// 00826e2e  ffd2                 call edx
// 00826e30  85c0                 test eax, eax
// 00826e32  7504                 jne 0x826e38
// 00826e34  33d2                 xor edx, edx
// 00826e36  eb03                 jmp 0x826e3b
// 00826e38  8b5020               mov edx, dword ptr [eax + 0x20]
// 00826e3b  85f6                 test esi, esi
// 00826e3d  7504                 jne 0x826e43
// 00826e3f  33c9                 xor ecx, ecx
// 00826e41  eb03                 jmp 0x826e46
// 00826e43  8b4e04               mov ecx, dword ptr [esi + 4]
// 00826e46  85c0                 test eax, eax
// 00826e48  7403                 je 0x826e4d
// 00826e4a  8b4020               mov eax, dword ptr [eax + 0x20]
// 00826e4d  52                   push edx
// 00826e4e  51                   push ecx
// 00826e4f  6837010000           push 0x137
// 00826e54  50                   push eax
// 00826e55  ff157cbb9e00         call dword ptr [0x9ebb7c]
// 00826e5b  85f6                 test esi, esi
// 00826e5d  7504                 jne 0x826e63
// 00826e5f  33c9                 xor ecx, ecx
// 00826e61  eb03                 jmp 0x826e66
// 00826e63  8b4e04               mov ecx, dword ptr [esi + 4]
// 00826e66  50                   push eax
// 00826e67  8d442454             lea eax, [esp + 0x54]
// 00826e6b  50                   push eax
// 00826e6c  51                   push ecx
// 00826e6d  ff151cba9e00         call dword ptr [0x9eba1c]
// 00826e73  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00826e77  8b2ddcba9e00         mov ebp, dword ptr [0x9ebadc]
// 00826e7d  83fb3e               cmp ebx, 0x3e
// 00826e80  7513                 jne 0x826e95
// 00826e82  85f6                 test esi, esi
// 00826e84  7504                 jne 0x826e8a
// 00826e86  33c0                 xor eax, eax
// 00826e88  eb03                 jmp 0x826e8d
// 00826e8a  8b4604               mov eax, dword ptr [esi + 4]
// 00826e8d  8d4c2460             lea ecx, [esp + 0x60]
// 00826e91  51                   push ecx
// 00826e92  50                   push eax
// 00826e93  ffd5                 call ebp
// 00826e95  8b3d44bc9e00         mov edi, dword ptr [0x9ebc44]
// 00826e9b  8d542450             lea edx, [esp + 0x50]
// 00826e9f  52                   push edx
// 00826ea0  ffd7                 call edi
// 00826ea2  85c0                 test eax, eax
// 00826ea4  7579                 jne 0x826f1f
// 00826ea6  8d442438             lea eax, [esp + 0x38]
// 00826eaa  50                   push eax
// 00826eab  ffd7                 call edi
// 00826ead  85c0                 test eax, eax
// 00826eaf  756e                 jne 0x826f1f
// 00826eb1  e86accfbff           call 0x7e3b20
// 00826eb6  6a0f                 push 0xf
// 00826eb8  8bc8                 mov ecx, eax
// 00826eba  e8f1c3fbff           call 0x7e32b0
// 00826ebf  50                   push eax
// 00826ec0  8d4c243c             lea ecx, [esp + 0x3c]
// 00826ec4  51                   push ecx
// 00826ec5  8bce                 mov ecx, esi
// 00826ec7  e87218f8ff           call 0x7a873e
// 00826ecc  837c244802           cmp dword ptr [esp + 0x48], 2
// 00826ed1  752e                 jne 0x826f01
// 00826ed3  e848ccfbff           call 0x7e3b20
// 00826ed8  6a10                 push 0x10
// 00826eda  8bc8                 mov ecx, eax
// 00826edc  e8cfc3fbff           call 0x7e32b0
// 00826ee1  8bf8                 mov edi, eax
// 00826ee3  e838ccfbff           call 0x7e3b20
// 00826ee8  6a14                 push 0x14
// 00826eea  8bc8                 mov ecx, eax
// 00826eec  e8bfc3fbff           call 0x7e32b0
// 00826ef1  57                   push edi
// 00826ef2  50                   push eax
// 00826ef3  8d542440             lea edx, [esp + 0x40]
// 00826ef7  52                   push edx
// 00826ef8  8bce                 mov ecx, esi
// 00826efa  e83918f8ff           call 0x7a8738
// 00826eff  eb1e                 jmp 0x826f1f
// 00826f01  85f6                 test esi, esi
// 00826f03  7504                 jne 0x826f09
// 00826f05  33c0                 xor eax, eax
// 00826f07  eb03                 jmp 0x826f0c
// 00826f09  8b4604               mov eax, dword ptr [esi + 4]
// 00826f0c  680f200000           push 0x200f
// 00826f11  6a05                 push 5
// 00826f13  8d4c2440             lea ecx, [esp + 0x40]
// 00826f17  51                   push ecx
// 00826f18  50                   push eax
// 00826f19  ff1540ba9e00         call dword ptr [0x9eba40]
// 00826f1f  83fb3f               cmp ebx, 0x3f
// 00826f22  7524                 jne 0x826f48
// 00826f24  85f6                 test esi, esi
// 00826f26  7515                 jne 0x826f3d
// 00826f28  8d542470             lea edx, [esp + 0x70]
// 00826f2c  52                   push edx
// 00826f2d  56                   push esi
// 00826f2e  ffd5                 call ebp
// 00826f30  5f                   pop edi
// 00826f31  5e                   pop esi
// 00826f32  5d                   pop ebp
// 00826f33  5b                   pop ebx
// 00826f34  81c484000000         add esp, 0x84
// 00826f3a  c20800               ret 8
// 00826f3d  8b7604               mov esi, dword ptr [esi + 4]
// 00826f40  8d542470             lea edx, [esp + 0x70]
// 00826f44  52                   push edx
// 00826f45  56                   push esi
// 00826f46  ffd5                 call ebp
// 00826f48  5f                   pop edi
// 00826f49  5e                   pop esi
// 00826f4a  5d                   pop ebp
// 00826f4b  5b                   pop ebx
// 00826f4c  81c484000000         add esp, 0x84
// 00826f52  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlGallery.cpp (function ?DrawScrollBar@CXTPControlGalleryPaintManager@@UAEXPAVCDC@@PAVCXTPScrollBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlGallery.cpp
