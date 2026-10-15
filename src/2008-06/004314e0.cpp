// roc 2008-06 004314e0  unit: CDataModelPropGrid  size: 963 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004314e0
//
// 004314e0  64a100000000         mov eax, dword ptr fs:[0]
// 004314e6  6aff                 push -1
// 004314e8  68fefb7b00           push 0x7bfbfe
// 004314ed  50                   push eax
// 004314ee  64892500000000       mov dword ptr fs:[0], esp
// 004314f5  83ec24               sub esp, 0x24
// 004314f8  837c243401           cmp dword ptr [esp + 0x34], 1
// 004314fd  53                   push ebx
// 004314fe  55                   push ebp
// 004314ff  56                   push esi
// 00431500  8bd9                 mov ebx, ecx
// 00431502  0f8534030000         jne 0x43183c
// 00431508  8b742444             mov esi, dword ptr [esp + 0x44]
// 0043150c  8bce                 mov ecx, esi
// 0043150e  e89d5e2d00           call 0x7073b0
// 00431513  85c0                 test eax, eax
// 00431515  0f8559020000         jne 0x431774
// 0043151b  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00431521  0574ffffff           add eax, 0xffffff74
// 00431526  83f836               cmp eax, 0x36
// 00431529  0f870d030000         ja 0x43183c
// 0043152f  0fb6806c184300       movzx eax, byte ptr [eax + 0x43186c]
// 00431536  ff248554184300       jmp dword ptr [eax*4 + 0x431854]
// 0043153d  8b83a8030000         mov eax, dword ptr [ebx + 0x3a8]
// 00431543  57                   push edi
// 00431544  8dbba8030000         lea edi, [ebx + 0x3a8]
// 0043154a  33ed                 xor ebp, ebp
// 0043154c  3bc5                 cmp eax, ebp
// 0043154e  7409                 je 0x431559
// 00431550  396820               cmp dword ptr [eax + 0x20], ebp
// 00431553  0f85c1010000         jne 0x43171a
// 00431559  6818010000           push 0x118
// 0043155e  e8bdf32600           call 0x6a0920
// 00431563  83c404               add esp, 4
// 00431566  89442444             mov dword ptr [esp + 0x44], eax
// 0043156a  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0043156e  3bc5                 cmp eax, ebp
// 00431570  7409                 je 0x43157b
// 00431572  8bc8                 mov ecx, eax
// 00431574  e8d7762d00           call 0x708c50
// 00431579  eb02                 jmp 0x43157d
// 0043157b  33c0                 xor eax, eax
// 0043157d  83ceff               or esi, 0xffffffff
// 00431580  50                   push eax
// 00431581  8bcf                 mov ecx, edi
// 00431583  89742440             mov dword ptr [esp + 0x40], esi
// 00431587  e8b4eeffff           call 0x430440
// 0043158c  8b0f                 mov ecx, dword ptr [edi]
// 0043158e  8b11                 mov edx, dword ptr [ecx]
// 00431590  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 00431596  6800e90000           push 0xe900
// 0043159b  6800000050           push 0x50000000
// 004315a0  6a01                 push 1
// 004315a2  6a02                 push 2
// 004315a4  53                   push ebx
// 004315a5  ffd0                 call eax
// 004315a7  85c0                 test eax, eax
// 004315a9  7515                 jne 0x4315c0
// 004315ab  5f                   pop edi
// 004315ac  5e                   pop esi
// 004315ad  5d                   pop ebp
// 004315ae  5b                   pop ebx
// 004315af  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004315b3  64890d00000000       mov dword ptr fs:[0], ecx
// 004315ba  83c430               add esp, 0x30
// 004315bd  c20800               ret 8
// 004315c0  68c8010000           push 0x1c8
// 004315c5  e856f32600           call 0x6a0920
// 004315ca  83c404               add esp, 4
// 004315cd  89442444             mov dword ptr [esp + 0x44], eax
// 004315d1  c744243c01000000     mov dword ptr [esp + 0x3c], 1
// 004315d9  3bc5                 cmp eax, ebp
// 004315db  7409                 je 0x4315e6
// 004315dd  8bc8                 mov ecx, eax
// 004315df  e89c520300           call 0x466880
// 004315e4  eb02                 jmp 0x4315e8
// 004315e6  33c0                 xor eax, eax
// 004315e8  8974243c             mov dword ptr [esp + 0x3c], esi
// 004315ec  8db3b0030000         lea esi, [ebx + 0x3b0]
// 004315f2  50                   push eax
// 004315f3  8bce                 mov ecx, esi
// 004315f5  e846eeffff           call 0x430440
// 004315fa  8b36                 mov esi, dword ptr [esi]
// 004315fc  8b0f                 mov ecx, dword ptr [edi]
// 004315fe  89742410             mov dword ptr [esp + 0x10], esi
// 00431602  896c2414             mov dword ptr [esp + 0x14], ebp
// 00431606  896c2418             mov dword ptr [esp + 0x18], ebp
// 0043160a  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0043160e  896c2420             mov dword ptr [esp + 0x20], ebp
// 00431612  8b36                 mov esi, dword ptr [esi]
// 00431614  55                   push ebp
// 00431615  55                   push ebp
// 00431616  894c244c             mov dword ptr [esp + 0x4c], ecx
// 0043161a  81c664010000         add esi, 0x164
// 00431620  e827fa2600           call 0x6a104c
// 00431625  8b542444             mov edx, dword ptr [esp + 0x44]
// 00431629  50                   push eax
// 0043162a  8b06                 mov eax, dword ptr [esi]
// 0043162c  8d4c2418             lea ecx, [esp + 0x18]
// 00431630  51                   push ecx
// 00431631  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00431635  6801020010           push 0x10000201
// 0043163a  6a02                 push 2
// 0043163c  6816b78000           push 0x80b716
// 00431641  52                   push edx
// 00431642  ffd0                 call eax
// 00431644  85c0                 test eax, eax
// 00431646  7518                 jne 0x431660
// 00431648  5f                   pop edi
// 00431649  5e                   pop esi
// 0043164a  5d                   pop ebp
// 0043164b  83c8ff               or eax, 0xffffffff
// 0043164e  5b                   pop ebx
// 0043164f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00431653  64890d00000000       mov dword ptr fs:[0], ecx
// 0043165a  83c430               add esp, 0x30
// 0043165d  c20800               ret 8
// 00431660  6848020000           push 0x248
// 00431665  e8b6f22600           call 0x6a0920
// 0043166a  83c404               add esp, 4
// 0043166d  89442444             mov dword ptr [esp + 0x44], eax
// 00431671  c744243c02000000     mov dword ptr [esp + 0x3c], 2
// 00431679  3bc5                 cmp eax, ebp
// 0043167b  7409                 je 0x431686
// 0043167d  8bc8                 mov ecx, eax
// 0043167f  e8bcf9ffff           call 0x431040
// 00431684  eb02                 jmp 0x431688
// 00431686  33c0                 xor eax, eax
// 00431688  8db3ac030000         lea esi, [ebx + 0x3ac]
// 0043168e  50                   push eax
// 0043168f  8bce                 mov ecx, esi
// 00431691  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 00431699  e8a2edffff           call 0x430440
// 0043169e  8b06                 mov eax, dword ptr [esi]
// 004316a0  8b0f                 mov ecx, dword ptr [edi]
// 004316a2  55                   push ebp
// 004316a3  896c2428             mov dword ptr [esp + 0x28], ebp
// 004316a7  896c242c             mov dword ptr [esp + 0x2c], ebp
// 004316ab  896c2430             mov dword ptr [esp + 0x30], ebp
// 004316af  896c2434             mov dword ptr [esp + 0x34], ebp
// 004316b3  8b18                 mov ebx, dword ptr [eax]
// 004316b5  55                   push ebp
// 004316b6  6a01                 push 1
// 004316b8  8944241c             mov dword ptr [esp + 0x1c], eax
// 004316bc  894c2450             mov dword ptr [esp + 0x50], ecx
// 004316c0  81c344010000         add ebx, 0x144
// 004316c6  e881f92600           call 0x6a104c
// 004316cb  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004316cf  50                   push eax
// 004316d0  8b03                 mov eax, dword ptr [ebx]
// 004316d2  51                   push ecx
// 004316d3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004316d7  8d542430             lea edx, [esp + 0x30]
// 004316db  52                   push edx
// 004316dc  ffd0                 call eax
// 004316de  8b0e                 mov ecx, dword ptr [esi]
// 004316e0  6a01                 push 1
// 004316e2  e8f9a82c00           call 0x6fbfe0
// 004316e7  8b0e                 mov ecx, dword ptr [esi]
// 004316e9  6a06                 push 6
// 004316eb  e8c0a92c00           call 0x6fc0b0
// 004316f0  8b0e                 mov ecx, dword ptr [esi]
// 004316f2  81c144020000         add ecx, 0x244
// 004316f8  e8d3f4feff           call 0x420bd0
// 004316fd  8b0f                 mov ecx, dword ptr [edi]
// 004316ff  55                   push ebp
// 00431700  6a1c                 push 0x1c
// 00431702  55                   push ebp
// 00431703  e83ef92600           call 0x6a1046
// 00431708  8b0f                 mov ecx, dword ptr [edi]
// 0043170a  8b11                 mov edx, dword ptr [ecx]
// 0043170c  8b82d0010000         mov eax, dword ptr [edx + 0x1d0]
// 00431712  6a08                 push 8
// 00431714  ffd0                 call eax
// 00431716  8b742448             mov esi, dword ptr [esp + 0x48]
// 0043171a  8b0f                 mov ecx, dword ptr [edi]
// 0043171c  51                   push ecx
// 0043171d  8bce                 mov ecx, esi
// 0043171f  e89c632d00           call 0x707ac0
// 00431724  5f                   pop edi
// 00431725  5e                   pop esi
// 00431726  5d                   pop ebp
// 00431727  b801000000           mov eax, 1
// 0043172c  5b                   pop ebx
// 0043172d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00431731  64890d00000000       mov dword ptr fs:[0], ecx
// 00431738  83c430               add esp, 0x30
// 0043173b  c20800               ret 8
// 0043173e  33ed                 xor ebp, ebp
// 00431740  55                   push ebp
// 00431741  55                   push ebp
// 00431742  68e0078100           push 0x8107e0
// 00431747  53                   push ebx
// 00431748  8bce                 mov ecx, esi
// 0043174a  e801642d00           call 0x707b50
// 0043174f  8bf0                 mov esi, eax
// 00431751  3bf5                 cmp esi, ebp
// 00431753  741f                 je 0x431774
// 00431755  8b5620               mov edx, dword ptr [esi + 0x20]
// 00431758  52                   push edx
// 00431759  ff15502d8000         call dword ptr [0x802d50]
// 0043175f  85c0                 test eax, eax
// 00431761  7411                 je 0x431774
// 00431763  8b4620               mov eax, dword ptr [esi + 0x20]
// 00431766  55                   push ebp
// 00431767  55                   push ebp
// 00431768  6864030000           push 0x364
// 0043176d  50                   push eax
// 0043176e  ff15142e8000         call dword ptr [0x802e14]
// 00431774  5e                   pop esi
// 00431775  5d                   pop ebp
// 00431776  b801000000           mov eax, 1
// 0043177b  5b                   pop ebx
// 0043177c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00431780  64890d00000000       mov dword ptr fs:[0], ecx
// 00431787  83c430               add esp, 0x30
// 0043178a  c20800               ret 8
// 0043178d  33ed                 xor ebp, ebp
// 0043178f  55                   push ebp
// 00431790  55                   push ebp
// 00431791  e8ea480000           call 0x436080
// 00431796  50                   push eax
// 00431797  53                   push ebx
// 00431798  8bce                 mov ecx, esi
// 0043179a  e8b1632d00           call 0x707b50
// 0043179f  8bf0                 mov esi, eax
// 004317a1  3bf5                 cmp esi, ebp
// 004317a3  741f                 je 0x4317c4
// 004317a5  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 004317a8  51                   push ecx
// 004317a9  ff15502d8000         call dword ptr [0x802d50]
// 004317af  85c0                 test eax, eax
// 004317b1  7411                 je 0x4317c4
// 004317b3  8b5620               mov edx, dword ptr [esi + 0x20]
// 004317b6  55                   push ebp
// 004317b7  55                   push ebp
// 004317b8  6864030000           push 0x364
// 004317bd  52                   push edx
// 004317be  ff15142e8000         call dword ptr [0x802e14]
// 004317c4  5e                   pop esi
// 004317c5  5d                   pop ebp
// 004317c6  b801000000           mov eax, 1
// 004317cb  5b                   pop ebx
// 004317cc  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004317d0  64890d00000000       mov dword ptr fs:[0], ecx
// 004317d7  83c430               add esp, 0x30
// 004317da  c20800               ret 8
// 004317dd  33ed                 xor ebp, ebp
// 004317df  55                   push ebp
// 004317e0  55                   push ebp
// 004317e1  e87a450200           call 0x455d60
// 004317e6  50                   push eax
// 004317e7  53                   push ebx
// 004317e8  8bce                 mov ecx, esi
// 004317ea  e861632d00           call 0x707b50
// 004317ef  8bf0                 mov esi, eax
// 004317f1  3bf5                 cmp esi, ebp
// 004317f3  741f                 je 0x431814
// 004317f5  8b4620               mov eax, dword ptr [esi + 0x20]
// 004317f8  50                   push eax
// 004317f9  ff15502d8000         call dword ptr [0x802d50]
// 004317ff  85c0                 test eax, eax
// 00431801  7411                 je 0x431814
// 00431803  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00431806  55                   push ebp
// 00431807  55                   push ebp
// 00431808  6864030000           push 0x364
// 0043180d  51                   push ecx
// 0043180e  ff15142e8000         call dword ptr [0x802e14]
// 00431814  5e                   pop esi
// 00431815  5d                   pop ebp
// 00431816  b801000000           mov eax, 1
// 0043181b  5b                   pop ebx
// 0043181c  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00431820  64890d00000000       mov dword ptr fs:[0], ecx
// 00431827  83c430               add esp, 0x30
// 0043182a  c20800               ret 8
// 0043182d  33ed                 xor ebp, ebp
// 0043182f  55                   push ebp
// 00431830  55                   push ebp
// 00431831  e84a8d0300           call 0x46a580
// 00431836  50                   push eax
// 00431837  e90bffffff           jmp 0x431747
// 0043183c  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00431840  5e                   pop esi
// 00431841  5d                   pop ebp
// 00431842  33c0                 xor eax, eax
// 00431844  5b                   pop ebx
// 00431845  64890d00000000       mov dword ptr fs:[0], ecx
// 0043184c  83c430               add esp, 0x30
// 0043184f  c20800               ret 8
// 00431852  8bff                 mov edi, edi
// 00431854  dd17                 fst qword ptr [edi]
// 00431856  43                   inc ebx
// 00431857  002d1843008d         add byte ptr [0x8d004318], ch
// 0043185d  17                   pop ss
// 0043185e  43                   inc ebx
// 0043185f  003d1543003e         add byte ptr [0x3e004315], bh
// 00431865  17                   pop ss
// 00431866  43                   inc ebx
// 00431867  003c18               add byte ptr [eax + ebx], bh
// 0043186a  43                   inc ebx
// 0043186b  0000                 add byte ptr [eax], al
// 0043186d  0505050505           add eax, 0x5050505
// 00431872  0505050505           add eax, 0x5050505
// 00431877  0505050505           add eax, 0x5050505
// 0043187c  0505050505           add eax, 0x5050505
// 00431881  0505050505           add eax, 0x5050505
// 00431886  0505050505           add eax, 0x5050505
// 0043188b  0505050505           add eax, 0x5050505
// 00431890  0505050505           add eax, 0x5050505
// 00431895  0505050505           add eax, 0x5050505
// 0043189a  0505050505           add eax, 0x5050505
// 0043189f  0102                 add dword ptr [edx], eax

void func_004314e0()
{
}
