// roc 2007-03 00506910  unit: seg_00500000  size: 789 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00506910
//
// 00506910  83ec18               sub esp, 0x18
// 00506913  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00506919  80780d00             cmp byte ptr [eax + 0xd], 0
// 0050691d  53                   push ebx
// 0050691e  55                   push ebp
// 0050691f  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00506922  8b5d00               mov ebx, dword ptr [ebp]
// 00506925  57                   push edi
// 00506926  8b7d04               mov edi, dword ptr [ebp + 4]
// 00506929  896c2420             mov dword ptr [esp + 0x20], ebp
// 0050692d  7513                 jne 0x506942
// 0050692f  8b0e                 mov ecx, dword ptr [esi]
// 00506931  c741143e000000       mov dword ptr [ecx + 0x14], 0x3e
// 00506938  8b16                 mov edx, dword ptr [esi]
// 0050693a  8b02                 mov eax, dword ptr [edx]
// 0050693c  56                   push esi
// 0050693d  ffd0                 call eax
// 0050693f  83c404               add esp, 4
// 00506942  85ff                 test edi, edi
// 00506944  751e                 jne 0x506964
// 00506946  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00506949  56                   push esi
// 0050694a  ffd1                 call ecx
// 0050694c  83c404               add esp, 4
// 0050694f  84c0                 test al, al
// 00506951  7509                 jne 0x50695c
// 00506953  5f                   pop edi
// 00506954  5d                   pop ebp
// 00506955  32c0                 xor al, al
// 00506957  5b                   pop ebx
// 00506958  83c418               add esp, 0x18
// 0050695b  c3                   ret 
// 0050695c  8b5504               mov edx, dword ptr [ebp + 4]
// 0050695f  8b5d00               mov ebx, dword ptr [ebp]
// 00506962  8bfa                 mov edi, edx
// 00506964  33c0                 xor eax, eax
// 00506966  8a23                 mov ah, byte ptr [ebx]
// 00506968  83ef01               sub edi, 1
// 0050696b  83c301               add ebx, 1
// 0050696e  85ff                 test edi, edi
// 00506970  89442410             mov dword ptr [esp + 0x10], eax
// 00506974  7515                 jne 0x50698b
// 00506976  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00506979  56                   push esi
// 0050697a  ffd1                 call ecx
// 0050697c  83c404               add esp, 4
// 0050697f  84c0                 test al, al
// 00506981  74d0                 je 0x506953
// 00506983  8b5504               mov edx, dword ptr [ebp + 4]
// 00506986  8b5d00               mov ebx, dword ptr [ebp]
// 00506989  8bfa                 mov edi, edx
// 0050698b  0fb603               movzx eax, byte ptr [ebx]
// 0050698e  01442410             add dword ptr [esp + 0x10], eax
// 00506992  83ef01               sub edi, 1
// 00506995  83c301               add ebx, 1
// 00506998  85ff                 test edi, edi
// 0050699a  7515                 jne 0x5069b1
// 0050699c  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 0050699f  56                   push esi
// 005069a0  ffd1                 call ecx
// 005069a2  83c404               add esp, 4
// 005069a5  84c0                 test al, al
// 005069a7  74aa                 je 0x506953
// 005069a9  8b5504               mov edx, dword ptr [ebp + 4]
// 005069ac  8b5d00               mov ebx, dword ptr [ebp]
// 005069af  8bfa                 mov edi, edx
// 005069b1  0fb603               movzx eax, byte ptr [ebx]
// 005069b4  8b0e                 mov ecx, dword ptr [esi]
// 005069b6  c7411467000000       mov dword ptr [ecx + 0x14], 0x67
// 005069bd  8b16                 mov edx, dword ptr [esi]
// 005069bf  894218               mov dword ptr [edx + 0x18], eax
// 005069c2  89442418             mov dword ptr [esp + 0x18], eax
// 005069c6  8b06                 mov eax, dword ptr [esi]
// 005069c8  8b4804               mov ecx, dword ptr [eax + 4]
// 005069cb  6a01                 push 1
// 005069cd  56                   push esi
// 005069ce  83ef01               sub edi, 1
// 005069d1  83c301               add ebx, 1
// 005069d4  ffd1                 call ecx
// 005069d6  8b442420             mov eax, dword ptr [esp + 0x20]
// 005069da  8d540006             lea edx, [eax + eax + 6]
// 005069de  83c408               add esp, 8
// 005069e1  39542410             cmp dword ptr [esp + 0x10], edx
// 005069e5  750a                 jne 0x5069f1
// 005069e7  83f801               cmp eax, 1
// 005069ea  7c05                 jl 0x5069f1
// 005069ec  83f804               cmp eax, 4
// 005069ef  7e17                 jle 0x506a08
// 005069f1  8b06                 mov eax, dword ptr [esi]
// 005069f3  c740140b000000       mov dword ptr [eax + 0x14], 0xb
// 005069fa  8b0e                 mov ecx, dword ptr [esi]
// 005069fc  8b11                 mov edx, dword ptr [ecx]
// 005069fe  56                   push esi
// 005069ff  ffd2                 call edx
// 00506a01  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00506a05  83c404               add esp, 4
// 00506a08  85c0                 test eax, eax
// 00506a0a  898624010000         mov dword ptr [esi + 0x124], eax
// 00506a10  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00506a18  0f8e08010000         jle 0x506b26
// 00506a1e  8d8628010000         lea eax, [esi + 0x128]
// 00506a24  89442414             mov dword ptr [esp + 0x14], eax
// 00506a28  85ff                 test edi, edi
// 00506a2a  751d                 jne 0x506a49
// 00506a2c  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00506a2f  56                   push esi
// 00506a30  ffd1                 call ecx
// 00506a32  83c404               add esp, 4
// 00506a35  84c0                 test al, al
// 00506a37  0f8416ffffff         je 0x506953
// 00506a3d  8b5504               mov edx, dword ptr [ebp + 4]
// 00506a40  8b5d00               mov ebx, dword ptr [ebp]
// 00506a43  8954240c             mov dword ptr [esp + 0xc], edx
// 00506a47  8bfa                 mov edi, edx
// 00506a49  0fb603               movzx eax, byte ptr [ebx]
// 00506a4c  83ef01               sub edi, 1
// 00506a4f  83c301               add ebx, 1
// 00506a52  85ff                 test edi, edi
// 00506a54  89442410             mov dword ptr [esp + 0x10], eax
// 00506a58  751d                 jne 0x506a77
// 00506a5a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00506a5d  56                   push esi
// 00506a5e  ffd1                 call ecx
// 00506a60  83c404               add esp, 4
// 00506a63  84c0                 test al, al
// 00506a65  0f84e8feffff         je 0x506953
// 00506a6b  8b5504               mov edx, dword ptr [ebp + 4]
// 00506a6e  8b5d00               mov ebx, dword ptr [ebp]
// 00506a71  8954240c             mov dword ptr [esp + 0xc], edx
// 00506a75  8bfa                 mov edi, edx
// 00506a77  0fb62b               movzx ebp, byte ptr [ebx]
// 00506a7a  83ef01               sub edi, 1
// 00506a7d  33c0                 xor eax, eax
// 00506a7f  83c301               add ebx, 1
// 00506a82  394624               cmp dword ptr [esi + 0x24], eax
// 00506a85  897c240c             mov dword ptr [esp + 0xc], edi
// 00506a89  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 00506a8f  7e13                 jle 0x506aa4
// 00506a91  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00506a95  3b0f                 cmp ecx, dword ptr [edi]
// 00506a97  7427                 je 0x506ac0
// 00506a99  83c001               add eax, 1
// 00506a9c  83c754               add edi, 0x54
// 00506a9f  3b4624               cmp eax, dword ptr [esi + 0x24]
// 00506aa2  7ced                 jl 0x506a91
// 00506aa4  8b16                 mov edx, dword ptr [esi]
// 00506aa6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00506aaa  c7421405000000       mov dword ptr [edx + 0x14], 5
// 00506ab1  8b06                 mov eax, dword ptr [esi]
// 00506ab3  894818               mov dword ptr [eax + 0x18], ecx
// 00506ab6  8b16                 mov edx, dword ptr [esi]
// 00506ab8  8b02                 mov eax, dword ptr [edx]
// 00506aba  56                   push esi
// 00506abb  ffd0                 call eax
// 00506abd  83c404               add esp, 4
// 00506ac0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00506ac4  8939                 mov dword ptr [ecx], edi
// 00506ac6  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00506aca  8bd5                 mov edx, ebp
// 00506acc  c1fa04               sar edx, 4
// 00506acf  83e20f               and edx, 0xf
// 00506ad2  895714               mov dword ptr [edi + 0x14], edx
// 00506ad5  83e50f               and ebp, 0xf
// 00506ad8  896f18               mov dword ptr [edi + 0x18], ebp
// 00506adb  8b06                 mov eax, dword ptr [esi]
// 00506add  83c018               add eax, 0x18
// 00506ae0  8908                 mov dword ptr [eax], ecx
// 00506ae2  8b5714               mov edx, dword ptr [edi + 0x14]
// 00506ae5  895004               mov dword ptr [eax + 4], edx
// 00506ae8  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00506aeb  894808               mov dword ptr [eax + 8], ecx
// 00506aee  8b16                 mov edx, dword ptr [esi]
// 00506af0  c7421468000000       mov dword ptr [edx + 0x14], 0x68
// 00506af7  8b06                 mov eax, dword ptr [esi]
// 00506af9  8b4804               mov ecx, dword ptr [eax + 4]
// 00506afc  6a01                 push 1
// 00506afe  56                   push esi
// 00506aff  ffd1                 call ecx
// 00506b01  8b442424             mov eax, dword ptr [esp + 0x24]
// 00506b05  8344241c04           add dword ptr [esp + 0x1c], 4
// 00506b0a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00506b0e  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00506b12  83c001               add eax, 1
// 00506b15  83c408               add esp, 8
// 00506b18  3b442418             cmp eax, dword ptr [esp + 0x18]
// 00506b1c  8944241c             mov dword ptr [esp + 0x1c], eax
// 00506b20  0f8c02ffffff         jl 0x506a28
// 00506b26  85ff                 test edi, edi
// 00506b28  751d                 jne 0x506b47
// 00506b2a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00506b2d  56                   push esi
// 00506b2e  ffd2                 call edx
// 00506b30  83c404               add esp, 4
// 00506b33  84c0                 test al, al
// 00506b35  0f8418feffff         je 0x506953
// 00506b3b  8b4504               mov eax, dword ptr [ebp + 4]
// 00506b3e  8b5d00               mov ebx, dword ptr [ebp]
// 00506b41  8944240c             mov dword ptr [esp + 0xc], eax
// 00506b45  8bf8                 mov edi, eax
// 00506b47  0fb603               movzx eax, byte ptr [ebx]
// 00506b4a  83ef01               sub edi, 1
// 00506b4d  83c301               add ebx, 1
// 00506b50  85ff                 test edi, edi
// 00506b52  89866c010000         mov dword ptr [esi + 0x16c], eax
// 00506b58  751d                 jne 0x506b77
// 00506b5a  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00506b5d  56                   push esi
// 00506b5e  ffd1                 call ecx
// 00506b60  83c404               add esp, 4
// 00506b63  84c0                 test al, al
// 00506b65  0f84e8fdffff         je 0x506953
// 00506b6b  8b5504               mov edx, dword ptr [ebp + 4]
// 00506b6e  8b5d00               mov ebx, dword ptr [ebp]
// 00506b71  8954240c             mov dword ptr [esp + 0xc], edx
// 00506b75  8bfa                 mov edi, edx
// 00506b77  0fb603               movzx eax, byte ptr [ebx]
// 00506b7a  83ef01               sub edi, 1
// 00506b7d  83c301               add ebx, 1
// 00506b80  85ff                 test edi, edi
// 00506b82  898670010000         mov dword ptr [esi + 0x170], eax
// 00506b88  751d                 jne 0x506ba7
// 00506b8a  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00506b8d  56                   push esi
// 00506b8e  ffd0                 call eax
// 00506b90  83c404               add esp, 4
// 00506b93  84c0                 test al, al
// 00506b95  0f84b8fdffff         je 0x506953
// 00506b9b  8b4d04               mov ecx, dword ptr [ebp + 4]
// 00506b9e  8b5d00               mov ebx, dword ptr [ebp]
// 00506ba1  894c240c             mov dword ptr [esp + 0xc], ecx
// 00506ba5  8bf9                 mov edi, ecx
// 00506ba7  0fb603               movzx eax, byte ptr [ebx]
// 00506baa  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 00506bb0  8bd0                 mov edx, eax
// 00506bb2  83e00f               and eax, 0xf
// 00506bb5  898678010000         mov dword ptr [esi + 0x178], eax
// 00506bbb  8b06                 mov eax, dword ptr [esi]
// 00506bbd  c1fa04               sar edx, 4
// 00506bc0  83e20f               and edx, 0xf
// 00506bc3  899674010000         mov dword ptr [esi + 0x174], edx
// 00506bc9  83c018               add eax, 0x18
// 00506bcc  8908                 mov dword ptr [eax], ecx
// 00506bce  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 00506bd4  895004               mov dword ptr [eax + 4], edx
// 00506bd7  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 00506bdd  894808               mov dword ptr [eax + 8], ecx
// 00506be0  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 00506be6  89500c               mov dword ptr [eax + 0xc], edx
// 00506be9  8b06                 mov eax, dword ptr [esi]
// 00506beb  c7401469000000       mov dword ptr [eax + 0x14], 0x69
// 00506bf2  8b0e                 mov ecx, dword ptr [esi]
// 00506bf4  8b5104               mov edx, dword ptr [ecx + 4]
// 00506bf7  6a01                 push 1
// 00506bf9  56                   push esi
// 00506bfa  ffd2                 call edx
// 00506bfc  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00506c02  c7401000000000       mov dword ptr [eax + 0x10], 0
// 00506c09  83467c01             add dword ptr [esi + 0x7c], 1
// 00506c0d  83c408               add esp, 8
// 00506c10  83c301               add ebx, 1
// 00506c13  83c7ff               add edi, -1
// 00506c16  897d04               mov dword ptr [ebp + 4], edi
// 00506c19  5f                   pop edi
// 00506c1a  895d00               mov dword ptr [ebp], ebx
// 00506c1d  5d                   pop ebp
// 00506c1e  b001                 mov al, 1
// 00506c20  5b                   pop ebx
// 00506c21  83c418               add esp, 0x18
// 00506c24  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sos)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
