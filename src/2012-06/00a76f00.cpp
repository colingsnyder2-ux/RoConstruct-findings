// roc 2012-06 00a76f00  unit: CXTPRibbonSystemPopupBar  size: 581 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76f00
//
// 00a76f00  6aff                 push -1
// 00a76f02  68c290ae00           push 0xae90c2
// 00a76f07  64a100000000         mov eax, dword ptr fs:[0]
// 00a76f0d  50                   push eax
// 00a76f0e  83ec44               sub esp, 0x44
// 00a76f11  53                   push ebx
// 00a76f12  55                   push ebp
// 00a76f13  56                   push esi
// 00a76f14  57                   push edi
// 00a76f15  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a76f1a  33c4                 xor eax, esp
// 00a76f1c  50                   push eax
// 00a76f1d  8d442458             lea eax, [esp + 0x58]
// 00a76f21  64a300000000         mov dword ptr fs:[0], eax
// 00a76f27  8bf1                 mov esi, ecx
// 00a76f29  56                   push esi
// 00a76f2a  8d4c243c             lea ecx, [esp + 0x3c]
// 00a76f2e  e86de2f5ff           call 0x9d51a0
// 00a76f33  8bce                 mov ecx, esi
// 00a76f35  e876bef1ff           call 0x992db0
// 00a76f3a  8be8                 mov ebp, eax
// 00a76f3c  68b88cc200           push 0xc28cb8
// 00a76f41  8bcd                 mov ecx, ebp
// 00a76f43  e82809f9ff           call 0xa07870
// 00a76f48  8bf8                 mov edi, eax
// 00a76f4a  85ff                 test edi, edi
// 00a76f4c  0f84dd010000         je 0xa7712f
// 00a76f52  6a01                 push 1
// 00a76f54  6a00                 push 0
// 00a76f56  8d442450             lea eax, [esp + 0x50]
// 00a76f5a  50                   push eax
// 00a76f5b  8bcf                 mov ecx, edi
// 00a76f5d  e88eebfeff           call 0xa65af0
// 00a76f62  8b10                 mov edx, dword ptr [eax]
// 00a76f64  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00a76f68  6aff                 push -1
// 00a76f6a  8d8e00020000         lea ecx, [esi + 0x200]
// 00a76f70  51                   push ecx
// 00a76f71  83ec10               sub esp, 0x10
// 00a76f74  8bcc                 mov ecx, esp
// 00a76f76  8911                 mov dword ptr [ecx], edx
// 00a76f78  8b5004               mov edx, dword ptr [eax + 4]
// 00a76f7b  895104               mov dword ptr [ecx + 4], edx
// 00a76f7e  8b5008               mov edx, dword ptr [eax + 8]
// 00a76f81  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a76f84  895108               mov dword ptr [ecx + 8], edx
// 00a76f87  89410c               mov dword ptr [ecx + 0xc], eax
// 00a76f8a  8d4c2450             lea ecx, [esp + 0x50]
// 00a76f8e  51                   push ecx
// 00a76f8f  53                   push ebx
// 00a76f90  8bcf                 mov ecx, edi
// 00a76f92  e899f0feff           call 0xa66030
// 00a76f97  8b9680010000         mov edx, dword ptr [esi + 0x180]
// 00a76f9d  52                   push edx
// 00a76f9e  e84dfaffff           call 0xa769f0
// 00a76fa3  50                   push eax
// 00a76fa4  e83db5f0ff           call 0x9824e6
// 00a76fa9  83c408               add esp, 8
// 00a76fac  85c0                 test eax, eax
// 00a76fae  0f847b010000         je 0xa7712f
// 00a76fb4  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00a76fba  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00a76fc0  50                   push eax
// 00a76fc1  e83a71faff           call 0xa1e100
// 00a76fc6  50                   push eax
// 00a76fc7  e81ab5f0ff           call 0x9824e6
// 00a76fcc  8bf8                 mov edi, eax
// 00a76fce  83c408               add esp, 8
// 00a76fd1  85ff                 test edi, edi
// 00a76fd3  0f8456010000         je 0xa7712f
// 00a76fd9  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00a76fdf  8b88c0000000         mov ecx, dword ptr [eax + 0xc0]
// 00a76fe5  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a76fe9  8b90c4000000         mov edx, dword ptr [eax + 0xc4]
// 00a76fef  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a76ff3  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00a76ff9  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a76ffd  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 00a77003  89542424             mov dword ptr [esp + 0x24], edx
// 00a77007  8b8000010000         mov eax, dword ptr [eax + 0x100]
// 00a7700d  8d4c2418             lea ecx, [esp + 0x18]
// 00a77011  51                   push ecx
// 00a77012  8bc8                 mov ecx, eax
// 00a77014  e895b6f0ff           call 0x9826ae
// 00a77019  8d542418             lea edx, [esp + 0x18]
// 00a7701d  52                   push edx
// 00a7701e  8bce                 mov ecx, esi
// 00a77020  e879c0f0ff           call 0x98309e
// 00a77025  8bcf                 mov ecx, edi
// 00a77027  e8a476faff           call 0xa1e6d0
// 00a7702c  85c0                 test eax, eax
// 00a7702e  744e                 je 0xa7707e
// 00a77030  8d442438             lea eax, [esp + 0x38]
// 00a77034  50                   push eax
// 00a77035  8d4c241c             lea ecx, [esp + 0x1c]
// 00a77039  51                   push ecx
// 00a7703a  8d542450             lea edx, [esp + 0x50]
// 00a7703e  52                   push edx
// 00a7703f  ff15f83cb200         call dword ptr [0xb23cf8]
// 00a77045  85c0                 test eax, eax
// 00a77047  7435                 je 0xa7707e
// 00a77049  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a7704d  8b5500               mov edx, dword ptr [ebp]
// 00a77050  8b925c010000         mov edx, dword ptr [edx + 0x15c]
// 00a77056  83ec10               sub esp, 0x10
// 00a77059  8bc4                 mov eax, esp
// 00a7705b  8908                 mov dword ptr [eax], ecx
// 00a7705d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a77061  894804               mov dword ptr [eax + 4], ecx
// 00a77064  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00a77068  894808               mov dword ptr [eax + 8], ecx
// 00a7706b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a7706f  89480c               mov dword ptr [eax + 0xc], ecx
// 00a77072  8b8680010000         mov eax, dword ptr [esi + 0x180]
// 00a77078  50                   push eax
// 00a77079  53                   push ebx
// 00a7707a  8bcd                 mov ecx, ebp
// 00a7707c  ffd2                 call edx
// 00a7707e  8bce                 mov ecx, esi
// 00a77080  33ff                 xor edi, edi
// 00a77082  e879caf1ff           call 0x993b00
// 00a77087  85c0                 test eax, eax
// 00a77089  0f8ea0000000         jle 0xa7712f
// 00a7708f  90                   nop 
// 00a77090  57                   push edi
// 00a77091  8bce                 mov ecx, esi
// 00a77093  e878caf1ff           call 0x993b10
// 00a77098  85c0                 test eax, eax
// 00a7709a  7409                 je 0xa770a5
// 00a7709c  83b89400000000       cmp dword ptr [eax + 0x94], 0
// 00a770a3  750e                 jne 0xa770b3
// 00a770a5  8bce                 mov ecx, esi
// 00a770a7  47                   inc edi
// 00a770a8  e853caf1ff           call 0x993b00
// 00a770ad  3bf8                 cmp edi, eax
// 00a770af  7cdf                 jl 0xa77090
// 00a770b1  eb7c                 jmp 0xa7712f
// 00a770b3  8b88b0000000         mov ecx, dword ptr [eax + 0xb0]
// 00a770b9  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00a770bf  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a770c3  8b88b8000000         mov ecx, dword ptr [eax + 0xb8]
// 00a770c9  51                   push ecx
// 00a770ca  89542430             mov dword ptr [esp + 0x30], edx
// 00a770ce  8b90bc000000         mov edx, dword ptr [eax + 0xbc]
// 00a770d4  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a770d8  8bcc                 mov ecx, esp
// 00a770da  8964246c             mov dword ptr [esp + 0x6c], esp
// 00a770de  689c8cc200           push 0xc28c9c
// 00a770e3  8954243c             mov dword ptr [esp + 0x3c], edx
// 00a770e7  ff15c847b200         call dword ptr [0xb247c8]
// 00a770ed  51                   push ecx
// 00a770ee  8bcc                 mov ecx, esp
// 00a770f0  8964241c             mov dword ptr [esp + 0x1c], esp
// 00a770f4  681cb9c100           push 0xc1b91c
// 00a770f9  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 00a77101  ff15c847b200         call dword ptr [0xb247c8]
// 00a77107  8bcd                 mov ecx, ebp
// 00a77109  c644246801           mov byte ptr [esp + 0x68], 1
// 00a7710e  e84d07f9ff           call 0xa07860
// 00a77113  8bc8                 mov ecx, eax
// 00a77115  c7442468ffffffff     mov dword ptr [esp + 0x68], 0xffffffff
// 00a7711d  e80ef2feff           call 0xa66330
// 00a77122  50                   push eax
// 00a77123  8d44242c             lea eax, [esp + 0x2c]
// 00a77127  50                   push eax
// 00a77128  8bcb                 mov ecx, ebx
// 00a7712a  e87dbdf0ff           call 0x982eac
// 00a7712f  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 00a77133  64890d00000000       mov dword ptr fs:[0], ecx
// 00a7713a  59                   pop ecx
// 00a7713b  5f                   pop edi
// 00a7713c  5e                   pop esi
// 00a7713d  5d                   pop ebp
// 00a7713e  5b                   pop ebx
// 00a7713f  83c450               add esp, 0x50
// 00a77142  c20400               ret 4
// copied from an identical function in another client (function ?FillCommandBarEntry@CXTPRibbonSystemPopupBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp