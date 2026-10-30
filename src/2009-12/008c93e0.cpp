// roc 2009-12 008c93e0  unit: VCEdit::?$CXTMaskEditT  size: 348 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c93e0
//
// 008c93e0  56                   push esi
// 008c93e1  8bf1                 mov esi, ecx
// 008c93e3  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c93e9  85c9                 test ecx, ecx
// 008c93eb  0f8447010000         je 0x8c9538
// 008c93f1  57                   push edi
// 008c93f2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c93f6  83ff09               cmp edi, 9
// 008c93f9  754f                 jne 0x8c944a
// 008c93fb  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 008c9401  85c0                 test eax, eax
// 008c9403  0f840d010000         je 0x8c9516
// 008c9409  8b4020               mov eax, dword ptr [eax + 0x20]
// 008c940c  53                   push ebx
// 008c940d  50                   push eax
// 008c940e  ff15bccb9800         call dword ptr [0x98cbbc]
// 008c9414  50                   push eax
// 008c9415  e810a7f2ff           call 0x7f3b2a
// 008c941a  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c9420  8bd8                 mov ebx, eax
// 008c9422  8b3b                 mov edi, dword ptr [ebx]
// 008c9424  51                   push ecx
// 008c9425  6a10                 push 0x10
// 008c9427  81c750010000         add edi, 0x150
// 008c942d  ff1530cc9800         call dword ptr [0x98cc30]
// 008c9433  33d2                 xor edx, edx
// 008c9435  6685c0               test ax, ax
// 008c9438  8b07                 mov eax, dword ptr [edi]
// 008c943a  0f9dc2               setge dl
// 008c943d  8bcb                 mov ecx, ebx
// 008c943f  52                   push edx
// 008c9440  6a01                 push 1
// 008c9442  ffd0                 call eax
// 008c9444  5b                   pop ebx
// 008c9445  5f                   pop edi
// 008c9446  5e                   pop esi
// 008c9447  c20c00               ret 0xc
// 008c944a  83ff1b               cmp edi, 0x1b
// 008c944d  752d                 jne 0x8c947c
// 008c944f  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008c9455  c786b000000001000000 mov dword ptr [esi + 0xb0], 1
// 008c945f  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 008c9469  ff1580de9800         call dword ptr [0x98de80]
// 008c946f  50                   push eax
// 008c9470  8bce                 mov ecx, esi
// 008c9472  e89da7f2ff           call 0x7f3c14
// 008c9477  5f                   pop edi
// 008c9478  5e                   pop esi
// 008c9479  c20c00               ret 0xc
// 008c947c  83ff0d               cmp edi, 0xd
// 008c947f  0f84b2000000         je 0x8c9537
// 008c9485  83ff73               cmp edi, 0x73
// 008c9488  7528                 jne 0x8c94b2
// 008c948a  6a65                 push 0x65
// 008c948c  e82fb4f9ff           call 0x8648c0
// 008c9491  8bc8                 mov ecx, eax
// 008c9493  e888d0ffff           call 0x8c6520
// 008c9498  85c0                 test eax, eax
// 008c949a  747a                 je 0x8c9516
// 008c949c  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008c94a2  8b11                 mov edx, dword ptr [ecx]
// 008c94a4  50                   push eax
// 008c94a5  8b82d0000000         mov eax, dword ptr [edx + 0xd0]
// 008c94ab  ffd0                 call eax
// 008c94ad  8d478e               lea eax, [edi - 0x72]
// 008c94b0  eb6d                 jmp 0x8c951f
// 008c94b2  83ff28               cmp edi, 0x28
// 008c94b5  7405                 je 0x8c94bc
// 008c94b7  83ff26               cmp edi, 0x26
// 008c94ba  7550                 jne 0x8c950c
// 008c94bc  8b11                 mov edx, dword ptr [ecx]
// 008c94be  8b4258               mov eax, dword ptr [edx + 0x58]
// 008c94c1  ffd0                 call eax
// 008c94c3  85c0                 test eax, eax
// 008c94c5  7545                 jne 0x8c950c
// 008c94c7  8b16                 mov edx, dword ptr [esi]
// 008c94c9  8b9270010000         mov edx, dword ptr [edx + 0x170]
// 008c94cf  50                   push eax
// 008c94d0  83ff28               cmp edi, 0x28
// 008c94d3  0f94c0               sete al
// 008c94d6  8bce                 mov ecx, esi
// 008c94d8  8d4400ff             lea eax, [eax + eax - 1]
// 008c94dc  50                   push eax
// 008c94dd  ffd2                 call edx
// 008c94df  85c0                 test eax, eax
// 008c94e1  7429                 je 0x8c950c
// 008c94e3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c94e6  8b3dc4cb9800         mov edi, dword ptr [0x98cbc4]
// 008c94ec  6aff                 push -1
// 008c94ee  6a00                 push 0
// 008c94f0  68b1000000           push 0xb1
// 008c94f5  50                   push eax
// 008c94f6  ffd7                 call edi
// 008c94f8  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c94fb  6a00                 push 0
// 008c94fd  6a00                 push 0
// 008c94ff  68b7000000           push 0xb7
// 008c9504  51                   push ecx
// 008c9505  ffd7                 call edi
// 008c9507  5f                   pop edi
// 008c9508  5e                   pop esi
// 008c9509  c20c00               ret 0xc
// 008c950c  83ff2e               cmp edi, 0x2e
// 008c950f  740c                 je 0x8c951d
// 008c9511  83ff08               cmp edi, 8
// 008c9514  7407                 je 0x8c951d
// 008c9516  b801000000           mov eax, 1
// 008c951b  eb02                 jmp 0x8c951f
// 008c951d  33c0                 xor eax, eax
// 008c951f  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c9523  8986b4000000         mov dword ptr [esi + 0xb4], eax
// 008c9529  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c952d  52                   push edx
// 008c952e  50                   push eax
// 008c952f  57                   push edi
// 008c9530  8bce                 mov ecx, esi
// 008c9532  e8c9faffff           call 0x8c9000
// 008c9537  5f                   pop edi
// 008c9538  5e                   pop esi
// 008c9539  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnKeyDown@CXTPPropertyGridInplaceEdit@@IAEXIII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen-rtm Source/PropertyGrid/XTPPropertyGridInplaceEdit.cpp