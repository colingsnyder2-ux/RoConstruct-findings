// roc 2008-06 007348b0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 354 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007348b0
//
// 007348b0  83ec10               sub esp, 0x10
// 007348b3  53                   push ebx
// 007348b4  55                   push ebp
// 007348b5  56                   push esi
// 007348b6  57                   push edi
// 007348b7  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007348bb  8b07                 mov eax, dword ptr [edi]
// 007348bd  8b9098010000         mov edx, dword ptr [eax + 0x198]
// 007348c3  8bf1                 mov esi, ecx
// 007348c5  8bcf                 mov ecx, edi
// 007348c7  ffd2                 call edx
// 007348c9  85c0                 test eax, eax
// 007348cb  7428                 je 0x7348f5
// 007348cd  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007348d1  8b542428             mov edx, dword ptr [esp + 0x28]
// 007348d5  8b06                 mov eax, dword ptr [esi]
// 007348d7  8b80c4000000         mov eax, dword ptr [eax + 0xc4]
// 007348dd  51                   push ecx
// 007348de  57                   push edi
// 007348df  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 007348e3  52                   push edx
// 007348e4  57                   push edi
// 007348e5  8bce                 mov ecx, esi
// 007348e7  ffd0                 call eax
// 007348e9  8bc7                 mov eax, edi
// 007348eb  5f                   pop edi
// 007348ec  5e                   pop esi
// 007348ed  5d                   pop ebp
// 007348ee  5b                   pop ebx
// 007348ef  83c410               add esp, 0x10
// 007348f2  c21000               ret 0x10
// 007348f5  8b5720               mov edx, dword ptr [edi + 0x20]
// 007348f8  8d4c2410             lea ecx, [esp + 0x10]
// 007348fc  51                   push ecx
// 007348fd  52                   push edx
// 007348fe  ff15842d8000         call dword ptr [0x802d84]
// 00734904  8b8700010000         mov eax, dword ptr [edi + 0x100]
// 0073490a  83f804               cmp eax, 4
// 0073490d  7523                 jne 0x734932
// 0073490f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00734913  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00734917  50                   push eax
// 00734918  57                   push edi
// 00734919  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0073491d  51                   push ecx
// 0073491e  57                   push edi
// 0073491f  8bce                 mov ecx, esi
// 00734921  e8eaf9f7ff           call 0x6b4310
// 00734926  8bc7                 mov eax, edi
// 00734928  5f                   pop edi
// 00734929  5e                   pop esi
// 0073492a  5d                   pop ebp
// 0073492b  5b                   pop ebx
// 0073492c  83c410               add esp, 0x10
// 0073492f  c21000               ret 0x10
// 00734932  83f803               cmp eax, 3
// 00734935  0f8480000000         je 0x7349bb
// 0073493b  83f802               cmp eax, 2
// 0073493e  747b                 je 0x7349bb
// 00734940  85c0                 test eax, eax
// 00734942  7420                 je 0x734964
// 00734944  83f801               cmp eax, 1
// 00734947  741b                 je 0x734964
// 00734949  8b442424             mov eax, dword ptr [esp + 0x24]
// 0073494d  c7400400000000       mov dword ptr [eax + 4], 0
// 00734954  c70000000000         mov dword ptr [eax], 0
// 0073495a  5f                   pop edi
// 0073495b  5e                   pop esi
// 0073495c  5d                   pop ebp
// 0073495d  5b                   pop ebx
// 0073495e  83c410               add esp, 0x10
// 00734961  c21000               ret 0x10
// 00734964  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00734968  85ed                 test ebp, ebp
// 0073496a  7434                 je 0x7349a0
// 0073496c  837c243000           cmp dword ptr [esp + 0x30], 0
// 00734971  742d                 je 0x7349a0
// 00734973  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00734977  6a10                 push 0x10
// 00734979  6a14                 push 0x14
// 0073497b  b903000000           mov ecx, 3
// 00734980  83ec10               sub esp, 0x10
// 00734983  8bc4                 mov eax, esp
// 00734985  8908                 mov dword ptr [eax], ecx
// 00734987  8bd1                 mov edx, ecx
// 00734989  8d7903               lea edi, [ecx + 3]
// 0073498c  895004               mov dword ptr [eax + 4], edx
// 0073498f  83c3fd               add ebx, -3
// 00734992  897808               mov dword ptr [eax + 8], edi
// 00734995  55                   push ebp
// 00734996  8bce                 mov ecx, esi
// 00734998  89580c               mov dword ptr [eax + 0xc], ebx
// 0073499b  e8d098f7ff           call 0x6ae270
// 007349a0  8b442424             mov eax, dword ptr [esp + 0x24]
// 007349a4  c70006000000         mov dword ptr [eax], 6
// 007349aa  c7400400000000       mov dword ptr [eax + 4], 0
// 007349b1  5f                   pop edi
// 007349b2  5e                   pop esi
// 007349b3  5d                   pop ebp
// 007349b4  5b                   pop ebx
// 007349b5  83c410               add esp, 0x10
// 007349b8  c21000               ret 0x10
// 007349bb  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007349bf  85ed                 test ebp, ebp
// 007349c1  7434                 je 0x7349f7
// 007349c3  837c243000           cmp dword ptr [esp + 0x30], 0
// 007349c8  742d                 je 0x7349f7
// 007349ca  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007349ce  6a10                 push 0x10
// 007349d0  6a14                 push 0x14
// 007349d2  b903000000           mov ecx, 3
// 007349d7  83ec10               sub esp, 0x10
// 007349da  8bc4                 mov eax, esp
// 007349dc  8908                 mov dword ptr [eax], ecx
// 007349de  8bd1                 mov edx, ecx
// 007349e0  83c7fd               add edi, -3
// 007349e3  8d5903               lea ebx, [ecx + 3]
// 007349e6  895004               mov dword ptr [eax + 4], edx
// 007349e9  897808               mov dword ptr [eax + 8], edi
// 007349ec  55                   push ebp
// 007349ed  8bce                 mov ecx, esi
// 007349ef  89580c               mov dword ptr [eax + 0xc], ebx
// 007349f2  e87998f7ff           call 0x6ae270
// 007349f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007349fb  5f                   pop edi
// 007349fc  5e                   pop esi
// 007349fd  5d                   pop ebp
// 007349fe  c7400408000000       mov dword ptr [eax + 4], 8
// 00734a05  c70000000000         mov dword ptr [eax], 0
// 00734a0b  5b                   pop ebx
// 00734a0c  83c410               add esp, 0x10
// 00734a0f  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPDefaultTheme.cpp (function ?DrawCommandBarGripper@CXTPDefaultTheme@XTPPaintThemes@@UAE?AVCSize@@PAVCDC@@PAVCXTPCommandBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPDefaultTheme.cpp
