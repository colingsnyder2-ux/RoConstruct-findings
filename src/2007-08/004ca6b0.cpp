// roc 2007-08 004ca6b0  unit: seg_004c0000  size: 5065 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ca6b0
//
// 004ca6b0  83ec44               sub esp, 0x44
// 004ca6b3  53                   push ebx
// 004ca6b4  55                   push ebp
// 004ca6b5  8d4174               lea eax, [ecx + 0x74]
// 004ca6b8  56                   push esi
// 004ca6b9  8b742458             mov esi, dword ptr [esp + 0x58]
// 004ca6bd  57                   push edi
// 004ca6be  b910000000           mov ecx, 0x10
// 004ca6c3  8bf8                 mov edi, eax
// 004ca6c5  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004ca6c7  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 004ca6cb  8b5104               mov edx, dword ptr [ecx + 4]
// 004ca6ce  8b38                 mov edi, dword ptr [eax]
// 004ca6d0  8b5908               mov ebx, dword ptr [ecx + 8]
// 004ca6d3  8b31                 mov esi, dword ptr [ecx]
// 004ca6d5  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 004ca6d8  89542458             mov dword ptr [esp + 0x58], edx
// 004ca6dc  33eb                 xor ebp, ebx
// 004ca6de  236c2458             and ebp, dword ptr [esp + 0x58]
// 004ca6e2  8bd7                 mov edx, edi
// 004ca6e4  33690c               xor ebp, dword ptr [ecx + 0xc]
// 004ca6e7  c1ca08               ror edx, 8
// 004ca6ea  81e200ff00ff         and edx, 0xff00ff00
// 004ca6f0  c1c708               rol edi, 8
// 004ca6f3  81e7ff00ff00         and edi, 0xff00ff
// 004ca6f9  0bd7                 or edx, edi
// 004ca6fb  8954244c             mov dword ptr [esp + 0x4c], edx
// 004ca6ff  8bfe                 mov edi, esi
// 004ca701  c1c705               rol edi, 5
// 004ca704  03fa                 add edi, edx
// 004ca706  8b5110               mov edx, dword ptr [ecx + 0x10]
// 004ca709  03ef                 add ebp, edi
// 004ca70b  8b7804               mov edi, dword ptr [eax + 4]
// 004ca70e  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004ca715  8b542458             mov edx, dword ptr [esp + 0x58]
// 004ca719  c1ca02               ror edx, 2
// 004ca71c  8bea                 mov ebp, edx
// 004ca71e  8bd7                 mov edx, edi
// 004ca720  c1ca08               ror edx, 8
// 004ca723  81e200ff00ff         and edx, 0xff00ff00
// 004ca729  c1c708               rol edi, 8
// 004ca72c  81e7ff00ff00         and edi, 0xff00ff
// 004ca732  0bd7                 or edx, edi
// 004ca734  8b7908               mov edi, dword ptr [ecx + 8]
// 004ca737  33fd                 xor edi, ebp
// 004ca739  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ca73d  c1c305               rol ebx, 5
// 004ca740  03da                 add ebx, edx
// 004ca742  23fe                 and edi, esi
// 004ca744  337908               xor edi, dword ptr [ecx + 8]
// 004ca747  89542450             mov dword ptr [esp + 0x50], edx
// 004ca74b  03fb                 add edi, ebx
// 004ca74d  8bdf                 mov ebx, edi
// 004ca74f  8b790c               mov edi, dword ptr [ecx + 0xc]
// 004ca752  8dbc1f9979825a       lea edi, [edi + ebx + 0x5a827999]
// 004ca759  8b5808               mov ebx, dword ptr [eax + 8]
// 004ca75c  8bd3                 mov edx, ebx
// 004ca75e  c1ce02               ror esi, 2
// 004ca761  c1ca08               ror edx, 8
// 004ca764  81e200ff00ff         and edx, 0xff00ff00
// 004ca76a  c1c308               rol ebx, 8
// 004ca76d  81e3ff00ff00         and ebx, 0xff00ff
// 004ca773  0bd3                 or edx, ebx
// 004ca775  896c2458             mov dword ptr [esp + 0x58], ebp
// 004ca779  33ee                 xor ebp, esi
// 004ca77b  236c2418             and ebp, dword ptr [esp + 0x18]
// 004ca77f  8bdf                 mov ebx, edi
// 004ca781  336c2458             xor ebp, dword ptr [esp + 0x58]
// 004ca785  c1c305               rol ebx, 5
// 004ca788  03da                 add ebx, edx
// 004ca78a  89542434             mov dword ptr [esp + 0x34], edx
// 004ca78e  8b5108               mov edx, dword ptr [ecx + 8]
// 004ca791  03eb                 add ebp, ebx
// 004ca793  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004ca79a  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ca79e  c1ca02               ror edx, 2
// 004ca7a1  8bea                 mov ebp, edx
// 004ca7a3  8974245c             mov dword ptr [esp + 0x5c], esi
// 004ca7a7  8b700c               mov esi, dword ptr [eax + 0xc]
// 004ca7aa  895c2414             mov dword ptr [esp + 0x14], ebx
// 004ca7ae  896c2418             mov dword ptr [esp + 0x18], ebp
// 004ca7b2  8bd6                 mov edx, esi
// 004ca7b4  c1ca08               ror edx, 8
// 004ca7b7  81e200ff00ff         and edx, 0xff00ff00
// 004ca7bd  c1c608               rol esi, 8
// 004ca7c0  81e6ff00ff00         and esi, 0xff00ff
// 004ca7c6  0bd6                 or edx, esi
// 004ca7c8  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004ca7cc  33ee                 xor ebp, esi
// 004ca7ce  23ef                 and ebp, edi
// 004ca7d0  c1c305               rol ebx, 5
// 004ca7d3  03da                 add ebx, edx
// 004ca7d5  33ee                 xor ebp, esi
// 004ca7d7  03eb                 add ebp, ebx
// 004ca7d9  8b5810               mov ebx, dword ptr [eax + 0x10]
// 004ca7dc  89542438             mov dword ptr [esp + 0x38], edx
// 004ca7e0  8b542458             mov edx, dword ptr [esp + 0x58]
// 004ca7e4  8db42a9979825a       lea esi, [edx + ebp + 0x5a827999]
// 004ca7eb  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004ca7ef  c1cf02               ror edi, 2
// 004ca7f2  33ef                 xor ebp, edi
// 004ca7f4  236c2414             and ebp, dword ptr [esp + 0x14]
// 004ca7f8  8bd3                 mov edx, ebx
// 004ca7fa  336c2418             xor ebp, dword ptr [esp + 0x18]
// 004ca7fe  c1ca08               ror edx, 8
// 004ca801  81e200ff00ff         and edx, 0xff00ff00
// 004ca807  c1c308               rol ebx, 8
// 004ca80a  81e3ff00ff00         and ebx, 0xff00ff
// 004ca810  0bd3                 or edx, ebx
// 004ca812  8954243c             mov dword ptr [esp + 0x3c], edx
// 004ca816  8bde                 mov ebx, esi
// 004ca818  c1c305               rol ebx, 5
// 004ca81b  03da                 add ebx, edx
// 004ca81d  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004ca821  03eb                 add ebp, ebx
// 004ca823  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004ca82a  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ca82e  c1ca02               ror edx, 2
// 004ca831  8bea                 mov ebp, edx
// 004ca833  897c2410             mov dword ptr [esp + 0x10], edi
// 004ca837  8b7814               mov edi, dword ptr [eax + 0x14]
// 004ca83a  8bd7                 mov edx, edi
// 004ca83c  c1ca08               ror edx, 8
// 004ca83f  81e200ff00ff         and edx, 0xff00ff00
// 004ca845  c1c708               rol edi, 8
// 004ca848  81e7ff00ff00         and edi, 0xff00ff
// 004ca84e  0bd7                 or edx, edi
// 004ca850  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004ca854  33fd                 xor edi, ebp
// 004ca856  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004ca85a  c1c305               rol ebx, 5
// 004ca85d  03da                 add ebx, edx
// 004ca85f  23fe                 and edi, esi
// 004ca861  337c2410             xor edi, dword ptr [esp + 0x10]
// 004ca865  89542440             mov dword ptr [esp + 0x40], edx
// 004ca869  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ca86d  03fb                 add edi, ebx
// 004ca86f  8b5818               mov ebx, dword ptr [eax + 0x18]
// 004ca872  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 004ca879  8bd3                 mov edx, ebx
// 004ca87b  c1ce02               ror esi, 2
// 004ca87e  c1ca08               ror edx, 8
// 004ca881  81e200ff00ff         and edx, 0xff00ff00
// 004ca887  c1c308               rol ebx, 8
// 004ca88a  81e3ff00ff00         and ebx, 0xff00ff
// 004ca890  0bd3                 or edx, ebx
// 004ca892  896c2414             mov dword ptr [esp + 0x14], ebp
// 004ca896  33ee                 xor ebp, esi
// 004ca898  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004ca89c  8bdf                 mov ebx, edi
// 004ca89e  336c2414             xor ebp, dword ptr [esp + 0x14]
// 004ca8a2  c1c305               rol ebx, 5
// 004ca8a5  03da                 add ebx, edx
// 004ca8a7  89542444             mov dword ptr [esp + 0x44], edx
// 004ca8ab  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ca8af  03eb                 add ebp, ebx
// 004ca8b1  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004ca8b8  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004ca8bc  c1ca02               ror edx, 2
// 004ca8bf  89742458             mov dword ptr [esp + 0x58], esi
// 004ca8c3  895c2410             mov dword ptr [esp + 0x10], ebx
// 004ca8c7  8bea                 mov ebp, edx
// 004ca8c9  8b701c               mov esi, dword ptr [eax + 0x1c]
// 004ca8cc  8bd6                 mov edx, esi
// 004ca8ce  c1ca08               ror edx, 8
// 004ca8d1  81e200ff00ff         and edx, 0xff00ff00
// 004ca8d7  c1c608               rol esi, 8
// 004ca8da  81e6ff00ff00         and esi, 0xff00ff
// 004ca8e0  0bd6                 or edx, esi
// 004ca8e2  8b742458             mov esi, dword ptr [esp + 0x58]
// 004ca8e6  c1c305               rol ebx, 5
// 004ca8e9  03da                 add ebx, edx
// 004ca8eb  33f5                 xor esi, ebp
// 004ca8ed  23f7                 and esi, edi
// 004ca8ef  33742458             xor esi, dword ptr [esp + 0x58]
// 004ca8f3  89542448             mov dword ptr [esp + 0x48], edx
// 004ca8f7  8b542414             mov edx, dword ptr [esp + 0x14]
// 004ca8fb  03f3                 add esi, ebx
// 004ca8fd  8b5820               mov ebx, dword ptr [eax + 0x20]
// 004ca900  c1cf02               ror edi, 2
// 004ca903  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 004ca90a  8bd3                 mov edx, ebx
// 004ca90c  c1ca08               ror edx, 8
// 004ca90f  81e200ff00ff         and edx, 0xff00ff00
// 004ca915  c1c308               rol ebx, 8
// 004ca918  81e3ff00ff00         and ebx, 0xff00ff
// 004ca91e  0bd3                 or edx, ebx
// 004ca920  897c2418             mov dword ptr [esp + 0x18], edi
// 004ca924  33fd                 xor edi, ebp
// 004ca926  237c2410             and edi, dword ptr [esp + 0x10]
// 004ca92a  89542420             mov dword ptr [esp + 0x20], edx
// 004ca92e  33fd                 xor edi, ebp
// 004ca930  8bde                 mov ebx, esi
// 004ca932  c1c305               rol ebx, 5
// 004ca935  03da                 add ebx, edx
// 004ca937  8b542458             mov edx, dword ptr [esp + 0x58]
// 004ca93b  03fb                 add edi, ebx
// 004ca93d  8d9c3a9979825a       lea ebx, [edx + edi + 0x5a827999]
// 004ca944  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ca948  8b7824               mov edi, dword ptr [eax + 0x24]
// 004ca94b  c1ca02               ror edx, 2
// 004ca94e  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004ca952  8bea                 mov ebp, edx
// 004ca954  8bd7                 mov edx, edi
// 004ca956  c1ca08               ror edx, 8
// 004ca959  81e200ff00ff         and edx, 0xff00ff00
// 004ca95f  c1c708               rol edi, 8
// 004ca962  81e7ff00ff00         and edi, 0xff00ff
// 004ca968  0bd7                 or edx, edi
// 004ca96a  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004ca96e  33fd                 xor edi, ebp
// 004ca970  895c2458             mov dword ptr [esp + 0x58], ebx
// 004ca974  c1c305               rol ebx, 5
// 004ca977  03da                 add ebx, edx
// 004ca979  23fe                 and edi, esi
// 004ca97b  337c2418             xor edi, dword ptr [esp + 0x18]
// 004ca97f  89542424             mov dword ptr [esp + 0x24], edx
// 004ca983  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004ca987  03fb                 add edi, ebx
// 004ca989  8b5828               mov ebx, dword ptr [eax + 0x28]
// 004ca98c  8dbc3a9979825a       lea edi, [edx + edi + 0x5a827999]
// 004ca993  8bd3                 mov edx, ebx
// 004ca995  c1ce02               ror esi, 2
// 004ca998  c1ca08               ror edx, 8
// 004ca99b  81e200ff00ff         and edx, 0xff00ff00
// 004ca9a1  c1c308               rol ebx, 8
// 004ca9a4  81e3ff00ff00         and ebx, 0xff00ff
// 004ca9aa  0bd3                 or edx, ebx
// 004ca9ac  896c2410             mov dword ptr [esp + 0x10], ebp
// 004ca9b0  33ee                 xor ebp, esi
// 004ca9b2  236c2458             and ebp, dword ptr [esp + 0x58]
// 004ca9b6  8bdf                 mov ebx, edi
// 004ca9b8  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004ca9bc  c1c305               rol ebx, 5
// 004ca9bf  03da                 add ebx, edx
// 004ca9c1  89542428             mov dword ptr [esp + 0x28], edx
// 004ca9c5  8b542418             mov edx, dword ptr [esp + 0x18]
// 004ca9c9  03eb                 add ebp, ebx
// 004ca9cb  8d9c2a9979825a       lea ebx, [edx + ebp + 0x5a827999]
// 004ca9d2  8b542458             mov edx, dword ptr [esp + 0x58]
// 004ca9d6  89742414             mov dword ptr [esp + 0x14], esi
// 004ca9da  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ca9de  c1ca02               ror edx, 2
// 004ca9e1  8b702c               mov esi, dword ptr [eax + 0x2c]
// 004ca9e4  8bea                 mov ebp, edx
// 004ca9e6  8bd6                 mov edx, esi
// 004ca9e8  c1ca08               ror edx, 8
// 004ca9eb  81e200ff00ff         and edx, 0xff00ff00
// 004ca9f1  c1c608               rol esi, 8
// 004ca9f4  81e6ff00ff00         and esi, 0xff00ff
// 004ca9fa  0bd6                 or edx, esi
// 004ca9fc  8b742414             mov esi, dword ptr [esp + 0x14]
// 004caa00  33f5                 xor esi, ebp
// 004caa02  23f7                 and esi, edi
// 004caa04  33742414             xor esi, dword ptr [esp + 0x14]
// 004caa08  c1c305               rol ebx, 5
// 004caa0b  03da                 add ebx, edx
// 004caa0d  03f3                 add esi, ebx
// 004caa0f  8b5830               mov ebx, dword ptr [eax + 0x30]
// 004caa12  c1cf02               ror edi, 2
// 004caa15  8954242c             mov dword ptr [esp + 0x2c], edx
// 004caa19  8b542410             mov edx, dword ptr [esp + 0x10]
// 004caa1d  8db4329979825a       lea esi, [edx + esi + 0x5a827999]
// 004caa24  8bd3                 mov edx, ebx
// 004caa26  c1ca08               ror edx, 8
// 004caa29  81e200ff00ff         and edx, 0xff00ff00
// 004caa2f  c1c308               rol ebx, 8
// 004caa32  81e3ff00ff00         and ebx, 0xff00ff
// 004caa38  0bd3                 or edx, ebx
// 004caa3a  896c2458             mov dword ptr [esp + 0x58], ebp
// 004caa3e  33ef                 xor ebp, edi
// 004caa40  236c2418             and ebp, dword ptr [esp + 0x18]
// 004caa44  8bde                 mov ebx, esi
// 004caa46  336c2458             xor ebp, dword ptr [esp + 0x58]
// 004caa4a  c1c305               rol ebx, 5
// 004caa4d  03da                 add ebx, edx
// 004caa4f  03eb                 add ebp, ebx
// 004caa51  897c245c             mov dword ptr [esp + 0x5c], edi
// 004caa55  8b7834               mov edi, dword ptr [eax + 0x34]
// 004caa58  89542430             mov dword ptr [esp + 0x30], edx
// 004caa5c  8b542414             mov edx, dword ptr [esp + 0x14]
// 004caa60  8dac2a9979825a       lea ebp, [edx + ebp + 0x5a827999]
// 004caa67  8b542418             mov edx, dword ptr [esp + 0x18]
// 004caa6b  c1ca02               ror edx, 2
// 004caa6e  8bda                 mov ebx, edx
// 004caa70  8bd7                 mov edx, edi
// 004caa72  c1ca08               ror edx, 8
// 004caa75  81e200ff00ff         and edx, 0xff00ff00
// 004caa7b  c1c708               rol edi, 8
// 004caa7e  81e7ff00ff00         and edi, 0xff00ff
// 004caa84  0bd7                 or edx, edi
// 004caa86  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004caa8a  895c2418             mov dword ptr [esp + 0x18], ebx
// 004caa8e  33df                 xor ebx, edi
// 004caa90  23de                 and ebx, esi
// 004caa92  33df                 xor ebx, edi
// 004caa94  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004caa98  896c2414             mov dword ptr [esp + 0x14], ebp
// 004caa9c  c1c505               rol ebp, 5
// 004caa9f  03ea                 add ebp, edx
// 004caaa1  03dd                 add ebx, ebp
// 004caaa3  8d9c1f9979825a       lea ebx, [edi + ebx + 0x5a827999]
// 004caaaa  8b7838               mov edi, dword ptr [eax + 0x38]
// 004caaad  c1ce02               ror esi, 2
// 004caab0  8bee                 mov ebp, esi
// 004caab2  8bf7                 mov esi, edi
// 004caab4  c1ce08               ror esi, 8
// 004caab7  81e600ff00ff         and esi, 0xff00ff00
// 004caabd  c1c708               rol edi, 8
// 004caac0  81e7ff00ff00         and edi, 0xff00ff
// 004caac6  0bf7                 or esi, edi
// 004caac8  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004caacc  33fd                 xor edi, ebp
// 004caace  237c2414             and edi, dword ptr [esp + 0x14]
// 004caad2  895c2458             mov dword ptr [esp + 0x58], ebx
// 004caad6  337c2418             xor edi, dword ptr [esp + 0x18]
// 004caada  c1c305               rol ebx, 5
// 004caadd  03de                 add ebx, esi
// 004caadf  03fb                 add edi, ebx
// 004caae1  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004caae5  896c2410             mov dword ptr [esp + 0x10], ebp
// 004caae9  8dac3b9979825a       lea ebp, [ebx + edi + 0x5a827999]
// 004caaf0  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004caaf4  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004caaf8  c1cf02               ror edi, 2
// 004caafb  897c2414             mov dword ptr [esp + 0x14], edi
// 004caaff  8b783c               mov edi, dword ptr [eax + 0x3c]
// 004cab02  8bdf                 mov ebx, edi
// 004cab04  c1cb08               ror ebx, 8
// 004cab07  81e300ff00ff         and ebx, 0xff00ff00
// 004cab0d  c1c708               rol edi, 8
// 004cab10  81e7ff00ff00         and edi, 0xff00ff
// 004cab16  0bdf                 or ebx, edi
// 004cab18  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cab1c  337c2414             xor edi, dword ptr [esp + 0x14]
// 004cab20  c1c505               rol ebp, 5
// 004cab23  237c2458             and edi, dword ptr [esp + 0x58]
// 004cab27  03eb                 add ebp, ebx
// 004cab29  337c2410             xor edi, dword ptr [esp + 0x10]
// 004cab2d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 004cab31  03fd                 add edi, ebp
// 004cab33  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004cab37  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004cab3e  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004cab42  c1cf02               ror edi, 2
// 004cab45  8bef                 mov ebp, edi
// 004cab47  8bfa                 mov edi, edx
// 004cab49  337c2420             xor edi, dword ptr [esp + 0x20]
// 004cab4d  895c2418             mov dword ptr [esp + 0x18], ebx
// 004cab51  337c2434             xor edi, dword ptr [esp + 0x34]
// 004cab55  896c2458             mov dword ptr [esp + 0x58], ebp
// 004cab59  337c244c             xor edi, dword ptr [esp + 0x4c]
// 004cab5d  d1c7                 rol edi, 1
// 004cab5f  897c244c             mov dword ptr [esp + 0x4c], edi
// 004cab63  8938                 mov dword ptr [eax], edi
// 004cab65  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cab69  33fd                 xor edi, ebp
// 004cab6b  237c245c             and edi, dword ptr [esp + 0x5c]
// 004cab6f  c1c305               rol ebx, 5
// 004cab72  337c2414             xor edi, dword ptr [esp + 0x14]
// 004cab76  035c244c             add ebx, dword ptr [esp + 0x4c]
// 004cab7a  03fb                 add edi, ebx
// 004cab7c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cab80  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004cab87  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004cab8b  c1cf02               ror edi, 2
// 004cab8e  8bef                 mov ebp, edi
// 004cab90  8bfe                 mov edi, esi
// 004cab92  337c2424             xor edi, dword ptr [esp + 0x24]
// 004cab96  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cab9a  337c2438             xor edi, dword ptr [esp + 0x38]
// 004cab9e  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004caba2  337c2450             xor edi, dword ptr [esp + 0x50]
// 004caba6  d1c7                 rol edi, 1
// 004caba8  897c2450             mov dword ptr [esp + 0x50], edi
// 004cabac  897804               mov dword ptr [eax + 4], edi
// 004cabaf  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004cabb3  33fd                 xor edi, ebp
// 004cabb5  237c2418             and edi, dword ptr [esp + 0x18]
// 004cabb9  c1c305               rol ebx, 5
// 004cabbc  337c2458             xor edi, dword ptr [esp + 0x58]
// 004cabc0  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cabc4  03fb                 add edi, ebx
// 004cabc6  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004cabca  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004cabd1  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cabd5  c1cf02               ror edi, 2
// 004cabd8  8bef                 mov ebp, edi
// 004cabda  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004cabde  337c2428             xor edi, dword ptr [esp + 0x28]
// 004cabe2  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cabe6  337c243c             xor edi, dword ptr [esp + 0x3c]
// 004cabea  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004cabee  337c2434             xor edi, dword ptr [esp + 0x34]
// 004cabf2  236c2410             and ebp, dword ptr [esp + 0x10]
// 004cabf6  d1c7                 rol edi, 1
// 004cabf8  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004cabfc  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cac00  c1c305               rol ebx, 5
// 004cac03  03df                 add ebx, edi
// 004cac05  897808               mov dword ptr [eax + 8], edi
// 004cac08  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004cac0c  03eb                 add ebp, ebx
// 004cac0e  8d9c2f9979825a       lea ebx, [edi + ebp + 0x5a827999]
// 004cac15  895c2458             mov dword ptr [esp + 0x58], ebx
// 004cac19  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cac1d  c1cf02               ror edi, 2
// 004cac20  8bef                 mov ebp, edi
// 004cac22  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004cac26  337c2440             xor edi, dword ptr [esp + 0x40]
// 004cac2a  896c2410             mov dword ptr [esp + 0x10], ebp
// 004cac2e  337c2438             xor edi, dword ptr [esp + 0x38]
// 004cac32  3338                 xor edi, dword ptr [eax]
// 004cac34  d1c7                 rol edi, 1
// 004cac36  897c2450             mov dword ptr [esp + 0x50], edi
// 004cac3a  89780c               mov dword ptr [eax + 0xc], edi
// 004cac3d  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cac41  33fd                 xor edi, ebp
// 004cac43  237c2414             and edi, dword ptr [esp + 0x14]
// 004cac47  c1c305               rol ebx, 5
// 004cac4a  337c2418             xor edi, dword ptr [esp + 0x18]
// 004cac4e  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cac52  03fb                 add edi, ebx
// 004cac54  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004cac58  8d9c3b9979825a       lea ebx, [ebx + edi + 0x5a827999]
// 004cac5f  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cac63  c1cf02               ror edi, 2
// 004cac66  8bef                 mov ebp, edi
// 004cac68  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004cac6c  337c2444             xor edi, dword ptr [esp + 0x44]
// 004cac70  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004cac74  337c243c             xor edi, dword ptr [esp + 0x3c]
// 004cac78  896c2414             mov dword ptr [esp + 0x14], ebp
// 004cac7c  337804               xor edi, dword ptr [eax + 4]
// 004cac7f  d1c7                 rol edi, 1
// 004cac81  897c2450             mov dword ptr [esp + 0x50], edi
// 004cac85  897810               mov dword ptr [eax + 0x10], edi
// 004cac88  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cac8c  33fd                 xor edi, ebp
// 004cac8e  337c2458             xor edi, dword ptr [esp + 0x58]
// 004cac92  c1c305               rol ebx, 5
// 004cac95  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cac99  03fb                 add edi, ebx
// 004cac9b  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004cac9f  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004caca6  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004cacaa  c1cf02               ror edi, 2
// 004cacad  8bef                 mov ebp, edi
// 004cacaf  8bfa                 mov edi, edx
// 004cacb1  337c2448             xor edi, dword ptr [esp + 0x48]
// 004cacb5  895c2418             mov dword ptr [esp + 0x18], ebx
// 004cacb9  337c2440             xor edi, dword ptr [esp + 0x40]
// 004cacbd  896c2458             mov dword ptr [esp + 0x58], ebp
// 004cacc1  337808               xor edi, dword ptr [eax + 8]
// 004cacc4  d1c7                 rol edi, 1
// 004cacc6  897c2450             mov dword ptr [esp + 0x50], edi
// 004cacca  897814               mov dword ptr [eax + 0x14], edi
// 004caccd  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cacd1  33fd                 xor edi, ebp
// 004cacd3  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004cacd7  c1c305               rol ebx, 5
// 004cacda  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cacde  03fb                 add edi, ebx
// 004cace0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cace4  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004caceb  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004cacef  c1cf02               ror edi, 2
// 004cacf2  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cacf6  8bfe                 mov edi, esi
// 004cacf8  337c2420             xor edi, dword ptr [esp + 0x20]
// 004cacfc  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cad00  337c2444             xor edi, dword ptr [esp + 0x44]
// 004cad04  33780c               xor edi, dword ptr [eax + 0xc]
// 004cad07  d1c7                 rol edi, 1
// 004cad09  897c2450             mov dword ptr [esp + 0x50], edi
// 004cad0d  897818               mov dword ptr [eax + 0x18], edi
// 004cad10  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cad14  c1c305               rol ebx, 5
// 004cad17  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cad1b  33fd                 xor edi, ebp
// 004cad1d  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004cad21  03fb                 add edi, ebx
// 004cad23  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004cad27  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004cad2e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cad32  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cad36  c1cf02               ror edi, 2
// 004cad39  8bef                 mov ebp, edi
// 004cad3b  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004cad3f  337c2424             xor edi, dword ptr [esp + 0x24]
// 004cad43  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cad47  337c2448             xor edi, dword ptr [esp + 0x48]
// 004cad4b  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004cad4f  337810               xor edi, dword ptr [eax + 0x10]
// 004cad52  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004cad56  d1c7                 rol edi, 1
// 004cad58  89781c               mov dword ptr [eax + 0x1c], edi
// 004cad5b  c1c305               rol ebx, 5
// 004cad5e  03df                 add ebx, edi
// 004cad60  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004cad64  03eb                 add ebp, ebx
// 004cad66  8d9c2fa1ebd96e       lea ebx, [edi + ebp + 0x6ed9eba1]
// 004cad6d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cad71  c1cf02               ror edi, 2
// 004cad74  8bef                 mov ebp, edi
// 004cad76  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 004cad7a  337c2420             xor edi, dword ptr [esp + 0x20]
// 004cad7e  895c2458             mov dword ptr [esp + 0x58], ebx
// 004cad82  337814               xor edi, dword ptr [eax + 0x14]
// 004cad85  896c2410             mov dword ptr [esp + 0x10], ebp
// 004cad89  3338                 xor edi, dword ptr [eax]
// 004cad8b  d1c7                 rol edi, 1
// 004cad8d  897c2450             mov dword ptr [esp + 0x50], edi
// 004cad91  897820               mov dword ptr [eax + 0x20], edi
// 004cad94  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cad98  33fd                 xor edi, ebp
// 004cad9a  337c2414             xor edi, dword ptr [esp + 0x14]
// 004cad9e  c1c305               rol ebx, 5
// 004cada1  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cada5  03fb                 add edi, ebx
// 004cada7  8b5c245c             mov ebx, dword ptr [esp + 0x5c]
// 004cadab  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004cadb2  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cadb6  c1cf02               ror edi, 2
// 004cadb9  8bef                 mov ebp, edi
// 004cadbb  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 004cadbf  337c2424             xor edi, dword ptr [esp + 0x24]
// 004cadc3  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004cadc7  337804               xor edi, dword ptr [eax + 4]
// 004cadca  896c2414             mov dword ptr [esp + 0x14], ebp
// 004cadce  337818               xor edi, dword ptr [eax + 0x18]
// 004cadd1  d1c7                 rol edi, 1
// 004cadd3  897c2450             mov dword ptr [esp + 0x50], edi
// 004cadd7  897824               mov dword ptr [eax + 0x24], edi
// 004cadda  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cadde  33fd                 xor edi, ebp
// 004cade0  337c2458             xor edi, dword ptr [esp + 0x58]
// 004cade4  c1c305               rol ebx, 5
// 004cade7  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cadeb  03fb                 add edi, ebx
// 004caded  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 004cadf1  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004cadf8  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004cadfc  c1cf02               ror edi, 2
// 004cadff  8bef                 mov ebp, edi
// 004cae01  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 004cae05  337c2428             xor edi, dword ptr [esp + 0x28]
// 004cae09  895c2418             mov dword ptr [esp + 0x18], ebx
// 004cae0d  33781c               xor edi, dword ptr [eax + 0x1c]
// 004cae10  896c2458             mov dword ptr [esp + 0x58], ebp
// 004cae14  337808               xor edi, dword ptr [eax + 8]
// 004cae17  d1c7                 rol edi, 1
// 004cae19  897c2450             mov dword ptr [esp + 0x50], edi
// 004cae1d  897828               mov dword ptr [eax + 0x28], edi
// 004cae20  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cae24  33fd                 xor edi, ebp
// 004cae26  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004cae2a  c1c305               rol ebx, 5
// 004cae2d  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cae31  03fb                 add edi, ebx
// 004cae33  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cae37  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004cae3e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004cae42  c1cf02               ror edi, 2
// 004cae45  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cae49  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cae4d  8bfa                 mov edi, edx
// 004cae4f  337c242c             xor edi, dword ptr [esp + 0x2c]
// 004cae53  33780c               xor edi, dword ptr [eax + 0xc]
// 004cae56  337820               xor edi, dword ptr [eax + 0x20]
// 004cae59  d1c7                 rol edi, 1
// 004cae5b  897c2450             mov dword ptr [esp + 0x50], edi
// 004cae5f  89782c               mov dword ptr [eax + 0x2c], edi
// 004cae62  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cae66  33fd                 xor edi, ebp
// 004cae68  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004cae6c  c1c305               rol ebx, 5
// 004cae6f  035c2450             add ebx, dword ptr [esp + 0x50]
// 004cae73  03fb                 add edi, ebx
// 004cae75  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004cae79  8d9c3ba1ebd96e       lea ebx, [ebx + edi + 0x6ed9eba1]
// 004cae80  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cae84  c1cf02               ror edi, 2
// 004cae87  8bef                 mov ebp, edi
// 004cae89  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cae8d  336c2410             xor ebp, dword ptr [esp + 0x10]
// 004cae91  8bfe                 mov edi, esi
// 004cae93  337c2430             xor edi, dword ptr [esp + 0x30]
// 004cae97  336c245c             xor ebp, dword ptr [esp + 0x5c]
// 004cae9b  337824               xor edi, dword ptr [eax + 0x24]
// 004cae9e  895c2414             mov dword ptr [esp + 0x14], ebx
// 004caea2  337810               xor edi, dword ptr [eax + 0x10]
// 004caea5  d1c7                 rol edi, 1
// 004caea7  c1c305               rol ebx, 5
// 004caeaa  03df                 add ebx, edi
// 004caeac  03eb                 add ebp, ebx
// 004caeae  897830               mov dword ptr [eax + 0x30], edi
// 004caeb1  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004caeb5  8d9c2fa1ebd96e       lea ebx, [edi + ebp + 0x6ed9eba1]
// 004caebc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004caec0  c1cf02               ror edi, 2
// 004caec3  8bef                 mov ebp, edi
// 004caec5  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 004caec9  33fa                 xor edi, edx
// 004caecb  337814               xor edi, dword ptr [eax + 0x14]
// 004caece  8b542418             mov edx, dword ptr [esp + 0x18]
// 004caed2  337828               xor edi, dword ptr [eax + 0x28]
// 004caed5  33d5                 xor edx, ebp
// 004caed7  89542450             mov dword ptr [esp + 0x50], edx
// 004caedb  8b542414             mov edx, dword ptr [esp + 0x14]
// 004caedf  d1c7                 rol edi, 1
// 004caee1  895c2458             mov dword ptr [esp + 0x58], ebx
// 004caee5  c1c305               rol ebx, 5
// 004caee8  03df                 add ebx, edi
// 004caeea  896c2410             mov dword ptr [esp + 0x10], ebp
// 004caeee  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 004caef2  33ea                 xor ebp, edx
// 004caef4  03eb                 add ebp, ebx
// 004caef6  c1ca02               ror edx, 2
// 004caef9  8bda                 mov ebx, edx
// 004caefb  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004caefe  33d6                 xor edx, esi
// 004caf00  3310                 xor edx, dword ptr [eax]
// 004caf02  8b742410             mov esi, dword ptr [esp + 0x10]
// 004caf06  335018               xor edx, dword ptr [eax + 0x18]
// 004caf09  33f3                 xor esi, ebx
// 004caf0b  897834               mov dword ptr [eax + 0x34], edi
// 004caf0e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004caf12  8dbc2fa1ebd96e       lea edi, [edi + ebp + 0x6ed9eba1]
// 004caf19  d1c2                 rol edx, 1
// 004caf1b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004caf1f  8bde                 mov ebx, esi
// 004caf21  8b742458             mov esi, dword ptr [esp + 0x58]
// 004caf25  8bef                 mov ebp, edi
// 004caf27  c1c505               rol ebp, 5
// 004caf2a  03ea                 add ebp, edx
// 004caf2c  33de                 xor ebx, esi
// 004caf2e  895038               mov dword ptr [eax + 0x38], edx
// 004caf31  8b542418             mov edx, dword ptr [esp + 0x18]
// 004caf35  03dd                 add ebx, ebp
// 004caf37  8dac1aa1ebd96e       lea ebp, [edx + ebx + 0x6ed9eba1]
// 004caf3e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004caf41  c1ce02               ror esi, 2
// 004caf44  3354241c             xor edx, dword ptr [esp + 0x1c]
// 004caf48  8bde                 mov ebx, esi
// 004caf4a  896c2418             mov dword ptr [esp + 0x18], ebp
// 004caf4e  895c2458             mov dword ptr [esp + 0x58], ebx
// 004caf52  335030               xor edx, dword ptr [eax + 0x30]
// 004caf55  8b742414             mov esi, dword ptr [esp + 0x14]
// 004caf59  335004               xor edx, dword ptr [eax + 4]
// 004caf5c  33f3                 xor esi, ebx
// 004caf5e  d1c2                 rol edx, 1
// 004caf60  c1c505               rol ebp, 5
// 004caf63  03ea                 add ebp, edx
// 004caf65  89503c               mov dword ptr [eax + 0x3c], edx
// 004caf68  8b542410             mov edx, dword ptr [esp + 0x10]
// 004caf6c  33f7                 xor esi, edi
// 004caf6e  03f5                 add esi, ebp
// 004caf70  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 004caf77  8b5020               mov edx, dword ptr [eax + 0x20]
// 004caf7a  335008               xor edx, dword ptr [eax + 8]
// 004caf7d  c1cf02               ror edi, 2
// 004caf80  335034               xor edx, dword ptr [eax + 0x34]
// 004caf83  897c245c             mov dword ptr [esp + 0x5c], edi
// 004caf87  3310                 xor edx, dword ptr [eax]
// 004caf89  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004caf8d  d1c2                 rol edx, 1
// 004caf8f  33fb                 xor edi, ebx
// 004caf91  8910                 mov dword ptr [eax], edx
// 004caf93  8bee                 mov ebp, esi
// 004caf95  c1c505               rol ebp, 5
// 004caf98  03ea                 add ebp, edx
// 004caf9a  8b542414             mov edx, dword ptr [esp + 0x14]
// 004caf9e  8bdf                 mov ebx, edi
// 004cafa0  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004cafa4  33df                 xor ebx, edi
// 004cafa6  03dd                 add ebx, ebp
// 004cafa8  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 004cafaf  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cafb3  c1ca02               ror edx, 2
// 004cafb6  8bea                 mov ebp, edx
// 004cafb8  8b500c               mov edx, dword ptr [eax + 0xc]
// 004cafbb  335024               xor edx, dword ptr [eax + 0x24]
// 004cafbe  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cafc2  335004               xor edx, dword ptr [eax + 4]
// 004cafc5  33ee                 xor ebp, esi
// 004cafc7  335038               xor edx, dword ptr [eax + 0x38]
// 004cafca  33ef                 xor ebp, edi
// 004cafcc  d1c2                 rol edx, 1
// 004cafce  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cafd2  c1c305               rol ebx, 5
// 004cafd5  03da                 add ebx, edx
// 004cafd7  03eb                 add ebp, ebx
// 004cafd9  895004               mov dword ptr [eax + 4], edx
// 004cafdc  8b542458             mov edx, dword ptr [esp + 0x58]
// 004cafe0  8dbc2aa1ebd96e       lea edi, [edx + ebp + 0x6ed9eba1]
// 004cafe7  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cafea  335008               xor edx, dword ptr [eax + 8]
// 004cafed  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004caff1  335028               xor edx, dword ptr [eax + 0x28]
// 004caff4  c1ce02               ror esi, 2
// 004caff7  335010               xor edx, dword ptr [eax + 0x10]
// 004caffa  33ee                 xor ebp, esi
// 004caffc  d1c2                 rol edx, 1
// 004caffe  89742410             mov dword ptr [esp + 0x10], esi
// 004cb002  8b742414             mov esi, dword ptr [esp + 0x14]
// 004cb006  33ee                 xor ebp, esi
// 004cb008  895008               mov dword ptr [eax + 8], edx
// 004cb00b  8bdf                 mov ebx, edi
// 004cb00d  c1c305               rol ebx, 5
// 004cb010  03da                 add ebx, edx
// 004cb012  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004cb016  03eb                 add ebp, ebx
// 004cb018  8dac2aa1ebd96e       lea ebp, [edx + ebp + 0x6ed9eba1]
// 004cb01f  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb022  33500c               xor edx, dword ptr [eax + 0xc]
// 004cb025  c1ce02               ror esi, 2
// 004cb028  335014               xor edx, dword ptr [eax + 0x14]
// 004cb02b  8bde                 mov ebx, esi
// 004cb02d  3310                 xor edx, dword ptr [eax]
// 004cb02f  8b742410             mov esi, dword ptr [esp + 0x10]
// 004cb033  d1c2                 rol edx, 1
// 004cb035  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004cb039  c1c505               rol ebp, 5
// 004cb03c  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb040  89500c               mov dword ptr [eax + 0xc], edx
// 004cb043  33f3                 xor esi, ebx
// 004cb045  03ea                 add ebp, edx
// 004cb047  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cb04b  33f7                 xor esi, edi
// 004cb04d  03f5                 add esi, ebp
// 004cb04f  8db432a1ebd96e       lea esi, [edx + esi + 0x6ed9eba1]
// 004cb056  8b5030               mov edx, dword ptr [eax + 0x30]
// 004cb059  335004               xor edx, dword ptr [eax + 4]
// 004cb05c  c1cf02               ror edi, 2
// 004cb05f  335018               xor edx, dword ptr [eax + 0x18]
// 004cb062  33df                 xor ebx, edi
// 004cb064  335010               xor edx, dword ptr [eax + 0x10]
// 004cb067  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb06b  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004cb06f  d1c2                 rol edx, 1
// 004cb071  895010               mov dword ptr [eax + 0x10], edx
// 004cb074  33df                 xor ebx, edi
// 004cb076  8bee                 mov ebp, esi
// 004cb078  c1c505               rol ebp, 5
// 004cb07b  03ea                 add ebp, edx
// 004cb07d  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb081  03dd                 add ebx, ebp
// 004cb083  8d9c1aa1ebd96e       lea ebx, [edx + ebx + 0x6ed9eba1]
// 004cb08a  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004cb08d  335008               xor edx, dword ptr [eax + 8]
// 004cb090  c1cf02               ror edi, 2
// 004cb093  335034               xor edx, dword ptr [eax + 0x34]
// 004cb096  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cb09a  335014               xor edx, dword ptr [eax + 0x14]
// 004cb09d  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb0a1  d1c2                 rol edx, 1
// 004cb0a3  895014               mov dword ptr [eax + 0x14], edx
// 004cb0a6  c1c305               rol ebx, 5
// 004cb0a9  03da                 add ebx, edx
// 004cb0ab  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cb0af  8bfe                 mov edi, esi
// 004cb0b1  337c2458             xor edi, dword ptr [esp + 0x58]
// 004cb0b5  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004cb0b9  03fb                 add edi, ebx
// 004cb0bb  8dbc3aa1ebd96e       lea edi, [edx + edi + 0x6ed9eba1]
// 004cb0c2  8b500c               mov edx, dword ptr [eax + 0xc]
// 004cb0c5  335020               xor edx, dword ptr [eax + 0x20]
// 004cb0c8  c1ce02               ror esi, 2
// 004cb0cb  335038               xor edx, dword ptr [eax + 0x38]
// 004cb0ce  89742418             mov dword ptr [esp + 0x18], esi
// 004cb0d2  335018               xor edx, dword ptr [eax + 0x18]
// 004cb0d5  33742410             xor esi, dword ptr [esp + 0x10]
// 004cb0d9  d1c2                 rol edx, 1
// 004cb0db  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004cb0df  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004cb0e3  895018               mov dword ptr [eax + 0x18], edx
// 004cb0e6  8bdf                 mov ebx, edi
// 004cb0e8  c1c305               rol ebx, 5
// 004cb0eb  03da                 add ebx, edx
// 004cb0ed  8b542458             mov edx, dword ptr [esp + 0x58]
// 004cb0f1  03f3                 add esi, ebx
// 004cb0f3  8d9c32a1ebd96e       lea ebx, [edx + esi + 0x6ed9eba1]
// 004cb0fa  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb0fe  c1ca02               ror edx, 2
// 004cb101  8bf2                 mov esi, edx
// 004cb103  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb106  33501c               xor edx, dword ptr [eax + 0x1c]
// 004cb109  895c2458             mov dword ptr [esp + 0x58], ebx
// 004cb10d  335024               xor edx, dword ptr [eax + 0x24]
// 004cb110  33ee                 xor ebp, esi
// 004cb112  335010               xor edx, dword ptr [eax + 0x10]
// 004cb115  33ef                 xor ebp, edi
// 004cb117  d1c2                 rol edx, 1
// 004cb119  c1c305               rol ebx, 5
// 004cb11c  03da                 add ebx, edx
// 004cb11e  89501c               mov dword ptr [eax + 0x1c], edx
// 004cb121  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004cb125  03eb                 add ebp, ebx
// 004cb127  8d9c2aa1ebd96e       lea ebx, [edx + ebp + 0x6ed9eba1]
// 004cb12e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004cb131  335014               xor edx, dword ptr [eax + 0x14]
// 004cb134  c1cf02               ror edi, 2
// 004cb137  3310                 xor edx, dword ptr [eax]
// 004cb139  89742410             mov dword ptr [esp + 0x10], esi
// 004cb13d  335028               xor edx, dword ptr [eax + 0x28]
// 004cb140  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004cb144  897c2414             mov dword ptr [esp + 0x14], edi
// 004cb148  d1c2                 rol edx, 1
// 004cb14a  895020               mov dword ptr [eax + 0x20], edx
// 004cb14d  8bef                 mov ebp, edi
// 004cb14f  0b6c2458             or ebp, dword ptr [esp + 0x58]
// 004cb153  237c2458             and edi, dword ptr [esp + 0x58]
// 004cb157  23ee                 and ebp, esi
// 004cb159  0bef                 or ebp, edi
// 004cb15b  03ea                 add ebp, edx
// 004cb15d  036c2418             add ebp, dword ptr [esp + 0x18]
// 004cb161  8b542458             mov edx, dword ptr [esp + 0x58]
// 004cb165  c1c305               rol ebx, 5
// 004cb168  c1ca02               ror edx, 2
// 004cb16b  8bfa                 mov edi, edx
// 004cb16d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb170  335024               xor edx, dword ptr [eax + 0x24]
// 004cb173  8db42bdcbc1b8f       lea esi, [ebx + ebp - 0x70e44324]
// 004cb17a  335004               xor edx, dword ptr [eax + 4]
// 004cb17d  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb181  335018               xor edx, dword ptr [eax + 0x18]
// 004cb184  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004cb188  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004cb18c  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004cb190  237c2414             and edi, dword ptr [esp + 0x14]
// 004cb194  d1c2                 rol edx, 1
// 004cb196  0bfd                 or edi, ebp
// 004cb198  03fa                 add edi, edx
// 004cb19a  037c2410             add edi, dword ptr [esp + 0x10]
// 004cb19e  895024               mov dword ptr [eax + 0x24], edx
// 004cb1a1  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004cb1a5  8bde                 mov ebx, esi
// 004cb1a7  c1c305               rol ebx, 5
// 004cb1aa  c1ca02               ror edx, 2
// 004cb1ad  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004cb1b4  8bda                 mov ebx, edx
// 004cb1b6  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004cb1b9  335030               xor edx, dword ptr [eax + 0x30]
// 004cb1bc  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004cb1c0  335008               xor edx, dword ptr [eax + 8]
// 004cb1c3  8bee                 mov ebp, esi
// 004cb1c5  335028               xor edx, dword ptr [eax + 0x28]
// 004cb1c8  0beb                 or ebp, ebx
// 004cb1ca  236c2458             and ebp, dword ptr [esp + 0x58]
// 004cb1ce  d1c2                 rol edx, 1
// 004cb1d0  895028               mov dword ptr [eax + 0x28], edx
// 004cb1d3  8bde                 mov ebx, esi
// 004cb1d5  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004cb1d9  897c2410             mov dword ptr [esp + 0x10], edi
// 004cb1dd  0beb                 or ebp, ebx
// 004cb1df  03ea                 add ebp, edx
// 004cb1e1  036c2414             add ebp, dword ptr [esp + 0x14]
// 004cb1e5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb1e8  33500c               xor edx, dword ptr [eax + 0xc]
// 004cb1eb  c1c705               rol edi, 5
// 004cb1ee  335020               xor edx, dword ptr [eax + 0x20]
// 004cb1f1  c1ce02               ror esi, 2
// 004cb1f4  335034               xor edx, dword ptr [eax + 0x34]
// 004cb1f7  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004cb1fe  d1c2                 rol edx, 1
// 004cb200  8bde                 mov ebx, esi
// 004cb202  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004cb206  8bee                 mov ebp, esi
// 004cb208  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004cb20c  236c2410             and ebp, dword ptr [esp + 0x10]
// 004cb210  89502c               mov dword ptr [eax + 0x2c], edx
// 004cb213  0bdd                 or ebx, ebp
// 004cb215  03da                 add ebx, edx
// 004cb217  035c2458             add ebx, dword ptr [esp + 0x58]
// 004cb21b  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb21f  897c2414             mov dword ptr [esp + 0x14], edi
// 004cb223  c1c705               rol edi, 5
// 004cb226  c1ca02               ror edx, 2
// 004cb229  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004cb230  8bda                 mov ebx, edx
// 004cb232  8b5030               mov edx, dword ptr [eax + 0x30]
// 004cb235  335024               xor edx, dword ptr [eax + 0x24]
// 004cb238  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb23c  335038               xor edx, dword ptr [eax + 0x38]
// 004cb23f  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb243  335010               xor edx, dword ptr [eax + 0x10]
// 004cb246  d1c2                 rol edx, 1
// 004cb248  895030               mov dword ptr [eax + 0x30], edx
// 004cb24b  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004cb24f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004cb253  236c2414             and ebp, dword ptr [esp + 0x14]
// 004cb257  23de                 and ebx, esi
// 004cb259  0bdd                 or ebx, ebp
// 004cb25b  03da                 add ebx, edx
// 004cb25d  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004cb261  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cb265  c1c705               rol edi, 5
// 004cb268  c1ca02               ror edx, 2
// 004cb26b  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004cb272  8bda                 mov ebx, edx
// 004cb274  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb277  335034               xor edx, dword ptr [eax + 0x34]
// 004cb27a  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb27e  335014               xor edx, dword ptr [eax + 0x14]
// 004cb281  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004cb285  335028               xor edx, dword ptr [eax + 0x28]
// 004cb288  235c2410             and ebx, dword ptr [esp + 0x10]
// 004cb28c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cb290  236c2458             and ebp, dword ptr [esp + 0x58]
// 004cb294  d1c2                 rol edx, 1
// 004cb296  0bdd                 or ebx, ebp
// 004cb298  03da                 add ebx, edx
// 004cb29a  895034               mov dword ptr [eax + 0x34], edx
// 004cb29d  8b542458             mov edx, dword ptr [esp + 0x58]
// 004cb2a1  03de                 add ebx, esi
// 004cb2a3  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cb2a7  c1c705               rol edi, 5
// 004cb2aa  c1ca02               ror edx, 2
// 004cb2ad  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004cb2b4  8bfa                 mov edi, edx
// 004cb2b6  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb2b9  3310                 xor edx, dword ptr [eax]
// 004cb2bb  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb2bf  335038               xor edx, dword ptr [eax + 0x38]
// 004cb2c2  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004cb2c6  335018               xor edx, dword ptr [eax + 0x18]
// 004cb2c9  237c2414             and edi, dword ptr [esp + 0x14]
// 004cb2cd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004cb2d1  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004cb2d5  d1c2                 rol edx, 1
// 004cb2d7  0bfd                 or edi, ebp
// 004cb2d9  03fa                 add edi, edx
// 004cb2db  037c2410             add edi, dword ptr [esp + 0x10]
// 004cb2df  895038               mov dword ptr [eax + 0x38], edx
// 004cb2e2  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004cb2e6  8bde                 mov ebx, esi
// 004cb2e8  c1c305               rol ebx, 5
// 004cb2eb  c1ca02               ror edx, 2
// 004cb2ee  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004cb2f5  8bda                 mov ebx, edx
// 004cb2f7  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb2fa  33501c               xor edx, dword ptr [eax + 0x1c]
// 004cb2fd  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004cb301  335030               xor edx, dword ptr [eax + 0x30]
// 004cb304  8bee                 mov ebp, esi
// 004cb306  335004               xor edx, dword ptr [eax + 4]
// 004cb309  0beb                 or ebp, ebx
// 004cb30b  236c2458             and ebp, dword ptr [esp + 0x58]
// 004cb30f  d1c2                 rol edx, 1
// 004cb311  8bde                 mov ebx, esi
// 004cb313  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004cb317  89503c               mov dword ptr [eax + 0x3c], edx
// 004cb31a  0beb                 or ebp, ebx
// 004cb31c  03ea                 add ebp, edx
// 004cb31e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004cb321  335008               xor edx, dword ptr [eax + 8]
// 004cb324  036c2414             add ebp, dword ptr [esp + 0x14]
// 004cb328  335034               xor edx, dword ptr [eax + 0x34]
// 004cb32b  897c2410             mov dword ptr [esp + 0x10], edi
// 004cb32f  3310                 xor edx, dword ptr [eax]
// 004cb331  c1c705               rol edi, 5
// 004cb334  c1ce02               ror esi, 2
// 004cb337  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004cb33e  d1c2                 rol edx, 1
// 004cb340  897c2414             mov dword ptr [esp + 0x14], edi
// 004cb344  8bde                 mov ebx, esi
// 004cb346  c1c705               rol edi, 5
// 004cb349  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004cb34d  8910                 mov dword ptr [eax], edx
// 004cb34f  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004cb353  8bee                 mov ebp, esi
// 004cb355  236c2410             and ebp, dword ptr [esp + 0x10]
// 004cb359  0bdd                 or ebx, ebp
// 004cb35b  03da                 add ebx, edx
// 004cb35d  035c2458             add ebx, dword ptr [esp + 0x58]
// 004cb361  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb365  c1ca02               ror edx, 2
// 004cb368  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004cb36f  8bda                 mov ebx, edx
// 004cb371  8b500c               mov edx, dword ptr [eax + 0xc]
// 004cb374  335024               xor edx, dword ptr [eax + 0x24]
// 004cb377  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb37b  335004               xor edx, dword ptr [eax + 4]
// 004cb37e  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004cb382  335038               xor edx, dword ptr [eax + 0x38]
// 004cb385  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004cb389  236c2414             and ebp, dword ptr [esp + 0x14]
// 004cb38d  d1c2                 rol edx, 1
// 004cb38f  23de                 and ebx, esi
// 004cb391  0bdd                 or ebx, ebp
// 004cb393  03da                 add ebx, edx
// 004cb395  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004cb399  895004               mov dword ptr [eax + 4], edx
// 004cb39c  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cb3a0  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb3a4  c1c705               rol edi, 5
// 004cb3a7  c1ca02               ror edx, 2
// 004cb3aa  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004cb3b1  8bda                 mov ebx, edx
// 004cb3b3  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb3b6  335008               xor edx, dword ptr [eax + 8]
// 004cb3b9  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb3bd  335028               xor edx, dword ptr [eax + 0x28]
// 004cb3c0  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004cb3c4  335010               xor edx, dword ptr [eax + 0x10]
// 004cb3c7  235c2410             and ebx, dword ptr [esp + 0x10]
// 004cb3cb  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cb3cf  236c2458             and ebp, dword ptr [esp + 0x58]
// 004cb3d3  d1c2                 rol edx, 1
// 004cb3d5  0bdd                 or ebx, ebp
// 004cb3d7  03da                 add ebx, edx
// 004cb3d9  895008               mov dword ptr [eax + 8], edx
// 004cb3dc  8b542458             mov edx, dword ptr [esp + 0x58]
// 004cb3e0  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cb3e4  c1c705               rol edi, 5
// 004cb3e7  03de                 add ebx, esi
// 004cb3e9  c1ca02               ror edx, 2
// 004cb3ec  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004cb3f3  8bfa                 mov edi, edx
// 004cb3f5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb3f8  33500c               xor edx, dword ptr [eax + 0xc]
// 004cb3fb  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb3ff  335014               xor edx, dword ptr [eax + 0x14]
// 004cb402  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004cb406  3310                 xor edx, dword ptr [eax]
// 004cb408  237c2414             and edi, dword ptr [esp + 0x14]
// 004cb40c  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004cb410  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004cb414  d1c2                 rol edx, 1
// 004cb416  0bfd                 or edi, ebp
// 004cb418  03fa                 add edi, edx
// 004cb41a  037c2410             add edi, dword ptr [esp + 0x10]
// 004cb41e  89500c               mov dword ptr [eax + 0xc], edx
// 004cb421  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004cb425  8bde                 mov ebx, esi
// 004cb427  c1c305               rol ebx, 5
// 004cb42a  c1ca02               ror edx, 2
// 004cb42d  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004cb434  8bda                 mov ebx, edx
// 004cb436  8b5030               mov edx, dword ptr [eax + 0x30]
// 004cb439  335004               xor edx, dword ptr [eax + 4]
// 004cb43c  897c2410             mov dword ptr [esp + 0x10], edi
// 004cb440  335018               xor edx, dword ptr [eax + 0x18]
// 004cb443  8bee                 mov ebp, esi
// 004cb445  335010               xor edx, dword ptr [eax + 0x10]
// 004cb448  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004cb44c  d1c2                 rol edx, 1
// 004cb44e  c1c705               rol edi, 5
// 004cb451  895010               mov dword ptr [eax + 0x10], edx
// 004cb454  0beb                 or ebp, ebx
// 004cb456  236c2458             and ebp, dword ptr [esp + 0x58]
// 004cb45a  8bde                 mov ebx, esi
// 004cb45c  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004cb460  0beb                 or ebp, ebx
// 004cb462  03ea                 add ebp, edx
// 004cb464  036c2414             add ebp, dword ptr [esp + 0x14]
// 004cb468  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004cb46b  335008               xor edx, dword ptr [eax + 8]
// 004cb46e  c1ce02               ror esi, 2
// 004cb471  335034               xor edx, dword ptr [eax + 0x34]
// 004cb474  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004cb47b  335014               xor edx, dword ptr [eax + 0x14]
// 004cb47e  8bde                 mov ebx, esi
// 004cb480  0b5c2410             or ebx, dword ptr [esp + 0x10]
// 004cb484  d1c2                 rol edx, 1
// 004cb486  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004cb48a  895014               mov dword ptr [eax + 0x14], edx
// 004cb48d  897c2414             mov dword ptr [esp + 0x14], edi
// 004cb491  c1c705               rol edi, 5
// 004cb494  8bee                 mov ebp, esi
// 004cb496  236c2410             and ebp, dword ptr [esp + 0x10]
// 004cb49a  0bdd                 or ebx, ebp
// 004cb49c  03da                 add ebx, edx
// 004cb49e  035c2458             add ebx, dword ptr [esp + 0x58]
// 004cb4a2  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb4a6  c1ca02               ror edx, 2
// 004cb4a9  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004cb4b0  8bda                 mov ebx, edx
// 004cb4b2  8b500c               mov edx, dword ptr [eax + 0xc]
// 004cb4b5  335020               xor edx, dword ptr [eax + 0x20]
// 004cb4b8  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb4bc  335038               xor edx, dword ptr [eax + 0x38]
// 004cb4bf  0b5c2414             or ebx, dword ptr [esp + 0x14]
// 004cb4c3  335018               xor edx, dword ptr [eax + 0x18]
// 004cb4c6  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004cb4ca  236c2414             and ebp, dword ptr [esp + 0x14]
// 004cb4ce  d1c2                 rol edx, 1
// 004cb4d0  23de                 and ebx, esi
// 004cb4d2  0bdd                 or ebx, ebp
// 004cb4d4  03da                 add ebx, edx
// 004cb4d6  035c245c             add ebx, dword ptr [esp + 0x5c]
// 004cb4da  895018               mov dword ptr [eax + 0x18], edx
// 004cb4dd  8b542414             mov edx, dword ptr [esp + 0x14]
// 004cb4e1  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb4e5  c1c705               rol edi, 5
// 004cb4e8  c1ca02               ror edx, 2
// 004cb4eb  8dbc3bdcbc1b8f       lea edi, [ebx + edi - 0x70e44324]
// 004cb4f2  8bda                 mov ebx, edx
// 004cb4f4  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb4f7  33501c               xor edx, dword ptr [eax + 0x1c]
// 004cb4fa  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb4fe  335024               xor edx, dword ptr [eax + 0x24]
// 004cb501  0b5c2458             or ebx, dword ptr [esp + 0x58]
// 004cb505  335010               xor edx, dword ptr [eax + 0x10]
// 004cb508  235c2410             and ebx, dword ptr [esp + 0x10]
// 004cb50c  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 004cb510  236c2458             and ebp, dword ptr [esp + 0x58]
// 004cb514  d1c2                 rol edx, 1
// 004cb516  0bdd                 or ebx, ebp
// 004cb518  03da                 add ebx, edx
// 004cb51a  89501c               mov dword ptr [eax + 0x1c], edx
// 004cb51d  8b542458             mov edx, dword ptr [esp + 0x58]
// 004cb521  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cb525  c1c705               rol edi, 5
// 004cb528  03de                 add ebx, esi
// 004cb52a  c1ca02               ror edx, 2
// 004cb52d  8db43bdcbc1b8f       lea esi, [ebx + edi - 0x70e44324]
// 004cb534  8bfa                 mov edi, edx
// 004cb536  8b5020               mov edx, dword ptr [eax + 0x20]
// 004cb539  335014               xor edx, dword ptr [eax + 0x14]
// 004cb53c  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb540  3310                 xor edx, dword ptr [eax]
// 004cb542  0b7c245c             or edi, dword ptr [esp + 0x5c]
// 004cb546  335028               xor edx, dword ptr [eax + 0x28]
// 004cb549  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 004cb54d  237c2414             and edi, dword ptr [esp + 0x14]
// 004cb551  d1c2                 rol edx, 1
// 004cb553  8bde                 mov ebx, esi
// 004cb555  c1c305               rol ebx, 5
// 004cb558  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004cb55c  895020               mov dword ptr [eax + 0x20], edx
// 004cb55f  0bfd                 or edi, ebp
// 004cb561  03fa                 add edi, edx
// 004cb563  037c2410             add edi, dword ptr [esp + 0x10]
// 004cb567  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 004cb56b  c1ca02               ror edx, 2
// 004cb56e  8dbc1fdcbc1b8f       lea edi, [edi + ebx - 0x70e44324]
// 004cb575  8bda                 mov ebx, edx
// 004cb577  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb57a  335024               xor edx, dword ptr [eax + 0x24]
// 004cb57d  8bee                 mov ebp, esi
// 004cb57f  335004               xor edx, dword ptr [eax + 4]
// 004cb582  0beb                 or ebp, ebx
// 004cb584  335018               xor edx, dword ptr [eax + 0x18]
// 004cb587  236c2458             and ebp, dword ptr [esp + 0x58]
// 004cb58b  d1c2                 rol edx, 1
// 004cb58d  895c245c             mov dword ptr [esp + 0x5c], ebx
// 004cb591  8bde                 mov ebx, esi
// 004cb593  235c245c             and ebx, dword ptr [esp + 0x5c]
// 004cb597  895024               mov dword ptr [eax + 0x24], edx
// 004cb59a  0beb                 or ebp, ebx
// 004cb59c  03ea                 add ebp, edx
// 004cb59e  036c2414             add ebp, dword ptr [esp + 0x14]
// 004cb5a2  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004cb5a5  335030               xor edx, dword ptr [eax + 0x30]
// 004cb5a8  897c2410             mov dword ptr [esp + 0x10], edi
// 004cb5ac  335008               xor edx, dword ptr [eax + 8]
// 004cb5af  c1c705               rol edi, 5
// 004cb5b2  335028               xor edx, dword ptr [eax + 0x28]
// 004cb5b5  c1ce02               ror esi, 2
// 004cb5b8  8d9c2fdcbc1b8f       lea ebx, [edi + ebp - 0x70e44324]
// 004cb5bf  d1c2                 rol edx, 1
// 004cb5c1  8bee                 mov ebp, esi
// 004cb5c3  0b6c2410             or ebp, dword ptr [esp + 0x10]
// 004cb5c7  89742418             mov dword ptr [esp + 0x18], esi
// 004cb5cb  23742410             and esi, dword ptr [esp + 0x10]
// 004cb5cf  236c245c             and ebp, dword ptr [esp + 0x5c]
// 004cb5d3  895028               mov dword ptr [eax + 0x28], edx
// 004cb5d6  0bee                 or ebp, esi
// 004cb5d8  03ea                 add ebp, edx
// 004cb5da  036c2458             add ebp, dword ptr [esp + 0x58]
// 004cb5de  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb5e2  8bfb                 mov edi, ebx
// 004cb5e4  c1c705               rol edi, 5
// 004cb5e7  c1ca02               ror edx, 2
// 004cb5ea  8bf2                 mov esi, edx
// 004cb5ec  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb5ef  33500c               xor edx, dword ptr [eax + 0xc]
// 004cb5f2  89742410             mov dword ptr [esp + 0x10], esi
// 004cb5f6  335020               xor edx, dword ptr [eax + 0x20]
// 004cb5f9  0bf3                 or esi, ebx
// 004cb5fb  335034               xor edx, dword ptr [eax + 0x34]
// 004cb5fe  23742418             and esi, dword ptr [esp + 0x18]
// 004cb602  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb606  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cb60a  235c2414             and ebx, dword ptr [esp + 0x14]
// 004cb60e  d1c2                 rol edx, 1
// 004cb610  0bf3                 or esi, ebx
// 004cb612  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 004cb616  03f2                 add esi, edx
// 004cb618  0374245c             add esi, dword ptr [esp + 0x5c]
// 004cb61c  8dbc2fdcbc1b8f       lea edi, [edi + ebp - 0x70e44324]
// 004cb623  89502c               mov dword ptr [eax + 0x2c], edx
// 004cb626  8b5030               mov edx, dword ptr [eax + 0x30]
// 004cb629  335024               xor edx, dword ptr [eax + 0x24]
// 004cb62c  8bef                 mov ebp, edi
// 004cb62e  335038               xor edx, dword ptr [eax + 0x38]
// 004cb631  c1c505               rol ebp, 5
// 004cb634  335010               xor edx, dword ptr [eax + 0x10]
// 004cb637  8db42edcbc1b8f       lea esi, [esi + ebp - 0x70e44324]
// 004cb63e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004cb642  c1cb02               ror ebx, 2
// 004cb645  33eb                 xor ebp, ebx
// 004cb647  d1c2                 rol edx, 1
// 004cb649  33ef                 xor ebp, edi
// 004cb64b  8974245c             mov dword ptr [esp + 0x5c], esi
// 004cb64f  c1c605               rol esi, 5
// 004cb652  03ea                 add ebp, edx
// 004cb654  036c2418             add ebp, dword ptr [esp + 0x18]
// 004cb658  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb65c  895030               mov dword ptr [eax + 0x30], edx
// 004cb65f  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004cb666  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb669  335034               xor edx, dword ptr [eax + 0x34]
// 004cb66c  c1cf02               ror edi, 2
// 004cb66f  335014               xor edx, dword ptr [eax + 0x14]
// 004cb672  33df                 xor ebx, edi
// 004cb674  335028               xor edx, dword ptr [eax + 0x28]
// 004cb677  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb67b  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004cb67f  d1c2                 rol edx, 1
// 004cb681  33df                 xor ebx, edi
// 004cb683  03da                 add ebx, edx
// 004cb685  035c2410             add ebx, dword ptr [esp + 0x10]
// 004cb689  895034               mov dword ptr [eax + 0x34], edx
// 004cb68c  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb68f  3310                 xor edx, dword ptr [eax]
// 004cb691  8bee                 mov ebp, esi
// 004cb693  335038               xor edx, dword ptr [eax + 0x38]
// 004cb696  c1c505               rol ebp, 5
// 004cb699  335018               xor edx, dword ptr [eax + 0x18]
// 004cb69c  c1cf02               ror edi, 2
// 004cb69f  d1c2                 rol edx, 1
// 004cb6a1  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cb6a5  895038               mov dword ptr [eax + 0x38], edx
// 004cb6a8  8bfe                 mov edi, esi
// 004cb6aa  337c2458             xor edi, dword ptr [esp + 0x58]
// 004cb6ae  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004cb6b5  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004cb6b9  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb6bd  03fa                 add edi, edx
// 004cb6bf  037c2414             add edi, dword ptr [esp + 0x14]
// 004cb6c3  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb6c6  33501c               xor edx, dword ptr [eax + 0x1c]
// 004cb6c9  c1c305               rol ebx, 5
// 004cb6cc  335030               xor edx, dword ptr [eax + 0x30]
// 004cb6cf  c1ce02               ror esi, 2
// 004cb6d2  335004               xor edx, dword ptr [eax + 4]
// 004cb6d5  89742418             mov dword ptr [esp + 0x18], esi
// 004cb6d9  33742410             xor esi, dword ptr [esp + 0x10]
// 004cb6dd  d1c2                 rol edx, 1
// 004cb6df  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004cb6e3  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004cb6e7  03f2                 add esi, edx
// 004cb6e9  03742458             add esi, dword ptr [esp + 0x58]
// 004cb6ed  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 004cb6f4  89503c               mov dword ptr [eax + 0x3c], edx
// 004cb6f7  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb6fb  8bdf                 mov ebx, edi
// 004cb6fd  c1c305               rol ebx, 5
// 004cb700  c1ca02               ror edx, 2
// 004cb703  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 004cb70a  8bda                 mov ebx, edx
// 004cb70c  8b5020               mov edx, dword ptr [eax + 0x20]
// 004cb70f  335008               xor edx, dword ptr [eax + 8]
// 004cb712  33eb                 xor ebp, ebx
// 004cb714  335034               xor edx, dword ptr [eax + 0x34]
// 004cb717  33ef                 xor ebp, edi
// 004cb719  3310                 xor edx, dword ptr [eax]
// 004cb71b  89742458             mov dword ptr [esp + 0x58], esi
// 004cb71f  d1c2                 rol edx, 1
// 004cb721  03ea                 add ebp, edx
// 004cb723  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004cb727  8910                 mov dword ptr [eax], edx
// 004cb729  8b500c               mov edx, dword ptr [eax + 0xc]
// 004cb72c  335024               xor edx, dword ptr [eax + 0x24]
// 004cb72f  c1c605               rol esi, 5
// 004cb732  335004               xor edx, dword ptr [eax + 4]
// 004cb735  c1cf02               ror edi, 2
// 004cb738  335038               xor edx, dword ptr [eax + 0x38]
// 004cb73b  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb73f  33df                 xor ebx, edi
// 004cb741  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004cb748  897c2414             mov dword ptr [esp + 0x14], edi
// 004cb74c  8b7c2458             mov edi, dword ptr [esp + 0x58]
// 004cb750  d1c2                 rol edx, 1
// 004cb752  33df                 xor ebx, edi
// 004cb754  8bee                 mov ebp, esi
// 004cb756  c1c505               rol ebp, 5
// 004cb759  03da                 add ebx, edx
// 004cb75b  035c2418             add ebx, dword ptr [esp + 0x18]
// 004cb75f  895004               mov dword ptr [eax + 4], edx
// 004cb762  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004cb769  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb76c  335008               xor edx, dword ptr [eax + 8]
// 004cb76f  c1cf02               ror edi, 2
// 004cb772  335028               xor edx, dword ptr [eax + 0x28]
// 004cb775  8bdf                 mov ebx, edi
// 004cb777  335010               xor edx, dword ptr [eax + 0x10]
// 004cb77a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cb77e  d1c2                 rol edx, 1
// 004cb780  33fb                 xor edi, ebx
// 004cb782  33fe                 xor edi, esi
// 004cb784  03fa                 add edi, edx
// 004cb786  037c2410             add edi, dword ptr [esp + 0x10]
// 004cb78a  895008               mov dword ptr [eax + 8], edx
// 004cb78d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb790  33500c               xor edx, dword ptr [eax + 0xc]
// 004cb793  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cb797  335014               xor edx, dword ptr [eax + 0x14]
// 004cb79a  c1c505               rol ebp, 5
// 004cb79d  3310                 xor edx, dword ptr [eax]
// 004cb79f  c1ce02               ror esi, 2
// 004cb7a2  d1c2                 rol edx, 1
// 004cb7a4  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004cb7ab  8974245c             mov dword ptr [esp + 0x5c], esi
// 004cb7af  8b742418             mov esi, dword ptr [esp + 0x18]
// 004cb7b3  33f3                 xor esi, ebx
// 004cb7b5  89500c               mov dword ptr [eax + 0xc], edx
// 004cb7b8  895c2458             mov dword ptr [esp + 0x58], ebx
// 004cb7bc  8bde                 mov ebx, esi
// 004cb7be  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004cb7c2  33de                 xor ebx, esi
// 004cb7c4  03da                 add ebx, edx
// 004cb7c6  035c2414             add ebx, dword ptr [esp + 0x14]
// 004cb7ca  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cb7ce  8bef                 mov ebp, edi
// 004cb7d0  c1c505               rol ebp, 5
// 004cb7d3  c1ca02               ror edx, 2
// 004cb7d6  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004cb7dd  8bea                 mov ebp, edx
// 004cb7df  8b5030               mov edx, dword ptr [eax + 0x30]
// 004cb7e2  335004               xor edx, dword ptr [eax + 4]
// 004cb7e5  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cb7e9  335018               xor edx, dword ptr [eax + 0x18]
// 004cb7ec  33ef                 xor ebp, edi
// 004cb7ee  335010               xor edx, dword ptr [eax + 0x10]
// 004cb7f1  33ee                 xor ebp, esi
// 004cb7f3  d1c2                 rol edx, 1
// 004cb7f5  03ea                 add ebp, edx
// 004cb7f7  036c2458             add ebp, dword ptr [esp + 0x58]
// 004cb7fb  895010               mov dword ptr [eax + 0x10], edx
// 004cb7fe  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004cb801  335008               xor edx, dword ptr [eax + 8]
// 004cb804  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb808  335034               xor edx, dword ptr [eax + 0x34]
// 004cb80b  c1c305               rol ebx, 5
// 004cb80e  335014               xor edx, dword ptr [eax + 0x14]
// 004cb811  8db42bd6c162ca       lea esi, [ebx + ebp - 0x359d3e2a]
// 004cb818  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004cb81c  c1cf02               ror edi, 2
// 004cb81f  33ef                 xor ebp, edi
// 004cb821  d1c2                 rol edx, 1
// 004cb823  897c2410             mov dword ptr [esp + 0x10], edi
// 004cb827  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 004cb82b  33ef                 xor ebp, edi
// 004cb82d  03ea                 add ebp, edx
// 004cb82f  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004cb833  895014               mov dword ptr [eax + 0x14], edx
// 004cb836  8b500c               mov edx, dword ptr [eax + 0xc]
// 004cb839  335020               xor edx, dword ptr [eax + 0x20]
// 004cb83c  8bde                 mov ebx, esi
// 004cb83e  335038               xor edx, dword ptr [eax + 0x38]
// 004cb841  c1c305               rol ebx, 5
// 004cb844  335018               xor edx, dword ptr [eax + 0x18]
// 004cb847  c1cf02               ror edi, 2
// 004cb84a  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004cb851  d1c2                 rol edx, 1
// 004cb853  8bdf                 mov ebx, edi
// 004cb855  896c245c             mov dword ptr [esp + 0x5c], ebp
// 004cb859  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cb85d  895018               mov dword ptr [eax + 0x18], edx
// 004cb860  c1c505               rol ebp, 5
// 004cb863  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 004cb867  33fb                 xor edi, ebx
// 004cb869  33fe                 xor edi, esi
// 004cb86b  03fa                 add edi, edx
// 004cb86d  037c2418             add edi, dword ptr [esp + 0x18]
// 004cb871  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb874  33501c               xor edx, dword ptr [eax + 0x1c]
// 004cb877  c1ce02               ror esi, 2
// 004cb87a  335024               xor edx, dword ptr [eax + 0x24]
// 004cb87d  33de                 xor ebx, esi
// 004cb87f  335010               xor edx, dword ptr [eax + 0x10]
// 004cb882  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004cb889  d1c2                 rol edx, 1
// 004cb88b  89501c               mov dword ptr [eax + 0x1c], edx
// 004cb88e  89742458             mov dword ptr [esp + 0x58], esi
// 004cb892  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 004cb896  33de                 xor ebx, esi
// 004cb898  03da                 add ebx, edx
// 004cb89a  035c2410             add ebx, dword ptr [esp + 0x10]
// 004cb89e  8b5020               mov edx, dword ptr [eax + 0x20]
// 004cb8a1  335014               xor edx, dword ptr [eax + 0x14]
// 004cb8a4  8bef                 mov ebp, edi
// 004cb8a6  3310                 xor edx, dword ptr [eax]
// 004cb8a8  c1c505               rol ebp, 5
// 004cb8ab  335028               xor edx, dword ptr [eax + 0x28]
// 004cb8ae  c1ce02               ror esi, 2
// 004cb8b1  d1c2                 rol edx, 1
// 004cb8b3  8974245c             mov dword ptr [esp + 0x5c], esi
// 004cb8b7  895020               mov dword ptr [eax + 0x20], edx
// 004cb8ba  8bf7                 mov esi, edi
// 004cb8bc  33742458             xor esi, dword ptr [esp + 0x58]
// 004cb8c0  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004cb8c7  3374245c             xor esi, dword ptr [esp + 0x5c]
// 004cb8cb  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb8cf  03f2                 add esi, edx
// 004cb8d1  03742414             add esi, dword ptr [esp + 0x14]
// 004cb8d5  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb8d8  335024               xor edx, dword ptr [eax + 0x24]
// 004cb8db  c1c305               rol ebx, 5
// 004cb8de  335004               xor edx, dword ptr [eax + 4]
// 004cb8e1  c1cf02               ror edi, 2
// 004cb8e4  335018               xor edx, dword ptr [eax + 0x18]
// 004cb8e7  897c2418             mov dword ptr [esp + 0x18], edi
// 004cb8eb  337c2410             xor edi, dword ptr [esp + 0x10]
// 004cb8ef  d1c2                 rol edx, 1
// 004cb8f1  337c245c             xor edi, dword ptr [esp + 0x5c]
// 004cb8f5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 004cb8f9  03fa                 add edi, edx
// 004cb8fb  037c2458             add edi, dword ptr [esp + 0x58]
// 004cb8ff  895024               mov dword ptr [eax + 0x24], edx
// 004cb902  8b542410             mov edx, dword ptr [esp + 0x10]
// 004cb906  8db41ed6c162ca       lea esi, [esi + ebx - 0x359d3e2a]
// 004cb90d  8bde                 mov ebx, esi
// 004cb90f  c1c305               rol ebx, 5
// 004cb912  c1ca02               ror edx, 2
// 004cb915  8dbc1fd6c162ca       lea edi, [edi + ebx - 0x359d3e2a]
// 004cb91c  8bda                 mov ebx, edx
// 004cb91e  8b501c               mov edx, dword ptr [eax + 0x1c]
// 004cb921  335030               xor edx, dword ptr [eax + 0x30]
// 004cb924  33eb                 xor ebp, ebx
// 004cb926  335008               xor edx, dword ptr [eax + 8]
// 004cb929  33ee                 xor ebp, esi
// 004cb92b  335028               xor edx, dword ptr [eax + 0x28]
// 004cb92e  897c2458             mov dword ptr [esp + 0x58], edi
// 004cb932  d1c2                 rol edx, 1
// 004cb934  03ea                 add ebp, edx
// 004cb936  036c245c             add ebp, dword ptr [esp + 0x5c]
// 004cb93a  895028               mov dword ptr [eax + 0x28], edx
// 004cb93d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb940  33500c               xor edx, dword ptr [eax + 0xc]
// 004cb943  c1c705               rol edi, 5
// 004cb946  335020               xor edx, dword ptr [eax + 0x20]
// 004cb949  8dbc2fd6c162ca       lea edi, [edi + ebp - 0x359d3e2a]
// 004cb950  335034               xor edx, dword ptr [eax + 0x34]
// 004cb953  c1ce02               ror esi, 2
// 004cb956  d1c2                 rol edx, 1
// 004cb958  8bef                 mov ebp, edi
// 004cb95a  895c2410             mov dword ptr [esp + 0x10], ebx
// 004cb95e  89742414             mov dword ptr [esp + 0x14], esi
// 004cb962  89502c               mov dword ptr [eax + 0x2c], edx
// 004cb965  c1c505               rol ebp, 5
// 004cb968  33de                 xor ebx, esi
// 004cb96a  8b742458             mov esi, dword ptr [esp + 0x58]
// 004cb96e  33de                 xor ebx, esi
// 004cb970  03da                 add ebx, edx
// 004cb972  035c2418             add ebx, dword ptr [esp + 0x18]
// 004cb976  8b5030               mov edx, dword ptr [eax + 0x30]
// 004cb979  335024               xor edx, dword ptr [eax + 0x24]
// 004cb97c  c1ce02               ror esi, 2
// 004cb97f  335038               xor edx, dword ptr [eax + 0x38]
// 004cb982  8dac2bd6c162ca       lea ebp, [ebx + ebp - 0x359d3e2a]
// 004cb989  335010               xor edx, dword ptr [eax + 0x10]
// 004cb98c  8bde                 mov ebx, esi
// 004cb98e  8b742414             mov esi, dword ptr [esp + 0x14]
// 004cb992  d1c2                 rol edx, 1
// 004cb994  33f3                 xor esi, ebx
// 004cb996  895030               mov dword ptr [eax + 0x30], edx
// 004cb999  33f7                 xor esi, edi
// 004cb99b  03f2                 add esi, edx
// 004cb99d  03742410             add esi, dword ptr [esp + 0x10]
// 004cb9a1  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cb9a4  335034               xor edx, dword ptr [eax + 0x34]
// 004cb9a7  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cb9ab  335014               xor edx, dword ptr [eax + 0x14]
// 004cb9ae  c1c505               rol ebp, 5
// 004cb9b1  335028               xor edx, dword ptr [eax + 0x28]
// 004cb9b4  c1cf02               ror edi, 2
// 004cb9b7  d1c2                 rol edx, 1
// 004cb9b9  895034               mov dword ptr [eax + 0x34], edx
// 004cb9bc  8db42ed6c162ca       lea esi, [esi + ebp - 0x359d3e2a]
// 004cb9c3  897c245c             mov dword ptr [esp + 0x5c], edi
// 004cb9c7  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004cb9cb  33fb                 xor edi, ebx
// 004cb9cd  895c2458             mov dword ptr [esp + 0x58], ebx
// 004cb9d1  8bdf                 mov ebx, edi
// 004cb9d3  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 004cb9d7  33df                 xor ebx, edi
// 004cb9d9  03da                 add ebx, edx
// 004cb9db  035c2414             add ebx, dword ptr [esp + 0x14]
// 004cb9df  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cb9e3  8bee                 mov ebp, esi
// 004cb9e5  c1c505               rol ebp, 5
// 004cb9e8  c1ca02               ror edx, 2
// 004cb9eb  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004cb9f2  8bea                 mov ebp, edx
// 004cb9f4  8b502c               mov edx, dword ptr [eax + 0x2c]
// 004cb9f7  3310                 xor edx, dword ptr [eax]
// 004cb9f9  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cb9fd  335038               xor edx, dword ptr [eax + 0x38]
// 004cba00  33ee                 xor ebp, esi
// 004cba02  335018               xor edx, dword ptr [eax + 0x18]
// 004cba05  33ef                 xor ebp, edi
// 004cba07  d1c2                 rol edx, 1
// 004cba09  895038               mov dword ptr [eax + 0x38], edx
// 004cba0c  03ea                 add ebp, edx
// 004cba0e  8b503c               mov edx, dword ptr [eax + 0x3c]
// 004cba11  33501c               xor edx, dword ptr [eax + 0x1c]
// 004cba14  036c2458             add ebp, dword ptr [esp + 0x58]
// 004cba18  335030               xor edx, dword ptr [eax + 0x30]
// 004cba1b  895c2414             mov dword ptr [esp + 0x14], ebx
// 004cba1f  335004               xor edx, dword ptr [eax + 4]
// 004cba22  c1c305               rol ebx, 5
// 004cba25  c1ce02               ror esi, 2
// 004cba28  d1c2                 rol edx, 1
// 004cba2a  89503c               mov dword ptr [eax + 0x3c], edx
// 004cba2d  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cba31  33c6                 xor eax, esi
// 004cba33  89742410             mov dword ptr [esp + 0x10], esi
// 004cba37  8bf0                 mov esi, eax
// 004cba39  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cba3d  8d9c2bd6c162ca       lea ebx, [ebx + ebp - 0x359d3e2a]
// 004cba44  015904               add dword ptr [ecx + 4], ebx
// 004cba47  33f0                 xor esi, eax
// 004cba49  03f2                 add esi, edx
// 004cba4b  8beb                 mov ebp, ebx
// 004cba4d  c1c505               rol ebp, 5
// 004cba50  03f7                 add esi, edi
// 004cba52  8d942ed6c162ca       lea edx, [esi + ebp - 0x359d3e2a]
// 004cba59  0111                 add dword ptr [ecx], edx
// 004cba5b  c1c802               ror eax, 2
// 004cba5e  014108               add dword ptr [ecx + 8], eax
// 004cba61  8b442410             mov eax, dword ptr [esp + 0x10]
// 004cba65  8b542418             mov edx, dword ptr [esp + 0x18]
// 004cba69  01410c               add dword ptr [ecx + 0xc], eax
// 004cba6c  015110               add dword ptr [ecx + 0x10], edx
// 004cba6f  5f                   pop edi
// 004cba70  5e                   pop esi
// 004cba71  5d                   pop ebp
// 004cba72  5b                   pop ebx
// 004cba73  83c444               add esp, 0x44
// 004cba76  c20800               ret 8
// library rbxgs-raknet/SHA1.cpp (function ?Transform@CSHA1@@AAEXQAIQAE@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet SHA1.cpp
