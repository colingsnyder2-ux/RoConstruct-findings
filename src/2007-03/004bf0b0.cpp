// roc 2007-03 004bf0b0  unit: seg_004b0000  size: 5065 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004bf0b0
//
// 004bf0b0  83ec44               sub esp, 0x44
// 004bf0b3  53                   push ebx
// 004bf0b4  55                   push ebp
// 004bf0b5  8d4174               lea eax, [ecx + 0x74]
// 004bf0b8  56                   push esi
// 004bf0b9  8b742458             mov esi, dword ptr [esp + 0x58]
// 004bf0bd  57                   push edi
// 004bf0be  b910000000           mov ecx, 0x10
// 004bf0c3  8bf8                 mov edi, eax
// 004bf0c5  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004bf0c7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004bf0cb  8b5104               mov edx, dword ptr [ecx + 4]
// 004bf0ce  8b38                 mov edi, dword ptr [eax]
// 004bf0d0  8b5908               mov ebx, dword ptr [ecx + 8]
// 004bf0d3  8b31                 mov esi, dword ptr [ecx]
// 004bf0d5  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 004bf0d8  89542458             mov dword ptr [esp + 0x58], edx
// 004bf0dc  33eb                 xor ebp, ebx
// 004bf0de  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bf0e2  8bd7                 mov edx, edi
// 004bf0e4  33690c               xor ebp, dword ptr [ecx + 0xc]
// 004bf0e7  c1ca08               ror edx, 8
// 004bf0ea  81e200ff00ff         and edx, 0xff00ff00
// 004bf0f0  c1c708               rol edi, 8
// 004bf0f3  81e7ff00ff00         and edi, 0xff00ff
// 004bf0f9  0bd7                 or edx, edi
// 004bf0fb  8954244c             mov dword ptr [esp + 0x4c], edx
// 004bf0ff  8bfe                 mov edi, esi
// 004bf101  c1c705               rol edi, 5
// 004bf104  03fa                 add edi, edx
// 004bf106  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004bf109  03ef                 add ebp, edi
// 004bf10b  8b7804               mov edi, dword ptr [eax + 4]
// 004bf10e  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004bf115  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bf119  c1ca02               ror edx, 2
// 004bf11c  8bea                 mov ebp, edx
// 004bf11e  8bd7                 mov edx, edi
// 004bf120  c1ca08               ror edx, 8
// 004bf123  81e200ff00ff         and edx, 0xff00ff00
// 004bf129  c1c708               rol edi, 8
// 004bf12c  81e7ff00ff00         and edi, 0xff00ff
// 004bf132  0bd7                 or edx, edi
// 004bf134  8b7908               mov edi, dword ptr [ecx + 8]
// 004bf137  33fd                 xor edi, ebp
// 004bf139  895c2418             mov dword ptr [esp + 0x18], ebx
// 004bf13d  c1c305               rol ebx, 5
// 004bf140  03da                 add ebx, edx
// 004bf142  23fe                 and edi, esi
// 004bf144  337908               xor edi, dword ptr [ecx + 8]
// 004bf147  89542450             mov dword ptr [esp + 0x50], edx
// 004bf14b  03fb                 add edi, ebx
// 004bf14d  8bdf                 mov ebx, edi
// 004bf14f  8b790c               mov edi, dword ptr [ecx + 0xc]
// 004bf152  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 004bf159  8b5808               mov ebx, dword ptr [eax + 8]
// 004bf15c  8bd3                 mov edx, ebx
// 004bf15e  c1ce02               ror esi, 2
// 004bf161  c1ca08               ror edx, 8
// 004bf164  81e200ff00ff         and edx, 0xff00ff00
// 004bf16a  c1c308               rol ebx, 8
// 004bf16d  81e3ff00ff00         and ebx, 0xff00ff
// 004bf173  0bd3                 or edx, ebx
// 004bf175  896c2458             mov dword ptr [esp + 0x58], ebp
// 004bf179  33ee                 xor ebp, esi
// 004bf17b  236c2418             and ebp, dword ptr [esp + 0x18]
// 004bf17f  8bdf                 mov ebx, edi
// 004bf181  336c2458             xor ebp, dword ptr [esp + 0x58]
// 004bf185  c1c305               rol ebx, 5
// 004bf188  03da                 add ebx, edx
// 004bf18a  89542434             mov dword ptr [esp + 0x34], edx
// 004bf18e  8b5108               mov edx, dword ptr [ecx + 8]
// 004bf191  03eb                 add ebp, ebx
// 004bf193  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004bf19a  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bf19e  c1ca02               ror edx, 2
// 004bf1a1  8bea                 mov ebp, edx
// 004bf1a3  8974245c             mov dword ptr [esp + 0x5c], esi
// 004bf1a7  8b700c               mov esi, dword ptr [eax + 0xc]
// 004bf1aa  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bf1ae  896c2418             mov dword ptr [esp + 0x18], ebp
// 004bf1b2  8bd6                 mov edx, esi
// 004bf1b4  c1ca08               ror edx, 8
// 004bf1b7  81e200ff00ff         and edx, 0xff00ff00
// 004bf1bd  c1c608               rol esi, 8
// 004bf1c0  81e6ff00ff00         and esi, 0xff00ff
// 004bf1c6  0bd6                 or edx, esi
// 004bf1c8  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004bf1cc  33ee                 xor ebp, esi
// 004bf1ce  23ef                 and ebp, edi
// 004bf1d0  c1c305               rol ebx, 5
// 004bf1d3  03da                 add ebx, edx
// 004bf1d5  33ee                 xor ebp, esi
// 004bf1d7  03eb                 add ebp, ebx
// 004bf1d9  8b5810               mov ebx, dword ptr [eax + 0x10]
// 004bf1dc  89542438             mov dword ptr [esp + 0x38], edx
// 004bf1e0  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bf1e4  8db42a9979825a       lea esi, [edx + ebp + 0x5a827999]
// 004bf1eb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004bf1ef  c1cf02               ror edi, 2
// 004bf1f2  33ef                 xor ebp, edi
// 004bf1f4  236c2414             and ebp, dword ptr [esp + 0x14]
// 004bf1f8  8bd3                 mov edx, ebx
// 004bf1fa  336c2418             xor ebp, dword ptr [esp + 0x18]
// 004bf1fe  c1ca08               ror edx, 8
// 004bf201  81e200ff00ff         and edx, 0xff00ff00
// 004bf207  c1c308               rol ebx, 8
// 004bf20a  81e3ff00ff00         and ebx, 0xff00ff
// 004bf210  0bd3                 or edx, ebx
// 004bf212  8954243c             mov dword ptr [esp + 0x3c], edx
// 004bf216  8bde                 mov ebx, esi
// 004bf218  c1c305               rol ebx, 5
// 004bf21b  03da                 add ebx, edx
// 004bf21d  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bf221  03eb                 add ebp, ebx
// 004bf223  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004bf22a  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bf22e  c1ca02               ror edx, 2
// 004bf231  8bea                 mov ebp, edx
// 004bf233  897c2410             mov dword ptr [esp + 0x10], edi
// 004bf237  8b7814               mov edi, dword ptr [eax + 0x14]
// 004bf23a  8bd7                 mov edx, edi
// 004bf23c  c1ca08               ror edx, 8
// 004bf23f  81e200ff00ff         and edx, 0xff00ff00
// 004bf245  c1c708               rol edi, 8
// 004bf248  81e7ff00ff00         and edi, 0xff00ff
// 004bf24e  0bd7                 or edx, edi
// 004bf250  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bf254  33fd                 xor edi, ebp
// 004bf256  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bf25a  c1c305               rol ebx, 5
// 004bf25d  03da                 add ebx, edx
// 004bf25f  23fe                 and edi, esi
// 004bf261  337c2410             xor edi, dword ptr [esp + 0x10]
// 004bf265  89542440             mov dword ptr [esp + 0x40], edx
// 004bf269  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bf26d  03fb                 add edi, ebx
// 004bf26f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 004bf272  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 004bf279  8bd3                 mov edx, ebx
// 004bf27b  c1ce02               ror esi, 2
// 004bf27e  c1ca08               ror edx, 8
// 004bf281  81e200ff00ff         and edx, 0xff00ff00
// 004bf287  c1c308               rol ebx, 8
// 004bf28a  81e3ff00ff00         and ebx, 0xff00ff
// 004bf290  0bd3                 or edx, ebx
// 004bf292  896c2414             mov dword ptr [esp + 0x14], ebp
// 004bf296  33ee                 xor ebp, esi
// 004bf298  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004bf29c  8bdf                 mov ebx, edi
// 004bf29e  336c2414             xor ebp, dword ptr [esp + 0x14]
// 004bf2a2  c1c305               rol ebx, 5
// 004bf2a5  03da                 add ebx, edx
// 004bf2a7  89542444             mov dword ptr [esp + 0x44], edx
// 004bf2ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bf2af  03eb                 add ebp, ebx
// 004bf2b1  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004bf2b8  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bf2bc  c1ca02               ror edx, 2
// 004bf2bf  89742458             mov dword ptr [esp + 0x58], esi
// 004bf2c3  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bf2c7  8bea                 mov ebp, edx
// 004bf2c9  8b701c               mov esi, dword ptr [eax + 0x1c]
// 004bf2cc  8bd6                 mov edx, esi
// 004bf2ce  c1ca08               ror edx, 8
// 004bf2d1  81e200ff00ff         and edx, 0xff00ff00
// 004bf2d7  c1c608               rol esi, 8
// 004bf2da  81e6ff00ff00         and esi, 0xff00ff
// 004bf2e0  0bd6                 or edx, esi
// 004bf2e2  8b742458             mov esi, dword ptr [esp + 0x58]
// 004bf2e6  c1c305               rol ebx, 5
// 004bf2e9  03da                 add ebx, edx
// 004bf2eb  33f5                 xor esi, ebp
// 004bf2ed  23f7                 and esi, edi
// 004bf2ef  33742458             xor esi, dword ptr [esp + 0x58]
// 004bf2f3  89542448             mov dword ptr [esp + 0x48], edx
// 004bf2f7  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bf2fb  03f3                 add esi, ebx
// 004bf2fd  8b5820               mov ebx, dword ptr [eax + 0x20]
// 004bf300  c1cf02               ror edi, 2
// 004bf303  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 004bf30a  8bd3                 mov edx, ebx
// 004bf30c  c1ca08               ror edx, 8
// 004bf30f  81e200ff00ff         and edx, 0xff00ff00
// 004bf315  c1c308               rol ebx, 8
// 004bf318  81e3ff00ff00         and ebx, 0xff00ff
// 004bf31e  0bd3                 or edx, ebx
// 004bf320  897c2418             mov dword ptr [esp + 0x18], edi
// 004bf324  33fd                 xor edi, ebp
// 004bf326  237c2410             and edi, dword ptr [esp + 0x10]
// 004bf32a  89542420             mov dword ptr [esp + 0x20], edx
// 004bf32e  33fd                 xor edi, ebp
// 004bf330  8bde                 mov ebx, esi
// 004bf332  c1c305               rol ebx, 5
// 004bf335  03da                 add ebx, edx
// 004bf337  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bf33b  03fb                 add edi, ebx
// 004bf33d  8d9c3a9979825a       lea ebx, [edx + edi + 0x5a827999]
// 004bf344  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bf348  8b7824               mov edi, dword ptr [eax + 0x24]
// 004bf34b  c1ca02               ror edx, 2
// 004bf34e  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004bf352  8bea                 mov ebp, edx
// 004bf354  8bd7                 mov edx, edi
// 004bf356  c1ca08               ror edx, 8
// 004bf359  81e200ff00ff         and edx, 0xff00ff00
// 004bf35f  c1c708               rol edi, 8
// 004bf362  81e7ff00ff00         and edi, 0xff00ff
// 004bf368  0bd7                 or edx, edi
// 004bf36a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf36e  33fd                 xor edi, ebp
// 004bf370  895c2458             mov dword ptr [esp + 0x58], ebx
// 004bf374  c1c305               rol ebx, 5
// 004bf377  03da                 add ebx, edx
// 004bf379  23fe                 and edi, esi
// 004bf37b  337c2418             xor edi, dword ptr [esp + 0x18]
// 004bf37f  89542424             mov dword ptr [esp + 0x24], edx
// 004bf383  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bf387  03fb                 add edi, ebx
// 004bf389  8b5828               mov ebx, dword ptr [eax + 0x28]
// 004bf38c  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 004bf393  8bd3                 mov edx, ebx
// 004bf395  c1ce02               ror esi, 2
// 004bf398  c1ca08               ror edx, 8
// 004bf39b  81e200ff00ff         and edx, 0xff00ff00
// 004bf3a1  c1c308               rol ebx, 8
// 004bf3a4  81e3ff00ff00         and ebx, 0xff00ff
// 004bf3aa  0bd3                 or edx, ebx
// 004bf3ac  896c2410             mov dword ptr [esp + 0x10], ebp
// 004bf3b0  33ee                 xor ebp, esi
// 004bf3b2  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bf3b6  8bdf                 mov ebx, edi
// 004bf3b8  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004bf3bc  c1c305               rol ebx, 5
// 004bf3bf  03da                 add ebx, edx
// 004bf3c1  89542428             mov dword ptr [esp + 0x28], edx
// 004bf3c5  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bf3c9  03eb                 add ebp, ebx
// 004bf3cb  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004bf3d2  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bf3d6  89742414             mov dword ptr [esp + 0x14], esi
// 004bf3da  895c2418             mov dword ptr [esp + 0x18], ebx
// 004bf3de  c1ca02               ror edx, 2
// 004bf3e1  8b702c               mov esi, dword ptr [eax + 0x2c]
// 004bf3e4  8bea                 mov ebp, edx
// 004bf3e6  8bd6                 mov edx, esi
// 004bf3e8  c1ca08               ror edx, 8
// 004bf3eb  81e200ff00ff         and edx, 0xff00ff00
// 004bf3f1  c1c608               rol esi, 8
// 004bf3f4  81e6ff00ff00         and esi, 0xff00ff
// 004bf3fa  0bd6                 or edx, esi
// 004bf3fc  8b742414             mov esi, dword ptr [esp + 0x14]
// 004bf400  33f5                 xor esi, ebp
// 004bf402  23f7                 and esi, edi
// 004bf404  33742414             xor esi, dword ptr [esp + 0x14]
// 004bf408  c1c305               rol ebx, 5
// 004bf40b  03da                 add ebx, edx
// 004bf40d  03f3                 add esi, ebx
// 004bf40f  8b5830               mov ebx, dword ptr [eax + 0x30]
// 004bf412  c1cf02               ror edi, 2
// 004bf415  8954242c             mov dword ptr [esp + 0x2c], edx
// 004bf419  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bf41d  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 004bf424  8bd3                 mov edx, ebx
// 004bf426  c1ca08               ror edx, 8
// 004bf429  81e200ff00ff         and edx, 0xff00ff00
// 004bf42f  c1c308               rol ebx, 8
// 004bf432  81e3ff00ff00         and ebx, 0xff00ff
// 004bf438  0bd3                 or edx, ebx
// 004bf43a  896c2458             mov dword ptr [esp + 0x58], ebp
// 004bf43e  33ef                 xor ebp, edi
// 004bf440  236c2418             and ebp, dword ptr [esp + 0x18]
// 004bf444  8bde                 mov ebx, esi
// 004bf446  336c2458             xor ebp, dword ptr [esp + 0x58]
// 004bf44a  c1c305               rol ebx, 5
// 004bf44d  03da                 add ebx, edx
// 004bf44f  03eb                 add ebp, ebx
// 004bf451  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bf455  8b7834               mov edi, dword ptr [eax + 0x34]
// 004bf458  89542430             mov dword ptr [esp + 0x30], edx
// 004bf45c  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bf460  8dac2a9979825a       lea ebp, [edx + ebp + 0x5a827999]
// 004bf467  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bf46b  c1ca02               ror edx, 2
// 004bf46e  8bda                 mov ebx, edx
// 004bf470  8bd7                 mov edx, edi
// 004bf472  c1ca08               ror edx, 8
// 004bf475  81e200ff00ff         and edx, 0xff00ff00
// 004bf47b  c1c708               rol edi, 8
// 004bf47e  81e7ff00ff00         and edi, 0xff00ff
// 004bf484  0bd7                 or edx, edi
// 004bf486  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004bf48a  895c2418             mov dword ptr [esp + 0x18], ebx
// 004bf48e  33df                 xor ebx, edi
// 004bf490  23de                 and ebx, esi
// 004bf492  33df                 xor ebx, edi
// 004bf494  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf498  896c2414             mov dword ptr [esp + 0x14], ebp
// 004bf49c  c1c505               rol ebp, 5
// 004bf49f  03ea                 add ebp, edx
// 004bf4a1  03dd                 add ebx, ebp
// 004bf4a3  8d9c1f9979825a       lea ebx, [edi + ebx + 0x5a827999]
// 004bf4aa  8b7838               mov edi, dword ptr [eax + 0x38]
// 004bf4ad  c1ce02               ror esi, 2
// 004bf4b0  8bee                 mov ebp, esi
// 004bf4b2  8bf7                 mov esi, edi
// 004bf4b4  c1ce08               ror esi, 8
// 004bf4b7  81e600ff00ff         and esi, 0xff00ff00
// 004bf4bd  c1c708               rol edi, 8
// 004bf4c0  81e7ff00ff00         and edi, 0xff00ff
// 004bf4c6  0bf7                 or esi, edi
// 004bf4c8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf4cc  33fd                 xor edi, ebp
// 004bf4ce  237c2414             and edi, dword ptr [esp + 0x14]
// 004bf4d2  895c2458             mov dword ptr [esp + 0x58], ebx
// 004bf4d6  337c2418             xor edi, dword ptr [esp + 0x18]
// 004bf4da  c1c305               rol ebx, 5
// 004bf4dd  03de                 add ebx, esi
// 004bf4df  03fb                 add edi, ebx
// 004bf4e1  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004bf4e5  896c2410             mov dword ptr [esp + 0x10], ebp
// 004bf4e9  8dac3b9979825a       lea ebp, [ebx + edi + 0x5a827999]
// 004bf4f0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bf4f4  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004bf4f8  c1cf02               ror edi, 2
// 004bf4fb  897c2414             mov dword ptr [esp + 0x14], edi
// 004bf4ff  8b783c               mov edi, dword ptr [eax + 0x3c]
// 004bf502  8bdf                 mov ebx, edi
// 004bf504  c1cb08               ror ebx, 8
// 004bf507  81e300ff00ff         and ebx, 0xff00ff00
// 004bf50d  c1c708               rol edi, 8
// 004bf510  81e7ff00ff00         and edi, 0xff00ff
// 004bf516  0bdf                 or ebx, edi
// 004bf518  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bf51c  337c2414             xor edi, dword ptr [esp + 0x14]
// 004bf520  c1c505               rol ebp, 5
// 004bf523  237c2458             and edi, dword ptr [esp + 0x58]
// 004bf527  03eb                 add ebp, ebx
// 004bf529  337c2410             xor edi, dword ptr [esp + 0x10]
// 004bf52d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004bf531  03fd                 add edi, ebp
// 004bf533  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004bf537  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004bf53e  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf542  c1cf02               ror edi, 2
// 004bf545  8bef                 mov ebp, edi
// 004bf547  8bfa                 mov edi, edx
// 004bf549  337c2420             xor edi, dword ptr [esp + 0x20]
// 004bf54d  895c2418             mov dword ptr [esp + 0x18], ebx
// 004bf551  337c2434             xor edi, dword ptr [esp + 0x34]
// 004bf555  896c2458             mov dword ptr [esp + 0x58], ebp
// 004bf559  337c244c             xor edi, dword ptr [esp + 0x4c]
// 004bf55d  d1c7                 rol edi, 1
// 004bf55f  897c244c             mov dword ptr [esp + 0x4c], edi
// 004bf563  8938                 mov dword ptr [eax], edi
// 004bf565  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bf569  33fd                 xor edi, ebp
// 004bf56b  237c245c             and edi, dword ptr [esp + 0x5c]
// 004bf56f  c1c305               rol ebx, 5
// 004bf572  337c2414             xor edi, dword ptr [esp + 0x14]
// 004bf576  035c244c             add ebx, dword ptr [esp + 0x4c]
// 004bf57a  03fb                 add edi, ebx
// 004bf57c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004bf580  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004bf587  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004bf58b  c1cf02               ror edi, 2
// 004bf58e  8bef                 mov ebp, edi
// 004bf590  8bfe                 mov edi, esi
// 004bf592  337c2424             xor edi, dword ptr [esp + 0x24]
// 004bf596  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bf59a  337c2438             xor edi, dword ptr [esp + 0x38]
// 004bf59e  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004bf5a2  337c2450             xor edi, dword ptr [esp + 0x50]
// 004bf5a6  d1c7                 rol edi, 1
// 004bf5a8  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf5ac  897804               mov dword ptr [eax + 4], edi
// 004bf5af  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf5b3  33fd                 xor edi, ebp
// 004bf5b5  237c2418             and edi, dword ptr [esp + 0x18]
// 004bf5b9  c1c305               rol ebx, 5
// 004bf5bc  337c2458             xor edi, dword ptr [esp + 0x58]
// 004bf5c0  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf5c4  03fb                 add edi, ebx
// 004bf5c6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004bf5ca  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004bf5d1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf5d5  c1cf02               ror edi, 2
// 004bf5d8  8bef                 mov ebp, edi
// 004bf5da  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004bf5de  337c2428             xor edi, dword ptr [esp + 0x28]
// 004bf5e2  896c2418             mov dword ptr [esp + 0x18], ebp
// 004bf5e6  337c243c             xor edi, dword ptr [esp + 0x3c]
// 004bf5ea  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004bf5ee  337c2434             xor edi, dword ptr [esp + 0x34]
// 004bf5f2  236c2410             and ebp, dword ptr [esp + 0x10]
// 004bf5f6  d1c7                 rol edi, 1
// 004bf5f8  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004bf5fc  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bf600  c1c305               rol ebx, 5
// 004bf603  03df                 add ebx, edi
// 004bf605  897808               mov dword ptr [eax + 8], edi
// 004bf608  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf60c  03eb                 add ebp, ebx
// 004bf60e  8d9c2f9979825a       lea ebx, [edi + ebp + 0x5a827999]
// 004bf615  895c2458             mov dword ptr [esp + 0x58], ebx
// 004bf619  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bf61d  c1cf02               ror edi, 2
// 004bf620  8bef                 mov ebp, edi
// 004bf622  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004bf626  337c2440             xor edi, dword ptr [esp + 0x40]
// 004bf62a  896c2410             mov dword ptr [esp + 0x10], ebp
// 004bf62e  337c2438             xor edi, dword ptr [esp + 0x38]
// 004bf632  3338                 xor edi, dword ptr [eax]
// 004bf634  d1c7                 rol edi, 1
// 004bf636  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf63a  89780c               mov dword ptr [eax + 0xc], edi
// 004bf63d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf641  33fd                 xor edi, ebp
// 004bf643  237c2414             and edi, dword ptr [esp + 0x14]
// 004bf647  c1c305               rol ebx, 5
// 004bf64a  337c2418             xor edi, dword ptr [esp + 0x18]
// 004bf64e  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf652  03fb                 add edi, ebx
// 004bf654  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004bf658  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004bf65f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bf663  c1cf02               ror edi, 2
// 004bf666  8bef                 mov ebp, edi
// 004bf668  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004bf66c  337c2444             xor edi, dword ptr [esp + 0x44]
// 004bf670  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bf674  337c243c             xor edi, dword ptr [esp + 0x3c]
// 004bf678  896c2414             mov dword ptr [esp + 0x14], ebp
// 004bf67c  337804               xor edi, dword ptr [eax + 4]
// 004bf67f  d1c7                 rol edi, 1
// 004bf681  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf685  897810               mov dword ptr [eax + 0x10], edi
// 004bf688  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bf68c  33fd                 xor edi, ebp
// 004bf68e  337c2458             xor edi, dword ptr [esp + 0x58]
// 004bf692  c1c305               rol ebx, 5
// 004bf695  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf699  03fb                 add edi, ebx
// 004bf69b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004bf69f  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004bf6a6  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf6aa  c1cf02               ror edi, 2
// 004bf6ad  8bef                 mov ebp, edi
// 004bf6af  8bfa                 mov edi, edx
// 004bf6b1  337c2448             xor edi, dword ptr [esp + 0x48]
// 004bf6b5  895c2418             mov dword ptr [esp + 0x18], ebx
// 004bf6b9  337c2440             xor edi, dword ptr [esp + 0x40]
// 004bf6bd  896c2458             mov dword ptr [esp + 0x58], ebp
// 004bf6c1  337808               xor edi, dword ptr [eax + 8]
// 004bf6c4  d1c7                 rol edi, 1
// 004bf6c6  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf6ca  897814               mov dword ptr [eax + 0x14], edi
// 004bf6cd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bf6d1  33fd                 xor edi, ebp
// 004bf6d3  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004bf6d7  c1c305               rol ebx, 5
// 004bf6da  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf6de  03fb                 add edi, ebx
// 004bf6e0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004bf6e4  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004bf6eb  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004bf6ef  c1cf02               ror edi, 2
// 004bf6f2  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bf6f6  8bfe                 mov edi, esi
// 004bf6f8  337c2420             xor edi, dword ptr [esp + 0x20]
// 004bf6fc  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bf700  337c2444             xor edi, dword ptr [esp + 0x44]
// 004bf704  33780c               xor edi, dword ptr [eax + 0xc]
// 004bf707  d1c7                 rol edi, 1
// 004bf709  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf70d  897818               mov dword ptr [eax + 0x18], edi
// 004bf710  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf714  c1c305               rol ebx, 5
// 004bf717  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf71b  33fd                 xor edi, ebp
// 004bf71d  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004bf721  03fb                 add edi, ebx
// 004bf723  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004bf727  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004bf72e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf732  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bf736  c1cf02               ror edi, 2
// 004bf739  8bef                 mov ebp, edi
// 004bf73b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004bf73f  337c2424             xor edi, dword ptr [esp + 0x24]
// 004bf743  896c2418             mov dword ptr [esp + 0x18], ebp
// 004bf747  337c2448             xor edi, dword ptr [esp + 0x48]
// 004bf74b  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004bf74f  337810               xor edi, dword ptr [eax + 0x10]
// 004bf752  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004bf756  d1c7                 rol edi, 1
// 004bf758  89781c               mov dword ptr [eax + 0x1c], edi
// 004bf75b  c1c305               rol ebx, 5
// 004bf75e  03df                 add ebx, edi
// 004bf760  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf764  03eb                 add ebp, ebx
// 004bf766  8d9c2fa1ebd96e       lea ebx, [edi + ebp + 0x6ed9eba1]
// 004bf76d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bf771  c1cf02               ror edi, 2
// 004bf774  8bef                 mov ebp, edi
// 004bf776  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004bf77a  337c2420             xor edi, dword ptr [esp + 0x20]
// 004bf77e  895c2458             mov dword ptr [esp + 0x58], ebx
// 004bf782  337814               xor edi, dword ptr [eax + 0x14]
// 004bf785  896c2410             mov dword ptr [esp + 0x10], ebp
// 004bf789  3338                 xor edi, dword ptr [eax]
// 004bf78b  d1c7                 rol edi, 1
// 004bf78d  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf791  897820               mov dword ptr [eax + 0x20], edi
// 004bf794  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf798  33fd                 xor edi, ebp
// 004bf79a  337c2414             xor edi, dword ptr [esp + 0x14]
// 004bf79e  c1c305               rol ebx, 5
// 004bf7a1  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf7a5  03fb                 add edi, ebx
// 004bf7a7  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004bf7ab  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004bf7b2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bf7b6  c1cf02               ror edi, 2
// 004bf7b9  8bef                 mov ebp, edi
// 004bf7bb  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004bf7bf  337c2424             xor edi, dword ptr [esp + 0x24]
// 004bf7c3  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bf7c7  337804               xor edi, dword ptr [eax + 4]
// 004bf7ca  896c2414             mov dword ptr [esp + 0x14], ebp
// 004bf7ce  337818               xor edi, dword ptr [eax + 0x18]
// 004bf7d1  d1c7                 rol edi, 1
// 004bf7d3  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf7d7  897824               mov dword ptr [eax + 0x24], edi
// 004bf7da  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bf7de  33fd                 xor edi, ebp
// 004bf7e0  337c2458             xor edi, dword ptr [esp + 0x58]
// 004bf7e4  c1c305               rol ebx, 5
// 004bf7e7  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf7eb  03fb                 add edi, ebx
// 004bf7ed  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004bf7f1  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004bf7f8  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf7fc  c1cf02               ror edi, 2
// 004bf7ff  8bef                 mov ebp, edi
// 004bf801  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004bf805  337c2428             xor edi, dword ptr [esp + 0x28]
// 004bf809  895c2418             mov dword ptr [esp + 0x18], ebx
// 004bf80d  33781c               xor edi, dword ptr [eax + 0x1c]
// 004bf810  896c2458             mov dword ptr [esp + 0x58], ebp
// 004bf814  337808               xor edi, dword ptr [eax + 8]
// 004bf817  d1c7                 rol edi, 1
// 004bf819  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf81d  897828               mov dword ptr [eax + 0x28], edi
// 004bf820  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004bf824  33fd                 xor edi, ebp
// 004bf826  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004bf82a  c1c305               rol ebx, 5
// 004bf82d  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf831  03fb                 add edi, ebx
// 004bf833  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004bf837  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004bf83e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004bf842  c1cf02               ror edi, 2
// 004bf845  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bf849  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bf84d  8bfa                 mov edi, edx
// 004bf84f  337c242c             xor edi, dword ptr [esp + 0x2c]
// 004bf853  33780c               xor edi, dword ptr [eax + 0xc]
// 004bf856  337820               xor edi, dword ptr [eax + 0x20]
// 004bf859  d1c7                 rol edi, 1
// 004bf85b  897c2450             mov dword ptr [esp + 0x50], edi
// 004bf85f  89782c               mov dword ptr [eax + 0x2c], edi
// 004bf862  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf866  33fd                 xor edi, ebp
// 004bf868  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004bf86c  c1c305               rol ebx, 5
// 004bf86f  035c2450             add ebx, dword ptr [esp + 0x50]
// 004bf873  03fb                 add edi, ebx
// 004bf875  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004bf879  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004bf880  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf884  c1cf02               ror edi, 2
// 004bf887  8bef                 mov ebp, edi
// 004bf889  896c2418             mov dword ptr [esp + 0x18], ebp
// 004bf88d  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004bf891  8bfe                 mov edi, esi
// 004bf893  337c2430             xor edi, dword ptr [esp + 0x30]
// 004bf897  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004bf89b  337824               xor edi, dword ptr [eax + 0x24]
// 004bf89e  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bf8a2  337810               xor edi, dword ptr [eax + 0x10]
// 004bf8a5  d1c7                 rol edi, 1
// 004bf8a7  c1c305               rol ebx, 5
// 004bf8aa  03df                 add ebx, edi
// 004bf8ac  03eb                 add ebp, ebx
// 004bf8ae  897830               mov dword ptr [eax + 0x30], edi
// 004bf8b1  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004bf8b5  8d9c2fa1ebd96e       lea ebx, [edi + ebp + 0x6ed9eba1]
// 004bf8bc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004bf8c0  c1cf02               ror edi, 2
// 004bf8c3  8bef                 mov ebp, edi
// 004bf8c5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004bf8c9  33fa                 xor edi, edx
// 004bf8cb  337814               xor edi, dword ptr [eax + 0x14]
// 004bf8ce  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bf8d2  337828               xor edi, dword ptr [eax + 0x28]
// 004bf8d5  33d5                 xor edx, ebp
// 004bf8d7  89542450             mov dword ptr [esp + 0x50], edx
// 004bf8db  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bf8df  d1c7                 rol edi, 1
// 004bf8e1  895c2458             mov dword ptr [esp + 0x58], ebx
// 004bf8e5  c1c305               rol ebx, 5
// 004bf8e8  03df                 add ebx, edi
// 004bf8ea  896c2410             mov dword ptr [esp + 0x10], ebp
// 004bf8ee  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 004bf8f2  33ea                 xor ebp, edx
// 004bf8f4  03eb                 add ebp, ebx
// 004bf8f6  c1ca02               ror edx, 2
// 004bf8f9  8bda                 mov ebx, edx
// 004bf8fb  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bf8fe  33d6                 xor edx, esi
// 004bf900  3310                 xor edx, dword ptr [eax]
// 004bf902  8b742410             mov esi, dword ptr [esp + 0x10]
// 004bf906  335018               xor edx, dword ptr [eax + 0x18]
// 004bf909  33f3                 xor esi, ebx
// 004bf90b  897834               mov dword ptr [eax + 0x34], edi
// 004bf90e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004bf912  8dbc2fa1ebd96e       lea edi, [edi + ebp + 0x6ed9eba1]
// 004bf919  d1c2                 rol edx, 1
// 004bf91b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bf91f  8bde                 mov ebx, esi
// 004bf921  8b742458             mov esi, dword ptr [esp + 0x58]
// 004bf925  8bef                 mov ebp, edi
// 004bf927  c1c505               rol ebp, 5
// 004bf92a  03ea                 add ebp, edx
// 004bf92c  33de                 xor ebx, esi
// 004bf92e  895038               mov dword ptr [eax + 0x38], edx
// 004bf931  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bf935  03dd                 add ebx, ebp
// 004bf937  8dac1aa1ebd96e       lea ebp, [edx + ebx + 0x6ed9eba1]
// 004bf93e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004bf941  c1ce02               ror esi, 2
// 004bf944  3354241c             xor edx, dword ptr [esp + 0x1c]
// 004bf948  8bde                 mov ebx, esi
// 004bf94a  896c2418             mov dword ptr [esp + 0x18], ebp
// 004bf94e  895c2458             mov dword ptr [esp + 0x58], ebx
// 004bf952  335030               xor edx, dword ptr [eax + 0x30]
// 004bf955  8b742414             mov esi, dword ptr [esp + 0x14]
// 004bf959  335004               xor edx, dword ptr [eax + 4]
// 004bf95c  33f3                 xor esi, ebx
// 004bf95e  d1c2                 rol edx, 1
// 004bf960  c1c505               rol ebp, 5
// 004bf963  03ea                 add ebp, edx
// 004bf965  89503c               mov dword ptr [eax + 0x3c], edx
// 004bf968  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bf96c  33f7                 xor esi, edi
// 004bf96e  03f5                 add esi, ebp
// 004bf970  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 004bf977  8b5020               mov edx, dword ptr [eax + 0x20]
// 004bf97a  335008               xor edx, dword ptr [eax + 8]
// 004bf97d  c1cf02               ror edi, 2
// 004bf980  335034               xor edx, dword ptr [eax + 0x34]
// 004bf983  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bf987  3310                 xor edx, dword ptr [eax]
// 004bf989  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004bf98d  d1c2                 rol edx, 1
// 004bf98f  33fb                 xor edi, ebx
// 004bf991  8910                 mov dword ptr [eax], edx
// 004bf993  8bee                 mov ebp, esi
// 004bf995  c1c505               rol ebp, 5
// 004bf998  03ea                 add ebp, edx
// 004bf99a  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bf99e  8bdf                 mov ebx, edi
// 004bf9a0  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004bf9a4  33df                 xor ebx, edi
// 004bf9a6  03dd                 add ebx, ebp
// 004bf9a8  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 004bf9af  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bf9b3  c1ca02               ror edx, 2
// 004bf9b6  8bea                 mov ebp, edx
// 004bf9b8  8b500c               mov edx, dword ptr [eax + 0xc]
// 004bf9bb  335024               xor edx, dword ptr [eax + 0x24]
// 004bf9be  896c2418             mov dword ptr [esp + 0x18], ebp
// 004bf9c2  335004               xor edx, dword ptr [eax + 4]
// 004bf9c5  33ee                 xor ebp, esi
// 004bf9c7  335038               xor edx, dword ptr [eax + 0x38]
// 004bf9ca  33ef                 xor ebp, edi
// 004bf9cc  d1c2                 rol edx, 1
// 004bf9ce  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bf9d2  c1c305               rol ebx, 5
// 004bf9d5  03da                 add ebx, edx
// 004bf9d7  03eb                 add ebp, ebx
// 004bf9d9  895004               mov dword ptr [eax + 4], edx
// 004bf9dc  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bf9e0  8dbc2aa1ebd96e       lea edi, [edx + ebp + 0x6ed9eba1]
// 004bf9e7  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004bf9ea  335008               xor edx, dword ptr [eax + 8]
// 004bf9ed  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004bf9f1  335028               xor edx, dword ptr [eax + 0x28]
// 004bf9f4  c1ce02               ror esi, 2
// 004bf9f7  335010               xor edx, dword ptr [eax + 0x10]
// 004bf9fa  33ee                 xor ebp, esi
// 004bf9fc  d1c2                 rol edx, 1
// 004bf9fe  89742410             mov dword ptr [esp + 0x10], esi
// 004bfa02  8b742414             mov esi, dword ptr [esp + 0x14]
// 004bfa06  33ee                 xor ebp, esi
// 004bfa08  895008               mov dword ptr [eax + 8], edx
// 004bfa0b  8bdf                 mov ebx, edi
// 004bfa0d  c1c305               rol ebx, 5
// 004bfa10  03da                 add ebx, edx
// 004bfa12  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bfa16  03eb                 add ebp, ebx
// 004bfa18  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 004bfa1f  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bfa22  33500c               xor edx, dword ptr [eax + 0xc]
// 004bfa25  c1ce02               ror esi, 2
// 004bfa28  335014               xor edx, dword ptr [eax + 0x14]
// 004bfa2b  8bde                 mov ebx, esi
// 004bfa2d  3310                 xor edx, dword ptr [eax]
// 004bfa2f  8b742410             mov esi, dword ptr [esp + 0x10]
// 004bfa33  d1c2                 rol edx, 1
// 004bfa35  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004bfa39  c1c505               rol ebp, 5
// 004bfa3c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bfa40  89500c               mov dword ptr [eax + 0xc], edx
// 004bfa43  33f3                 xor esi, ebx
// 004bfa45  03ea                 add ebp, edx
// 004bfa47  8b542418             mov edx, dword ptr [esp + 0x18]
// 004bfa4b  33f7                 xor esi, edi
// 004bfa4d  03f5                 add esi, ebp
// 004bfa4f  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 004bfa56  8b5030               mov edx, dword ptr [eax + 0x30]
// 004bfa59  335004               xor edx, dword ptr [eax + 4]
// 004bfa5c  c1cf02               ror edi, 2
// 004bfa5f  335018               xor edx, dword ptr [eax + 0x18]
// 004bfa62  33df                 xor ebx, edi
// 004bfa64  335010               xor edx, dword ptr [eax + 0x10]
// 004bfa67  897c2458             mov dword ptr [esp + 0x58], edi
// 004bfa6b  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004bfa6f  d1c2                 rol edx, 1
// 004bfa71  895010               mov dword ptr [eax + 0x10], edx
// 004bfa74  33df                 xor ebx, edi
// 004bfa76  8bee                 mov ebp, esi
// 004bfa78  c1c505               rol ebp, 5
// 004bfa7b  03ea                 add ebp, edx
// 004bfa7d  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bfa81  03dd                 add ebx, ebp
// 004bfa83  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 004bfa8a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004bfa8d  335008               xor edx, dword ptr [eax + 8]
// 004bfa90  c1cf02               ror edi, 2
// 004bfa93  335034               xor edx, dword ptr [eax + 0x34]
// 004bfa96  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bfa9a  335014               xor edx, dword ptr [eax + 0x14]
// 004bfa9d  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bfaa1  d1c2                 rol edx, 1
// 004bfaa3  895014               mov dword ptr [eax + 0x14], edx
// 004bfaa6  c1c305               rol ebx, 5
// 004bfaa9  03da                 add ebx, edx
// 004bfaab  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bfaaf  8bfe                 mov edi, esi
// 004bfab1  337c2458             xor edi, dword ptr [esp + 0x58]
// 004bfab5  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004bfab9  03fb                 add edi, ebx
// 004bfabb  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 004bfac2  8b500c               mov edx, dword ptr [eax + 0xc]
// 004bfac5  335020               xor edx, dword ptr [eax + 0x20]
// 004bfac8  c1ce02               ror esi, 2
// 004bfacb  335038               xor edx, dword ptr [eax + 0x38]
// 004bface  89742418             mov dword ptr [esp + 0x18], esi
// 004bfad2  335018               xor edx, dword ptr [eax + 0x18]
// 004bfad5  33742410             xor esi, dword ptr [esp + 0x10]
// 004bfad9  d1c2                 rol edx, 1
// 004bfadb  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004bfadf  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004bfae3  895018               mov dword ptr [eax + 0x18], edx
// 004bfae6  8bdf                 mov ebx, edi
// 004bfae8  c1c305               rol ebx, 5
// 004bfaeb  03da                 add ebx, edx
// 004bfaed  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bfaf1  03f3                 add esi, ebx
// 004bfaf3  8d9c32a1ebd96e       lea ebx, [edx + esi + 0x6ed9eba1]
// 004bfafa  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bfafe  c1ca02               ror edx, 2
// 004bfb01  8bf2                 mov esi, edx
// 004bfb03  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004bfb06  33501c               xor edx, dword ptr [eax + 0x1c]
// 004bfb09  895c2458             mov dword ptr [esp + 0x58], ebx
// 004bfb0d  335024               xor edx, dword ptr [eax + 0x24]
// 004bfb10  33ee                 xor ebp, esi
// 004bfb12  335010               xor edx, dword ptr [eax + 0x10]
// 004bfb15  33ef                 xor ebp, edi
// 004bfb17  d1c2                 rol edx, 1
// 004bfb19  c1c305               rol ebx, 5
// 004bfb1c  03da                 add ebx, edx
// 004bfb1e  89501c               mov dword ptr [eax + 0x1c], edx
// 004bfb21  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bfb25  03eb                 add ebp, ebx
// 004bfb27  8d9c2aa1ebd96e       lea ebx, [edx + ebp + 0x6ed9eba1]
// 004bfb2e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004bfb31  335014               xor edx, dword ptr [eax + 0x14]
// 004bfb34  c1cf02               ror edi, 2
// 004bfb37  3310                 xor edx, dword ptr [eax]
// 004bfb39  89742410             mov dword ptr [esp + 0x10], esi
// 004bfb3d  335028               xor edx, dword ptr [eax + 0x28]
// 004bfb40  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bfb44  897c2414             mov dword ptr [esp + 0x14], edi
// 004bfb48  d1c2                 rol edx, 1
// 004bfb4a  895020               mov dword ptr [eax + 0x20], edx
// 004bfb4d  8bef                 mov ebp, edi
// 004bfb4f  0b6c2458             or ebp, dword ptr [esp + 0x58]
// 004bfb53  237c2458             and edi, dword ptr [esp + 0x58]
// 004bfb57  23ee                 and ebp, esi
// 004bfb59  0bef                 or ebp, edi
// 004bfb5b  03ea                 add ebp, edx
// 004bfb5d  036c2418             add ebp, dword ptr [esp + 0x18]
// 004bfb61  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bfb65  c1c305               rol ebx, 5
// 004bfb68  c1ca02               ror edx, 2
// 004bfb6b  8bfa                 mov edi, edx
// 004bfb6d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bfb70  335024               xor edx, dword ptr [eax + 0x24]
// 004bfb73  8db42bdcbc1b8f       lea esi, [ebx + ebp - 0x70e44324]
// 004bfb7a  335004               xor edx, dword ptr [eax + 4]
// 004bfb7d  897c2458             mov dword ptr [esp + 0x58], edi
// 004bfb81  335018               xor edx, dword ptr [eax + 0x18]
// 004bfb84  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004bfb88  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004bfb8c  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004bfb90  237c2414             and edi, dword ptr [esp + 0x14]
// 004bfb94  d1c2                 rol edx, 1
// 004bfb96  0bfd                 or edi, ebp
// 004bfb98  03fa                 add edi, edx
// 004bfb9a  037c2410             add edi, dword ptr [esp + 0x10]
// 004bfb9e  895024               mov dword ptr [eax + 0x24], edx
// 004bfba1  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bfba5  8bde                 mov ebx, esi
// 004bfba7  c1c305               rol ebx, 5
// 004bfbaa  c1ca02               ror edx, 2
// 004bfbad  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004bfbb4  8bda                 mov ebx, edx
// 004bfbb6  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004bfbb9  335030               xor edx, dword ptr [eax + 0x30]
// 004bfbbc  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bfbc0  335008               xor edx, dword ptr [eax + 8]
// 004bfbc3  8bee                 mov ebp, esi
// 004bfbc5  335028               xor edx, dword ptr [eax + 0x28]
// 004bfbc8  0beb                 or ebp, ebx
// 004bfbca  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bfbce  d1c2                 rol edx, 1
// 004bfbd0  895028               mov dword ptr [eax + 0x28], edx
// 004bfbd3  8bde                 mov ebx, esi
// 004bfbd5  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004bfbd9  897c2410             mov dword ptr [esp + 0x10], edi
// 004bfbdd  0beb                 or ebp, ebx
// 004bfbdf  03ea                 add ebp, edx
// 004bfbe1  036c2414             add ebp, dword ptr [esp + 0x14]
// 004bfbe5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bfbe8  33500c               xor edx, dword ptr [eax + 0xc]
// 004bfbeb  c1c705               rol edi, 5
// 004bfbee  335020               xor edx, dword ptr [eax + 0x20]
// 004bfbf1  c1ce02               ror esi, 2
// 004bfbf4  335034               xor edx, dword ptr [eax + 0x34]
// 004bfbf7  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004bfbfe  d1c2                 rol edx, 1
// 004bfc00  8bde                 mov ebx, esi
// 004bfc02  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004bfc06  8bee                 mov ebp, esi
// 004bfc08  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004bfc0c  236c2410             and ebp, dword ptr [esp + 0x10]
// 004bfc10  89502c               mov dword ptr [eax + 0x2c], edx
// 004bfc13  0bdd                 or ebx, ebp
// 004bfc15  03da                 add ebx, edx
// 004bfc17  035c2458             add ebx, dword ptr [esp + 0x58]
// 004bfc1b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bfc1f  897c2414             mov dword ptr [esp + 0x14], edi
// 004bfc23  c1c705               rol edi, 5
// 004bfc26  c1ca02               ror edx, 2
// 004bfc29  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004bfc30  8bda                 mov ebx, edx
// 004bfc32  8b5030               mov edx, dword ptr [eax + 0x30]
// 004bfc35  335024               xor edx, dword ptr [eax + 0x24]
// 004bfc38  897c2458             mov dword ptr [esp + 0x58], edi
// 004bfc3c  335038               xor edx, dword ptr [eax + 0x38]
// 004bfc3f  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bfc43  335010               xor edx, dword ptr [eax + 0x10]
// 004bfc46  d1c2                 rol edx, 1
// 004bfc48  895030               mov dword ptr [eax + 0x30], edx
// 004bfc4b  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004bfc4f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004bfc53  236c2414             and ebp, dword ptr [esp + 0x14]
// 004bfc57  23de                 and ebx, esi
// 004bfc59  0bdd                 or ebx, ebp
// 004bfc5b  03da                 add ebx, edx
// 004bfc5d  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004bfc61  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bfc65  c1c705               rol edi, 5
// 004bfc68  c1ca02               ror edx, 2
// 004bfc6b  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004bfc72  8bda                 mov ebx, edx
// 004bfc74  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004bfc77  335034               xor edx, dword ptr [eax + 0x34]
// 004bfc7a  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bfc7e  335014               xor edx, dword ptr [eax + 0x14]
// 004bfc81  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004bfc85  335028               xor edx, dword ptr [eax + 0x28]
// 004bfc88  235c2410             and ebx, dword ptr [esp + 0x10]
// 004bfc8c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004bfc90  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bfc94  d1c2                 rol edx, 1
// 004bfc96  0bdd                 or ebx, ebp
// 004bfc98  03da                 add ebx, edx
// 004bfc9a  895034               mov dword ptr [eax + 0x34], edx
// 004bfc9d  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bfca1  03de                 add ebx, esi
// 004bfca3  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bfca7  c1c705               rol edi, 5
// 004bfcaa  c1ca02               ror edx, 2
// 004bfcad  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004bfcb4  8bfa                 mov edi, edx
// 004bfcb6  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bfcb9  3310                 xor edx, dword ptr [eax]
// 004bfcbb  897c2458             mov dword ptr [esp + 0x58], edi
// 004bfcbf  335038               xor edx, dword ptr [eax + 0x38]
// 004bfcc2  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004bfcc6  335018               xor edx, dword ptr [eax + 0x18]
// 004bfcc9  237c2414             and edi, dword ptr [esp + 0x14]
// 004bfccd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004bfcd1  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004bfcd5  d1c2                 rol edx, 1
// 004bfcd7  0bfd                 or edi, ebp
// 004bfcd9  03fa                 add edi, edx
// 004bfcdb  037c2410             add edi, dword ptr [esp + 0x10]
// 004bfcdf  895038               mov dword ptr [eax + 0x38], edx
// 004bfce2  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bfce6  8bde                 mov ebx, esi
// 004bfce8  c1c305               rol ebx, 5
// 004bfceb  c1ca02               ror edx, 2
// 004bfcee  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004bfcf5  8bda                 mov ebx, edx
// 004bfcf7  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004bfcfa  33501c               xor edx, dword ptr [eax + 0x1c]
// 004bfcfd  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bfd01  335030               xor edx, dword ptr [eax + 0x30]
// 004bfd04  8bee                 mov ebp, esi
// 004bfd06  335004               xor edx, dword ptr [eax + 4]
// 004bfd09  0beb                 or ebp, ebx
// 004bfd0b  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bfd0f  d1c2                 rol edx, 1
// 004bfd11  8bde                 mov ebx, esi
// 004bfd13  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004bfd17  89503c               mov dword ptr [eax + 0x3c], edx
// 004bfd1a  0beb                 or ebp, ebx
// 004bfd1c  03ea                 add ebp, edx
// 004bfd1e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004bfd21  335008               xor edx, dword ptr [eax + 8]
// 004bfd24  036c2414             add ebp, dword ptr [esp + 0x14]
// 004bfd28  335034               xor edx, dword ptr [eax + 0x34]
// 004bfd2b  897c2410             mov dword ptr [esp + 0x10], edi
// 004bfd2f  3310                 xor edx, dword ptr [eax]
// 004bfd31  c1c705               rol edi, 5
// 004bfd34  c1ce02               ror esi, 2
// 004bfd37  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004bfd3e  d1c2                 rol edx, 1
// 004bfd40  897c2414             mov dword ptr [esp + 0x14], edi
// 004bfd44  8bde                 mov ebx, esi
// 004bfd46  c1c705               rol edi, 5
// 004bfd49  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004bfd4d  8910                 mov dword ptr [eax], edx
// 004bfd4f  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004bfd53  8bee                 mov ebp, esi
// 004bfd55  236c2410             and ebp, dword ptr [esp + 0x10]
// 004bfd59  0bdd                 or ebx, ebp
// 004bfd5b  03da                 add ebx, edx
// 004bfd5d  035c2458             add ebx, dword ptr [esp + 0x58]
// 004bfd61  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bfd65  c1ca02               ror edx, 2
// 004bfd68  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004bfd6f  8bda                 mov ebx, edx
// 004bfd71  8b500c               mov edx, dword ptr [eax + 0xc]
// 004bfd74  335024               xor edx, dword ptr [eax + 0x24]
// 004bfd77  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bfd7b  335004               xor edx, dword ptr [eax + 4]
// 004bfd7e  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004bfd82  335038               xor edx, dword ptr [eax + 0x38]
// 004bfd85  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004bfd89  236c2414             and ebp, dword ptr [esp + 0x14]
// 004bfd8d  d1c2                 rol edx, 1
// 004bfd8f  23de                 and ebx, esi
// 004bfd91  0bdd                 or ebx, ebp
// 004bfd93  03da                 add ebx, edx
// 004bfd95  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004bfd99  895004               mov dword ptr [eax + 4], edx
// 004bfd9c  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bfda0  897c2458             mov dword ptr [esp + 0x58], edi
// 004bfda4  c1c705               rol edi, 5
// 004bfda7  c1ca02               ror edx, 2
// 004bfdaa  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004bfdb1  8bda                 mov ebx, edx
// 004bfdb3  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004bfdb6  335008               xor edx, dword ptr [eax + 8]
// 004bfdb9  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bfdbd  335028               xor edx, dword ptr [eax + 0x28]
// 004bfdc0  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004bfdc4  335010               xor edx, dword ptr [eax + 0x10]
// 004bfdc7  235c2410             and ebx, dword ptr [esp + 0x10]
// 004bfdcb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004bfdcf  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bfdd3  d1c2                 rol edx, 1
// 004bfdd5  0bdd                 or ebx, ebp
// 004bfdd7  03da                 add ebx, edx
// 004bfdd9  895008               mov dword ptr [eax + 8], edx
// 004bfddc  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bfde0  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bfde4  c1c705               rol edi, 5
// 004bfde7  03de                 add ebx, esi
// 004bfde9  c1ca02               ror edx, 2
// 004bfdec  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004bfdf3  8bfa                 mov edi, edx
// 004bfdf5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bfdf8  33500c               xor edx, dword ptr [eax + 0xc]
// 004bfdfb  897c2458             mov dword ptr [esp + 0x58], edi
// 004bfdff  335014               xor edx, dword ptr [eax + 0x14]
// 004bfe02  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004bfe06  3310                 xor edx, dword ptr [eax]
// 004bfe08  237c2414             and edi, dword ptr [esp + 0x14]
// 004bfe0c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004bfe10  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004bfe14  d1c2                 rol edx, 1
// 004bfe16  0bfd                 or edi, ebp
// 004bfe18  03fa                 add edi, edx
// 004bfe1a  037c2410             add edi, dword ptr [esp + 0x10]
// 004bfe1e  89500c               mov dword ptr [eax + 0xc], edx
// 004bfe21  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bfe25  8bde                 mov ebx, esi
// 004bfe27  c1c305               rol ebx, 5
// 004bfe2a  c1ca02               ror edx, 2
// 004bfe2d  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004bfe34  8bda                 mov ebx, edx
// 004bfe36  8b5030               mov edx, dword ptr [eax + 0x30]
// 004bfe39  335004               xor edx, dword ptr [eax + 4]
// 004bfe3c  897c2410             mov dword ptr [esp + 0x10], edi
// 004bfe40  335018               xor edx, dword ptr [eax + 0x18]
// 004bfe43  8bee                 mov ebp, esi
// 004bfe45  335010               xor edx, dword ptr [eax + 0x10]
// 004bfe48  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bfe4c  d1c2                 rol edx, 1
// 004bfe4e  c1c705               rol edi, 5
// 004bfe51  895010               mov dword ptr [eax + 0x10], edx
// 004bfe54  0beb                 or ebp, ebx
// 004bfe56  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bfe5a  8bde                 mov ebx, esi
// 004bfe5c  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004bfe60  0beb                 or ebp, ebx
// 004bfe62  03ea                 add ebp, edx
// 004bfe64  036c2414             add ebp, dword ptr [esp + 0x14]
// 004bfe68  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004bfe6b  335008               xor edx, dword ptr [eax + 8]
// 004bfe6e  c1ce02               ror esi, 2
// 004bfe71  335034               xor edx, dword ptr [eax + 0x34]
// 004bfe74  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004bfe7b  335014               xor edx, dword ptr [eax + 0x14]
// 004bfe7e  8bde                 mov ebx, esi
// 004bfe80  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004bfe84  d1c2                 rol edx, 1
// 004bfe86  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004bfe8a  895014               mov dword ptr [eax + 0x14], edx
// 004bfe8d  897c2414             mov dword ptr [esp + 0x14], edi
// 004bfe91  c1c705               rol edi, 5
// 004bfe94  8bee                 mov ebp, esi
// 004bfe96  236c2410             and ebp, dword ptr [esp + 0x10]
// 004bfe9a  0bdd                 or ebx, ebp
// 004bfe9c  03da                 add ebx, edx
// 004bfe9e  035c2458             add ebx, dword ptr [esp + 0x58]
// 004bfea2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bfea6  c1ca02               ror edx, 2
// 004bfea9  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004bfeb0  8bda                 mov ebx, edx
// 004bfeb2  8b500c               mov edx, dword ptr [eax + 0xc]
// 004bfeb5  335020               xor edx, dword ptr [eax + 0x20]
// 004bfeb8  895c2410             mov dword ptr [esp + 0x10], ebx
// 004bfebc  335038               xor edx, dword ptr [eax + 0x38]
// 004bfebf  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004bfec3  335018               xor edx, dword ptr [eax + 0x18]
// 004bfec6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004bfeca  236c2414             and ebp, dword ptr [esp + 0x14]
// 004bfece  d1c2                 rol edx, 1
// 004bfed0  23de                 and ebx, esi
// 004bfed2  0bdd                 or ebx, ebp
// 004bfed4  03da                 add ebx, edx
// 004bfed6  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004bfeda  895018               mov dword ptr [eax + 0x18], edx
// 004bfedd  8b542414             mov edx, dword ptr [esp + 0x14]
// 004bfee1  897c2458             mov dword ptr [esp + 0x58], edi
// 004bfee5  c1c705               rol edi, 5
// 004bfee8  c1ca02               ror edx, 2
// 004bfeeb  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004bfef2  8bda                 mov ebx, edx
// 004bfef4  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004bfef7  33501c               xor edx, dword ptr [eax + 0x1c]
// 004bfefa  895c2414             mov dword ptr [esp + 0x14], ebx
// 004bfefe  335024               xor edx, dword ptr [eax + 0x24]
// 004bff01  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004bff05  335010               xor edx, dword ptr [eax + 0x10]
// 004bff08  235c2410             and ebx, dword ptr [esp + 0x10]
// 004bff0c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004bff10  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bff14  d1c2                 rol edx, 1
// 004bff16  0bdd                 or ebx, ebp
// 004bff18  03da                 add ebx, edx
// 004bff1a  89501c               mov dword ptr [eax + 0x1c], edx
// 004bff1d  8b542458             mov edx, dword ptr [esp + 0x58]
// 004bff21  897c245c             mov dword ptr [esp + 0x5c], edi
// 004bff25  c1c705               rol edi, 5
// 004bff28  03de                 add ebx, esi
// 004bff2a  c1ca02               ror edx, 2
// 004bff2d  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004bff34  8bfa                 mov edi, edx
// 004bff36  8b5020               mov edx, dword ptr [eax + 0x20]
// 004bff39  335014               xor edx, dword ptr [eax + 0x14]
// 004bff3c  897c2458             mov dword ptr [esp + 0x58], edi
// 004bff40  3310                 xor edx, dword ptr [eax]
// 004bff42  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004bff46  335028               xor edx, dword ptr [eax + 0x28]
// 004bff49  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004bff4d  237c2414             and edi, dword ptr [esp + 0x14]
// 004bff51  d1c2                 rol edx, 1
// 004bff53  8bde                 mov ebx, esi
// 004bff55  c1c305               rol ebx, 5
// 004bff58  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004bff5c  895020               mov dword ptr [eax + 0x20], edx
// 004bff5f  0bfd                 or edi, ebp
// 004bff61  03fa                 add edi, edx
// 004bff63  037c2410             add edi, dword ptr [esp + 0x10]
// 004bff67  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004bff6b  c1ca02               ror edx, 2
// 004bff6e  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004bff75  8bda                 mov ebx, edx
// 004bff77  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bff7a  335024               xor edx, dword ptr [eax + 0x24]
// 004bff7d  8bee                 mov ebp, esi
// 004bff7f  335004               xor edx, dword ptr [eax + 4]
// 004bff82  0beb                 or ebp, ebx
// 004bff84  335018               xor edx, dword ptr [eax + 0x18]
// 004bff87  236c2458             and ebp, dword ptr [esp + 0x58]
// 004bff8b  d1c2                 rol edx, 1
// 004bff8d  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004bff91  8bde                 mov ebx, esi
// 004bff93  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004bff97  895024               mov dword ptr [eax + 0x24], edx
// 004bff9a  0beb                 or ebp, ebx
// 004bff9c  03ea                 add ebp, edx
// 004bff9e  036c2414             add ebp, dword ptr [esp + 0x14]
// 004bffa2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004bffa5  335030               xor edx, dword ptr [eax + 0x30]
// 004bffa8  897c2410             mov dword ptr [esp + 0x10], edi
// 004bffac  335008               xor edx, dword ptr [eax + 8]
// 004bffaf  c1c705               rol edi, 5
// 004bffb2  335028               xor edx, dword ptr [eax + 0x28]
// 004bffb5  c1ce02               ror esi, 2
// 004bffb8  8d9c2fdcbc1b8f       lea ebx, [edi + ebp - 0x70e44324]
// 004bffbf  d1c2                 rol edx, 1
// 004bffc1  8bee                 mov ebp, esi
// 004bffc3  0b6c2410             or ebp, dword ptr [esp + 0x10]
// 004bffc7  89742418             mov dword ptr [esp + 0x18], esi
// 004bffcb  23742410             and esi, dword ptr [esp + 0x10]
// 004bffcf  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004bffd3  895028               mov dword ptr [eax + 0x28], edx
// 004bffd6  0bee                 or ebp, esi
// 004bffd8  03ea                 add ebp, edx
// 004bffda  036c2458             add ebp, dword ptr [esp + 0x58]
// 004bffde  8b542410             mov edx, dword ptr [esp + 0x10]
// 004bffe2  8bfb                 mov edi, ebx
// 004bffe4  c1c705               rol edi, 5
// 004bffe7  c1ca02               ror edx, 2
// 004bffea  8bf2                 mov esi, edx
// 004bffec  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004bffef  33500c               xor edx, dword ptr [eax + 0xc]
// 004bfff2  89742410             mov dword ptr [esp + 0x10], esi
// 004bfff6  335020               xor edx, dword ptr [eax + 0x20]
// 004bfff9  0bf3                 or esi, ebx
// 004bfffb  335034               xor edx, dword ptr [eax + 0x34]
// 004bfffe  23742418             and esi, dword ptr [esp + 0x18]
// 004c0002  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c0006  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004c000a  235c2414             and ebx, dword ptr [esp + 0x14]
// 004c000e  d1c2                 rol edx, 1
// 004c0010  0bf3                 or esi, ebx
// 004c0012  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004c0016  03f2                 add esi, edx
// 004c0018  0374245c             add esi, dword ptr [esp + 0x5c]
// 004c001c  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004c0023  89502c               mov dword ptr [eax + 0x2c], edx
// 004c0026  8b5030               mov edx, dword ptr [eax + 0x30]
// 004c0029  335024               xor edx, dword ptr [eax + 0x24]
// 004c002c  8bef                 mov ebp, edi
// 004c002e  335038               xor edx, dword ptr [eax + 0x38]
// 004c0031  c1c505               rol ebp, 5
// 004c0034  335010               xor edx, dword ptr [eax + 0x10]
// 004c0037  8db42edcbc1b8f       lea esi, [esi + ebp - 0x70e44324]
// 004c003e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004c0042  c1cb02               ror ebx, 2
// 004c0045  33eb                 xor ebp, ebx
// 004c0047  d1c2                 rol edx, 1
// 004c0049  33ef                 xor ebp, edi
// 004c004b  8974245c             mov dword ptr [esp + 0x5c], esi
// 004c004f  c1c605               rol esi, 5
// 004c0052  03ea                 add ebp, edx
// 004c0054  036c2418             add ebp, dword ptr [esp + 0x18]
// 004c0058  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c005c  895030               mov dword ptr [eax + 0x30], edx
// 004c005f  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004c0066  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004c0069  335034               xor edx, dword ptr [eax + 0x34]
// 004c006c  c1cf02               ror edi, 2
// 004c006f  335014               xor edx, dword ptr [eax + 0x14]
// 004c0072  33df                 xor ebx, edi
// 004c0074  335028               xor edx, dword ptr [eax + 0x28]
// 004c0077  897c2458             mov dword ptr [esp + 0x58], edi
// 004c007b  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004c007f  d1c2                 rol edx, 1
// 004c0081  33df                 xor ebx, edi
// 004c0083  03da                 add ebx, edx
// 004c0085  035c2410             add ebx, dword ptr [esp + 0x10]
// 004c0089  895034               mov dword ptr [eax + 0x34], edx
// 004c008c  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004c008f  3310                 xor edx, dword ptr [eax]
// 004c0091  8bee                 mov ebp, esi
// 004c0093  335038               xor edx, dword ptr [eax + 0x38]
// 004c0096  c1c505               rol ebp, 5
// 004c0099  335018               xor edx, dword ptr [eax + 0x18]
// 004c009c  c1cf02               ror edi, 2
// 004c009f  d1c2                 rol edx, 1
// 004c00a1  897c245c             mov dword ptr [esp + 0x5c], edi
// 004c00a5  895038               mov dword ptr [eax + 0x38], edx
// 004c00a8  8bfe                 mov edi, esi
// 004c00aa  337c2458             xor edi, dword ptr [esp + 0x58]
// 004c00ae  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004c00b5  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004c00b9  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c00bd  03fa                 add edi, edx
// 004c00bf  037c2414             add edi, dword ptr [esp + 0x14]
// 004c00c3  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004c00c6  33501c               xor edx, dword ptr [eax + 0x1c]
// 004c00c9  c1c305               rol ebx, 5
// 004c00cc  335030               xor edx, dword ptr [eax + 0x30]
// 004c00cf  c1ce02               ror esi, 2
// 004c00d2  335004               xor edx, dword ptr [eax + 4]
// 004c00d5  89742418             mov dword ptr [esp + 0x18], esi
// 004c00d9  33742410             xor esi, dword ptr [esp + 0x10]
// 004c00dd  d1c2                 rol edx, 1
// 004c00df  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004c00e3  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004c00e7  03f2                 add esi, edx
// 004c00e9  03742458             add esi, dword ptr [esp + 0x58]
// 004c00ed  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 004c00f4  89503c               mov dword ptr [eax + 0x3c], edx
// 004c00f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c00fb  8bdf                 mov ebx, edi
// 004c00fd  c1c305               rol ebx, 5
// 004c0100  c1ca02               ror edx, 2
// 004c0103  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 004c010a  8bda                 mov ebx, edx
// 004c010c  8b5020               mov edx, dword ptr [eax + 0x20]
// 004c010f  335008               xor edx, dword ptr [eax + 8]
// 004c0112  33eb                 xor ebp, ebx
// 004c0114  335034               xor edx, dword ptr [eax + 0x34]
// 004c0117  33ef                 xor ebp, edi
// 004c0119  3310                 xor edx, dword ptr [eax]
// 004c011b  89742458             mov dword ptr [esp + 0x58], esi
// 004c011f  d1c2                 rol edx, 1
// 004c0121  03ea                 add ebp, edx
// 004c0123  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004c0127  8910                 mov dword ptr [eax], edx
// 004c0129  8b500c               mov edx, dword ptr [eax + 0xc]
// 004c012c  335024               xor edx, dword ptr [eax + 0x24]
// 004c012f  c1c605               rol esi, 5
// 004c0132  335004               xor edx, dword ptr [eax + 4]
// 004c0135  c1cf02               ror edi, 2
// 004c0138  335038               xor edx, dword ptr [eax + 0x38]
// 004c013b  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c013f  33df                 xor ebx, edi
// 004c0141  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004c0148  897c2414             mov dword ptr [esp + 0x14], edi
// 004c014c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004c0150  d1c2                 rol edx, 1
// 004c0152  33df                 xor ebx, edi
// 004c0154  8bee                 mov ebp, esi
// 004c0156  c1c505               rol ebp, 5
// 004c0159  03da                 add ebx, edx
// 004c015b  035c2418             add ebx, dword ptr [esp + 0x18]
// 004c015f  895004               mov dword ptr [eax + 4], edx
// 004c0162  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004c0169  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004c016c  335008               xor edx, dword ptr [eax + 8]
// 004c016f  c1cf02               ror edi, 2
// 004c0172  335028               xor edx, dword ptr [eax + 0x28]
// 004c0175  8bdf                 mov ebx, edi
// 004c0177  335010               xor edx, dword ptr [eax + 0x10]
// 004c017a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c017e  d1c2                 rol edx, 1
// 004c0180  33fb                 xor edi, ebx
// 004c0182  33fe                 xor edi, esi
// 004c0184  03fa                 add edi, edx
// 004c0186  037c2410             add edi, dword ptr [esp + 0x10]
// 004c018a  895008               mov dword ptr [eax + 8], edx
// 004c018d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004c0190  33500c               xor edx, dword ptr [eax + 0xc]
// 004c0193  896c2418             mov dword ptr [esp + 0x18], ebp
// 004c0197  335014               xor edx, dword ptr [eax + 0x14]
// 004c019a  c1c505               rol ebp, 5
// 004c019d  3310                 xor edx, dword ptr [eax]
// 004c019f  c1ce02               ror esi, 2
// 004c01a2  d1c2                 rol edx, 1
// 004c01a4  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004c01ab  8974245c             mov dword ptr [esp + 0x5c], esi
// 004c01af  8b742418             mov esi, dword ptr [esp + 0x18]
// 004c01b3  33f3                 xor esi, ebx
// 004c01b5  89500c               mov dword ptr [eax + 0xc], edx
// 004c01b8  895c2458             mov dword ptr [esp + 0x58], ebx
// 004c01bc  8bde                 mov ebx, esi
// 004c01be  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004c01c2  33de                 xor ebx, esi
// 004c01c4  03da                 add ebx, edx
// 004c01c6  035c2414             add ebx, dword ptr [esp + 0x14]
// 004c01ca  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c01ce  8bef                 mov ebp, edi
// 004c01d0  c1c505               rol ebp, 5
// 004c01d3  c1ca02               ror edx, 2
// 004c01d6  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004c01dd  8bea                 mov ebp, edx
// 004c01df  8b5030               mov edx, dword ptr [eax + 0x30]
// 004c01e2  335004               xor edx, dword ptr [eax + 4]
// 004c01e5  896c2418             mov dword ptr [esp + 0x18], ebp
// 004c01e9  335018               xor edx, dword ptr [eax + 0x18]
// 004c01ec  33ef                 xor ebp, edi
// 004c01ee  335010               xor edx, dword ptr [eax + 0x10]
// 004c01f1  33ee                 xor ebp, esi
// 004c01f3  d1c2                 rol edx, 1
// 004c01f5  03ea                 add ebp, edx
// 004c01f7  036c2458             add ebp, dword ptr [esp + 0x58]
// 004c01fb  895010               mov dword ptr [eax + 0x10], edx
// 004c01fe  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004c0201  335008               xor edx, dword ptr [eax + 8]
// 004c0204  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c0208  335034               xor edx, dword ptr [eax + 0x34]
// 004c020b  c1c305               rol ebx, 5
// 004c020e  335014               xor edx, dword ptr [eax + 0x14]
// 004c0211  8db42bd6c162ca       lea esi, [ebx + ebp - 0x359d3e2a]
// 004c0218  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004c021c  c1cf02               ror edi, 2
// 004c021f  33ef                 xor ebp, edi
// 004c0221  d1c2                 rol edx, 1
// 004c0223  897c2410             mov dword ptr [esp + 0x10], edi
// 004c0227  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004c022b  33ef                 xor ebp, edi
// 004c022d  03ea                 add ebp, edx
// 004c022f  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004c0233  895014               mov dword ptr [eax + 0x14], edx
// 004c0236  8b500c               mov edx, dword ptr [eax + 0xc]
// 004c0239  335020               xor edx, dword ptr [eax + 0x20]
// 004c023c  8bde                 mov ebx, esi
// 004c023e  335038               xor edx, dword ptr [eax + 0x38]
// 004c0241  c1c305               rol ebx, 5
// 004c0244  335018               xor edx, dword ptr [eax + 0x18]
// 004c0247  c1cf02               ror edi, 2
// 004c024a  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004c0251  d1c2                 rol edx, 1
// 004c0253  8bdf                 mov ebx, edi
// 004c0255  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004c0259  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c025d  895018               mov dword ptr [eax + 0x18], edx
// 004c0260  c1c505               rol ebp, 5
// 004c0263  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004c0267  33fb                 xor edi, ebx
// 004c0269  33fe                 xor edi, esi
// 004c026b  03fa                 add edi, edx
// 004c026d  037c2418             add edi, dword ptr [esp + 0x18]
// 004c0271  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004c0274  33501c               xor edx, dword ptr [eax + 0x1c]
// 004c0277  c1ce02               ror esi, 2
// 004c027a  335024               xor edx, dword ptr [eax + 0x24]
// 004c027d  33de                 xor ebx, esi
// 004c027f  335010               xor edx, dword ptr [eax + 0x10]
// 004c0282  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004c0289  d1c2                 rol edx, 1
// 004c028b  89501c               mov dword ptr [eax + 0x1c], edx
// 004c028e  89742458             mov dword ptr [esp + 0x58], esi
// 004c0292  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004c0296  33de                 xor ebx, esi
// 004c0298  03da                 add ebx, edx
// 004c029a  035c2410             add ebx, dword ptr [esp + 0x10]
// 004c029e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004c02a1  335014               xor edx, dword ptr [eax + 0x14]
// 004c02a4  8bef                 mov ebp, edi
// 004c02a6  3310                 xor edx, dword ptr [eax]
// 004c02a8  c1c505               rol ebp, 5
// 004c02ab  335028               xor edx, dword ptr [eax + 0x28]
// 004c02ae  c1ce02               ror esi, 2
// 004c02b1  d1c2                 rol edx, 1
// 004c02b3  8974245c             mov dword ptr [esp + 0x5c], esi
// 004c02b7  895020               mov dword ptr [eax + 0x20], edx
// 004c02ba  8bf7                 mov esi, edi
// 004c02bc  33742458             xor esi, dword ptr [esp + 0x58]
// 004c02c0  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004c02c7  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004c02cb  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c02cf  03f2                 add esi, edx
// 004c02d1  03742414             add esi, dword ptr [esp + 0x14]
// 004c02d5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004c02d8  335024               xor edx, dword ptr [eax + 0x24]
// 004c02db  c1c305               rol ebx, 5
// 004c02de  335004               xor edx, dword ptr [eax + 4]
// 004c02e1  c1cf02               ror edi, 2
// 004c02e4  335018               xor edx, dword ptr [eax + 0x18]
// 004c02e7  897c2418             mov dword ptr [esp + 0x18], edi
// 004c02eb  337c2410             xor edi, dword ptr [esp + 0x10]
// 004c02ef  d1c2                 rol edx, 1
// 004c02f1  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004c02f5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004c02f9  03fa                 add edi, edx
// 004c02fb  037c2458             add edi, dword ptr [esp + 0x58]
// 004c02ff  895024               mov dword ptr [eax + 0x24], edx
// 004c0302  8b542410             mov edx, dword ptr [esp + 0x10]
// 004c0306  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 004c030d  8bde                 mov ebx, esi
// 004c030f  c1c305               rol ebx, 5
// 004c0312  c1ca02               ror edx, 2
// 004c0315  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 004c031c  8bda                 mov ebx, edx
// 004c031e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004c0321  335030               xor edx, dword ptr [eax + 0x30]
// 004c0324  33eb                 xor ebp, ebx
// 004c0326  335008               xor edx, dword ptr [eax + 8]
// 004c0329  33ee                 xor ebp, esi
// 004c032b  335028               xor edx, dword ptr [eax + 0x28]
// 004c032e  897c2458             mov dword ptr [esp + 0x58], edi
// 004c0332  d1c2                 rol edx, 1
// 004c0334  03ea                 add ebp, edx
// 004c0336  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004c033a  895028               mov dword ptr [eax + 0x28], edx
// 004c033d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004c0340  33500c               xor edx, dword ptr [eax + 0xc]
// 004c0343  c1c705               rol edi, 5
// 004c0346  335020               xor edx, dword ptr [eax + 0x20]
// 004c0349  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004c0350  335034               xor edx, dword ptr [eax + 0x34]
// 004c0353  c1ce02               ror esi, 2
// 004c0356  d1c2                 rol edx, 1
// 004c0358  8bef                 mov ebp, edi
// 004c035a  895c2410             mov dword ptr [esp + 0x10], ebx
// 004c035e  89742414             mov dword ptr [esp + 0x14], esi
// 004c0362  89502c               mov dword ptr [eax + 0x2c], edx
// 004c0365  c1c505               rol ebp, 5
// 004c0368  33de                 xor ebx, esi
// 004c036a  8b742458             mov esi, dword ptr [esp + 0x58]
// 004c036e  33de                 xor ebx, esi
// 004c0370  03da                 add ebx, edx
// 004c0372  035c2418             add ebx, dword ptr [esp + 0x18]
// 004c0376  8b5030               mov edx, dword ptr [eax + 0x30]
// 004c0379  335024               xor edx, dword ptr [eax + 0x24]
// 004c037c  c1ce02               ror esi, 2
// 004c037f  335038               xor edx, dword ptr [eax + 0x38]
// 004c0382  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004c0389  335010               xor edx, dword ptr [eax + 0x10]
// 004c038c  8bde                 mov ebx, esi
// 004c038e  8b742414             mov esi, dword ptr [esp + 0x14]
// 004c0392  d1c2                 rol edx, 1
// 004c0394  33f3                 xor esi, ebx
// 004c0396  895030               mov dword ptr [eax + 0x30], edx
// 004c0399  33f7                 xor esi, edi
// 004c039b  03f2                 add esi, edx
// 004c039d  03742410             add esi, dword ptr [esp + 0x10]
// 004c03a1  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004c03a4  335034               xor edx, dword ptr [eax + 0x34]
// 004c03a7  896c2418             mov dword ptr [esp + 0x18], ebp
// 004c03ab  335014               xor edx, dword ptr [eax + 0x14]
// 004c03ae  c1c505               rol ebp, 5
// 004c03b1  335028               xor edx, dword ptr [eax + 0x28]
// 004c03b4  c1cf02               ror edi, 2
// 004c03b7  d1c2                 rol edx, 1
// 004c03b9  895034               mov dword ptr [eax + 0x34], edx
// 004c03bc  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004c03c3  897c245c             mov dword ptr [esp + 0x5c], edi
// 004c03c7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004c03cb  33fb                 xor edi, ebx
// 004c03cd  895c2458             mov dword ptr [esp + 0x58], ebx
// 004c03d1  8bdf                 mov ebx, edi
// 004c03d3  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004c03d7  33df                 xor ebx, edi
// 004c03d9  03da                 add ebx, edx
// 004c03db  035c2414             add ebx, dword ptr [esp + 0x14]
// 004c03df  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c03e3  8bee                 mov ebp, esi
// 004c03e5  c1c505               rol ebp, 5
// 004c03e8  c1ca02               ror edx, 2
// 004c03eb  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004c03f2  8bea                 mov ebp, edx
// 004c03f4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004c03f7  3310                 xor edx, dword ptr [eax]
// 004c03f9  896c2418             mov dword ptr [esp + 0x18], ebp
// 004c03fd  335038               xor edx, dword ptr [eax + 0x38]
// 004c0400  33ee                 xor ebp, esi
// 004c0402  335018               xor edx, dword ptr [eax + 0x18]
// 004c0405  33ef                 xor ebp, edi
// 004c0407  d1c2                 rol edx, 1
// 004c0409  895038               mov dword ptr [eax + 0x38], edx
// 004c040c  03ea                 add ebp, edx
// 004c040e  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004c0411  33501c               xor edx, dword ptr [eax + 0x1c]
// 004c0414  036c2458             add ebp, dword ptr [esp + 0x58]
// 004c0418  335030               xor edx, dword ptr [eax + 0x30]
// 004c041b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004c041f  335004               xor edx, dword ptr [eax + 4]
// 004c0422  c1c305               rol ebx, 5
// 004c0425  c1ce02               ror esi, 2
// 004c0428  d1c2                 rol edx, 1
// 004c042a  89503c               mov dword ptr [eax + 0x3c], edx
// 004c042d  8b442418             mov eax, dword ptr [esp + 0x18]
// 004c0431  33c6                 xor eax, esi
// 004c0433  89742410             mov dword ptr [esp + 0x10], esi
// 004c0437  8bf0                 mov esi, eax
// 004c0439  8b442414             mov eax, dword ptr [esp + 0x14]
// 004c043d  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004c0444  015904               add dword ptr [ecx + 4], ebx
// 004c0447  33f0                 xor esi, eax
// 004c0449  03f2                 add esi, edx
// 004c044b  8beb                 mov ebp, ebx
// 004c044d  c1c505               rol ebp, 5
// 004c0450  03f7                 add esi, edi
// 004c0452  8d942ed6c162ca       lea edx, [esi + ebp - 0x359d3e2a]
// 004c0459  0111                 add dword ptr [ecx], edx
// 004c045b  c1c802               ror eax, 2
// 004c045e  014108               add dword ptr [ecx + 8], eax
// 004c0461  8b442410             mov eax, dword ptr [esp + 0x10]
// 004c0465  8b542418             mov edx, dword ptr [esp + 0x18]
// 004c0469  01410c               add dword ptr [ecx + 0xc], eax
// 004c046c  015110               add dword ptr [ecx + 0x10], edx
// 004c046f  5f                   pop edi
// 004c0470  5e                   pop esi
// 004c0471  5d                   pop ebp
// 004c0472  5b                   pop ebx
// 004c0473  83c444               add esp, 0x44
// 004c0476  c20800               ret 8
// library rbxgs-raknet/SHA1.cpp (function ?Transform@CSHA1@@AAEXQAIQAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
