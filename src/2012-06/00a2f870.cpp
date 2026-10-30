// roc 2012-06 00a2f870  unit: CXTPReportNavigator  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2f870
//
// 00a2f870  6aff                 push -1
// 00a2f872  686153ae00           push 0xae5361
// 00a2f877  64a100000000         mov eax, dword ptr fs:[0]
// 00a2f87d  50                   push eax
// 00a2f87e  83ec28               sub esp, 0x28
// 00a2f881  56                   push esi
// 00a2f882  57                   push edi
// 00a2f883  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a2f888  33c4                 xor eax, esp
// 00a2f88a  50                   push eax
// 00a2f88b  8d442434             lea eax, [esp + 0x34]
// 00a2f88f  64a300000000         mov dword ptr fs:[0], eax
// 00a2f895  8bf1                 mov esi, ecx
// 00a2f897  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a2f89b  0f84a2010000         je 0xa2fa43
// 00a2f8a1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f8a4  8b01                 mov eax, dword ptr [ecx]
// 00a2f8a6  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00a2f8ac  ffd2                 call edx
// 00a2f8ae  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f8b1  e8bac3f7ff           call 0x9abc70
// 00a2f8b6  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2f8b9  8b4020               mov eax, dword ptr [eax + 0x20]
// 00a2f8bc  50                   push eax
// 00a2f8bd  ff15c43cb200         call dword ptr [0xb23cc4]
// 00a2f8c3  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f8c6  e815b4f7ff           call 0x9aace0
// 00a2f8cb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f8ce  83b91802000000       cmp dword ptr [ecx + 0x218], 0
// 00a2f8d5  8bf8                 mov edi, eax
// 00a2f8d7  0f8466010000         je 0xa2fa43
// 00a2f8dd  85ff                 test edi, edi
// 00a2f8df  0f845e010000         je 0xa2fa43
// 00a2f8e5  8b17                 mov edx, dword ptr [edi]
// 00a2f8e7  8b4260               mov eax, dword ptr [edx + 0x60]
// 00a2f8ea  8bcf                 mov ecx, edi
// 00a2f8ec  ffd0                 call eax
// 00a2f8ee  85c0                 test eax, eax
// 00a2f8f0  0f844d010000         je 0xa2fa43
// 00a2f8f6  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2f8f9  8b8818020000         mov ecx, dword ptr [eax + 0x218]
// 00a2f8ff  51                   push ecx
// 00a2f900  57                   push edi
// 00a2f901  50                   push eax
// 00a2f902  8d4c241c             lea ecx, [esp + 0x1c]
// 00a2f906  e8b578f8ff           call 0x9b71c0
// 00a2f90b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a2f90f  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 00a2f917  85c9                 test ecx, ecx
// 00a2f919  0f8413010000         je 0xa2fa32
// 00a2f91f  8b11                 mov edx, dword ptr [ecx]
// 00a2f921  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 00a2f927  8d442410             lea eax, [esp + 0x10]
// 00a2f92b  50                   push eax
// 00a2f92c  ffd2                 call edx
// 00a2f92e  85c0                 test eax, eax
// 00a2f930  0f84fc000000         je 0xa2fa32
// 00a2f936  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f939  e882b3f7ff           call 0x9aacc0
// 00a2f93e  85c0                 test eax, eax
// 00a2f940  7509                 jne 0xa2f94b
// 00a2f942  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f945  57                   push edi
// 00a2f946  e835caf7ff           call 0x9ac380
// 00a2f94b  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f94e  8d442410             lea eax, [esp + 0x10]
// 00a2f952  50                   push eax
// 00a2f953  e8e819f8ff           call 0x9b1340
// 00a2f958  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f95b  8b8124020000         mov eax, dword ptr [ecx + 0x224]
// 00a2f961  85c0                 test eax, eax
// 00a2f963  0f84c9000000         je 0xa2fa32
// 00a2f969  83782000             cmp dword ptr [eax + 0x20], 0
// 00a2f96d  0f84bf000000         je 0xa2fa32
// 00a2f973  8b4064               mov eax, dword ptr [eax + 0x64]
// 00a2f976  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a2f97a  3bc1                 cmp eax, ecx
// 00a2f97c  0f85b0000000         jne 0xa2fa32
// 00a2f982  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a2f986  52                   push edx
// 00a2f987  e83486f8ff           call 0x9b7fc0
// 00a2f98c  85c0                 test eax, eax
// 00a2f98e  7435                 je 0xa2f9c5
// 00a2f990  83784000             cmp dword ptr [eax + 0x40], 0
// 00a2f994  742f                 je 0xa2f9c5
// 00a2f996  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2f999  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 00a2f99f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2f9a2  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00a2f9a8  6aff                 push -1
// 00a2f9aa  6a00                 push 0
// 00a2f9ac  68b1000000           push 0xb1
// 00a2f9b1  51                   push ecx
// 00a2f9b2  ffd7                 call edi
// 00a2f9b4  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2f9b7  6a00                 push 0
// 00a2f9b9  6a00                 push 0
// 00a2f9bb  68b7000000           push 0xb7
// 00a2f9c0  52                   push edx
// 00a2f9c1  ffd7                 call edi
// 00a2f9c3  eb6d                 jmp 0xa2fa32
// 00a2f9c5  8d4c240c             lea ecx, [esp + 0xc]
// 00a2f9c9  ff158447b200         call dword ptr [0xb24784]
// 00a2f9cf  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2f9d2  8b8824020000         mov ecx, dword ptr [eax + 0x224]
// 00a2f9d8  8d54240c             lea edx, [esp + 0xc]
// 00a2f9dc  52                   push edx
// 00a2f9dd  c644244001           mov byte ptr [esp + 0x40], 1
// 00a2f9e2  e80f2df5ff           call 0x9826f6
// 00a2f9e7  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a2f9ea  8bb024020000         mov esi, dword ptr [eax + 0x224]
// 00a2f9f0  8d4c240c             lea ecx, [esp + 0xc]
// 00a2f9f4  ff155846b200         call dword ptr [0xb24658]
// 00a2f9fa  8d4c240c             lea ecx, [esp + 0xc]
// 00a2f9fe  8bf8                 mov edi, eax
// 00a2fa00  ff155846b200         call dword ptr [0xb24658]
// 00a2fa06  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a2fa09  57                   push edi
// 00a2fa0a  8b3d043cb200         mov edi, dword ptr [0xb23c04]
// 00a2fa10  50                   push eax
// 00a2fa11  68b1000000           push 0xb1
// 00a2fa16  51                   push ecx
// 00a2fa17  ffd7                 call edi
// 00a2fa19  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a2fa1c  6a00                 push 0
// 00a2fa1e  6a00                 push 0
// 00a2fa20  68b7000000           push 0xb7
// 00a2fa25  52                   push edx
// 00a2fa26  ffd7                 call edi
// 00a2fa28  8d4c240c             lea ecx, [esp + 0xc]
// 00a2fa2c  ff15d047b200         call dword ptr [0xb247d0]
// 00a2fa32  8d4c2410             lea ecx, [esp + 0x10]
// 00a2fa36  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 00a2fa3e  e8dd71f8ff           call 0x9b6c20
// 00a2fa43  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a2fa47  64890d00000000       mov dword ptr fs:[0], ecx
// 00a2fa4e  59                   pop ecx
// 00a2fa4f  5f                   pop edi
// 00a2fa50  5e                   pop esi
// 00a2fa51  83c434               add esp, 0x34
// 00a2fa54  c3                   ret 
// copied from an identical function in another client (function ?BeginEdit@CXTPReportNavigator@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportNavigator.cpp