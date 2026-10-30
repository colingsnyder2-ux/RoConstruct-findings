// roc 2009-12 00816070  unit: CXTPCommandBar  size: 592 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00816070
//
// 00816070  83ec18               sub esp, 0x18
// 00816073  53                   push ebx
// 00816074  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 00816078  817b0404010000       cmp dword ptr [ebx + 4], 0x104
// 0081607f  56                   push esi
// 00816080  8bf1                 mov esi, ecx
// 00816082  0f8597000000         jne 0x81611f
// 00816088  b800200000           mov eax, 0x2000
// 0081608d  6685430e             test word ptr [ebx + 0xe], ax
// 00816091  0f8488000000         je 0x81611f
// 00816097  e8d4faffff           call 0x815b70
// 0081609c  83780400             cmp dword ptr [eax + 4], 0
// 008160a0  7f7d                 jg 0x81611f
// 008160a2  6a00                 push 0
// 008160a4  8bce                 mov ecx, esi
// 008160a6  e8c5faffff           call 0x815b70
// 008160ab  8bc8                 mov ecx, eax
// 008160ad  e8ee8e0500           call 0x86efa0
// 008160b2  85c0                 test eax, eax
// 008160b4  7569                 jne 0x81611f
// 008160b6  8bce                 mov ecx, esi
// 008160b8  e8b3faffff           call 0x815b70
// 008160bd  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 008160c3  85c0                 test eax, eax
// 008160c5  7403                 je 0x8160ca
// 008160c7  8b4020               mov eax, dword ptr [eax + 0x20]
// 008160ca  50                   push eax
// 008160cb  e8108d0500           call 0x86ede0
// 008160d0  83c404               add esp, 4
// 008160d3  85c0                 test eax, eax
// 008160d5  7448                 je 0x81611f
// 008160d7  837b0812             cmp dword ptr [ebx + 8], 0x12
// 008160db  7513                 jne 0x8160f0
// 008160dd  6a01                 push 1
// 008160df  8bce                 mov ecx, esi
// 008160e1  e85afaffff           call 0x815b40
// 008160e6  5e                   pop esi
// 008160e7  33c0                 xor eax, eax
// 008160e9  5b                   pop ebx
// 008160ea  83c418               add esp, 0x18
// 008160ed  c20400               ret 4
// 008160f0  837e2400             cmp dword ptr [esi + 0x24], 0
// 008160f4  7412                 je 0x816108
// 008160f6  6a10                 push 0x10
// 008160f8  ff1530cc9800         call dword ptr [0x98cc30]
// 008160fe  b900800000           mov ecx, 0x8000
// 00816103  6685c1               test cx, ax
// 00816106  7517                 jne 0x81611f
// 00816108  8b4308               mov eax, dword ptr [ebx + 8]
// 0081610b  85c0                 test eax, eax
// 0081610d  7410                 je 0x81611f
// 0081610f  50                   push eax
// 00816110  8bce                 mov ecx, esi
// 00816112  e8f9fdffff           call 0x815f10
// 00816117  85c0                 test eax, eax
// 00816119  0f858b000000         jne 0x8161aa
// 0081611f  8b4304               mov eax, dword ptr [ebx + 4]
// 00816122  3d05010000           cmp eax, 0x105
// 00816127  7407                 je 0x816130
// 00816129  3d01010000           cmp eax, 0x101
// 0081612e  752e                 jne 0x81615e
// 00816130  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 00816137  7425                 je 0x81615e
// 00816139  83beb000000000       cmp dword ptr [esi + 0xb0], 0
// 00816140  741c                 je 0x81615e
// 00816142  6a00                 push 0
// 00816144  8bce                 mov ecx, esi
// 00816146  e825faffff           call 0x815b70
// 0081614b  8bc8                 mov ecx, eax
// 0081614d  e84e8e0500           call 0x86efa0
// 00816152  85c0                 test eax, eax
// 00816154  7508                 jne 0x81615e
// 00816156  50                   push eax
// 00816157  8bce                 mov ecx, esi
// 00816159  e8e2f9ffff           call 0x815b40
// 0081615e  8b4304               mov eax, dword ptr [ebx + 4]
// 00816161  83f87b               cmp eax, 0x7b
// 00816164  7407                 je 0x81616d
// 00816166  3d05010000           cmp eax, 0x105
// 0081616b  754a                 jne 0x8161b7
// 0081616d  6a00                 push 0
// 0081616f  8bce                 mov ecx, esi
// 00816171  e8faf9ffff           call 0x815b70
// 00816176  8bc8                 mov ecx, eax
// 00816178  e8238e0500           call 0x86efa0
// 0081617d  85c0                 test eax, eax
// 0081617f  7436                 je 0x8161b7
// 00816181  68709a7f00           push 0x7f9a70
// 00816186  b910bbb900           mov ecx, 0xb9bb10
// 0081618b  e8ac021100           call 0x92643c
// 00816190  85c0                 test eax, eax
// 00816192  7505                 jne 0x816199
// 00816194  e873d9fdff           call 0x7f3b0c
// 00816199  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0081619c  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0081619f  52                   push edx
// 008161a0  51                   push ecx
// 008161a1  6a7b                 push 0x7b
// 008161a3  8bc8                 mov ecx, eax
// 008161a5  e826a40500           call 0x8705d0
// 008161aa  5e                   pop esi
// 008161ab  b801000000           mov eax, 1
// 008161b0  5b                   pop ebx
// 008161b1  83c418               add esp, 0x18
// 008161b4  c20400               ret 4
// 008161b7  817b040a020000       cmp dword ptr [ebx + 4], 0x20a
// 008161be  57                   push edi
// 008161bf  0f85be000000         jne 0x816283
// 008161c5  68709a7f00           push 0x7f9a70
// 008161ca  b910bbb900           mov ecx, 0xb9bb10
// 008161cf  e868021100           call 0x92643c
// 008161d4  85c0                 test eax, eax
// 008161d6  7505                 jne 0x8161dd
// 008161d8  e82fd9fdff           call 0x7f3b0c
// 008161dd  83782000             cmp dword ptr [eax + 0x20], 0
// 008161e1  7e35                 jle 0x816218
// 008161e3  68709a7f00           push 0x7f9a70
// 008161e8  b910bbb900           mov ecx, 0xb9bb10
// 008161ed  e84a021100           call 0x92643c
// 008161f2  85c0                 test eax, eax
// 008161f4  7505                 jne 0x8161fb
// 008161f6  e811d9fdff           call 0x7f3b0c
// 008161fb  8b530c               mov edx, dword ptr [ebx + 0xc]
// 008161fe  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00816201  52                   push edx
// 00816202  51                   push ecx
// 00816203  680a020000           push 0x20a
// 00816208  8bc8                 mov ecx, eax
// 0081620a  e8c1a30500           call 0x8705d0
// 0081620f  5f                   pop edi
// 00816210  5e                   pop esi
// 00816211  5b                   pop ebx
// 00816212  83c418               add esp, 0x18
// 00816215  c20400               ret 4
// 00816218  8b16                 mov edx, dword ptr [esi]
// 0081621a  8b4258               mov eax, dword ptr [edx + 0x58]
// 0081621d  8bce                 mov ecx, esi
// 0081621f  ffd0                 call eax
// 00816221  8d4c240c             lea ecx, [esp + 0xc]
// 00816225  51                   push ecx
// 00816226  8bf8                 mov edi, eax
// 00816228  ff1538cc9800         call dword ptr [0x98cc38]
// 0081622e  85ff                 test edi, edi
// 00816230  7451                 je 0x816283
// 00816232  83bff800000003       cmp dword ptr [edi + 0xf8], 3
// 00816239  7548                 jne 0x816283
// 0081623b  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0081623f  55                   push ebp
// 00816240  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00816244  57                   push edi
// 00816245  8d4c241c             lea ecx, [esp + 0x1c]
// 00816249  e822500300           call 0x84b270
// 0081624e  55                   push ebp
// 0081624f  53                   push ebx
// 00816250  50                   push eax
// 00816251  ff155cca9800         call dword ptr [0x98ca5c]
// 00816257  5d                   pop ebp
// 00816258  85c0                 test eax, eax
// 0081625a  7423                 je 0x81627f
// 0081625c  8b442428             mov eax, dword ptr [esp + 0x28]
// 00816260  33d2                 xor edx, edx
// 00816262  6639500a             cmp word ptr [eax + 0xa], dx
// 00816266  8bcf                 mov ecx, edi
// 00816268  0f9ec2               setle dl
// 0081626b  52                   push edx
// 0081626c  e88ff20700           call 0x895500
// 00816271  5f                   pop edi
// 00816272  5e                   pop esi
// 00816273  b801000000           mov eax, 1
// 00816278  5b                   pop ebx
// 00816279  83c418               add esp, 0x18
// 0081627c  c20400               ret 4
// 0081627f  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00816283  8b4304               mov eax, dword ptr [ebx + 4]
// 00816286  3d00010000           cmp eax, 0x100
// 0081628b  7228                 jb 0x8162b5
// 0081628d  3d08010000           cmp eax, 0x108
// 00816292  7721                 ja 0x8162b5
// 00816294  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0081629a  85c0                 test eax, eax
// 0081629c  7403                 je 0x8162a1
// 0081629e  8b4020               mov eax, dword ptr [eax + 0x20]
// 008162a1  53                   push ebx
// 008162a2  50                   push eax
// 008162a3  8bce                 mov ecx, esi
// 008162a5  e826deffff           call 0x8140d0
// 008162aa  8bc8                 mov ecx, eax
// 008162ac  e85f7f0700           call 0x88e210
// 008162b1  85c0                 test eax, eax
// 008162b3  75bc                 jne 0x816271
// 008162b5  5f                   pop edi
// 008162b6  5e                   pop esi
// 008162b7  33c0                 xor eax, eax
// 008162b9  5b                   pop ebx
// 008162ba  83c418               add esp, 0x18
// 008162bd  c20400               ret 4
// copied from an identical function in another client (function ?PreTranslateFrameMessage@CXTPCommandBars@@QAEHPAUtagMSG@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPCommandBars.cpp