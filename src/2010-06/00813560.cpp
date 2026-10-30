// roc 2010-06 00813560  unit: CXTColorDialog  size: 879 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00813560
//
// 00813560  6aff                 push -1
// 00813562  684c469b00           push 0x9b464c
// 00813567  64a100000000         mov eax, dword ptr fs:[0]
// 0081356d  50                   push eax
// 0081356e  81ec9c000000         sub esp, 0x9c
// 00813574  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00813579  33c4                 xor eax, esp
// 0081357b  89842498000000       mov dword ptr [esp + 0x98], eax
// 00813582  55                   push ebp
// 00813583  56                   push esi
// 00813584  57                   push edi
// 00813585  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 0081358a  33c4                 xor eax, esp
// 0081358c  50                   push eax
// 0081358d  8d8424ac000000       lea eax, [esp + 0xac]
// 00813594  64a300000000         mov dword ptr fs:[0], eax
// 0081359a  8bf1                 mov esi, ecx
// 0081359c  56                   push esi
// 0081359d  8d4c2458             lea ecx, [esp + 0x58]
// 008135a1  e88a4df9ff           call 0x7a8330
// 008135a6  6a01                 push 1
// 008135a8  8d4c2458             lea ecx, [esp + 0x58]
// 008135ac  c78424b800000000000000 mov dword ptr [esp + 0xb8], 0
// 008135b7  e8f8971600           call 0x97cdb4
// 008135bc  e85f05fdff           call 0x7e3b20
// 008135c1  6a08                 push 8
// 008135c3  8bc8                 mov ecx, eax
// 008135c5  e8e6fcfcff           call 0x7e32b0
// 008135ca  50                   push eax
// 008135cb  8d4c2458             lea ecx, [esp + 0x58]
// 008135cf  e888981600           call 0x97ce5c
// 008135d4  8b4620               mov eax, dword ptr [esi + 0x20]
// 008135d7  6a00                 push 0
// 008135d9  6a00                 push 0
// 008135db  6a31                 push 0x31
// 008135dd  50                   push eax
// 008135de  ff1554ba9e00         call dword ptr [0x9eba54]
// 008135e4  50                   push eax
// 008135e5  e8ba4ef9ff           call 0x7a84a4
// 008135ea  50                   push eax
// 008135eb  8d4c2458             lea ecx, [esp + 0x58]
// 008135ef  51                   push ecx
// 008135f0  8d4c244c             lea ecx, [esp + 0x4c]
// 008135f4  e8a7c0feff           call 0x7ff6a0
// 008135f9  6a02                 push 2
// 008135fb  8bce                 mov ecx, esi
// 008135fd  c68424b800000001     mov byte ptr [esp + 0xb8], 1
// 00813605  e86052f9ff           call 0x7a886a
// 0081360a  50                   push eax
// 0081360b  8d4c2438             lea ecx, [esp + 0x38]
// 0081360f  e89cbcfeff           call 0x7ff2b0
// 00813614  8d542434             lea edx, [esp + 0x34]
// 00813618  52                   push edx
// 00813619  8bce                 mov ecx, esi
// 0081361b  e8f252f9ff           call 0x7a8912
// 00813620  56                   push esi
// 00813621  8d4c2418             lea ecx, [esp + 0x18]
// 00813625  e8e6bcfeff           call 0x7ff310
// 0081362a  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0081362e  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00813632  8b2ddcbb9e00         mov ebp, dword ptr [0x9ebbdc]
// 00813638  8944241c             mov dword ptr [esp + 0x1c], eax
// 0081363c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00813640  83e820               sub eax, 0x20
// 00813643  89442420             mov dword ptr [esp + 0x20], eax
// 00813647  83c0be               add eax, -0x42
// 0081364a  f686ac00000040       test byte ptr [esi + 0xac], 0x40
// 00813651  894c2414             mov dword ptr [esp + 0x14], ecx
// 00813655  89442418             mov dword ptr [esp + 0x18], eax
// 00813659  746b                 je 0x8136c6
// 0081365b  6a03                 push 3
// 0081365d  6a03                 push 3
// 0081365f  8d54241c             lea edx, [esp + 0x1c]
// 00813663  52                   push edx
// 00813664  ffd5                 call ebp
// 00813666  e8b504fdff           call 0x7e3b20
// 0081366b  6a15                 push 0x15
// 0081366d  8bc8                 mov ecx, eax
// 0081366f  e83cfcfcff           call 0x7e32b0
// 00813674  8bf8                 mov edi, eax
// 00813676  e8a504fdff           call 0x7e3b20
// 0081367b  57                   push edi
// 0081367c  6a14                 push 0x14
// 0081367e  8bc8                 mov ecx, eax
// 00813680  e82bfcfcff           call 0x7e32b0
// 00813685  50                   push eax
// 00813686  8d44241c             lea eax, [esp + 0x1c]
// 0081368a  50                   push eax
// 0081368b  8d4c2460             lea ecx, [esp + 0x60]
// 0081368f  e8a450f9ff           call 0x7a8738
// 00813694  6afd                 push -3
// 00813696  6afd                 push -3
// 00813698  8d4c241c             lea ecx, [esp + 0x1c]
// 0081369c  51                   push ecx
// 0081369d  ffd5                 call ebp
// 0081369f  e87c04fdff           call 0x7e3b20
// 008136a4  6a14                 push 0x14
// 008136a6  8bc8                 mov ecx, eax
// 008136a8  e803fcfcff           call 0x7e32b0
// 008136ad  8bf8                 mov edi, eax
// 008136af  e86c04fdff           call 0x7e3b20
// 008136b4  57                   push edi
// 008136b5  6a10                 push 0x10
// 008136b7  8bc8                 mov ecx, eax
// 008136b9  e8f2fbfcff           call 0x7e32b0
// 008136be  50                   push eax
// 008136bf  8d54241c             lea edx, [esp + 0x1c]
// 008136c3  52                   push edx
// 008136c4  eb25                 jmp 0x8136eb
// 008136c6  e85504fdff           call 0x7e3b20
// 008136cb  6a06                 push 6
// 008136cd  8bc8                 mov ecx, eax
// 008136cf  e8dcfbfcff           call 0x7e32b0
// 008136d4  8bf8                 mov edi, eax
// 008136d6  e84504fdff           call 0x7e3b20
// 008136db  57                   push edi
// 008136dc  6a06                 push 6
// 008136de  8bc8                 mov ecx, eax
// 008136e0  e8cbfbfcff           call 0x7e32b0
// 008136e5  50                   push eax
// 008136e6  8d44241c             lea eax, [esp + 0x1c]
// 008136ea  50                   push eax
// 008136eb  8d4c2460             lea ecx, [esp + 0x60]
// 008136ef  e84450f9ff           call 0x7a8738
// 008136f4  8b442418             mov eax, dword ptr [esp + 0x18]
// 008136f8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008136fc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00813700  89442428             mov dword ptr [esp + 0x28], eax
// 00813704  894c2424             mov dword ptr [esp + 0x24], ecx
// 00813708  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0081370c  83c0ea               add eax, -0x16
// 0081370f  894c2430             mov dword ptr [esp + 0x30], ecx
// 00813713  89442428             mov dword ptr [esp + 0x28], eax
// 00813717  83c016               add eax, 0x16
// 0081371a  8d4c2410             lea ecx, [esp + 0x10]
// 0081371e  8954242c             mov dword ptr [esp + 0x2c], edx
// 00813722  89442430             mov dword ptr [esp + 0x30], eax
// 00813726  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 0081372c  c68424b400000002     mov byte ptr [esp + 0xb4], 2
// 00813734  e877f10000           call 0x8228b0
// 00813739  8b10                 mov edx, dword ptr [eax]
// 0081373b  8b5208               mov edx, dword ptr [edx + 8]
// 0081373e  6888240000           push 0x2488
// 00813743  8d4c2414             lea ecx, [esp + 0x14]
// 00813747  51                   push ecx
// 00813748  8bc8                 mov ecx, eax
// 0081374a  ffd2                 call edx
// 0081374c  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00813750  6a25                 push 0x25
// 00813752  8d442428             lea eax, [esp + 0x28]
// 00813756  50                   push eax
// 00813757  8d4c2418             lea ecx, [esp + 0x18]
// 0081375b  83c770               add edi, 0x70
// 0081375e  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00813764  50                   push eax
// 00813765  8d4c241c             lea ecx, [esp + 0x1c]
// 00813769  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 0081376f  8b17                 mov edx, dword ptr [edi]
// 00813771  50                   push eax
// 00813772  8d4c2464             lea ecx, [esp + 0x64]
// 00813776  ffd2                 call edx
// 00813778  8b442414             mov eax, dword ptr [esp + 0x14]
// 0081377c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00813780  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00813784  89442424             mov dword ptr [esp + 0x24], eax
// 00813788  8b442420             mov eax, dword ptr [esp + 0x20]
// 0081378c  894c2428             mov dword ptr [esp + 0x28], ecx
// 00813790  89442430             mov dword ptr [esp + 0x30], eax
// 00813794  89442428             mov dword ptr [esp + 0x28], eax
// 00813798  83c016               add eax, 0x16
// 0081379b  8954242c             mov dword ptr [esp + 0x2c], edx
// 0081379f  89442430             mov dword ptr [esp + 0x30], eax
// 008137a3  e808f10000           call 0x8228b0
// 008137a8  8b10                 mov edx, dword ptr [eax]
// 008137aa  8b5208               mov edx, dword ptr [edx + 8]
// 008137ad  6889240000           push 0x2489
// 008137b2  8d4c2414             lea ecx, [esp + 0x14]
// 008137b6  51                   push ecx
// 008137b7  8bc8                 mov ecx, eax
// 008137b9  ffd2                 call edx
// 008137bb  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008137bf  6a25                 push 0x25
// 008137c1  8d442428             lea eax, [esp + 0x28]
// 008137c5  50                   push eax
// 008137c6  8d4c2418             lea ecx, [esp + 0x18]
// 008137ca  83c770               add edi, 0x70
// 008137cd  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 008137d3  50                   push eax
// 008137d4  8d4c241c             lea ecx, [esp + 0x1c]
// 008137d8  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 008137de  8b17                 mov edx, dword ptr [edi]
// 008137e0  50                   push eax
// 008137e1  8d4c2464             lea ecx, [esp + 0x64]
// 008137e5  ffd2                 call edx
// 008137e7  6aff                 push -1
// 008137e9  6aff                 push -1
// 008137eb  8d44241c             lea eax, [esp + 0x1c]
// 008137ef  50                   push eax
// 008137f0  ffd5                 call ebp
// 008137f2  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008137f6  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008137fa  8bc5                 mov eax, ebp
// 008137fc  2bc1                 sub eax, ecx
// 008137fe  99                   cdq 
// 008137ff  2bc2                 sub eax, edx
// 00813801  8b542414             mov edx, dword ptr [esp + 0x14]
// 00813805  899604010000         mov dword ptr [esi + 0x104], edx
// 0081380b  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0081380f  8bf8                 mov edi, eax
// 00813811  8d8604010000         lea eax, [esi + 0x104]
// 00813817  894804               mov dword ptr [eax + 4], ecx
// 0081381a  895008               mov dword ptr [eax + 8], edx
// 0081381d  8b9624010000         mov edx, dword ptr [esi + 0x124]
// 00813823  d1ff                 sar edi, 1
// 00813825  03cf                 add ecx, edi
// 00813827  89680c               mov dword ptr [eax + 0xc], ebp
// 0081382a  52                   push edx
// 0081382b  898e10010000         mov dword ptr [esi + 0x110], ecx
// 00813831  50                   push eax
// 00813832  8d4c245c             lea ecx, [esp + 0x5c]
// 00813836  e8034ff9ff           call 0x7a873e
// 0081383b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081383f  8b542418             mov edx, dword ptr [esp + 0x18]
// 00813843  898e14010000         mov dword ptr [esi + 0x114], ecx
// 00813849  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0081384d  8d8614010000         lea eax, [esi + 0x114]
// 00813853  895004               mov dword ptr [eax + 4], edx
// 00813856  8b9628010000         mov edx, dword ptr [esi + 0x128]
// 0081385c  894808               mov dword ptr [eax + 8], ecx
// 0081385f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00813863  89480c               mov dword ptr [eax + 0xc], ecx
// 00813866  2bcf                 sub ecx, edi
// 00813868  52                   push edx
// 00813869  898e18010000         mov dword ptr [esi + 0x118], ecx
// 0081386f  50                   push eax
// 00813870  8d4c245c             lea ecx, [esp + 0x5c]
// 00813874  e8c54ef9ff           call 0x7a873e
// 00813879  8d4c2410             lea ecx, [esp + 0x10]
// 0081387d  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00813883  8d4c2444             lea ecx, [esp + 0x44]
// 00813887  c68424b400000000     mov byte ptr [esp + 0xb4], 0
// 0081388f  e88cbefeff           call 0x7ff720
// 00813894  8d4c2454             lea ecx, [esp + 0x54]
// 00813898  c78424b4000000ffffffff mov dword ptr [esp + 0xb4], 0xffffffff
// 008138a3  e8824af9ff           call 0x7a832a
// 008138a8  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008138af  64890d00000000       mov dword ptr fs:[0], ecx
// 008138b6  59                   pop ecx
// 008138b7  5f                   pop edi
// 008138b8  5e                   pop esi
// 008138b9  5d                   pop ebp
// 008138ba  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 008138c1  33cc                 xor ecx, esp
// 008138c3  e80c5cf9ff           call 0x7a94d4
// 008138c8  81c4a8000000         add esp, 0xa8
// 008138ce  c3                   ret 
// copied from an identical function in another client (function ?OnPaint@CXTColorDialog@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTColorDialog.cpp