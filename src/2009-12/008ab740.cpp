// roc 2009-12 008ab740  unit: CXTPDockingPaneAutoHideWnd  size: 604 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab740
//
// 008ab740  6aff                 push -1
// 008ab742  68592a9600           push 0x962a59
// 008ab747  64a100000000         mov eax, dword ptr fs:[0]
// 008ab74d  50                   push eax
// 008ab74e  83ec20               sub esp, 0x20
// 008ab751  53                   push ebx
// 008ab752  55                   push ebp
// 008ab753  56                   push esi
// 008ab754  57                   push edi
// 008ab755  a10052b600           mov eax, dword ptr [0xb65200]
// 008ab75a  33c4                 xor eax, esp
// 008ab75c  50                   push eax
// 008ab75d  8d442434             lea eax, [esp + 0x34]
// 008ab761  64a300000000         mov dword ptr fs:[0], eax
// 008ab767  8bf1                 mov esi, ecx
// 008ab769  89742420             mov dword ptr [esp + 0x20], esi
// 008ab76d  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008ab773  85c0                 test eax, eax
// 008ab775  7405                 je 0x8ab77c
// 008ab777  83f801               cmp eax, 1
// 008ab77a  7525                 jne 0x8ab7a1
// 008ab77c  8b4660               mov eax, dword ptr [esi + 0x60]
// 008ab77f  83786800             cmp dword ptr [eax + 0x68], 0
// 008ab783  741c                 je 0x8ab7a1
// 008ab785  8b4068               mov eax, dword ptr [eax + 0x68]
// 008ab788  8d4854               lea ecx, [eax + 0x54]
// 008ab78b  8b01                 mov eax, dword ptr [ecx]
// 008ab78d  8b5014               mov edx, dword ptr [eax + 0x14]
// 008ab790  ffd2                 call edx
// 008ab792  85c0                 test eax, eax
// 008ab794  750b                 jne 0x8ab7a1
// 008ab796  8bce                 mov ecx, esi
// 008ab798  e883e4ffff           call 0x8a9c20
// 008ab79d  0144244c             add dword ptr [esp + 0x4c], eax
// 008ab7a1  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 008ab7a7  e8c4feffff           call 0x8ab670
// 008ab7ac  8d7e54               lea edi, [esi + 0x54]
// 008ab7af  8bcf                 mov ecx, edi
// 008ab7b1  e89a500000           call 0x8b0850
// 008ab7b6  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 008ab7bc  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 008ab7c2  8b01                 mov eax, dword ptr [ecx]
// 008ab7c4  8b4010               mov eax, dword ptr [eax + 0x10]
// 008ab7c7  8d542424             lea edx, [esp + 0x24]
// 008ab7cb  52                   push edx
// 008ab7cc  ffd0                 call eax
// 008ab7ce  8bcf                 mov ecx, edi
// 008ab7d0  e8bbeffaff           call 0x85a790
// 008ab7d5  89442418             mov dword ptr [esp + 0x18], eax
// 008ab7d9  85c0                 test eax, eax
// 008ab7db  0f84a5010000         je 0x8ab986
// 008ab7e1  8d4c2418             lea ecx, [esp + 0x18]
// 008ab7e5  51                   push ecx
// 008ab7e6  8d4e54               lea ecx, [esi + 0x54]
// 008ab7e9  e822770400           call 0x8f2f10
// 008ab7ee  85c0                 test eax, eax
// 008ab7f0  7405                 je 0x8ab7f7
// 008ab7f2  8d68ac               lea ebp, [eax - 0x54]
// 008ab7f5  eb02                 jmp 0x8ab7f9
// 008ab7f7  33ed                 xor ebp, ebp
// 008ab7f9  8b5554               mov edx, dword ptr [ebp + 0x54]
// 008ab7fc  8b4214               mov eax, dword ptr [edx + 0x14]
// 008ab7ff  8d5d54               lea ebx, [ebp + 0x54]
// 008ab802  8bcb                 mov ecx, ebx
// 008ab804  ffd0                 call eax
// 008ab806  85c0                 test eax, eax
// 008ab808  0f856d010000         jne 0x8ab97b
// 008ab80e  8b8eb0000000         mov ecx, dword ptr [esi + 0xb0]
// 008ab814  e8a7feffff           call 0x8ab6c0
// 008ab819  8bcb                 mov ecx, ebx
// 008ab81b  8bf8                 mov edi, eax
// 008ab81d  e86eeffaff           call 0x85a790
// 008ab822  89442414             mov dword ptr [esp + 0x14], eax
// 008ab826  85c0                 test eax, eax
// 008ab828  0f84a6000000         je 0x8ab8d4
// 008ab82e  8d4c2414             lea ecx, [esp + 0x14]
// 008ab832  51                   push ecx
// 008ab833  8d4d54               lea ecx, [ebp + 0x54]
// 008ab836  e8d5760400           call 0x8f2f10
// 008ab83b  85c0                 test eax, eax
// 008ab83d  7405                 je 0x8ab844
// 008ab83f  8d70e0               lea esi, [eax - 0x20]
// 008ab842  eb02                 jmp 0x8ab846
// 008ab844  33f6                 xor esi, esi
// 008ab846  8b475c               mov eax, dword ptr [edi + 0x5c]
// 008ab849  6a00                 push 0
// 008ab84b  50                   push eax
// 008ab84c  8bcf                 mov ecx, edi
// 008ab84e  e88d3c0200           call 0x8cf4e0
// 008ab853  8bd8                 mov ebx, eax
// 008ab855  897340               mov dword ptr [ebx + 0x40], esi
// 008ab858  39b5a4010000         cmp dword ptr [ebp + 0x1a4], esi
// 008ab85e  750a                 jne 0x8ab86a
// 008ab860  8b17                 mov edx, dword ptr [edi]
// 008ab862  8b4220               mov eax, dword ptr [edx + 0x20]
// 008ab865  53                   push ebx
// 008ab866  8bcf                 mov ecx, edi
// 008ab868  ffd0                 call eax
// 008ab86a  8b16                 mov edx, dword ptr [esi]
// 008ab86c  8b5260               mov edx, dword ptr [edx + 0x60]
// 008ab86f  8d44241c             lea eax, [esp + 0x1c]
// 008ab873  50                   push eax
// 008ab874  8bce                 mov ecx, esi
// 008ab876  ffd2                 call edx
// 008ab878  8bc8                 mov ecx, eax
// 008ab87a  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 008ab882  ff1580de9800         call dword ptr [0x98de80]
// 008ab888  50                   push eax
// 008ab889  8bcb                 mov ecx, ebx
// 008ab88b  e8a02b0200           call 0x8ce430
// 008ab890  8d4c241c             lea ecx, [esp + 0x1c]
// 008ab894  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 008ab89c  ff15c0de9800         call dword ptr [0x98dec0]
// 008ab8a2  8b06                 mov eax, dword ptr [esi]
// 008ab8a4  8b5068               mov edx, dword ptr [eax + 0x68]
// 008ab8a7  8bce                 mov ecx, esi
// 008ab8a9  ffd2                 call edx
// 008ab8ab  50                   push eax
// 008ab8ac  8bcb                 mov ecx, ebx
// 008ab8ae  e8ad2b0200           call 0x8ce460
// 008ab8b3  8bce                 mov ecx, esi
// 008ab8b5  e876beeaff           call 0x757730
// 008ab8ba  83e001               and eax, 1
// 008ab8bd  50                   push eax
// 008ab8be  8bcb                 mov ecx, ebx
// 008ab8c0  e87b270200           call 0x8ce040
// 008ab8c5  837c241400           cmp dword ptr [esp + 0x14], 0
// 008ab8ca  0f855effffff         jne 0x8ab82e
// 008ab8d0  8b742420             mov esi, dword ptr [esp + 0x20]
// 008ab8d4  8b07                 mov eax, dword ptr [edi]
// 008ab8d6  8b502c               mov edx, dword ptr [eax + 0x2c]
// 008ab8d9  8bcf                 mov ecx, edi
// 008ab8db  ffd2                 call edx
// 008ab8dd  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008ab8e1  8b18                 mov ebx, dword ptr [eax]
// 008ab8e3  83ec10               sub esp, 0x10
// 008ab8e6  8bd4                 mov edx, esp
// 008ab8e8  890a                 mov dword ptr [edx], ecx
// 008ab8ea  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008ab8ee  894a04               mov dword ptr [edx + 4], ecx
// 008ab8f1  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008ab8f5  894a08               mov dword ptr [edx + 8], ecx
// 008ab8f8  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008ab8fc  894a0c               mov dword ptr [edx + 0xc], ecx
// 008ab8ff  8b542454             mov edx, dword ptr [esp + 0x54]
// 008ab903  52                   push edx
// 008ab904  8bc8                 mov ecx, eax
// 008ab906  8b4360               mov eax, dword ptr [ebx + 0x60]
// 008ab909  57                   push edi
// 008ab90a  ffd0                 call eax
// 008ab90c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008ab910  898f94000000         mov dword ptr [edi + 0x94], ecx
// 008ab916  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 008ab91a  899798000000         mov dword ptr [edi + 0x98], edx
// 008ab920  8b442450             mov eax, dword ptr [esp + 0x50]
// 008ab924  89879c000000         mov dword ptr [edi + 0x9c], eax
// 008ab92a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008ab92e  898fa0000000         mov dword ptr [edi + 0xa0], ecx
// 008ab934  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 008ab93a  85c0                 test eax, eax
// 008ab93c  7422                 je 0x8ab960
// 008ab93e  83f801               cmp eax, 1
// 008ab941  741d                 je 0x8ab960
// 008ab943  8bcf                 mov ecx, edi
// 008ab945  e8c63a0200           call 0x8cf410
// 008ab94a  0344242c             add eax, dword ptr [esp + 0x2c]
// 008ab94e  8b542448             mov edx, dword ptr [esp + 0x48]
// 008ab952  03442424             add eax, dword ptr [esp + 0x24]
// 008ab956  8d440208             lea eax, [edx + eax + 8]
// 008ab95a  89442448             mov dword ptr [esp + 0x48], eax
// 008ab95e  eb1b                 jmp 0x8ab97b
// 008ab960  8bcf                 mov ecx, edi
// 008ab962  e8a93a0200           call 0x8cf410
// 008ab967  0344242c             add eax, dword ptr [esp + 0x2c]
// 008ab96b  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008ab96f  03442424             add eax, dword ptr [esp + 0x24]
// 008ab973  8d540108             lea edx, [ecx + eax + 8]
// 008ab977  8954244c             mov dword ptr [esp + 0x4c], edx
// 008ab97b  837c241800           cmp dword ptr [esp + 0x18], 0
// 008ab980  0f855bfeffff         jne 0x8ab7e1
// 008ab986  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008ab98a  64890d00000000       mov dword ptr fs:[0], ecx
// 008ab991  59                   pop ecx
// 008ab992  5f                   pop edi
// 008ab993  5e                   pop esi
// 008ab994  5d                   pop ebp
// 008ab995  5b                   pop ebx
// 008ab996  83c42c               add esp, 0x2c
// 008ab999  c21400               ret 0x14
// copied from an identical function in another client (function ?RefreshManagersArray@CXTPDockingPaneAutoHidePanel@@IAEXPAVCDC@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp