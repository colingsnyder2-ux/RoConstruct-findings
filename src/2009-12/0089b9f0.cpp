// roc 2009-12 0089b9f0  unit: CXTPReportPaintManager  size: 599 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089b9f0
//
// 0089b9f0  6aff                 push -1
// 0089b9f2  68d01b9600           push 0x961bd0
// 0089b9f7  64a100000000         mov eax, dword ptr fs:[0]
// 0089b9fd  50                   push eax
// 0089b9fe  83ec10               sub esp, 0x10
// 0089ba01  53                   push ebx
// 0089ba02  55                   push ebp
// 0089ba03  56                   push esi
// 0089ba04  57                   push edi
// 0089ba05  a10052b600           mov eax, dword ptr [0xb65200]
// 0089ba0a  33c4                 xor eax, esp
// 0089ba0c  50                   push eax
// 0089ba0d  8d442424             lea eax, [esp + 0x24]
// 0089ba11  64a300000000         mov dword ptr fs:[0], eax
// 0089ba17  8bf1                 mov esi, ecx
// 0089ba19  8b442440             mov eax, dword ptr [esp + 0x40]
// 0089ba1d  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0089ba21  2bc1                 sub eax, ecx
// 0089ba23  83f80f               cmp eax, 0xf
// 0089ba26  0f8e05020000         jle 0x89bc31
// 0089ba2c  8b542444             mov edx, dword ptr [esp + 0x44]
// 0089ba30  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0089ba34  03c2                 add eax, edx
// 0089ba36  99                   cdq 
// 0089ba37  2bc2                 sub eax, edx
// 0089ba39  8be8                 mov ebp, eax
// 0089ba3b  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 0089ba41  d1fd                 sar ebp, 1
// 0089ba43  8d790a               lea edi, [ecx + 0xa]
// 0089ba46  83f804               cmp eax, 4
// 0089ba49  0f847d010000         je 0x89bbcc
// 0089ba4f  83f802               cmp eax, 2
// 0089ba52  0f8474010000         je 0x89bbcc
// 0089ba58  8b86e4000000         mov eax, dword ptr [esi + 0xe4]
// 0089ba5e  83f8ff               cmp eax, -1
// 0089ba61  7506                 jne 0x89ba69
// 0089ba63  8b86e0000000         mov eax, dword ptr [esi + 0xe0]
// 0089ba69  50                   push eax
// 0089ba6a  6a01                 push 1
// 0089ba6c  6a00                 push 0
// 0089ba6e  8d4c2428             lea ecx, [esp + 0x28]
// 0089ba72  e893b10800           call 0x926c0a
// 0089ba77  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 0089ba7d  c744242c00000000     mov dword ptr [esp + 0x2c], 0
// 0089ba85  83f8ff               cmp eax, -1
// 0089ba88  7506                 jne 0x89ba90
// 0089ba8a  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 0089ba90  50                   push eax
// 0089ba91  6a01                 push 1
// 0089ba93  6a00                 push 0
// 0089ba95  8d4c2420             lea ecx, [esp + 0x20]
// 0089ba99  e86cb10800           call 0x926c0a
// 0089ba9e  837c244800           cmp dword ptr [esp + 0x48], 0
// 0089baa3  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0089baa7  8d4c241c             lea ecx, [esp + 0x1c]
// 0089baab  51                   push ecx
// 0089baac  c644243001           mov byte ptr [esp + 0x30], 1
// 0089bab1  8bce                 mov ecx, esi
// 0089bab3  746f                 je 0x89bb24
// 0089bab5  6afa                 push -6
// 0089bab7  6a03                 push 3
// 0089bab9  8d5503               lea edx, [ebp + 3]
// 0089babc  52                   push edx
// 0089babd  57                   push edi
// 0089babe  53                   push ebx
// 0089babf  e80ceaffff           call 0x89a4d0
// 0089bac4  8d4c241c             lea ecx, [esp + 0x1c]
// 0089bac8  51                   push ecx
// 0089bac9  6afa                 push -6
// 0089bacb  6a03                 push 3
// 0089bacd  8d4504               lea eax, [ebp + 4]
// 0089bad0  50                   push eax
// 0089bad1  57                   push edi
// 0089bad2  53                   push ebx
// 0089bad3  8bce                 mov ecx, esi
// 0089bad5  8944244c             mov dword ptr [esp + 0x4c], eax
// 0089bad9  e8f2e9ffff           call 0x89a4d0
// 0089bade  8d542414             lea edx, [esp + 0x14]
// 0089bae2  52                   push edx
// 0089bae3  6a06                 push 6
// 0089bae5  6a03                 push 3
// 0089bae7  83c5fe               add ebp, -2
// 0089baea  8d47fc               lea eax, [edi - 4]
// 0089baed  55                   push ebp
// 0089baee  50                   push eax
// 0089baef  53                   push ebx
// 0089baf0  8bce                 mov ecx, esi
// 0089baf2  89442460             mov dword ptr [esp + 0x60], eax
// 0089baf6  e8d5e9ffff           call 0x89a4d0
// 0089bafb  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0089baff  8d442414             lea eax, [esp + 0x14]
// 0089bb03  50                   push eax
// 0089bb04  6af9                 push -7
// 0089bb06  6afc                 push -4
// 0089bb08  51                   push ecx
// 0089bb09  4f                   dec edi
// 0089bb0a  57                   push edi
// 0089bb0b  53                   push ebx
// 0089bb0c  8bce                 mov ecx, esi
// 0089bb0e  e8bde9ffff           call 0x89a4d0
// 0089bb13  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089bb17  8d542414             lea edx, [esp + 0x14]
// 0089bb1b  52                   push edx
// 0089bb1c  6a00                 push 0
// 0089bb1e  6a08                 push 8
// 0089bb20  55                   push ebp
// 0089bb21  50                   push eax
// 0089bb22  eb72                 jmp 0x89bb96
// 0089bb24  6a06                 push 6
// 0089bb26  6a03                 push 3
// 0089bb28  8d45fd               lea eax, [ebp - 3]
// 0089bb2b  50                   push eax
// 0089bb2c  57                   push edi
// 0089bb2d  53                   push ebx
// 0089bb2e  89442460             mov dword ptr [esp + 0x60], eax
// 0089bb32  e899e9ffff           call 0x89a4d0
// 0089bb37  8d54241c             lea edx, [esp + 0x1c]
// 0089bb3b  52                   push edx
// 0089bb3c  6a06                 push 6
// 0089bb3e  6a03                 push 3
// 0089bb40  8d45fe               lea eax, [ebp - 2]
// 0089bb43  50                   push eax
// 0089bb44  57                   push edi
// 0089bb45  53                   push ebx
// 0089bb46  8bce                 mov ecx, esi
// 0089bb48  8944244c             mov dword ptr [esp + 0x4c], eax
// 0089bb4c  e87fe9ffff           call 0x89a4d0
// 0089bb51  8d44241c             lea eax, [esp + 0x1c]
// 0089bb55  50                   push eax
// 0089bb56  6a00                 push 0
// 0089bb58  6a06                 push 6
// 0089bb5a  83c503               add ebp, 3
// 0089bb5d  55                   push ebp
// 0089bb5e  8d4ffd               lea ecx, [edi - 3]
// 0089bb61  51                   push ecx
// 0089bb62  53                   push ebx
// 0089bb63  8bce                 mov ecx, esi
// 0089bb65  e866e9ffff           call 0x89a4d0
// 0089bb6a  8b442448             mov eax, dword ptr [esp + 0x48]
// 0089bb6e  8d542414             lea edx, [esp + 0x14]
// 0089bb72  52                   push edx
// 0089bb73  6a06                 push 6
// 0089bb75  6afd                 push -3
// 0089bb77  50                   push eax
// 0089bb78  8d4fff               lea ecx, [edi - 1]
// 0089bb7b  51                   push ecx
// 0089bb7c  53                   push ebx
// 0089bb7d  8bce                 mov ecx, esi
// 0089bb7f  e84ce9ffff           call 0x89a4d0
// 0089bb84  8b442434             mov eax, dword ptr [esp + 0x34]
// 0089bb88  8d542414             lea edx, [esp + 0x14]
// 0089bb8c  52                   push edx
// 0089bb8d  6a06                 push 6
// 0089bb8f  6afd                 push -3
// 0089bb91  50                   push eax
// 0089bb92  83c7fe               add edi, -2
// 0089bb95  57                   push edi
// 0089bb96  53                   push ebx
// 0089bb97  8bce                 mov ecx, esi
// 0089bb99  e832e9ffff           call 0x89a4d0
// 0089bb9e  be10bb9f00           mov esi, 0x9fbb10
// 0089bba3  8d4c2414             lea ecx, [esp + 0x14]
// 0089bba7  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0089bbac  89742414             mov dword ptr [esp + 0x14], esi
// 0089bbb0  e87b36b7ff           call 0x40f230
// 0089bbb5  8d4c241c             lea ecx, [esp + 0x1c]
// 0089bbb9  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0089bbc1  8974241c             mov dword ptr [esp + 0x1c], esi
// 0089bbc5  e86636b7ff           call 0x40f230
// 0089bbca  eb65                 jmp 0x89bc31
// 0089bbcc  837c244800           cmp dword ptr [esp + 0x48], 0
// 0089bbd1  8b86c8010000         mov eax, dword ptr [esi + 0x1c8]
// 0089bbd7  7429                 je 0x89bc02
// 0089bbd9  83f8ff               cmp eax, -1
// 0089bbdc  7508                 jne 0x89bbe6
// 0089bbde  8bb6c4010000         mov esi, dword ptr [esi + 0x1c4]
// 0089bbe4  eb02                 jmp 0x89bbe8
// 0089bbe6  8bf0                 mov esi, eax
// 0089bbe8  56                   push esi
// 0089bbe9  8d45fe               lea eax, [ebp - 2]
// 0089bbec  50                   push eax
// 0089bbed  8d4f04               lea ecx, [edi + 4]
// 0089bbf0  51                   push ecx
// 0089bbf1  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0089bbf5  8d5502               lea edx, [ebp + 2]
// 0089bbf8  52                   push edx
// 0089bbf9  57                   push edi
// 0089bbfa  50                   push eax
// 0089bbfb  8d5ffc               lea ebx, [edi - 4]
// 0089bbfe  53                   push ebx
// 0089bbff  51                   push ecx
// 0089bc00  eb27                 jmp 0x89bc29
// 0089bc02  83f8ff               cmp eax, -1
// 0089bc05  7508                 jne 0x89bc0f
// 0089bc07  8bb6c4010000         mov esi, dword ptr [esi + 0x1c4]
// 0089bc0d  eb02                 jmp 0x89bc11
// 0089bc0f  8bf0                 mov esi, eax
// 0089bc11  56                   push esi
// 0089bc12  8d4502               lea eax, [ebp + 2]
// 0089bc15  50                   push eax
// 0089bc16  8d4f04               lea ecx, [edi + 4]
// 0089bc19  51                   push ecx
// 0089bc1a  8d55fe               lea edx, [ebp - 2]
// 0089bc1d  52                   push edx
// 0089bc1e  8b542444             mov edx, dword ptr [esp + 0x44]
// 0089bc22  57                   push edi
// 0089bc23  50                   push eax
// 0089bc24  8d5ffc               lea ebx, [edi - 4]
// 0089bc27  53                   push ebx
// 0089bc28  52                   push edx
// 0089bc29  e8622af6ff           call 0x7fe690
// 0089bc2e  83c420               add esp, 0x20
// 0089bc31  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0089bc35  64890d00000000       mov dword ptr fs:[0], ecx
// 0089bc3c  59                   pop ecx
// 0089bc3d  5f                   pop edi
// 0089bc3e  5e                   pop esi
// 0089bc3f  5d                   pop ebp
// 0089bc40  5b                   pop ebx
// 0089bc41  83c41c               add esp, 0x1c
// 0089bc44  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawTriangle@CXTPReportPaintManager@@QAEXPAVCDC@@VCRect@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp