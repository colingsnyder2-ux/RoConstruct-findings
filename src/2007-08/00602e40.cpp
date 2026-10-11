// roc 2007-08 00602e40  unit: RBX::JointStage  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00602e40
//
// 00602e40  8b542408             mov edx, dword ptr [esp + 8]
// 00602e44  83ec08               sub esp, 8
// 00602e47  85d2                 test edx, edx
// 00602e49  0f84aa000000         je 0x602ef9
// 00602e4f  53                   push ebx
// 00602e50  8d591c               lea ebx, [ecx + 0x1c]
// 00602e53  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00602e56  8b4104               mov eax, dword ptr [ecx + 4]
// 00602e59  80781500             cmp byte ptr [eax + 0x15], 0
// 00602e5d  55                   push ebp
// 00602e5e  56                   push esi
// 00602e5f  57                   push edi
// 00602e60  7514                 jne 0x602e76
// 00602e62  39500c               cmp dword ptr [eax + 0xc], edx
// 00602e65  7305                 jae 0x602e6c
// 00602e67  8b4008               mov eax, dword ptr [eax + 8]
// 00602e6a  eb04                 jmp 0x602e70
// 00602e6c  8bc8                 mov ecx, eax
// 00602e6e  8b00                 mov eax, dword ptr [eax]
// 00602e70  80781500             cmp byte ptr [eax + 0x15], 0
// 00602e74  74ec                 je 0x602e62
// 00602e76  8bfb                 mov edi, ebx
// 00602e78  8be9                 mov ebp, ecx
// 00602e7a  897c2410             mov dword ptr [esp + 0x10], edi
// 00602e7e  896c2414             mov dword ptr [esp + 0x14], ebp
// 00602e82  8b4b04               mov ecx, dword ptr [ebx + 4]
// 00602e85  8b4104               mov eax, dword ptr [ecx + 4]
// 00602e88  80781500             cmp byte ptr [eax + 0x15], 0
// 00602e8c  8bf1                 mov esi, ecx
// 00602e8e  7514                 jne 0x602ea4
// 00602e90  3b500c               cmp edx, dword ptr [eax + 0xc]
// 00602e93  7306                 jae 0x602e9b
// 00602e95  8bf0                 mov esi, eax
// 00602e97  8b00                 mov eax, dword ptr [eax]
// 00602e99  eb03                 jmp 0x602e9e
// 00602e9b  8b4008               mov eax, dword ptr [eax + 8]
// 00602e9e  80781500             cmp byte ptr [eax + 0x15], 0
// 00602ea2  74ec                 je 0x602e90
// 00602ea4  85ff                 test edi, edi
// 00602ea6  7404                 je 0x602eac
// 00602ea8  3bfb                 cmp edi, ebx
// 00602eaa  7406                 je 0x602eb2
// 00602eac  ff15d8e67700         call dword ptr [0x77e6d8]
// 00602eb2  3bee                 cmp ebp, esi
// 00602eb4  743f                 je 0x602ef5
// 00602eb6  85ff                 test edi, edi
// 00602eb8  7506                 jne 0x602ec0
// 00602eba  ff15d8e67700         call dword ptr [0x77e6d8]
// 00602ec0  3b6f04               cmp ebp, dword ptr [edi + 4]
// 00602ec3  7506                 jne 0x602ecb
// 00602ec5  ff15d8e67700         call dword ptr [0x77e6d8]
// 00602ecb  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00602ecf  394510               cmp dword ptr [ebp + 0x10], eax
// 00602ed2  8d4c2410             lea ecx, [esp + 0x10]
// 00602ed6  7413                 je 0x602eeb
// 00602ed8  e8d35fe3ff           call 0x438eb0
// 00602edd  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00602ee1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00602ee5  8b542420             mov edx, dword ptr [esp + 0x20]
// 00602ee9  eb97                 jmp 0x602e82
// 00602eeb  55                   push ebp
// 00602eec  57                   push edi
// 00602eed  51                   push ecx
// 00602eee  8bcb                 mov ecx, ebx
// 00602ef0  e87b42fbff           call 0x5b7170
// 00602ef5  5f                   pop edi
// 00602ef6  5e                   pop esi
// 00602ef7  5d                   pop ebp
// 00602ef8  5b                   pop ebx
// 00602ef9  83c408               add esp, 8
// 00602efc  c20800               ret 8
// library openrbx-client/App\v8world\JointStage.cpp (function ?removeFromMap@JointStage@RBX@@AAEXPAVJoint@2@PAVPrimitive@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/v8world/JointStage.cpp
