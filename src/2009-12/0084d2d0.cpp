// roc 2009-12 0084d2d0  unit: CXTPCompatibleDC  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084d2d0
//
// 0084d2d0  51                   push ecx
// 0084d2d1  53                   push ebx
// 0084d2d2  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0084d2d6  894c2404             mov dword ptr [esp + 4], ecx
// 0084d2da  85db                 test ebx, ebx
// 0084d2dc  0f84b0000000         je 0x84d392
// 0084d2e2  53                   push ebx
// 0084d2e3  ff1568cc9800         call dword ptr [0x98cc68]
// 0084d2e9  85c0                 test eax, eax
// 0084d2eb  0f85a1000000         jne 0x84d392
// 0084d2f1  56                   push esi
// 0084d2f2  8b742410             mov esi, dword ptr [esp + 0x10]
// 0084d2f6  85f6                 test esi, esi
// 0084d2f8  7403                 je 0x84d2fd
// 0084d2fa  8b4604               mov eax, dword ptr [esi + 4]
// 0084d2fd  50                   push eax
// 0084d2fe  e88dd7ffff           call 0x84aa90
// 0084d303  83c404               add esp, 4
// 0084d306  85c0                 test eax, eax
// 0084d308  7413                 je 0x84d31d
// 0084d30a  8b442418             mov eax, dword ptr [esp + 0x18]
// 0084d30e  50                   push eax
// 0084d30f  53                   push ebx
// 0084d310  8bce                 mov ecx, esi
// 0084d312  e8e772faff           call 0x7f45fe
// 0084d317  5e                   pop esi
// 0084d318  5b                   pop ebx
// 0084d319  59                   pop ecx
// 0084d31a  c21400               ret 0x14
// 0084d31d  55                   push ebp
// 0084d31e  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0084d322  57                   push edi
// 0084d323  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0084d327  3bfd                 cmp edi, ebp
// 0084d329  7511                 jne 0x84d33c
// 0084d32b  57                   push edi
// 0084d32c  53                   push ebx
// 0084d32d  8bce                 mov ecx, esi
// 0084d32f  e8ca72faff           call 0x7f45fe
// 0084d334  5f                   pop edi
// 0084d335  5d                   pop ebp
// 0084d336  5e                   pop esi
// 0084d337  5b                   pop ebx
// 0084d338  59                   pop ecx
// 0084d339  c21400               ret 0x14
// 0084d33c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084d340  83790c00             cmp dword ptr [ecx + 0xc], 0
// 0084d344  7437                 je 0x84d37d
// 0084d346  56                   push esi
// 0084d347  e8c4edffff           call 0x84c110
// 0084d34c  83c404               add esp, 4
// 0084d34f  85c0                 test eax, eax
// 0084d351  7410                 je 0x84d363
// 0084d353  e8c8e3feff           call 0x83b720
// 0084d358  8bc8                 mov ecx, eax
// 0084d35a  e811e4feff           call 0x83b770
// 0084d35f  84c0                 test al, al
// 0084d361  751a                 jne 0x84d37d
// 0084d363  8b542428             mov edx, dword ptr [esp + 0x28]
// 0084d367  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084d36b  52                   push edx
// 0084d36c  55                   push ebp
// 0084d36d  57                   push edi
// 0084d36e  53                   push ebx
// 0084d36f  56                   push esi
// 0084d370  e8dbebffff           call 0x84bf50
// 0084d375  5f                   pop edi
// 0084d376  5d                   pop ebp
// 0084d377  5e                   pop esi
// 0084d378  5b                   pop ebx
// 0084d379  59                   pop ecx
// 0084d37a  c21400               ret 0x14
// 0084d37d  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084d381  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0084d385  50                   push eax
// 0084d386  55                   push ebp
// 0084d387  57                   push edi
// 0084d388  53                   push ebx
// 0084d389  56                   push esi
// 0084d38a  e861eaffff           call 0x84bdf0
// 0084d38f  5f                   pop edi
// 0084d390  5d                   pop ebp
// 0084d391  5e                   pop esi
// 0084d392  5b                   pop ebx
// 0084d393  59                   pop ecx
// 0084d394  c21400               ret 0x14
// copied from an identical function in another client (function ?GradientFill@CXTPDrawHelpers@@QAEXPAVCDC@@PBUtagRECT@@KKH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\Common\XTPDrawHelpers.cpp