// roc 2009-12 008675a0  unit: CXTPPropertyGridItemColor  size: 816 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008675a0
//
// 008675a0  6aff                 push -1
// 008675a2  684bf29500           push 0x95f24b
// 008675a7  64a100000000         mov eax, dword ptr fs:[0]
// 008675ad  50                   push eax
// 008675ae  81ecdc010000         sub esp, 0x1dc
// 008675b4  53                   push ebx
// 008675b5  56                   push esi
// 008675b6  57                   push edi
// 008675b7  a10052b600           mov eax, dword ptr [0xb65200]
// 008675bc  33c4                 xor eax, esp
// 008675be  50                   push eax
// 008675bf  8d8424ec010000       lea eax, [esp + 0x1ec]
// 008675c6  64a300000000         mov dword ptr fs:[0], eax
// 008675cc  8bf9                 mov edi, ecx
// 008675ce  8b8424fc010000       mov eax, dword ptr [esp + 0x1fc]
// 008675d5  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 008675db  50                   push eax
// 008675dc  6a05                 push 5
// 008675de  e82d030000           call 0x867910
// 008675e3  83f801               cmp eax, 1
// 008675e6  0f84c9020000         je 0x8678b5
// 008675ec  8b17                 mov edx, dword ptr [edi]
// 008675ee  8b8290000000         mov eax, dword ptr [edx + 0x90]
// 008675f4  8bcf                 mov ecx, edi
// 008675f6  ffd0                 call eax
// 008675f8  85c0                 test eax, eax
// 008675fa  0f84b5020000         je 0x8678b5
// 00867600  8b8714010000         mov eax, dword ptr [edi + 0x114]
// 00867606  8bb7bc000000         mov esi, dword ptr [edi + 0xbc]
// 0086760c  85c0                 test eax, eax
// 0086760e  0f85d1000000         jne 0x8676e5
// 00867614  6884010000           push 0x184
// 00867619  e842c2f8ff           call 0x7f3860
// 0086761e  83c404               add esp, 4
// 00867621  89442410             mov dword ptr [esp + 0x10], eax
// 00867625  c78424f401000000000000 mov dword ptr [esp + 0x1f4], 0
// 00867630  85c0                 test eax, eax
// 00867632  740b                 je 0x86763f
// 00867634  8bf0                 mov esi, eax
// 00867636  e815fcffff           call 0x867250
// 0086763b  8bf0                 mov esi, eax
// 0086763d  eb02                 jmp 0x867641
// 0086763f  33f6                 xor esi, esi
// 00867641  8d4c2418             lea ecx, [esp + 0x18]
// 00867645  51                   push ecx
// 00867646  8bcf                 mov ecx, edi
// 00867648  c78424f8010000ffffffff mov dword ptr [esp + 0x1f8], 0xffffffff
// 00867653  e898ddffff           call 0x8653f0
// 00867658  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 0086765e  8d542418             lea edx, [esp + 0x18]
// 00867662  52                   push edx
// 00867663  e892c7f8ff           call 0x7f3dfa
// 00867668  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086766c  0562ffffff           add eax, 0xffffff62
// 00867671  8d8fa8000000         lea ecx, [edi + 0xa8]
// 00867677  89442418             mov dword ptr [esp + 0x18], eax
// 0086767b  ff1580de9800         call dword ptr [0x98de80]
// 00867681  50                   push eax
// 00867682  e809f9ffff           call 0x866f90
// 00867687  8b17                 mov edx, dword ptr [edi]
// 00867689  8b1e                 mov ebx, dword ptr [esi]
// 0086768b  83c404               add esp, 4
// 0086768e  50                   push eax
// 0086768f  8b82e8000000         mov eax, dword ptr [edx + 0xe8]
// 00867695  8bcf                 mov ecx, edi
// 00867697  81c350010000         add ebx, 0x150
// 0086769d  ffd0                 call eax
// 0086769f  8b8fbc000000         mov ecx, dword ptr [edi + 0xbc]
// 008676a5  50                   push eax
// 008676a6  8b03                 mov eax, dword ptr [ebx]
// 008676a8  6a66                 push 0x66
// 008676aa  51                   push ecx
// 008676ab  8d542428             lea edx, [esp + 0x28]
// 008676af  52                   push edx
// 008676b0  8bce                 mov ecx, esi
// 008676b2  ffd0                 call eax
// 008676b4  8b87bc000000         mov eax, dword ptr [edi + 0xbc]
// 008676ba  85c0                 test eax, eax
// 008676bc  7405                 je 0x8676c3
// 008676be  8b4020               mov eax, dword ptr [eax + 0x20]
// 008676c1  eb02                 jmp 0x8676c5
// 008676c3  33c0                 xor eax, eax
// 008676c5  8bce                 mov ecx, esi
// 008676c7  894638               mov dword ptr [esi + 0x38], eax
// 008676ca  e833c5f8ff           call 0x7f3c02
// 008676cf  8b4620               mov eax, dword ptr [esi + 0x20]
// 008676d2  50                   push eax
// 008676d3  8bce                 mov ecx, esi
// 008676d5  e886ac0700           call 0x8e2360
// 008676da  89be80010000         mov dword ptr [esi + 0x180], edi
// 008676e0  e9d0010000           jmp 0x8678b5
// 008676e5  8d4f04               lea ecx, [edi + 4]
// 008676e8  51                   push ecx
// 008676e9  83f802               cmp eax, 2
// 008676ec  0f85e5000000         jne 0x8677d7
// 008676f2  ff150cb29800         call dword ptr [0x98b20c]
// 008676f8  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 008676fe  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 00867704  52                   push edx
// 00867705  6a00                 push 0
// 00867707  50                   push eax
// 00867708  50                   push eax
// 00867709  8d8c24d0000000       lea ecx, [esp + 0xd0]
// 00867710  e8cb79ffff           call 0x85f0e0
// 00867715  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 0086771c  c78424f401000001000000 mov dword ptr [esp + 0x1f4], 1
// 00867727  e8c6cbf8ff           call 0x7f42f2
// 0086772c  83f801               cmp eax, 1
// 0086772f  7577                 jne 0x8677a8
// 00867731  8b8424e4010000       mov eax, dword ptr [esp + 0x1e4]
// 00867738  50                   push eax
// 00867739  8d4c2414             lea ecx, [esp + 0x14]
// 0086773d  51                   push ecx
// 0086773e  e8adf9ffff           call 0x8670f0
// 00867743  83c408               add esp, 8
// 00867746  8b17                 mov edx, dword ptr [edi]
// 00867748  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 0086774e  8d442410             lea eax, [esp + 0x10]
// 00867752  50                   push eax
// 00867753  8bcf                 mov ecx, edi
// 00867755  c68424f801000002     mov byte ptr [esp + 0x1f8], 2
// 0086775d  ffd2                 call edx
// 0086775f  85c0                 test eax, eax
// 00867761  7431                 je 0x867794
// 00867763  51                   push ecx
// 00867764  8d442414             lea eax, [esp + 0x14]
// 00867768  8bcc                 mov ecx, esp
// 0086776a  89642418             mov dword ptr [esp + 0x18], esp
// 0086776e  50                   push eax
// 0086776f  ff1594de9800         call dword ptr [0x98de94]
// 00867775  8b17                 mov edx, dword ptr [edi]
// 00867777  8b4264               mov eax, dword ptr [edx + 0x64]
// 0086777a  8bcf                 mov ecx, edi
// 0086777c  ffd0                 call eax
// 0086777e  85f6                 test esi, esi
// 00867780  7412                 je 0x867794
// 00867782  8b7620               mov esi, dword ptr [esi + 0x20]
// 00867785  85f6                 test esi, esi
// 00867787  740b                 je 0x867794
// 00867789  6a00                 push 0
// 0086778b  6a00                 push 0
// 0086778d  56                   push esi
// 0086778e  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00867794  8d4c2410             lea ecx, [esp + 0x10]
// 00867798  c68424f401000001     mov byte ptr [esp + 0x1f4], 1
// 008677a0  ff15c0de9800         call dword ptr [0x98dec0]
// 008677a6  eb0c                 jmp 0x8677b4
// 008677a8  8b17                 mov edx, dword ptr [edi]
// 008677aa  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 008677b0  8bcf                 mov ecx, edi
// 008677b2  ffd0                 call eax
// 008677b4  8bcf                 mov ecx, edi
// 008677b6  e821c6f8ff           call 0x7f3ddc
// 008677bb  8d8c24c0000000       lea ecx, [esp + 0xc0]
// 008677c2  c78424f4010000ffffffff mov dword ptr [esp + 0x1f4], 0xffffffff
// 008677cd  e85e7affff           call 0x85f230
// 008677d2  e9de000000           jmp 0x8678b5
// 008677d7  ff150cb29800         call dword ptr [0x98b20c]
// 008677dd  8b97bc000000         mov edx, dword ptr [edi + 0xbc]
// 008677e3  8b870c010000         mov eax, dword ptr [edi + 0x10c]
// 008677e9  52                   push edx
// 008677ea  6a00                 push 0
// 008677ec  50                   push eax
// 008677ed  8d4c2434             lea ecx, [esp + 0x34]
// 008677f1  e87af40b00           call 0x926c70
// 008677f6  bb03000000           mov ebx, 3
// 008677fb  8d4c2428             lea ecx, [esp + 0x28]
// 008677ff  899c24f4010000       mov dword ptr [esp + 0x1f4], ebx
// 00867806  e85ff40b00           call 0x926c6a
// 0086780b  83f801               cmp eax, 1
// 0086780e  7576                 jne 0x867886
// 00867810  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00867817  51                   push ecx
// 00867818  8d542414             lea edx, [esp + 0x14]
// 0086781c  52                   push edx
// 0086781d  e8cef8ffff           call 0x8670f0
// 00867822  83c408               add esp, 8
// 00867825  8b07                 mov eax, dword ptr [edi]
// 00867827  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 0086782d  8d4c2410             lea ecx, [esp + 0x10]
// 00867831  51                   push ecx
// 00867832  8bcf                 mov ecx, edi
// 00867834  c68424f801000004     mov byte ptr [esp + 0x1f8], 4
// 0086783c  ffd2                 call edx
// 0086783e  85c0                 test eax, eax
// 00867840  7431                 je 0x867873
// 00867842  51                   push ecx
// 00867843  8d442414             lea eax, [esp + 0x14]
// 00867847  8bcc                 mov ecx, esp
// 00867849  89642418             mov dword ptr [esp + 0x18], esp
// 0086784d  50                   push eax
// 0086784e  ff1594de9800         call dword ptr [0x98de94]
// 00867854  8b17                 mov edx, dword ptr [edi]
// 00867856  8b4264               mov eax, dword ptr [edx + 0x64]
// 00867859  8bcf                 mov ecx, edi
// 0086785b  ffd0                 call eax
// 0086785d  85f6                 test esi, esi
// 0086785f  7412                 je 0x867873
// 00867861  8b7620               mov esi, dword ptr [esi + 0x20]
// 00867864  85f6                 test esi, esi
// 00867866  740b                 je 0x867873
// 00867868  6a00                 push 0
// 0086786a  6a00                 push 0
// 0086786c  56                   push esi
// 0086786d  ff15e8cb9800         call dword ptr [0x98cbe8]
// 00867873  8d4c2410             lea ecx, [esp + 0x10]
// 00867877  889c24f4010000       mov byte ptr [esp + 0x1f4], bl
// 0086787e  ff15c0de9800         call dword ptr [0x98dec0]
// 00867884  eb0c                 jmp 0x867892
// 00867886  8b17                 mov edx, dword ptr [edi]
// 00867888  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 0086788e  8bcf                 mov ecx, edi
// 00867890  ffd0                 call eax
// 00867892  8bcf                 mov ecx, edi
// 00867894  e843c5f8ff           call 0x7f3ddc
// 00867899  8d4c2428             lea ecx, [esp + 0x28]
// 0086789d  c78424f4010000ffffffff mov dword ptr [esp + 0x1f4], 0xffffffff
// 008678a8  c74424285cf89a00     mov dword ptr [esp + 0x28], 0x9af85c
// 008678b0  e8dbc8f8ff           call 0x7f4190
// 008678b5  8b8c24ec010000       mov ecx, dword ptr [esp + 0x1ec]
// 008678bc  64890d00000000       mov dword ptr fs:[0], ecx
// 008678c3  59                   pop ecx
// 008678c4  5f                   pop edi
// 008678c5  5e                   pop esi
// 008678c6  5b                   pop ebx
// 008678c7  81c4e8010000         add esp, 0x1e8
// 008678cd  c20400               ret 4
// copied from an identical function in another client (function ?OnInplaceButtonDown@CXTPPropertyGridItemColor@@MAEXPAVCXTPPropertyGridInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemColor.cpp