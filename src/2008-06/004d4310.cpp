// roc 2008-06 004d4310  unit: seg_004d0000  size: 5065 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004d4310
//
// 004d4310  83ec44               sub esp, 0x44
// 004d4313  53                   push ebx
// 004d4314  55                   push ebp
// 004d4315  8d4174               lea eax, [ecx + 0x74]
// 004d4318  56                   push esi
// 004d4319  8b742458             mov esi, dword ptr [esp + 0x58]
// 004d431d  57                   push edi
// 004d431e  b910000000           mov ecx, 0x10
// 004d4323  8bf8                 mov edi, eax
// 004d4325  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004d4327  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004d432b  8b5104               mov edx, dword ptr [ecx + 4]
// 004d432e  8b38                 mov edi, dword ptr [eax]
// 004d4330  8b5908               mov ebx, dword ptr [ecx + 8]
// 004d4333  8b31                 mov esi, dword ptr [ecx]
// 004d4335  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 004d4338  89542458             mov dword ptr [esp + 0x58], edx
// 004d433c  33eb                 xor ebp, ebx
// 004d433e  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d4342  8bd7                 mov edx, edi
// 004d4344  33690c               xor ebp, dword ptr [ecx + 0xc]
// 004d4347  c1ca08               ror edx, 8
// 004d434a  81e200ff00ff         and edx, 0xff00ff00
// 004d4350  c1c708               rol edi, 8
// 004d4353  81e7ff00ff00         and edi, 0xff00ff
// 004d4359  0bd7                 or edx, edi
// 004d435b  8954244c             mov dword ptr [esp + 0x4c], edx
// 004d435f  8bfe                 mov edi, esi
// 004d4361  c1c705               rol edi, 5
// 004d4364  03fa                 add edi, edx
// 004d4366  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004d4369  03ef                 add ebp, edi
// 004d436b  8b7804               mov edi, dword ptr [eax + 4]
// 004d436e  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004d4375  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d4379  c1ca02               ror edx, 2
// 004d437c  8bea                 mov ebp, edx
// 004d437e  8bd7                 mov edx, edi
// 004d4380  c1ca08               ror edx, 8
// 004d4383  81e200ff00ff         and edx, 0xff00ff00
// 004d4389  c1c708               rol edi, 8
// 004d438c  81e7ff00ff00         and edi, 0xff00ff
// 004d4392  0bd7                 or edx, edi
// 004d4394  8b7908               mov edi, dword ptr [ecx + 8]
// 004d4397  33fd                 xor edi, ebp
// 004d4399  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d439d  c1c305               rol ebx, 5
// 004d43a0  03da                 add ebx, edx
// 004d43a2  23fe                 and edi, esi
// 004d43a4  337908               xor edi, dword ptr [ecx + 8]
// 004d43a7  89542450             mov dword ptr [esp + 0x50], edx
// 004d43ab  03fb                 add edi, ebx
// 004d43ad  8bdf                 mov ebx, edi
// 004d43af  8b790c               mov edi, dword ptr [ecx + 0xc]
// 004d43b2  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 004d43b9  8b5808               mov ebx, dword ptr [eax + 8]
// 004d43bc  8bd3                 mov edx, ebx
// 004d43be  c1ce02               ror esi, 2
// 004d43c1  c1ca08               ror edx, 8
// 004d43c4  81e200ff00ff         and edx, 0xff00ff00
// 004d43ca  c1c308               rol ebx, 8
// 004d43cd  81e3ff00ff00         and ebx, 0xff00ff
// 004d43d3  0bd3                 or edx, ebx
// 004d43d5  896c2458             mov dword ptr [esp + 0x58], ebp
// 004d43d9  33ee                 xor ebp, esi
// 004d43db  236c2418             and ebp, dword ptr [esp + 0x18]
// 004d43df  8bdf                 mov ebx, edi
// 004d43e1  336c2458             xor ebp, dword ptr [esp + 0x58]
// 004d43e5  c1c305               rol ebx, 5
// 004d43e8  03da                 add ebx, edx
// 004d43ea  89542434             mov dword ptr [esp + 0x34], edx
// 004d43ee  8b5108               mov edx, dword ptr [ecx + 8]
// 004d43f1  03eb                 add ebp, ebx
// 004d43f3  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004d43fa  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d43fe  c1ca02               ror edx, 2
// 004d4401  8bea                 mov ebp, edx
// 004d4403  8974245c             mov dword ptr [esp + 0x5c], esi
// 004d4407  8b700c               mov esi, dword ptr [eax + 0xc]
// 004d440a  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d440e  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d4412  8bd6                 mov edx, esi
// 004d4414  c1ca08               ror edx, 8
// 004d4417  81e200ff00ff         and edx, 0xff00ff00
// 004d441d  c1c608               rol esi, 8
// 004d4420  81e6ff00ff00         and esi, 0xff00ff
// 004d4426  0bd6                 or edx, esi
// 004d4428  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004d442c  33ee                 xor ebp, esi
// 004d442e  23ef                 and ebp, edi
// 004d4430  c1c305               rol ebx, 5
// 004d4433  03da                 add ebx, edx
// 004d4435  33ee                 xor ebp, esi
// 004d4437  03eb                 add ebp, ebx
// 004d4439  8b5810               mov ebx, dword ptr [eax + 0x10]
// 004d443c  89542438             mov dword ptr [esp + 0x38], edx
// 004d4440  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d4444  8db42a9979825a       lea esi, [edx + ebp + 0x5a827999]
// 004d444b  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d444f  c1cf02               ror edi, 2
// 004d4452  33ef                 xor ebp, edi
// 004d4454  236c2414             and ebp, dword ptr [esp + 0x14]
// 004d4458  8bd3                 mov edx, ebx
// 004d445a  336c2418             xor ebp, dword ptr [esp + 0x18]
// 004d445e  c1ca08               ror edx, 8
// 004d4461  81e200ff00ff         and edx, 0xff00ff00
// 004d4467  c1c308               rol ebx, 8
// 004d446a  81e3ff00ff00         and ebx, 0xff00ff
// 004d4470  0bd3                 or edx, ebx
// 004d4472  8954243c             mov dword ptr [esp + 0x3c], edx
// 004d4476  8bde                 mov ebx, esi
// 004d4478  c1c305               rol ebx, 5
// 004d447b  03da                 add ebx, edx
// 004d447d  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d4481  03eb                 add ebp, ebx
// 004d4483  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004d448a  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d448e  c1ca02               ror edx, 2
// 004d4491  8bea                 mov ebp, edx
// 004d4493  897c2410             mov dword ptr [esp + 0x10], edi
// 004d4497  8b7814               mov edi, dword ptr [eax + 0x14]
// 004d449a  8bd7                 mov edx, edi
// 004d449c  c1ca08               ror edx, 8
// 004d449f  81e200ff00ff         and edx, 0xff00ff00
// 004d44a5  c1c708               rol edi, 8
// 004d44a8  81e7ff00ff00         and edi, 0xff00ff
// 004d44ae  0bd7                 or edx, edi
// 004d44b0  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d44b4  33fd                 xor edi, ebp
// 004d44b6  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d44ba  c1c305               rol ebx, 5
// 004d44bd  03da                 add ebx, edx
// 004d44bf  23fe                 and edi, esi
// 004d44c1  337c2410             xor edi, dword ptr [esp + 0x10]
// 004d44c5  89542440             mov dword ptr [esp + 0x40], edx
// 004d44c9  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d44cd  03fb                 add edi, ebx
// 004d44cf  8b5818               mov ebx, dword ptr [eax + 0x18]
// 004d44d2  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 004d44d9  8bd3                 mov edx, ebx
// 004d44db  c1ce02               ror esi, 2
// 004d44de  c1ca08               ror edx, 8
// 004d44e1  81e200ff00ff         and edx, 0xff00ff00
// 004d44e7  c1c308               rol ebx, 8
// 004d44ea  81e3ff00ff00         and ebx, 0xff00ff
// 004d44f0  0bd3                 or edx, ebx
// 004d44f2  896c2414             mov dword ptr [esp + 0x14], ebp
// 004d44f6  33ee                 xor ebp, esi
// 004d44f8  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004d44fc  8bdf                 mov ebx, edi
// 004d44fe  336c2414             xor ebp, dword ptr [esp + 0x14]
// 004d4502  c1c305               rol ebx, 5
// 004d4505  03da                 add ebx, edx
// 004d4507  89542444             mov dword ptr [esp + 0x44], edx
// 004d450b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d450f  03eb                 add ebp, ebx
// 004d4511  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004d4518  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d451c  c1ca02               ror edx, 2
// 004d451f  89742458             mov dword ptr [esp + 0x58], esi
// 004d4523  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d4527  8bea                 mov ebp, edx
// 004d4529  8b701c               mov esi, dword ptr [eax + 0x1c]
// 004d452c  8bd6                 mov edx, esi
// 004d452e  c1ca08               ror edx, 8
// 004d4531  81e200ff00ff         and edx, 0xff00ff00
// 004d4537  c1c608               rol esi, 8
// 004d453a  81e6ff00ff00         and esi, 0xff00ff
// 004d4540  0bd6                 or edx, esi
// 004d4542  8b742458             mov esi, dword ptr [esp + 0x58]
// 004d4546  c1c305               rol ebx, 5
// 004d4549  03da                 add ebx, edx
// 004d454b  33f5                 xor esi, ebp
// 004d454d  23f7                 and esi, edi
// 004d454f  33742458             xor esi, dword ptr [esp + 0x58]
// 004d4553  89542448             mov dword ptr [esp + 0x48], edx
// 004d4557  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d455b  03f3                 add esi, ebx
// 004d455d  8b5820               mov ebx, dword ptr [eax + 0x20]
// 004d4560  c1cf02               ror edi, 2
// 004d4563  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 004d456a  8bd3                 mov edx, ebx
// 004d456c  c1ca08               ror edx, 8
// 004d456f  81e200ff00ff         and edx, 0xff00ff00
// 004d4575  c1c308               rol ebx, 8
// 004d4578  81e3ff00ff00         and ebx, 0xff00ff
// 004d457e  0bd3                 or edx, ebx
// 004d4580  897c2418             mov dword ptr [esp + 0x18], edi
// 004d4584  33fd                 xor edi, ebp
// 004d4586  237c2410             and edi, dword ptr [esp + 0x10]
// 004d458a  89542420             mov dword ptr [esp + 0x20], edx
// 004d458e  33fd                 xor edi, ebp
// 004d4590  8bde                 mov ebx, esi
// 004d4592  c1c305               rol ebx, 5
// 004d4595  03da                 add ebx, edx
// 004d4597  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d459b  03fb                 add edi, ebx
// 004d459d  8d9c3a9979825a       lea ebx, [edx + edi + 0x5a827999]
// 004d45a4  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d45a8  8b7824               mov edi, dword ptr [eax + 0x24]
// 004d45ab  c1ca02               ror edx, 2
// 004d45ae  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004d45b2  8bea                 mov ebp, edx
// 004d45b4  8bd7                 mov edx, edi
// 004d45b6  c1ca08               ror edx, 8
// 004d45b9  81e200ff00ff         and edx, 0xff00ff00
// 004d45bf  c1c708               rol edi, 8
// 004d45c2  81e7ff00ff00         and edi, 0xff00ff
// 004d45c8  0bd7                 or edx, edi
// 004d45ca  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d45ce  33fd                 xor edi, ebp
// 004d45d0  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d45d4  c1c305               rol ebx, 5
// 004d45d7  03da                 add ebx, edx
// 004d45d9  23fe                 and edi, esi
// 004d45db  337c2418             xor edi, dword ptr [esp + 0x18]
// 004d45df  89542424             mov dword ptr [esp + 0x24], edx
// 004d45e3  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d45e7  03fb                 add edi, ebx
// 004d45e9  8b5828               mov ebx, dword ptr [eax + 0x28]
// 004d45ec  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 004d45f3  8bd3                 mov edx, ebx
// 004d45f5  c1ce02               ror esi, 2
// 004d45f8  c1ca08               ror edx, 8
// 004d45fb  81e200ff00ff         and edx, 0xff00ff00
// 004d4601  c1c308               rol ebx, 8
// 004d4604  81e3ff00ff00         and ebx, 0xff00ff
// 004d460a  0bd3                 or edx, ebx
// 004d460c  896c2410             mov dword ptr [esp + 0x10], ebp
// 004d4610  33ee                 xor ebp, esi
// 004d4612  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d4616  8bdf                 mov ebx, edi
// 004d4618  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004d461c  c1c305               rol ebx, 5
// 004d461f  03da                 add ebx, edx
// 004d4621  89542428             mov dword ptr [esp + 0x28], edx
// 004d4625  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d4629  03eb                 add ebp, ebx
// 004d462b  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004d4632  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d4636  89742414             mov dword ptr [esp + 0x14], esi
// 004d463a  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d463e  c1ca02               ror edx, 2
// 004d4641  8b702c               mov esi, dword ptr [eax + 0x2c]
// 004d4644  8bea                 mov ebp, edx
// 004d4646  8bd6                 mov edx, esi
// 004d4648  c1ca08               ror edx, 8
// 004d464b  81e200ff00ff         and edx, 0xff00ff00
// 004d4651  c1c608               rol esi, 8
// 004d4654  81e6ff00ff00         and esi, 0xff00ff
// 004d465a  0bd6                 or edx, esi
// 004d465c  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d4660  33f5                 xor esi, ebp
// 004d4662  23f7                 and esi, edi
// 004d4664  33742414             xor esi, dword ptr [esp + 0x14]
// 004d4668  c1c305               rol ebx, 5
// 004d466b  03da                 add ebx, edx
// 004d466d  03f3                 add esi, ebx
// 004d466f  8b5830               mov ebx, dword ptr [eax + 0x30]
// 004d4672  c1cf02               ror edi, 2
// 004d4675  8954242c             mov dword ptr [esp + 0x2c], edx
// 004d4679  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d467d  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 004d4684  8bd3                 mov edx, ebx
// 004d4686  c1ca08               ror edx, 8
// 004d4689  81e200ff00ff         and edx, 0xff00ff00
// 004d468f  c1c308               rol ebx, 8
// 004d4692  81e3ff00ff00         and ebx, 0xff00ff
// 004d4698  0bd3                 or edx, ebx
// 004d469a  896c2458             mov dword ptr [esp + 0x58], ebp
// 004d469e  33ef                 xor ebp, edi
// 004d46a0  236c2418             and ebp, dword ptr [esp + 0x18]
// 004d46a4  8bde                 mov ebx, esi
// 004d46a6  336c2458             xor ebp, dword ptr [esp + 0x58]
// 004d46aa  c1c305               rol ebx, 5
// 004d46ad  03da                 add ebx, edx
// 004d46af  03eb                 add ebp, ebx
// 004d46b1  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d46b5  8b7834               mov edi, dword ptr [eax + 0x34]
// 004d46b8  89542430             mov dword ptr [esp + 0x30], edx
// 004d46bc  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d46c0  8dac2a9979825a       lea ebp, [edx + ebp + 0x5a827999]
// 004d46c7  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d46cb  c1ca02               ror edx, 2
// 004d46ce  8bda                 mov ebx, edx
// 004d46d0  8bd7                 mov edx, edi
// 004d46d2  c1ca08               ror edx, 8
// 004d46d5  81e200ff00ff         and edx, 0xff00ff00
// 004d46db  c1c708               rol edi, 8
// 004d46de  81e7ff00ff00         and edi, 0xff00ff
// 004d46e4  0bd7                 or edx, edi
// 004d46e6  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d46ea  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d46ee  33df                 xor ebx, edi
// 004d46f0  23de                 and ebx, esi
// 004d46f2  33df                 xor ebx, edi
// 004d46f4  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d46f8  896c2414             mov dword ptr [esp + 0x14], ebp
// 004d46fc  c1c505               rol ebp, 5
// 004d46ff  03ea                 add ebp, edx
// 004d4701  03dd                 add ebx, ebp
// 004d4703  8d9c1f9979825a       lea ebx, [edi + ebx + 0x5a827999]
// 004d470a  8b7838               mov edi, dword ptr [eax + 0x38]
// 004d470d  c1ce02               ror esi, 2
// 004d4710  8bee                 mov ebp, esi
// 004d4712  8bf7                 mov esi, edi
// 004d4714  c1ce08               ror esi, 8
// 004d4717  81e600ff00ff         and esi, 0xff00ff00
// 004d471d  c1c708               rol edi, 8
// 004d4720  81e7ff00ff00         and edi, 0xff00ff
// 004d4726  0bf7                 or esi, edi
// 004d4728  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d472c  33fd                 xor edi, ebp
// 004d472e  237c2414             and edi, dword ptr [esp + 0x14]
// 004d4732  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d4736  337c2418             xor edi, dword ptr [esp + 0x18]
// 004d473a  c1c305               rol ebx, 5
// 004d473d  03de                 add ebx, esi
// 004d473f  03fb                 add edi, ebx
// 004d4741  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004d4745  896c2410             mov dword ptr [esp + 0x10], ebp
// 004d4749  8dac3b9979825a       lea ebp, [ebx + edi + 0x5a827999]
// 004d4750  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d4754  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004d4758  c1cf02               ror edi, 2
// 004d475b  897c2414             mov dword ptr [esp + 0x14], edi
// 004d475f  8b783c               mov edi, dword ptr [eax + 0x3c]
// 004d4762  8bdf                 mov ebx, edi
// 004d4764  c1cb08               ror ebx, 8
// 004d4767  81e300ff00ff         and ebx, 0xff00ff00
// 004d476d  c1c708               rol edi, 8
// 004d4770  81e7ff00ff00         and edi, 0xff00ff
// 004d4776  0bdf                 or ebx, edi
// 004d4778  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d477c  337c2414             xor edi, dword ptr [esp + 0x14]
// 004d4780  c1c505               rol ebp, 5
// 004d4783  237c2458             and edi, dword ptr [esp + 0x58]
// 004d4787  03eb                 add ebp, ebx
// 004d4789  337c2410             xor edi, dword ptr [esp + 0x10]
// 004d478d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004d4791  03fd                 add edi, ebp
// 004d4793  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d4797  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004d479e  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d47a2  c1cf02               ror edi, 2
// 004d47a5  8bef                 mov ebp, edi
// 004d47a7  8bfa                 mov edi, edx
// 004d47a9  337c2420             xor edi, dword ptr [esp + 0x20]
// 004d47ad  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d47b1  337c2434             xor edi, dword ptr [esp + 0x34]
// 004d47b5  896c2458             mov dword ptr [esp + 0x58], ebp
// 004d47b9  337c244c             xor edi, dword ptr [esp + 0x4c]
// 004d47bd  d1c7                 rol edi, 1
// 004d47bf  897c244c             mov dword ptr [esp + 0x4c], edi
// 004d47c3  8938                 mov dword ptr [eax], edi
// 004d47c5  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d47c9  33fd                 xor edi, ebp
// 004d47cb  237c245c             and edi, dword ptr [esp + 0x5c]
// 004d47cf  c1c305               rol ebx, 5
// 004d47d2  337c2414             xor edi, dword ptr [esp + 0x14]
// 004d47d6  035c244c             add ebx, dword ptr [esp + 0x4c]
// 004d47da  03fb                 add edi, ebx
// 004d47dc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d47e0  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004d47e7  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d47eb  c1cf02               ror edi, 2
// 004d47ee  8bef                 mov ebp, edi
// 004d47f0  8bfe                 mov edi, esi
// 004d47f2  337c2424             xor edi, dword ptr [esp + 0x24]
// 004d47f6  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d47fa  337c2438             xor edi, dword ptr [esp + 0x38]
// 004d47fe  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004d4802  337c2450             xor edi, dword ptr [esp + 0x50]
// 004d4806  d1c7                 rol edi, 1
// 004d4808  897c2450             mov dword ptr [esp + 0x50], edi
// 004d480c  897804               mov dword ptr [eax + 4], edi
// 004d480f  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d4813  33fd                 xor edi, ebp
// 004d4815  237c2418             and edi, dword ptr [esp + 0x18]
// 004d4819  c1c305               rol ebx, 5
// 004d481c  337c2458             xor edi, dword ptr [esp + 0x58]
// 004d4820  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d4824  03fb                 add edi, ebx
// 004d4826  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004d482a  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004d4831  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d4835  c1cf02               ror edi, 2
// 004d4838  8bef                 mov ebp, edi
// 004d483a  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d483e  337c2428             xor edi, dword ptr [esp + 0x28]
// 004d4842  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d4846  337c243c             xor edi, dword ptr [esp + 0x3c]
// 004d484a  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004d484e  337c2434             xor edi, dword ptr [esp + 0x34]
// 004d4852  236c2410             and ebp, dword ptr [esp + 0x10]
// 004d4856  d1c7                 rol edi, 1
// 004d4858  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004d485c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d4860  c1c305               rol ebx, 5
// 004d4863  03df                 add ebx, edi
// 004d4865  897808               mov dword ptr [eax + 8], edi
// 004d4868  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d486c  03eb                 add ebp, ebx
// 004d486e  8d9c2f9979825a       lea ebx, [edi + ebp + 0x5a827999]
// 004d4875  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d4879  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d487d  c1cf02               ror edi, 2
// 004d4880  8bef                 mov ebp, edi
// 004d4882  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004d4886  337c2440             xor edi, dword ptr [esp + 0x40]
// 004d488a  896c2410             mov dword ptr [esp + 0x10], ebp
// 004d488e  337c2438             xor edi, dword ptr [esp + 0x38]
// 004d4892  3338                 xor edi, dword ptr [eax]
// 004d4894  d1c7                 rol edi, 1
// 004d4896  897c2450             mov dword ptr [esp + 0x50], edi
// 004d489a  89780c               mov dword ptr [eax + 0xc], edi
// 004d489d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d48a1  33fd                 xor edi, ebp
// 004d48a3  237c2414             and edi, dword ptr [esp + 0x14]
// 004d48a7  c1c305               rol ebx, 5
// 004d48aa  337c2418             xor edi, dword ptr [esp + 0x18]
// 004d48ae  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d48b2  03fb                 add edi, ebx
// 004d48b4  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004d48b8  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004d48bf  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d48c3  c1cf02               ror edi, 2
// 004d48c6  8bef                 mov ebp, edi
// 004d48c8  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004d48cc  337c2444             xor edi, dword ptr [esp + 0x44]
// 004d48d0  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d48d4  337c243c             xor edi, dword ptr [esp + 0x3c]
// 004d48d8  896c2414             mov dword ptr [esp + 0x14], ebp
// 004d48dc  337804               xor edi, dword ptr [eax + 4]
// 004d48df  d1c7                 rol edi, 1
// 004d48e1  897c2450             mov dword ptr [esp + 0x50], edi
// 004d48e5  897810               mov dword ptr [eax + 0x10], edi
// 004d48e8  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d48ec  33fd                 xor edi, ebp
// 004d48ee  337c2458             xor edi, dword ptr [esp + 0x58]
// 004d48f2  c1c305               rol ebx, 5
// 004d48f5  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d48f9  03fb                 add edi, ebx
// 004d48fb  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d48ff  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004d4906  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d490a  c1cf02               ror edi, 2
// 004d490d  8bef                 mov ebp, edi
// 004d490f  8bfa                 mov edi, edx
// 004d4911  337c2448             xor edi, dword ptr [esp + 0x48]
// 004d4915  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d4919  337c2440             xor edi, dword ptr [esp + 0x40]
// 004d491d  896c2458             mov dword ptr [esp + 0x58], ebp
// 004d4921  337808               xor edi, dword ptr [eax + 8]
// 004d4924  d1c7                 rol edi, 1
// 004d4926  897c2450             mov dword ptr [esp + 0x50], edi
// 004d492a  897814               mov dword ptr [eax + 0x14], edi
// 004d492d  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d4931  33fd                 xor edi, ebp
// 004d4933  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004d4937  c1c305               rol ebx, 5
// 004d493a  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d493e  03fb                 add edi, ebx
// 004d4940  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d4944  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004d494b  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d494f  c1cf02               ror edi, 2
// 004d4952  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d4956  8bfe                 mov edi, esi
// 004d4958  337c2420             xor edi, dword ptr [esp + 0x20]
// 004d495c  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d4960  337c2444             xor edi, dword ptr [esp + 0x44]
// 004d4964  33780c               xor edi, dword ptr [eax + 0xc]
// 004d4967  d1c7                 rol edi, 1
// 004d4969  897c2450             mov dword ptr [esp + 0x50], edi
// 004d496d  897818               mov dword ptr [eax + 0x18], edi
// 004d4970  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d4974  c1c305               rol ebx, 5
// 004d4977  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d497b  33fd                 xor edi, ebp
// 004d497d  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004d4981  03fb                 add edi, ebx
// 004d4983  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004d4987  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004d498e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d4992  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d4996  c1cf02               ror edi, 2
// 004d4999  8bef                 mov ebp, edi
// 004d499b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d499f  337c2424             xor edi, dword ptr [esp + 0x24]
// 004d49a3  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d49a7  337c2448             xor edi, dword ptr [esp + 0x48]
// 004d49ab  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004d49af  337810               xor edi, dword ptr [eax + 0x10]
// 004d49b2  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004d49b6  d1c7                 rol edi, 1
// 004d49b8  89781c               mov dword ptr [eax + 0x1c], edi
// 004d49bb  c1c305               rol ebx, 5
// 004d49be  03df                 add ebx, edi
// 004d49c0  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d49c4  03eb                 add ebp, ebx
// 004d49c6  8d9c2fa1ebd96e       lea ebx, [edi + ebp + 0x6ed9eba1]
// 004d49cd  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d49d1  c1cf02               ror edi, 2
// 004d49d4  8bef                 mov ebp, edi
// 004d49d6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004d49da  337c2420             xor edi, dword ptr [esp + 0x20]
// 004d49de  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d49e2  337814               xor edi, dword ptr [eax + 0x14]
// 004d49e5  896c2410             mov dword ptr [esp + 0x10], ebp
// 004d49e9  3338                 xor edi, dword ptr [eax]
// 004d49eb  d1c7                 rol edi, 1
// 004d49ed  897c2450             mov dword ptr [esp + 0x50], edi
// 004d49f1  897820               mov dword ptr [eax + 0x20], edi
// 004d49f4  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d49f8  33fd                 xor edi, ebp
// 004d49fa  337c2414             xor edi, dword ptr [esp + 0x14]
// 004d49fe  c1c305               rol ebx, 5
// 004d4a01  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d4a05  03fb                 add edi, ebx
// 004d4a07  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004d4a0b  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004d4a12  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d4a16  c1cf02               ror edi, 2
// 004d4a19  8bef                 mov ebp, edi
// 004d4a1b  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004d4a1f  337c2424             xor edi, dword ptr [esp + 0x24]
// 004d4a23  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d4a27  337804               xor edi, dword ptr [eax + 4]
// 004d4a2a  896c2414             mov dword ptr [esp + 0x14], ebp
// 004d4a2e  337818               xor edi, dword ptr [eax + 0x18]
// 004d4a31  d1c7                 rol edi, 1
// 004d4a33  897c2450             mov dword ptr [esp + 0x50], edi
// 004d4a37  897824               mov dword ptr [eax + 0x24], edi
// 004d4a3a  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d4a3e  33fd                 xor edi, ebp
// 004d4a40  337c2458             xor edi, dword ptr [esp + 0x58]
// 004d4a44  c1c305               rol ebx, 5
// 004d4a47  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d4a4b  03fb                 add edi, ebx
// 004d4a4d  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004d4a51  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004d4a58  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d4a5c  c1cf02               ror edi, 2
// 004d4a5f  8bef                 mov ebp, edi
// 004d4a61  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004d4a65  337c2428             xor edi, dword ptr [esp + 0x28]
// 004d4a69  895c2418             mov dword ptr [esp + 0x18], ebx
// 004d4a6d  33781c               xor edi, dword ptr [eax + 0x1c]
// 004d4a70  896c2458             mov dword ptr [esp + 0x58], ebp
// 004d4a74  337808               xor edi, dword ptr [eax + 8]
// 004d4a77  d1c7                 rol edi, 1
// 004d4a79  897c2450             mov dword ptr [esp + 0x50], edi
// 004d4a7d  897828               mov dword ptr [eax + 0x28], edi
// 004d4a80  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d4a84  33fd                 xor edi, ebp
// 004d4a86  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004d4a8a  c1c305               rol ebx, 5
// 004d4a8d  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d4a91  03fb                 add edi, ebx
// 004d4a93  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d4a97  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004d4a9e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d4aa2  c1cf02               ror edi, 2
// 004d4aa5  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d4aa9  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d4aad  8bfa                 mov edi, edx
// 004d4aaf  337c242c             xor edi, dword ptr [esp + 0x2c]
// 004d4ab3  33780c               xor edi, dword ptr [eax + 0xc]
// 004d4ab6  337820               xor edi, dword ptr [eax + 0x20]
// 004d4ab9  d1c7                 rol edi, 1
// 004d4abb  897c2450             mov dword ptr [esp + 0x50], edi
// 004d4abf  89782c               mov dword ptr [eax + 0x2c], edi
// 004d4ac2  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d4ac6  33fd                 xor edi, ebp
// 004d4ac8  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004d4acc  c1c305               rol ebx, 5
// 004d4acf  035c2450             add ebx, dword ptr [esp + 0x50]
// 004d4ad3  03fb                 add edi, ebx
// 004d4ad5  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004d4ad9  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004d4ae0  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d4ae4  c1cf02               ror edi, 2
// 004d4ae7  8bef                 mov ebp, edi
// 004d4ae9  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d4aed  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004d4af1  8bfe                 mov edi, esi
// 004d4af3  337c2430             xor edi, dword ptr [esp + 0x30]
// 004d4af7  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004d4afb  337824               xor edi, dword ptr [eax + 0x24]
// 004d4afe  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d4b02  337810               xor edi, dword ptr [eax + 0x10]
// 004d4b05  d1c7                 rol edi, 1
// 004d4b07  c1c305               rol ebx, 5
// 004d4b0a  03df                 add ebx, edi
// 004d4b0c  03eb                 add ebp, ebx
// 004d4b0e  897830               mov dword ptr [eax + 0x30], edi
// 004d4b11  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d4b15  8d9c2fa1ebd96e       lea ebx, [edi + ebp + 0x6ed9eba1]
// 004d4b1c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d4b20  c1cf02               ror edi, 2
// 004d4b23  8bef                 mov ebp, edi
// 004d4b25  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004d4b29  33fa                 xor edi, edx
// 004d4b2b  337814               xor edi, dword ptr [eax + 0x14]
// 004d4b2e  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d4b32  337828               xor edi, dword ptr [eax + 0x28]
// 004d4b35  33d5                 xor edx, ebp
// 004d4b37  89542450             mov dword ptr [esp + 0x50], edx
// 004d4b3b  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d4b3f  d1c7                 rol edi, 1
// 004d4b41  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d4b45  c1c305               rol ebx, 5
// 004d4b48  03df                 add ebx, edi
// 004d4b4a  896c2410             mov dword ptr [esp + 0x10], ebp
// 004d4b4e  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 004d4b52  33ea                 xor ebp, edx
// 004d4b54  03eb                 add ebp, ebx
// 004d4b56  c1ca02               ror edx, 2
// 004d4b59  8bda                 mov ebx, edx
// 004d4b5b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d4b5e  33d6                 xor edx, esi
// 004d4b60  3310                 xor edx, dword ptr [eax]
// 004d4b62  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d4b66  335018               xor edx, dword ptr [eax + 0x18]
// 004d4b69  33f3                 xor esi, ebx
// 004d4b6b  897834               mov dword ptr [eax + 0x34], edi
// 004d4b6e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d4b72  8dbc2fa1ebd96e       lea edi, [edi + ebp + 0x6ed9eba1]
// 004d4b79  d1c2                 rol edx, 1
// 004d4b7b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d4b7f  8bde                 mov ebx, esi
// 004d4b81  8b742458             mov esi, dword ptr [esp + 0x58]
// 004d4b85  8bef                 mov ebp, edi
// 004d4b87  c1c505               rol ebp, 5
// 004d4b8a  03ea                 add ebp, edx
// 004d4b8c  33de                 xor ebx, esi
// 004d4b8e  895038               mov dword ptr [eax + 0x38], edx
// 004d4b91  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d4b95  03dd                 add ebx, ebp
// 004d4b97  8dac1aa1ebd96e       lea ebp, [edx + ebx + 0x6ed9eba1]
// 004d4b9e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d4ba1  c1ce02               ror esi, 2
// 004d4ba4  3354241c             xor edx, dword ptr [esp + 0x1c]
// 004d4ba8  8bde                 mov ebx, esi
// 004d4baa  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d4bae  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d4bb2  335030               xor edx, dword ptr [eax + 0x30]
// 004d4bb5  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d4bb9  335004               xor edx, dword ptr [eax + 4]
// 004d4bbc  33f3                 xor esi, ebx
// 004d4bbe  d1c2                 rol edx, 1
// 004d4bc0  c1c505               rol ebp, 5
// 004d4bc3  03ea                 add ebp, edx
// 004d4bc5  89503c               mov dword ptr [eax + 0x3c], edx
// 004d4bc8  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d4bcc  33f7                 xor esi, edi
// 004d4bce  03f5                 add esi, ebp
// 004d4bd0  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 004d4bd7  8b5020               mov edx, dword ptr [eax + 0x20]
// 004d4bda  335008               xor edx, dword ptr [eax + 8]
// 004d4bdd  c1cf02               ror edi, 2
// 004d4be0  335034               xor edx, dword ptr [eax + 0x34]
// 004d4be3  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d4be7  3310                 xor edx, dword ptr [eax]
// 004d4be9  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d4bed  d1c2                 rol edx, 1
// 004d4bef  33fb                 xor edi, ebx
// 004d4bf1  8910                 mov dword ptr [eax], edx
// 004d4bf3  8bee                 mov ebp, esi
// 004d4bf5  c1c505               rol ebp, 5
// 004d4bf8  03ea                 add ebp, edx
// 004d4bfa  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d4bfe  8bdf                 mov ebx, edi
// 004d4c00  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d4c04  33df                 xor ebx, edi
// 004d4c06  03dd                 add ebx, ebp
// 004d4c08  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 004d4c0f  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d4c13  c1ca02               ror edx, 2
// 004d4c16  8bea                 mov ebp, edx
// 004d4c18  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d4c1b  335024               xor edx, dword ptr [eax + 0x24]
// 004d4c1e  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d4c22  335004               xor edx, dword ptr [eax + 4]
// 004d4c25  33ee                 xor ebp, esi
// 004d4c27  335038               xor edx, dword ptr [eax + 0x38]
// 004d4c2a  33ef                 xor ebp, edi
// 004d4c2c  d1c2                 rol edx, 1
// 004d4c2e  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d4c32  c1c305               rol ebx, 5
// 004d4c35  03da                 add ebx, edx
// 004d4c37  03eb                 add ebp, ebx
// 004d4c39  895004               mov dword ptr [eax + 4], edx
// 004d4c3c  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d4c40  8dbc2aa1ebd96e       lea edi, [edx + ebp + 0x6ed9eba1]
// 004d4c47  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d4c4a  335008               xor edx, dword ptr [eax + 8]
// 004d4c4d  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d4c51  335028               xor edx, dword ptr [eax + 0x28]
// 004d4c54  c1ce02               ror esi, 2
// 004d4c57  335010               xor edx, dword ptr [eax + 0x10]
// 004d4c5a  33ee                 xor ebp, esi
// 004d4c5c  d1c2                 rol edx, 1
// 004d4c5e  89742410             mov dword ptr [esp + 0x10], esi
// 004d4c62  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d4c66  33ee                 xor ebp, esi
// 004d4c68  895008               mov dword ptr [eax + 8], edx
// 004d4c6b  8bdf                 mov ebx, edi
// 004d4c6d  c1c305               rol ebx, 5
// 004d4c70  03da                 add ebx, edx
// 004d4c72  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d4c76  03eb                 add ebp, ebx
// 004d4c78  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 004d4c7f  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d4c82  33500c               xor edx, dword ptr [eax + 0xc]
// 004d4c85  c1ce02               ror esi, 2
// 004d4c88  335014               xor edx, dword ptr [eax + 0x14]
// 004d4c8b  8bde                 mov ebx, esi
// 004d4c8d  3310                 xor edx, dword ptr [eax]
// 004d4c8f  8b742410             mov esi, dword ptr [esp + 0x10]
// 004d4c93  d1c2                 rol edx, 1
// 004d4c95  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004d4c99  c1c505               rol ebp, 5
// 004d4c9c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d4ca0  89500c               mov dword ptr [eax + 0xc], edx
// 004d4ca3  33f3                 xor esi, ebx
// 004d4ca5  03ea                 add ebp, edx
// 004d4ca7  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d4cab  33f7                 xor esi, edi
// 004d4cad  03f5                 add esi, ebp
// 004d4caf  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 004d4cb6  8b5030               mov edx, dword ptr [eax + 0x30]
// 004d4cb9  335004               xor edx, dword ptr [eax + 4]
// 004d4cbc  c1cf02               ror edi, 2
// 004d4cbf  335018               xor edx, dword ptr [eax + 0x18]
// 004d4cc2  33df                 xor ebx, edi
// 004d4cc4  335010               xor edx, dword ptr [eax + 0x10]
// 004d4cc7  897c2458             mov dword ptr [esp + 0x58], edi
// 004d4ccb  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d4ccf  d1c2                 rol edx, 1
// 004d4cd1  895010               mov dword ptr [eax + 0x10], edx
// 004d4cd4  33df                 xor ebx, edi
// 004d4cd6  8bee                 mov ebp, esi
// 004d4cd8  c1c505               rol ebp, 5
// 004d4cdb  03ea                 add ebp, edx
// 004d4cdd  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d4ce1  03dd                 add ebx, ebp
// 004d4ce3  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 004d4cea  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d4ced  335008               xor edx, dword ptr [eax + 8]
// 004d4cf0  c1cf02               ror edi, 2
// 004d4cf3  335034               xor edx, dword ptr [eax + 0x34]
// 004d4cf6  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d4cfa  335014               xor edx, dword ptr [eax + 0x14]
// 004d4cfd  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d4d01  d1c2                 rol edx, 1
// 004d4d03  895014               mov dword ptr [eax + 0x14], edx
// 004d4d06  c1c305               rol ebx, 5
// 004d4d09  03da                 add ebx, edx
// 004d4d0b  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d4d0f  8bfe                 mov edi, esi
// 004d4d11  337c2458             xor edi, dword ptr [esp + 0x58]
// 004d4d15  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004d4d19  03fb                 add edi, ebx
// 004d4d1b  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 004d4d22  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d4d25  335020               xor edx, dword ptr [eax + 0x20]
// 004d4d28  c1ce02               ror esi, 2
// 004d4d2b  335038               xor edx, dword ptr [eax + 0x38]
// 004d4d2e  89742418             mov dword ptr [esp + 0x18], esi
// 004d4d32  335018               xor edx, dword ptr [eax + 0x18]
// 004d4d35  33742410             xor esi, dword ptr [esp + 0x10]
// 004d4d39  d1c2                 rol edx, 1
// 004d4d3b  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004d4d3f  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d4d43  895018               mov dword ptr [eax + 0x18], edx
// 004d4d46  8bdf                 mov ebx, edi
// 004d4d48  c1c305               rol ebx, 5
// 004d4d4b  03da                 add ebx, edx
// 004d4d4d  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d4d51  03f3                 add esi, ebx
// 004d4d53  8d9c32a1ebd96e       lea ebx, [edx + esi + 0x6ed9eba1]
// 004d4d5a  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d4d5e  c1ca02               ror edx, 2
// 004d4d61  8bf2                 mov esi, edx
// 004d4d63  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d4d66  33501c               xor edx, dword ptr [eax + 0x1c]
// 004d4d69  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d4d6d  335024               xor edx, dword ptr [eax + 0x24]
// 004d4d70  33ee                 xor ebp, esi
// 004d4d72  335010               xor edx, dword ptr [eax + 0x10]
// 004d4d75  33ef                 xor ebp, edi
// 004d4d77  d1c2                 rol edx, 1
// 004d4d79  c1c305               rol ebx, 5
// 004d4d7c  03da                 add ebx, edx
// 004d4d7e  89501c               mov dword ptr [eax + 0x1c], edx
// 004d4d81  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d4d85  03eb                 add ebp, ebx
// 004d4d87  8d9c2aa1ebd96e       lea ebx, [edx + ebp + 0x6ed9eba1]
// 004d4d8e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004d4d91  335014               xor edx, dword ptr [eax + 0x14]
// 004d4d94  c1cf02               ror edi, 2
// 004d4d97  3310                 xor edx, dword ptr [eax]
// 004d4d99  89742410             mov dword ptr [esp + 0x10], esi
// 004d4d9d  335028               xor edx, dword ptr [eax + 0x28]
// 004d4da0  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d4da4  897c2414             mov dword ptr [esp + 0x14], edi
// 004d4da8  d1c2                 rol edx, 1
// 004d4daa  895020               mov dword ptr [eax + 0x20], edx
// 004d4dad  8bef                 mov ebp, edi
// 004d4daf  0b6c2458             or ebp, dword ptr [esp + 0x58]
// 004d4db3  237c2458             and edi, dword ptr [esp + 0x58]
// 004d4db7  23ee                 and ebp, esi
// 004d4db9  0bef                 or ebp, edi
// 004d4dbb  03ea                 add ebp, edx
// 004d4dbd  036c2418             add ebp, dword ptr [esp + 0x18]
// 004d4dc1  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d4dc5  c1c305               rol ebx, 5
// 004d4dc8  c1ca02               ror edx, 2
// 004d4dcb  8bfa                 mov edi, edx
// 004d4dcd  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d4dd0  335024               xor edx, dword ptr [eax + 0x24]
// 004d4dd3  8db42bdcbc1b8f       lea esi, [ebx + ebp - 0x70e44324]
// 004d4dda  335004               xor edx, dword ptr [eax + 4]
// 004d4ddd  897c2458             mov dword ptr [esp + 0x58], edi
// 004d4de1  335018               xor edx, dword ptr [eax + 0x18]
// 004d4de4  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004d4de8  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004d4dec  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004d4df0  237c2414             and edi, dword ptr [esp + 0x14]
// 004d4df4  d1c2                 rol edx, 1
// 004d4df6  0bfd                 or edi, ebp
// 004d4df8  03fa                 add edi, edx
// 004d4dfa  037c2410             add edi, dword ptr [esp + 0x10]
// 004d4dfe  895024               mov dword ptr [eax + 0x24], edx
// 004d4e01  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d4e05  8bde                 mov ebx, esi
// 004d4e07  c1c305               rol ebx, 5
// 004d4e0a  c1ca02               ror edx, 2
// 004d4e0d  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004d4e14  8bda                 mov ebx, edx
// 004d4e16  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d4e19  335030               xor edx, dword ptr [eax + 0x30]
// 004d4e1c  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d4e20  335008               xor edx, dword ptr [eax + 8]
// 004d4e23  8bee                 mov ebp, esi
// 004d4e25  335028               xor edx, dword ptr [eax + 0x28]
// 004d4e28  0beb                 or ebp, ebx
// 004d4e2a  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d4e2e  d1c2                 rol edx, 1
// 004d4e30  895028               mov dword ptr [eax + 0x28], edx
// 004d4e33  8bde                 mov ebx, esi
// 004d4e35  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004d4e39  897c2410             mov dword ptr [esp + 0x10], edi
// 004d4e3d  0beb                 or ebp, ebx
// 004d4e3f  03ea                 add ebp, edx
// 004d4e41  036c2414             add ebp, dword ptr [esp + 0x14]
// 004d4e45  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d4e48  33500c               xor edx, dword ptr [eax + 0xc]
// 004d4e4b  c1c705               rol edi, 5
// 004d4e4e  335020               xor edx, dword ptr [eax + 0x20]
// 004d4e51  c1ce02               ror esi, 2
// 004d4e54  335034               xor edx, dword ptr [eax + 0x34]
// 004d4e57  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004d4e5e  d1c2                 rol edx, 1
// 004d4e60  8bde                 mov ebx, esi
// 004d4e62  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004d4e66  8bee                 mov ebp, esi
// 004d4e68  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004d4e6c  236c2410             and ebp, dword ptr [esp + 0x10]
// 004d4e70  89502c               mov dword ptr [eax + 0x2c], edx
// 004d4e73  0bdd                 or ebx, ebp
// 004d4e75  03da                 add ebx, edx
// 004d4e77  035c2458             add ebx, dword ptr [esp + 0x58]
// 004d4e7b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d4e7f  897c2414             mov dword ptr [esp + 0x14], edi
// 004d4e83  c1c705               rol edi, 5
// 004d4e86  c1ca02               ror edx, 2
// 004d4e89  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004d4e90  8bda                 mov ebx, edx
// 004d4e92  8b5030               mov edx, dword ptr [eax + 0x30]
// 004d4e95  335024               xor edx, dword ptr [eax + 0x24]
// 004d4e98  897c2458             mov dword ptr [esp + 0x58], edi
// 004d4e9c  335038               xor edx, dword ptr [eax + 0x38]
// 004d4e9f  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d4ea3  335010               xor edx, dword ptr [eax + 0x10]
// 004d4ea6  d1c2                 rol edx, 1
// 004d4ea8  895030               mov dword ptr [eax + 0x30], edx
// 004d4eab  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004d4eaf  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d4eb3  236c2414             and ebp, dword ptr [esp + 0x14]
// 004d4eb7  23de                 and ebx, esi
// 004d4eb9  0bdd                 or ebx, ebp
// 004d4ebb  03da                 add ebx, edx
// 004d4ebd  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004d4ec1  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d4ec5  c1c705               rol edi, 5
// 004d4ec8  c1ca02               ror edx, 2
// 004d4ecb  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004d4ed2  8bda                 mov ebx, edx
// 004d4ed4  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d4ed7  335034               xor edx, dword ptr [eax + 0x34]
// 004d4eda  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d4ede  335014               xor edx, dword ptr [eax + 0x14]
// 004d4ee1  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004d4ee5  335028               xor edx, dword ptr [eax + 0x28]
// 004d4ee8  235c2410             and ebx, dword ptr [esp + 0x10]
// 004d4eec  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d4ef0  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d4ef4  d1c2                 rol edx, 1
// 004d4ef6  0bdd                 or ebx, ebp
// 004d4ef8  03da                 add ebx, edx
// 004d4efa  895034               mov dword ptr [eax + 0x34], edx
// 004d4efd  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d4f01  03de                 add ebx, esi
// 004d4f03  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d4f07  c1c705               rol edi, 5
// 004d4f0a  c1ca02               ror edx, 2
// 004d4f0d  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004d4f14  8bfa                 mov edi, edx
// 004d4f16  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d4f19  3310                 xor edx, dword ptr [eax]
// 004d4f1b  897c2458             mov dword ptr [esp + 0x58], edi
// 004d4f1f  335038               xor edx, dword ptr [eax + 0x38]
// 004d4f22  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004d4f26  335018               xor edx, dword ptr [eax + 0x18]
// 004d4f29  237c2414             and edi, dword ptr [esp + 0x14]
// 004d4f2d  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004d4f31  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004d4f35  d1c2                 rol edx, 1
// 004d4f37  0bfd                 or edi, ebp
// 004d4f39  03fa                 add edi, edx
// 004d4f3b  037c2410             add edi, dword ptr [esp + 0x10]
// 004d4f3f  895038               mov dword ptr [eax + 0x38], edx
// 004d4f42  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d4f46  8bde                 mov ebx, esi
// 004d4f48  c1c305               rol ebx, 5
// 004d4f4b  c1ca02               ror edx, 2
// 004d4f4e  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004d4f55  8bda                 mov ebx, edx
// 004d4f57  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d4f5a  33501c               xor edx, dword ptr [eax + 0x1c]
// 004d4f5d  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d4f61  335030               xor edx, dword ptr [eax + 0x30]
// 004d4f64  8bee                 mov ebp, esi
// 004d4f66  335004               xor edx, dword ptr [eax + 4]
// 004d4f69  0beb                 or ebp, ebx
// 004d4f6b  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d4f6f  d1c2                 rol edx, 1
// 004d4f71  8bde                 mov ebx, esi
// 004d4f73  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004d4f77  89503c               mov dword ptr [eax + 0x3c], edx
// 004d4f7a  0beb                 or ebp, ebx
// 004d4f7c  03ea                 add ebp, edx
// 004d4f7e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004d4f81  335008               xor edx, dword ptr [eax + 8]
// 004d4f84  036c2414             add ebp, dword ptr [esp + 0x14]
// 004d4f88  335034               xor edx, dword ptr [eax + 0x34]
// 004d4f8b  897c2410             mov dword ptr [esp + 0x10], edi
// 004d4f8f  3310                 xor edx, dword ptr [eax]
// 004d4f91  c1c705               rol edi, 5
// 004d4f94  c1ce02               ror esi, 2
// 004d4f97  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004d4f9e  d1c2                 rol edx, 1
// 004d4fa0  897c2414             mov dword ptr [esp + 0x14], edi
// 004d4fa4  8bde                 mov ebx, esi
// 004d4fa6  c1c705               rol edi, 5
// 004d4fa9  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004d4fad  8910                 mov dword ptr [eax], edx
// 004d4faf  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004d4fb3  8bee                 mov ebp, esi
// 004d4fb5  236c2410             and ebp, dword ptr [esp + 0x10]
// 004d4fb9  0bdd                 or ebx, ebp
// 004d4fbb  03da                 add ebx, edx
// 004d4fbd  035c2458             add ebx, dword ptr [esp + 0x58]
// 004d4fc1  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d4fc5  c1ca02               ror edx, 2
// 004d4fc8  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004d4fcf  8bda                 mov ebx, edx
// 004d4fd1  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d4fd4  335024               xor edx, dword ptr [eax + 0x24]
// 004d4fd7  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d4fdb  335004               xor edx, dword ptr [eax + 4]
// 004d4fde  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004d4fe2  335038               xor edx, dword ptr [eax + 0x38]
// 004d4fe5  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d4fe9  236c2414             and ebp, dword ptr [esp + 0x14]
// 004d4fed  d1c2                 rol edx, 1
// 004d4fef  23de                 and ebx, esi
// 004d4ff1  0bdd                 or ebx, ebp
// 004d4ff3  03da                 add ebx, edx
// 004d4ff5  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004d4ff9  895004               mov dword ptr [eax + 4], edx
// 004d4ffc  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d5000  897c2458             mov dword ptr [esp + 0x58], edi
// 004d5004  c1c705               rol edi, 5
// 004d5007  c1ca02               ror edx, 2
// 004d500a  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004d5011  8bda                 mov ebx, edx
// 004d5013  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d5016  335008               xor edx, dword ptr [eax + 8]
// 004d5019  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d501d  335028               xor edx, dword ptr [eax + 0x28]
// 004d5020  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004d5024  335010               xor edx, dword ptr [eax + 0x10]
// 004d5027  235c2410             and ebx, dword ptr [esp + 0x10]
// 004d502b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d502f  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d5033  d1c2                 rol edx, 1
// 004d5035  0bdd                 or ebx, ebp
// 004d5037  03da                 add ebx, edx
// 004d5039  895008               mov dword ptr [eax + 8], edx
// 004d503c  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d5040  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d5044  c1c705               rol edi, 5
// 004d5047  03de                 add ebx, esi
// 004d5049  c1ca02               ror edx, 2
// 004d504c  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004d5053  8bfa                 mov edi, edx
// 004d5055  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d5058  33500c               xor edx, dword ptr [eax + 0xc]
// 004d505b  897c2458             mov dword ptr [esp + 0x58], edi
// 004d505f  335014               xor edx, dword ptr [eax + 0x14]
// 004d5062  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004d5066  3310                 xor edx, dword ptr [eax]
// 004d5068  237c2414             and edi, dword ptr [esp + 0x14]
// 004d506c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004d5070  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004d5074  d1c2                 rol edx, 1
// 004d5076  0bfd                 or edi, ebp
// 004d5078  03fa                 add edi, edx
// 004d507a  037c2410             add edi, dword ptr [esp + 0x10]
// 004d507e  89500c               mov dword ptr [eax + 0xc], edx
// 004d5081  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d5085  8bde                 mov ebx, esi
// 004d5087  c1c305               rol ebx, 5
// 004d508a  c1ca02               ror edx, 2
// 004d508d  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004d5094  8bda                 mov ebx, edx
// 004d5096  8b5030               mov edx, dword ptr [eax + 0x30]
// 004d5099  335004               xor edx, dword ptr [eax + 4]
// 004d509c  897c2410             mov dword ptr [esp + 0x10], edi
// 004d50a0  335018               xor edx, dword ptr [eax + 0x18]
// 004d50a3  8bee                 mov ebp, esi
// 004d50a5  335010               xor edx, dword ptr [eax + 0x10]
// 004d50a8  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d50ac  d1c2                 rol edx, 1
// 004d50ae  c1c705               rol edi, 5
// 004d50b1  895010               mov dword ptr [eax + 0x10], edx
// 004d50b4  0beb                 or ebp, ebx
// 004d50b6  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d50ba  8bde                 mov ebx, esi
// 004d50bc  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004d50c0  0beb                 or ebp, ebx
// 004d50c2  03ea                 add ebp, edx
// 004d50c4  036c2414             add ebp, dword ptr [esp + 0x14]
// 004d50c8  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d50cb  335008               xor edx, dword ptr [eax + 8]
// 004d50ce  c1ce02               ror esi, 2
// 004d50d1  335034               xor edx, dword ptr [eax + 0x34]
// 004d50d4  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004d50db  335014               xor edx, dword ptr [eax + 0x14]
// 004d50de  8bde                 mov ebx, esi
// 004d50e0  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004d50e4  d1c2                 rol edx, 1
// 004d50e6  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004d50ea  895014               mov dword ptr [eax + 0x14], edx
// 004d50ed  897c2414             mov dword ptr [esp + 0x14], edi
// 004d50f1  c1c705               rol edi, 5
// 004d50f4  8bee                 mov ebp, esi
// 004d50f6  236c2410             and ebp, dword ptr [esp + 0x10]
// 004d50fa  0bdd                 or ebx, ebp
// 004d50fc  03da                 add ebx, edx
// 004d50fe  035c2458             add ebx, dword ptr [esp + 0x58]
// 004d5102  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d5106  c1ca02               ror edx, 2
// 004d5109  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004d5110  8bda                 mov ebx, edx
// 004d5112  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d5115  335020               xor edx, dword ptr [eax + 0x20]
// 004d5118  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d511c  335038               xor edx, dword ptr [eax + 0x38]
// 004d511f  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004d5123  335018               xor edx, dword ptr [eax + 0x18]
// 004d5126  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d512a  236c2414             and ebp, dword ptr [esp + 0x14]
// 004d512e  d1c2                 rol edx, 1
// 004d5130  23de                 and ebx, esi
// 004d5132  0bdd                 or ebx, ebp
// 004d5134  03da                 add ebx, edx
// 004d5136  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004d513a  895018               mov dword ptr [eax + 0x18], edx
// 004d513d  8b542414             mov edx, dword ptr [esp + 0x14]
// 004d5141  897c2458             mov dword ptr [esp + 0x58], edi
// 004d5145  c1c705               rol edi, 5
// 004d5148  c1ca02               ror edx, 2
// 004d514b  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004d5152  8bda                 mov ebx, edx
// 004d5154  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d5157  33501c               xor edx, dword ptr [eax + 0x1c]
// 004d515a  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d515e  335024               xor edx, dword ptr [eax + 0x24]
// 004d5161  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004d5165  335010               xor edx, dword ptr [eax + 0x10]
// 004d5168  235c2410             and ebx, dword ptr [esp + 0x10]
// 004d516c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004d5170  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d5174  d1c2                 rol edx, 1
// 004d5176  0bdd                 or ebx, ebp
// 004d5178  03da                 add ebx, edx
// 004d517a  89501c               mov dword ptr [eax + 0x1c], edx
// 004d517d  8b542458             mov edx, dword ptr [esp + 0x58]
// 004d5181  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d5185  c1c705               rol edi, 5
// 004d5188  03de                 add ebx, esi
// 004d518a  c1ca02               ror edx, 2
// 004d518d  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004d5194  8bfa                 mov edi, edx
// 004d5196  8b5020               mov edx, dword ptr [eax + 0x20]
// 004d5199  335014               xor edx, dword ptr [eax + 0x14]
// 004d519c  897c2458             mov dword ptr [esp + 0x58], edi
// 004d51a0  3310                 xor edx, dword ptr [eax]
// 004d51a2  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004d51a6  335028               xor edx, dword ptr [eax + 0x28]
// 004d51a9  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004d51ad  237c2414             and edi, dword ptr [esp + 0x14]
// 004d51b1  d1c2                 rol edx, 1
// 004d51b3  8bde                 mov ebx, esi
// 004d51b5  c1c305               rol ebx, 5
// 004d51b8  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004d51bc  895020               mov dword ptr [eax + 0x20], edx
// 004d51bf  0bfd                 or edi, ebp
// 004d51c1  03fa                 add edi, edx
// 004d51c3  037c2410             add edi, dword ptr [esp + 0x10]
// 004d51c7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004d51cb  c1ca02               ror edx, 2
// 004d51ce  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004d51d5  8bda                 mov ebx, edx
// 004d51d7  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d51da  335024               xor edx, dword ptr [eax + 0x24]
// 004d51dd  8bee                 mov ebp, esi
// 004d51df  335004               xor edx, dword ptr [eax + 4]
// 004d51e2  0beb                 or ebp, ebx
// 004d51e4  335018               xor edx, dword ptr [eax + 0x18]
// 004d51e7  236c2458             and ebp, dword ptr [esp + 0x58]
// 004d51eb  d1c2                 rol edx, 1
// 004d51ed  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004d51f1  8bde                 mov ebx, esi
// 004d51f3  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004d51f7  895024               mov dword ptr [eax + 0x24], edx
// 004d51fa  0beb                 or ebp, ebx
// 004d51fc  03ea                 add ebp, edx
// 004d51fe  036c2414             add ebp, dword ptr [esp + 0x14]
// 004d5202  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d5205  335030               xor edx, dword ptr [eax + 0x30]
// 004d5208  897c2410             mov dword ptr [esp + 0x10], edi
// 004d520c  335008               xor edx, dword ptr [eax + 8]
// 004d520f  c1c705               rol edi, 5
// 004d5212  335028               xor edx, dword ptr [eax + 0x28]
// 004d5215  c1ce02               ror esi, 2
// 004d5218  8d9c2fdcbc1b8f       lea ebx, [edi + ebp - 0x70e44324]
// 004d521f  d1c2                 rol edx, 1
// 004d5221  8bee                 mov ebp, esi
// 004d5223  0b6c2410             or ebp, dword ptr [esp + 0x10]
// 004d5227  89742418             mov dword ptr [esp + 0x18], esi
// 004d522b  23742410             and esi, dword ptr [esp + 0x10]
// 004d522f  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004d5233  895028               mov dword ptr [eax + 0x28], edx
// 004d5236  0bee                 or ebp, esi
// 004d5238  03ea                 add ebp, edx
// 004d523a  036c2458             add ebp, dword ptr [esp + 0x58]
// 004d523e  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d5242  8bfb                 mov edi, ebx
// 004d5244  c1c705               rol edi, 5
// 004d5247  c1ca02               ror edx, 2
// 004d524a  8bf2                 mov esi, edx
// 004d524c  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d524f  33500c               xor edx, dword ptr [eax + 0xc]
// 004d5252  89742410             mov dword ptr [esp + 0x10], esi
// 004d5256  335020               xor edx, dword ptr [eax + 0x20]
// 004d5259  0bf3                 or esi, ebx
// 004d525b  335034               xor edx, dword ptr [eax + 0x34]
// 004d525e  23742418             and esi, dword ptr [esp + 0x18]
// 004d5262  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d5266  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004d526a  235c2414             and ebx, dword ptr [esp + 0x14]
// 004d526e  d1c2                 rol edx, 1
// 004d5270  0bf3                 or esi, ebx
// 004d5272  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004d5276  03f2                 add esi, edx
// 004d5278  0374245c             add esi, dword ptr [esp + 0x5c]
// 004d527c  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004d5283  89502c               mov dword ptr [eax + 0x2c], edx
// 004d5286  8b5030               mov edx, dword ptr [eax + 0x30]
// 004d5289  335024               xor edx, dword ptr [eax + 0x24]
// 004d528c  8bef                 mov ebp, edi
// 004d528e  335038               xor edx, dword ptr [eax + 0x38]
// 004d5291  c1c505               rol ebp, 5
// 004d5294  335010               xor edx, dword ptr [eax + 0x10]
// 004d5297  8db42edcbc1b8f       lea esi, [esi + ebp - 0x70e44324]
// 004d529e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004d52a2  c1cb02               ror ebx, 2
// 004d52a5  33eb                 xor ebp, ebx
// 004d52a7  d1c2                 rol edx, 1
// 004d52a9  33ef                 xor ebp, edi
// 004d52ab  8974245c             mov dword ptr [esp + 0x5c], esi
// 004d52af  c1c605               rol esi, 5
// 004d52b2  03ea                 add ebp, edx
// 004d52b4  036c2418             add ebp, dword ptr [esp + 0x18]
// 004d52b8  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d52bc  895030               mov dword ptr [eax + 0x30], edx
// 004d52bf  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004d52c6  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d52c9  335034               xor edx, dword ptr [eax + 0x34]
// 004d52cc  c1cf02               ror edi, 2
// 004d52cf  335014               xor edx, dword ptr [eax + 0x14]
// 004d52d2  33df                 xor ebx, edi
// 004d52d4  335028               xor edx, dword ptr [eax + 0x28]
// 004d52d7  897c2458             mov dword ptr [esp + 0x58], edi
// 004d52db  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d52df  d1c2                 rol edx, 1
// 004d52e1  33df                 xor ebx, edi
// 004d52e3  03da                 add ebx, edx
// 004d52e5  035c2410             add ebx, dword ptr [esp + 0x10]
// 004d52e9  895034               mov dword ptr [eax + 0x34], edx
// 004d52ec  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d52ef  3310                 xor edx, dword ptr [eax]
// 004d52f1  8bee                 mov ebp, esi
// 004d52f3  335038               xor edx, dword ptr [eax + 0x38]
// 004d52f6  c1c505               rol ebp, 5
// 004d52f9  335018               xor edx, dword ptr [eax + 0x18]
// 004d52fc  c1cf02               ror edi, 2
// 004d52ff  d1c2                 rol edx, 1
// 004d5301  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d5305  895038               mov dword ptr [eax + 0x38], edx
// 004d5308  8bfe                 mov edi, esi
// 004d530a  337c2458             xor edi, dword ptr [esp + 0x58]
// 004d530e  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004d5315  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004d5319  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d531d  03fa                 add edi, edx
// 004d531f  037c2414             add edi, dword ptr [esp + 0x14]
// 004d5323  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d5326  33501c               xor edx, dword ptr [eax + 0x1c]
// 004d5329  c1c305               rol ebx, 5
// 004d532c  335030               xor edx, dword ptr [eax + 0x30]
// 004d532f  c1ce02               ror esi, 2
// 004d5332  335004               xor edx, dword ptr [eax + 4]
// 004d5335  89742418             mov dword ptr [esp + 0x18], esi
// 004d5339  33742410             xor esi, dword ptr [esp + 0x10]
// 004d533d  d1c2                 rol edx, 1
// 004d533f  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004d5343  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d5347  03f2                 add esi, edx
// 004d5349  03742458             add esi, dword ptr [esp + 0x58]
// 004d534d  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 004d5354  89503c               mov dword ptr [eax + 0x3c], edx
// 004d5357  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d535b  8bdf                 mov ebx, edi
// 004d535d  c1c305               rol ebx, 5
// 004d5360  c1ca02               ror edx, 2
// 004d5363  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 004d536a  8bda                 mov ebx, edx
// 004d536c  8b5020               mov edx, dword ptr [eax + 0x20]
// 004d536f  335008               xor edx, dword ptr [eax + 8]
// 004d5372  33eb                 xor ebp, ebx
// 004d5374  335034               xor edx, dword ptr [eax + 0x34]
// 004d5377  33ef                 xor ebp, edi
// 004d5379  3310                 xor edx, dword ptr [eax]
// 004d537b  89742458             mov dword ptr [esp + 0x58], esi
// 004d537f  d1c2                 rol edx, 1
// 004d5381  03ea                 add ebp, edx
// 004d5383  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004d5387  8910                 mov dword ptr [eax], edx
// 004d5389  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d538c  335024               xor edx, dword ptr [eax + 0x24]
// 004d538f  c1c605               rol esi, 5
// 004d5392  335004               xor edx, dword ptr [eax + 4]
// 004d5395  c1cf02               ror edi, 2
// 004d5398  335038               xor edx, dword ptr [eax + 0x38]
// 004d539b  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d539f  33df                 xor ebx, edi
// 004d53a1  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004d53a8  897c2414             mov dword ptr [esp + 0x14], edi
// 004d53ac  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004d53b0  d1c2                 rol edx, 1
// 004d53b2  33df                 xor ebx, edi
// 004d53b4  8bee                 mov ebp, esi
// 004d53b6  c1c505               rol ebp, 5
// 004d53b9  03da                 add ebx, edx
// 004d53bb  035c2418             add ebx, dword ptr [esp + 0x18]
// 004d53bf  895004               mov dword ptr [eax + 4], edx
// 004d53c2  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004d53c9  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d53cc  335008               xor edx, dword ptr [eax + 8]
// 004d53cf  c1cf02               ror edi, 2
// 004d53d2  335028               xor edx, dword ptr [eax + 0x28]
// 004d53d5  8bdf                 mov ebx, edi
// 004d53d7  335010               xor edx, dword ptr [eax + 0x10]
// 004d53da  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d53de  d1c2                 rol edx, 1
// 004d53e0  33fb                 xor edi, ebx
// 004d53e2  33fe                 xor edi, esi
// 004d53e4  03fa                 add edi, edx
// 004d53e6  037c2410             add edi, dword ptr [esp + 0x10]
// 004d53ea  895008               mov dword ptr [eax + 8], edx
// 004d53ed  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d53f0  33500c               xor edx, dword ptr [eax + 0xc]
// 004d53f3  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d53f7  335014               xor edx, dword ptr [eax + 0x14]
// 004d53fa  c1c505               rol ebp, 5
// 004d53fd  3310                 xor edx, dword ptr [eax]
// 004d53ff  c1ce02               ror esi, 2
// 004d5402  d1c2                 rol edx, 1
// 004d5404  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004d540b  8974245c             mov dword ptr [esp + 0x5c], esi
// 004d540f  8b742418             mov esi, dword ptr [esp + 0x18]
// 004d5413  33f3                 xor esi, ebx
// 004d5415  89500c               mov dword ptr [eax + 0xc], edx
// 004d5418  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d541c  8bde                 mov ebx, esi
// 004d541e  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004d5422  33de                 xor ebx, esi
// 004d5424  03da                 add ebx, edx
// 004d5426  035c2414             add ebx, dword ptr [esp + 0x14]
// 004d542a  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d542e  8bef                 mov ebp, edi
// 004d5430  c1c505               rol ebp, 5
// 004d5433  c1ca02               ror edx, 2
// 004d5436  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004d543d  8bea                 mov ebp, edx
// 004d543f  8b5030               mov edx, dword ptr [eax + 0x30]
// 004d5442  335004               xor edx, dword ptr [eax + 4]
// 004d5445  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d5449  335018               xor edx, dword ptr [eax + 0x18]
// 004d544c  33ef                 xor ebp, edi
// 004d544e  335010               xor edx, dword ptr [eax + 0x10]
// 004d5451  33ee                 xor ebp, esi
// 004d5453  d1c2                 rol edx, 1
// 004d5455  03ea                 add ebp, edx
// 004d5457  036c2458             add ebp, dword ptr [esp + 0x58]
// 004d545b  895010               mov dword ptr [eax + 0x10], edx
// 004d545e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d5461  335008               xor edx, dword ptr [eax + 8]
// 004d5464  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d5468  335034               xor edx, dword ptr [eax + 0x34]
// 004d546b  c1c305               rol ebx, 5
// 004d546e  335014               xor edx, dword ptr [eax + 0x14]
// 004d5471  8db42bd6c162ca       lea esi, [ebx + ebp - 0x359d3e2a]
// 004d5478  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d547c  c1cf02               ror edi, 2
// 004d547f  33ef                 xor ebp, edi
// 004d5481  d1c2                 rol edx, 1
// 004d5483  897c2410             mov dword ptr [esp + 0x10], edi
// 004d5487  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004d548b  33ef                 xor ebp, edi
// 004d548d  03ea                 add ebp, edx
// 004d548f  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004d5493  895014               mov dword ptr [eax + 0x14], edx
// 004d5496  8b500c               mov edx, dword ptr [eax + 0xc]
// 004d5499  335020               xor edx, dword ptr [eax + 0x20]
// 004d549c  8bde                 mov ebx, esi
// 004d549e  335038               xor edx, dword ptr [eax + 0x38]
// 004d54a1  c1c305               rol ebx, 5
// 004d54a4  335018               xor edx, dword ptr [eax + 0x18]
// 004d54a7  c1cf02               ror edi, 2
// 004d54aa  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004d54b1  d1c2                 rol edx, 1
// 004d54b3  8bdf                 mov ebx, edi
// 004d54b5  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004d54b9  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d54bd  895018               mov dword ptr [eax + 0x18], edx
// 004d54c0  c1c505               rol ebp, 5
// 004d54c3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004d54c7  33fb                 xor edi, ebx
// 004d54c9  33fe                 xor edi, esi
// 004d54cb  03fa                 add edi, edx
// 004d54cd  037c2418             add edi, dword ptr [esp + 0x18]
// 004d54d1  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d54d4  33501c               xor edx, dword ptr [eax + 0x1c]
// 004d54d7  c1ce02               ror esi, 2
// 004d54da  335024               xor edx, dword ptr [eax + 0x24]
// 004d54dd  33de                 xor ebx, esi
// 004d54df  335010               xor edx, dword ptr [eax + 0x10]
// 004d54e2  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004d54e9  d1c2                 rol edx, 1
// 004d54eb  89501c               mov dword ptr [eax + 0x1c], edx
// 004d54ee  89742458             mov dword ptr [esp + 0x58], esi
// 004d54f2  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004d54f6  33de                 xor ebx, esi
// 004d54f8  03da                 add ebx, edx
// 004d54fa  035c2410             add ebx, dword ptr [esp + 0x10]
// 004d54fe  8b5020               mov edx, dword ptr [eax + 0x20]
// 004d5501  335014               xor edx, dword ptr [eax + 0x14]
// 004d5504  8bef                 mov ebp, edi
// 004d5506  3310                 xor edx, dword ptr [eax]
// 004d5508  c1c505               rol ebp, 5
// 004d550b  335028               xor edx, dword ptr [eax + 0x28]
// 004d550e  c1ce02               ror esi, 2
// 004d5511  d1c2                 rol edx, 1
// 004d5513  8974245c             mov dword ptr [esp + 0x5c], esi
// 004d5517  895020               mov dword ptr [eax + 0x20], edx
// 004d551a  8bf7                 mov esi, edi
// 004d551c  33742458             xor esi, dword ptr [esp + 0x58]
// 004d5520  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004d5527  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004d552b  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d552f  03f2                 add esi, edx
// 004d5531  03742414             add esi, dword ptr [esp + 0x14]
// 004d5535  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d5538  335024               xor edx, dword ptr [eax + 0x24]
// 004d553b  c1c305               rol ebx, 5
// 004d553e  335004               xor edx, dword ptr [eax + 4]
// 004d5541  c1cf02               ror edi, 2
// 004d5544  335018               xor edx, dword ptr [eax + 0x18]
// 004d5547  897c2418             mov dword ptr [esp + 0x18], edi
// 004d554b  337c2410             xor edi, dword ptr [esp + 0x10]
// 004d554f  d1c2                 rol edx, 1
// 004d5551  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004d5555  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004d5559  03fa                 add edi, edx
// 004d555b  037c2458             add edi, dword ptr [esp + 0x58]
// 004d555f  895024               mov dword ptr [eax + 0x24], edx
// 004d5562  8b542410             mov edx, dword ptr [esp + 0x10]
// 004d5566  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 004d556d  8bde                 mov ebx, esi
// 004d556f  c1c305               rol ebx, 5
// 004d5572  c1ca02               ror edx, 2
// 004d5575  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 004d557c  8bda                 mov ebx, edx
// 004d557e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004d5581  335030               xor edx, dword ptr [eax + 0x30]
// 004d5584  33eb                 xor ebp, ebx
// 004d5586  335008               xor edx, dword ptr [eax + 8]
// 004d5589  33ee                 xor ebp, esi
// 004d558b  335028               xor edx, dword ptr [eax + 0x28]
// 004d558e  897c2458             mov dword ptr [esp + 0x58], edi
// 004d5592  d1c2                 rol edx, 1
// 004d5594  03ea                 add ebp, edx
// 004d5596  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004d559a  895028               mov dword ptr [eax + 0x28], edx
// 004d559d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d55a0  33500c               xor edx, dword ptr [eax + 0xc]
// 004d55a3  c1c705               rol edi, 5
// 004d55a6  335020               xor edx, dword ptr [eax + 0x20]
// 004d55a9  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004d55b0  335034               xor edx, dword ptr [eax + 0x34]
// 004d55b3  c1ce02               ror esi, 2
// 004d55b6  d1c2                 rol edx, 1
// 004d55b8  8bef                 mov ebp, edi
// 004d55ba  895c2410             mov dword ptr [esp + 0x10], ebx
// 004d55be  89742414             mov dword ptr [esp + 0x14], esi
// 004d55c2  89502c               mov dword ptr [eax + 0x2c], edx
// 004d55c5  c1c505               rol ebp, 5
// 004d55c8  33de                 xor ebx, esi
// 004d55ca  8b742458             mov esi, dword ptr [esp + 0x58]
// 004d55ce  33de                 xor ebx, esi
// 004d55d0  03da                 add ebx, edx
// 004d55d2  035c2418             add ebx, dword ptr [esp + 0x18]
// 004d55d6  8b5030               mov edx, dword ptr [eax + 0x30]
// 004d55d9  335024               xor edx, dword ptr [eax + 0x24]
// 004d55dc  c1ce02               ror esi, 2
// 004d55df  335038               xor edx, dword ptr [eax + 0x38]
// 004d55e2  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004d55e9  335010               xor edx, dword ptr [eax + 0x10]
// 004d55ec  8bde                 mov ebx, esi
// 004d55ee  8b742414             mov esi, dword ptr [esp + 0x14]
// 004d55f2  d1c2                 rol edx, 1
// 004d55f4  33f3                 xor esi, ebx
// 004d55f6  895030               mov dword ptr [eax + 0x30], edx
// 004d55f9  33f7                 xor esi, edi
// 004d55fb  03f2                 add esi, edx
// 004d55fd  03742410             add esi, dword ptr [esp + 0x10]
// 004d5601  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d5604  335034               xor edx, dword ptr [eax + 0x34]
// 004d5607  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d560b  335014               xor edx, dword ptr [eax + 0x14]
// 004d560e  c1c505               rol ebp, 5
// 004d5611  335028               xor edx, dword ptr [eax + 0x28]
// 004d5614  c1cf02               ror edi, 2
// 004d5617  d1c2                 rol edx, 1
// 004d5619  895034               mov dword ptr [eax + 0x34], edx
// 004d561c  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004d5623  897c245c             mov dword ptr [esp + 0x5c], edi
// 004d5627  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004d562b  33fb                 xor edi, ebx
// 004d562d  895c2458             mov dword ptr [esp + 0x58], ebx
// 004d5631  8bdf                 mov ebx, edi
// 004d5633  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004d5637  33df                 xor ebx, edi
// 004d5639  03da                 add ebx, edx
// 004d563b  035c2414             add ebx, dword ptr [esp + 0x14]
// 004d563f  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d5643  8bee                 mov ebp, esi
// 004d5645  c1c505               rol ebp, 5
// 004d5648  c1ca02               ror edx, 2
// 004d564b  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004d5652  8bea                 mov ebp, edx
// 004d5654  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004d5657  3310                 xor edx, dword ptr [eax]
// 004d5659  896c2418             mov dword ptr [esp + 0x18], ebp
// 004d565d  335038               xor edx, dword ptr [eax + 0x38]
// 004d5660  33ee                 xor ebp, esi
// 004d5662  335018               xor edx, dword ptr [eax + 0x18]
// 004d5665  33ef                 xor ebp, edi
// 004d5667  d1c2                 rol edx, 1
// 004d5669  895038               mov dword ptr [eax + 0x38], edx
// 004d566c  03ea                 add ebp, edx
// 004d566e  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004d5671  33501c               xor edx, dword ptr [eax + 0x1c]
// 004d5674  036c2458             add ebp, dword ptr [esp + 0x58]
// 004d5678  335030               xor edx, dword ptr [eax + 0x30]
// 004d567b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004d567f  335004               xor edx, dword ptr [eax + 4]
// 004d5682  c1c305               rol ebx, 5
// 004d5685  c1ce02               ror esi, 2
// 004d5688  d1c2                 rol edx, 1
// 004d568a  89503c               mov dword ptr [eax + 0x3c], edx
// 004d568d  8b442418             mov eax, dword ptr [esp + 0x18]
// 004d5691  33c6                 xor eax, esi
// 004d5693  89742410             mov dword ptr [esp + 0x10], esi
// 004d5697  8bf0                 mov esi, eax
// 004d5699  8b442414             mov eax, dword ptr [esp + 0x14]
// 004d569d  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004d56a4  015904               add dword ptr [ecx + 4], ebx
// 004d56a7  33f0                 xor esi, eax
// 004d56a9  03f2                 add esi, edx
// 004d56ab  8beb                 mov ebp, ebx
// 004d56ad  c1c505               rol ebp, 5
// 004d56b0  03f7                 add esi, edi
// 004d56b2  8d942ed6c162ca       lea edx, [esi + ebp - 0x359d3e2a]
// 004d56b9  0111                 add dword ptr [ecx], edx
// 004d56bb  c1c802               ror eax, 2
// 004d56be  014108               add dword ptr [ecx + 8], eax
// 004d56c1  8b442410             mov eax, dword ptr [esp + 0x10]
// 004d56c5  8b542418             mov edx, dword ptr [esp + 0x18]
// 004d56c9  01410c               add dword ptr [ecx + 0xc], eax
// 004d56cc  015110               add dword ptr [ecx + 0x10], edx
// 004d56cf  5f                   pop edi
// 004d56d0  5e                   pop esi
// 004d56d1  5d                   pop ebp
// 004d56d2  5b                   pop ebx
// 004d56d3  83c444               add esp, 0x44
// 004d56d6  c20800               ret 8
// library rbxgs-raknet/SHA1.cpp (function ?Transform@CSHA1@@AAEXQAIQAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
