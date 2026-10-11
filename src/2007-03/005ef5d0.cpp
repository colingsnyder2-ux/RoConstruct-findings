// roc 2007-03 005ef5d0  unit: seg_005e0000  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005ef5d0
//
// 005ef5d0  8b542408             mov edx, dword ptr [esp + 8]
// 005ef5d4  83ec08               sub esp, 8
// 005ef5d7  85d2                 test edx, edx
// 005ef5d9  0f84aa000000         je 0x5ef689
// 005ef5df  53                   push ebx
// 005ef5e0  8d591c               lea ebx, [ecx + 0x1c]
// 005ef5e3  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005ef5e6  8b4104               mov eax, dword ptr [ecx + 4]
// 005ef5e9  80781500             cmp byte ptr [eax + 0x15], 0
// 005ef5ed  55                   push ebp
// 005ef5ee  56                   push esi
// 005ef5ef  57                   push edi
// 005ef5f0  7514                 jne 0x5ef606
// 005ef5f2  39500c               cmp dword ptr [eax + 0xc], edx
// 005ef5f5  7305                 jae 0x5ef5fc
// 005ef5f7  8b4008               mov eax, dword ptr [eax + 8]
// 005ef5fa  eb04                 jmp 0x5ef600
// 005ef5fc  8bc8                 mov ecx, eax
// 005ef5fe  8b00                 mov eax, dword ptr [eax]
// 005ef600  80781500             cmp byte ptr [eax + 0x15], 0
// 005ef604  74ec                 je 0x5ef5f2
// 005ef606  8bfb                 mov edi, ebx
// 005ef608  8be9                 mov ebp, ecx
// 005ef60a  897c2410             mov dword ptr [esp + 0x10], edi
// 005ef60e  896c2414             mov dword ptr [esp + 0x14], ebp
// 005ef612  8b4b04               mov ecx, dword ptr [ebx + 4]
// 005ef615  8b4104               mov eax, dword ptr [ecx + 4]
// 005ef618  80781500             cmp byte ptr [eax + 0x15], 0
// 005ef61c  8bf1                 mov esi, ecx
// 005ef61e  7514                 jne 0x5ef634
// 005ef620  3b500c               cmp edx, dword ptr [eax + 0xc]
// 005ef623  7306                 jae 0x5ef62b
// 005ef625  8bf0                 mov esi, eax
// 005ef627  8b00                 mov eax, dword ptr [eax]
// 005ef629  eb03                 jmp 0x5ef62e
// 005ef62b  8b4008               mov eax, dword ptr [eax + 8]
// 005ef62e  80781500             cmp byte ptr [eax + 0x15], 0
// 005ef632  74ec                 je 0x5ef620
// 005ef634  85ff                 test edi, edi
// 005ef636  7404                 je 0x5ef63c
// 005ef638  3bfb                 cmp edi, ebx
// 005ef63a  7406                 je 0x5ef642
// 005ef63c  ff1544e97700         call dword ptr [0x77e944]
// 005ef642  3bee                 cmp ebp, esi
// 005ef644  743f                 je 0x5ef685
// 005ef646  85ff                 test edi, edi
// 005ef648  7506                 jne 0x5ef650
// 005ef64a  ff1544e97700         call dword ptr [0x77e944]
// 005ef650  3b6f04               cmp ebp, dword ptr [edi + 4]
// 005ef653  7506                 jne 0x5ef65b
// 005ef655  ff1544e97700         call dword ptr [0x77e944]
// 005ef65b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ef65f  394510               cmp dword ptr [ebp + 0x10], eax
// 005ef662  8d4c2410             lea ecx, [esp + 0x10]
// 005ef666  7413                 je 0x5ef67b
// 005ef668  e86367fcff           call 0x5b5dd0
// 005ef66d  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005ef671  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ef675  8b542420             mov edx, dword ptr [esp + 0x20]
// 005ef679  eb97                 jmp 0x5ef612
// 005ef67b  55                   push ebp
// 005ef67c  57                   push edi
// 005ef67d  51                   push ecx
// 005ef67e  8bcb                 mov ecx, ebx
// 005ef680  e8db0cf4ff           call 0x530360
// 005ef685  5f                   pop edi
// 005ef686  5e                   pop esi
// 005ef687  5d                   pop ebp
// 005ef688  5b                   pop ebx
// 005ef689  83c408               add esp, 8
// 005ef68c  c20800               ret 8
// library openrbx-client/App\v8world\JointStage.cpp (function ?removeFromMap@JointStage@RBX@@AAEXPAVJoint@2@PAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/JointStage.cpp
