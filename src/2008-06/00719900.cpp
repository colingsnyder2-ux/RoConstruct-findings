// roc 2008-06 00719900  unit: CSelectionCaption  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00719900
//
// 00719900  83ec20               sub esp, 0x20
// 00719903  56                   push esi
// 00719904  8bf1                 mov esi, ecx
// 00719906  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0071990c  50                   push eax
// 0071990d  ff15502d8000         call dword ptr [0x802d50]
// 00719913  85c0                 test eax, eax
// 00719915  752c                 jne 0x719943
// 00719917  8d4c2414             lea ecx, [esp + 0x14]
// 0071991b  e870e1fdff           call 0x6f7a90
// 00719920  8b10                 mov edx, dword ptr [eax]
// 00719922  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00719926  8911                 mov dword ptr [ecx], edx
// 00719928  8b5004               mov edx, dword ptr [eax + 4]
// 0071992b  895104               mov dword ptr [ecx + 4], edx
// 0071992e  8b5008               mov edx, dword ptr [eax + 8]
// 00719931  895108               mov dword ptr [ecx + 8], edx
// 00719934  8b400c               mov eax, dword ptr [eax + 0xc]
// 00719937  89410c               mov dword ptr [ecx + 0xc], eax
// 0071993a  8bc1                 mov eax, ecx
// 0071993c  5e                   pop esi
// 0071993d  83c420               add esp, 0x20
// 00719940  c20400               ret 4
// 00719943  f686c800000004       test byte ptr [esi + 0xc8], 4
// 0071994a  57                   push edi
// 0071994b  751b                 jne 0x719968
// 0071994d  8b16                 mov edx, dword ptr [esi]
// 0071994f  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00719953  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00719959  57                   push edi
// 0071995a  8bce                 mov ecx, esi
// 0071995c  ffd0                 call eax
// 0071995e  8bc7                 mov eax, edi
// 00719960  5f                   pop edi
// 00719961  5e                   pop esi
// 00719962  83c420               add esp, 0x20
// 00719965  c20400               ret 4
// 00719968  56                   push esi
// 00719969  8d4c240c             lea ecx, [esp + 0xc]
// 0071996d  e8bee1fdff           call 0x6f7b30
// 00719972  8b442414             mov eax, dword ptr [esp + 0x14]
// 00719976  2b44240c             sub eax, dword ptr [esp + 0xc]
// 0071997a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0071997e  2b4c2408             sub ecx, dword ptr [esp + 8]
// 00719982  83e80f               sub eax, 0xf
// 00719985  99                   cdq 
// 00719986  2bc2                 sub eax, edx
// 00719988  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 0071998c  83e912               sub ecx, 0x12
// 0071998f  d1f8                 sar eax, 1
// 00719991  890a                 mov dword ptr [edx], ecx
// 00719993  8d7110               lea esi, [ecx + 0x10]
// 00719996  8d780f               lea edi, [eax + 0xf]
// 00719999  894204               mov dword ptr [edx + 4], eax
// 0071999c  897208               mov dword ptr [edx + 8], esi
// 0071999f  897a0c               mov dword ptr [edx + 0xc], edi
// 007199a2  5f                   pop edi
// 007199a3  8bc2                 mov eax, edx
// 007199a5  5e                   pop esi
// 007199a6  83c420               add esp, 0x20
// 007199a9  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaption.cpp (function ?GetButtonRect@CXTCaption@@MBE?AVCRect@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaption.cpp
