// roc 2009-06 00817600  unit: CXTPDialogBar::CControlCaptionPopup  size: 414 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00817600
//
// 00817600  6aff                 push -1
// 00817602  68e1288800           push 0x8828e1
// 00817607  64a100000000         mov eax, dword ptr fs:[0]
// 0081760d  50                   push eax
// 0081760e  83ec38               sub esp, 0x38
// 00817611  53                   push ebx
// 00817612  55                   push ebp
// 00817613  56                   push esi
// 00817614  57                   push edi
// 00817615  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0081761a  33c4                 xor eax, esp
// 0081761c  50                   push eax
// 0081761d  8d44244c             lea eax, [esp + 0x4c]
// 00817621  64a300000000         mov dword ptr fs:[0], eax
// 00817627  8bf1                 mov esi, ecx
// 00817629  e8f282f0ff           call 0x71f920
// 0081762e  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 00817632  89442414             mov dword ptr [esp + 0x14], eax
// 00817636  0598000000           add eax, 0x98
// 0081763b  50                   push eax
// 0081763c  57                   push edi
// 0081763d  8d4c2444             lea ecx, [esp + 0x44]
// 00817641  e81a92f5ff           call 0x770860
// 00817646  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 0081764d  8b86c8000000         mov eax, dword ptr [esi + 0xc8]
// 00817653  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00817659  8baec0000000         mov ebp, dword ptr [esi + 0xc0]
// 0081765f  8b9ec4000000         mov ebx, dword ptr [esi + 0xc4]
// 00817665  c744245400000000     mov dword ptr [esp + 0x54], 0
// 0081766d  89442434             mov dword ptr [esp + 0x34], eax
// 00817671  894c2438             mov dword ptr [esp + 0x38], ecx
// 00817675  7424                 je 0x81769b
// 00817677  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0081767b  8b11                 mov edx, dword ptr [ecx]
// 0081767d  8b4278               mov eax, dword ptr [edx + 0x78]
// 00817680  56                   push esi
// 00817681  57                   push edi
// 00817682  ffd0                 call eax
// 00817684  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 0081768b  740e                 je 0x81769b
// 0081768d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00817691  8b11                 mov edx, dword ptr [ecx]
// 00817693  8b427c               mov eax, dword ptr [edx + 0x7c]
// 00817696  56                   push esi
// 00817697  ffd0                 call eax
// 00817699  eb0e                 jmp 0x8176a9
// 0081769b  e880d4f3ff           call 0x754b20
// 008176a0  6a12                 push 0x12
// 008176a2  8bc8                 mov ecx, eax
// 008176a4  e8f7cbf3ff           call 0x7542a0
// 008176a9  8b17                 mov edx, dword ptr [edi]
// 008176ab  50                   push eax
// 008176ac  8b4238               mov eax, dword ptr [edx + 0x38]
// 008176af  8bcf                 mov ecx, edi
// 008176b1  ffd0                 call eax
// 008176b3  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008176b9  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008176bd  8b542438             mov edx, dword ptr [esp + 0x38]
// 008176c1  f7d8                 neg eax
// 008176c3  1bc0                 sbb eax, eax
// 008176c5  83e00d               and eax, 0xd
// 008176c8  83c002               add eax, 2
// 008176cb  2bc8                 sub ecx, eax
// 008176cd  8b06                 mov eax, dword ptr [esi]
// 008176cf  894c2424             mov dword ptr [esp + 0x24], ecx
// 008176d3  896c241c             mov dword ptr [esp + 0x1c], ebp
// 008176d7  8d4c2418             lea ecx, [esp + 0x18]
// 008176db  89542428             mov dword ptr [esp + 0x28], edx
// 008176df  8b5058               mov edx, dword ptr [eax + 0x58]
// 008176e2  51                   push ecx
// 008176e3  83c502               add ebp, 2
// 008176e6  8bce                 mov ecx, esi
// 008176e8  895c2424             mov dword ptr [esp + 0x24], ebx
// 008176ec  896c2420             mov dword ptr [esp + 0x20], ebp
// 008176f0  ffd2                 call edx
// 008176f2  8be8                 mov ebp, eax
// 008176f4  8b07                 mov eax, dword ptr [edi]
// 008176f6  6a24                 push 0x24
// 008176f8  8d4c2420             lea ecx, [esp + 0x20]
// 008176fc  51                   push ecx
// 008176fd  8bcd                 mov ecx, ebp
// 008176ff  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00817704  89442464             mov dword ptr [esp + 0x64], eax
// 00817708  ff1554fb8900         call dword ptr [0x89fb54]
// 0081770e  50                   push eax
// 0081770f  8bcd                 mov ecx, ebp
// 00817711  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00817717  8b542468             mov edx, dword ptr [esp + 0x68]
// 0081771b  50                   push eax
// 0081771c  8b4270               mov eax, dword ptr [edx + 0x70]
// 0081771f  8bcf                 mov ecx, edi
// 00817721  ffd0                 call eax
// 00817723  8d4c2418             lea ecx, [esp + 0x18]
// 00817727  c644245400           mov byte ptr [esp + 0x54], 0
// 0081772c  ff1510fd8900         call dword ptr [0x89fd10]
// 00817732  8b4f08               mov ecx, dword ptr [edi + 8]
// 00817735  51                   push ecx
// 00817736  ff15e8e08900         call dword ptr [0x89e0e8]
// 0081773c  83be8401000000       cmp dword ptr [esi + 0x184], 0
// 00817743  8be8                 mov ebp, eax
// 00817745  7430                 je 0x817777
// 00817747  8b442438             mov eax, dword ptr [esp + 0x38]
// 0081774b  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0081774f  2bc3                 sub eax, ebx
// 00817751  99                   cdq 
// 00817752  2bc2                 sub eax, edx
// 00817754  d1f8                 sar eax, 1
// 00817756  55                   push ebp
// 00817757  03c3                 add eax, ebx
// 00817759  8d5002               lea edx, [eax + 2]
// 0081775c  52                   push edx
// 0081775d  83c1f7               add ecx, -9
// 00817760  51                   push ecx
// 00817761  83c0fe               add eax, -2
// 00817764  50                   push eax
// 00817765  8d7104               lea esi, [ecx + 4]
// 00817768  56                   push esi
// 00817769  50                   push eax
// 0081776a  8d59fc               lea ebx, [ecx - 4]
// 0081776d  53                   push ebx
// 0081776e  57                   push edi
// 0081776f  e83c9cf5ff           call 0x7713b0
// 00817774  83c420               add esp, 0x20
// 00817777  8d4c243c             lea ecx, [esp + 0x3c]
// 0081777b  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00817783  e85891f5ff           call 0x7708e0
// 00817788  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0081778c  64890d00000000       mov dword ptr fs:[0], ecx
// 00817793  59                   pop ecx
// 00817794  5f                   pop edi
// 00817795  5e                   pop esi
// 00817796  5d                   pop ebp
// 00817797  5b                   pop ebx
// 00817798  83c444               add esp, 0x44
// 0081779b  c20400               ret 4
// copied from an identical function in another client (function ?Draw@CControlCaptionPopup@CXTPDialogBar@@UAEXPAVCDC@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPDialogBar.cpp