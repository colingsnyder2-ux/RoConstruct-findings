// from server: 100% by auto
// roc 2007-08 00511eb0  unit: G3D::_internal::DialogTemplate  size: 808 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00511eb0
//
// 00511eb0  83ec08               sub esp, 8
// 00511eb3  53                   push ebx
// 00511eb4  55                   push ebp
// 00511eb5  8b6e18               mov ebp, dword ptr [esi + 0x18]
// 00511eb8  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511ebb  85db                 test ebx, ebx
// 00511ebd  57                   push edi
// 00511ebe  8b7d00               mov edi, dword ptr [ebp]
// 00511ec1  896c2410             mov dword ptr [esp + 0x10], ebp
// 00511ec5  8886c8000000         mov byte ptr [esi + 0xc8], al
// 00511ecb  888ec9000000         mov byte ptr [esi + 0xc9], cl
// 00511ed1  751c                 jne 0x511eef
// 00511ed3  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00511ed6  56                   push esi
// 00511ed7  ffd2                 call edx
// 00511ed9  83c404               add esp, 4
// 00511edc  84c0                 test al, al
// 00511ede  7509                 jne 0x511ee9
// 00511ee0  5f                   pop edi
// 00511ee1  5d                   pop ebp
// 00511ee2  32c0                 xor al, al
// 00511ee4  5b                   pop ebx
// 00511ee5  83c408               add esp, 8
// 00511ee8  c3                   ret 
// 00511ee9  8b7d00               mov edi, dword ptr [ebp]
// 00511eec  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511eef  33c0                 xor eax, eax
// 00511ef1  8a27                 mov ah, byte ptr [edi]
// 00511ef3  83eb01               sub ebx, 1
// 00511ef6  83c701               add edi, 1
// 00511ef9  85db                 test ebx, ebx
// 00511efb  8944240c             mov dword ptr [esp + 0xc], eax
// 00511eff  7513                 jne 0x511f14
// 00511f01  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00511f04  56                   push esi
// 00511f05  ffd1                 call ecx
// 00511f07  83c404               add esp, 4
// 00511f0a  84c0                 test al, al
// 00511f0c  74d2                 je 0x511ee0
// 00511f0e  8b7d00               mov edi, dword ptr [ebp]
// 00511f11  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511f14  0fb617               movzx edx, byte ptr [edi]
// 00511f17  0154240c             add dword ptr [esp + 0xc], edx
// 00511f1b  83eb01               sub ebx, 1
// 00511f1e  83c701               add edi, 1
// 00511f21  85db                 test ebx, ebx
// 00511f23  7513                 jne 0x511f38
// 00511f25  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00511f28  56                   push esi
// 00511f29  ffd0                 call eax
// 00511f2b  83c404               add esp, 4
// 00511f2e  84c0                 test al, al
// 00511f30  74ae                 je 0x511ee0
// 00511f32  8b7d00               mov edi, dword ptr [ebp]
// 00511f35  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511f38  0fb60f               movzx ecx, byte ptr [edi]
// 00511f3b  83eb01               sub ebx, 1
// 00511f3e  83c701               add edi, 1
// 00511f41  85db                 test ebx, ebx
// 00511f43  898ec0000000         mov dword ptr [esi + 0xc0], ecx
// 00511f49  7513                 jne 0x511f5e
// 00511f4b  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00511f4e  56                   push esi
// 00511f4f  ffd2                 call edx
// 00511f51  83c404               add esp, 4
// 00511f54  84c0                 test al, al
// 00511f56  7488                 je 0x511ee0
// 00511f58  8b7d00               mov edi, dword ptr [ebp]
// 00511f5b  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511f5e  33c0                 xor eax, eax
// 00511f60  8a27                 mov ah, byte ptr [edi]
// 00511f62  83eb01               sub ebx, 1
// 00511f65  83c701               add edi, 1
// 00511f68  85db                 test ebx, ebx
// 00511f6a  894620               mov dword ptr [esi + 0x20], eax
// 00511f6d  7517                 jne 0x511f86
// 00511f6f  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00511f72  56                   push esi
// 00511f73  ffd1                 call ecx
// 00511f75  83c404               add esp, 4
// 00511f78  84c0                 test al, al
// 00511f7a  0f8460ffffff         je 0x511ee0
// 00511f80  8b7d00               mov edi, dword ptr [ebp]
// 00511f83  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511f86  0fb617               movzx edx, byte ptr [edi]
// 00511f89  015620               add dword ptr [esi + 0x20], edx
// 00511f8c  83eb01               sub ebx, 1
// 00511f8f  83c701               add edi, 1
// 00511f92  85db                 test ebx, ebx
// 00511f94  7517                 jne 0x511fad
// 00511f96  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00511f99  56                   push esi
// 00511f9a  ffd0                 call eax
// 00511f9c  83c404               add esp, 4
// 00511f9f  84c0                 test al, al
// 00511fa1  0f8439ffffff         je 0x511ee0
// 00511fa7  8b7d00               mov edi, dword ptr [ebp]
// 00511faa  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511fad  33c9                 xor ecx, ecx
// 00511faf  8a2f                 mov ch, byte ptr [edi]
// 00511fb1  83eb01               sub ebx, 1
// 00511fb4  83c701               add edi, 1
// 00511fb7  85db                 test ebx, ebx
// 00511fb9  894e1c               mov dword ptr [esi + 0x1c], ecx
// 00511fbc  7517                 jne 0x511fd5
// 00511fbe  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00511fc1  56                   push esi
// 00511fc2  ffd2                 call edx
// 00511fc4  83c404               add esp, 4
// 00511fc7  84c0                 test al, al
// 00511fc9  0f8411ffffff         je 0x511ee0
// 00511fcf  8b7d00               mov edi, dword ptr [ebp]
// 00511fd2  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511fd5  0fb607               movzx eax, byte ptr [edi]
// 00511fd8  01461c               add dword ptr [esi + 0x1c], eax
// 00511fdb  83eb01               sub ebx, 1
// 00511fde  83c701               add edi, 1
// 00511fe1  85db                 test ebx, ebx
// 00511fe3  7517                 jne 0x511ffc
// 00511fe5  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00511fe8  56                   push esi
// 00511fe9  ffd1                 call ecx
// 00511feb  83c404               add esp, 4
// 00511fee  84c0                 test al, al
// 00511ff0  0f84eafeffff         je 0x511ee0
// 00511ff6  8b7d00               mov edi, dword ptr [ebp]
// 00511ff9  8b5d04               mov ebx, dword ptr [ebp + 4]
// 00511ffc  0fb617               movzx edx, byte ptr [edi]
// 00511fff  8b06                 mov eax, dword ptr [esi]
// 00512001  8b8e7c010000         mov ecx, dword ptr [esi + 0x17c]
// 00512007  836c240c08           sub dword ptr [esp + 0xc], 8
// 0051200c  895624               mov dword ptr [esi + 0x24], edx
// 0051200f  83c018               add eax, 0x18
// 00512012  8908                 mov dword ptr [eax], ecx
// 00512014  8b561c               mov edx, dword ptr [esi + 0x1c]
// 00512017  895004               mov dword ptr [eax + 4], edx
// 0051201a  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0051201d  894808               mov dword ptr [eax + 8], ecx
// 00512020  8b5624               mov edx, dword ptr [esi + 0x24]
// 00512023  89500c               mov dword ptr [eax + 0xc], edx
// 00512026  8b06                 mov eax, dword ptr [esi]
// 00512028  c7401464000000       mov dword ptr [eax + 0x14], 0x64
// 0051202f  8b0e                 mov ecx, dword ptr [esi]
// 00512031  8b5104               mov edx, dword ptr [ecx + 4]
// 00512034  6a01                 push 1
// 00512036  56                   push esi
// 00512037  83eb01               sub ebx, 1
// 0051203a  83c701               add edi, 1
// 0051203d  ffd2                 call edx
// 0051203f  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00512045  83c408               add esp, 8
// 00512048  80780d00             cmp byte ptr [eax + 0xd], 0
// 0051204c  7413                 je 0x512061
// 0051204e  8b0e                 mov ecx, dword ptr [esi]
// 00512050  c741143a000000       mov dword ptr [ecx + 0x14], 0x3a
// 00512057  8b16                 mov edx, dword ptr [esi]
// 00512059  8b02                 mov eax, dword ptr [edx]
// 0051205b  56                   push esi
// 0051205c  ffd0                 call eax
// 0051205e  83c404               add esp, 4
// 00512061  837e2000             cmp dword ptr [esi + 0x20], 0
// 00512065  760c                 jbe 0x512073
// 00512067  837e1c00             cmp dword ptr [esi + 0x1c], 0
// 0051206b  7606                 jbe 0x512073
// 0051206d  837e2400             cmp dword ptr [esi + 0x24], 0
// 00512071  7f13                 jg 0x512086
// 00512073  8b0e                 mov ecx, dword ptr [esi]
// 00512075  c7411420000000       mov dword ptr [ecx + 0x14], 0x20
// 0051207c  8b16                 mov edx, dword ptr [esi]
// 0051207e  8b02                 mov eax, dword ptr [edx]
// 00512080  56                   push esi
// 00512081  ffd0                 call eax
// 00512083  83c404               add esp, 4
// 00512086  8b4624               mov eax, dword ptr [esi + 0x24]
// 00512089  8d0c40               lea ecx, [eax + eax*2]
// 0051208c  394c240c             cmp dword ptr [esp + 0xc], ecx
// 00512090  7413                 je 0x5120a5
// 00512092  8b16                 mov edx, dword ptr [esi]
// 00512094  c742140b000000       mov dword ptr [edx + 0x14], 0xb
// 0051209b  8b06                 mov eax, dword ptr [esi]
// 0051209d  8b08                 mov ecx, dword ptr [eax]
// 0051209f  56                   push esi
// 005120a0  ffd1                 call ecx
// 005120a2  83c404               add esp, 4
// 005120a5  83bec400000000       cmp dword ptr [esi + 0xc4], 0
// 005120ac  751a                 jne 0x5120c8
// 005120ae  8b4624               mov eax, dword ptr [esi + 0x24]
// 005120b1  8b5604               mov edx, dword ptr [esi + 4]
// 005120b4  6bc054               imul eax, eax, 0x54
// 005120b7  8b0a                 mov ecx, dword ptr [edx]
// 005120b9  50                   push eax
// 005120ba  6a01                 push 1
// 005120bc  56                   push esi
// 005120bd  ffd1                 call ecx
// 005120bf  83c40c               add esp, 0xc
// 005120c2  8986c4000000         mov dword ptr [esi + 0xc4], eax
// 005120c8  837e2400             cmp dword ptr [esi + 0x24], 0
// 005120cc  8baec4000000         mov ebp, dword ptr [esi + 0xc4]
// 005120d2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005120da  0f8edc000000         jle 0x5121bc
// 005120e0  85db                 test ebx, ebx
// 005120e2  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005120e6  895504               mov dword ptr [ebp + 4], edx
// 005120e9  751a                 jne 0x512105
// 005120eb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 005120ef  8b430c               mov eax, dword ptr [ebx + 0xc]
// 005120f2  56                   push esi
// 005120f3  ffd0                 call eax
// 005120f5  83c404               add esp, 4
// 005120f8  84c0                 test al, al
// 005120fa  0f84e0fdffff         je 0x511ee0
// 00512100  8b3b                 mov edi, dword ptr [ebx]
// 00512102  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00512105  0fb60f               movzx ecx, byte ptr [edi]
// 00512108  83eb01               sub ebx, 1
// 0051210b  83c701               add edi, 1
// 0051210e  85db                 test ebx, ebx
// 00512110  894d00               mov dword ptr [ebp], ecx
// 00512113  751a                 jne 0x51212f
// 00512115  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00512119  8b530c               mov edx, dword ptr [ebx + 0xc]
// 0051211c  56                   push esi
// 0051211d  ffd2                 call edx
// 0051211f  83c404               add esp, 4
// 00512122  84c0                 test al, al
// 00512124  0f84b6fdffff         je 0x511ee0
// 0051212a  8b3b                 mov edi, dword ptr [ebx]
// 0051212c  8b5b04               mov ebx, dword ptr [ebx + 4]
// 0051212f  0fb607               movzx eax, byte ptr [edi]
// 00512132  8bc8                 mov ecx, eax
// 00512134  c1f904               sar ecx, 4
// 00512137  83eb01               sub ebx, 1
// 0051213a  83e10f               and ecx, 0xf
// 0051213d  83e00f               and eax, 0xf
// 00512140  83c701               add edi, 1
// 00512143  85db                 test ebx, ebx
// 00512145  894d08               mov dword ptr [ebp + 8], ecx
// 00512148  89450c               mov dword ptr [ebp + 0xc], eax
// 0051214b  751a                 jne 0x512167
// 0051214d  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00512151  8b530c               mov edx, dword ptr [ebx + 0xc]
// 00512154  56                   push esi
// 00512155  ffd2                 call edx
// 00512157  83c404               add esp, 4
// 0051215a  84c0                 test al, al
// 0051215c  0f847efdffff         je 0x511ee0
// 00512162  8b3b                 mov edi, dword ptr [ebx]
// 00512164  8b5b04               mov ebx, dword ptr [ebx + 4]
// 00512167  0fb607               movzx eax, byte ptr [edi]
// 0051216a  8b4d00               mov ecx, dword ptr [ebp]
// 0051216d  894510               mov dword ptr [ebp + 0x10], eax
// 00512170  8b06                 mov eax, dword ptr [esi]
// 00512172  83c018               add eax, 0x18
// 00512175  8908                 mov dword ptr [eax], ecx
// 00512177  8b5508               mov edx, dword ptr [ebp + 8]
// 0051217a  895004               mov dword ptr [eax + 4], edx
// 0051217d  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00512180  894808               mov dword ptr [eax + 8], ecx
// 00512183  8b5510               mov edx, dword ptr [ebp + 0x10]
// 00512186  89500c               mov dword ptr [eax + 0xc], edx
// 00512189  8b06                 mov eax, dword ptr [esi]
// 0051218b  c7401465000000       mov dword ptr [eax + 0x14], 0x65
// 00512192  8b0e                 mov ecx, dword ptr [esi]
// 00512194  8b5104               mov edx, dword ptr [ecx + 4]
// 00512197  6a01                 push 1
// 00512199  56                   push esi
// 0051219a  83eb01               sub ebx, 1
// 0051219d  83c701               add edi, 1
// 005121a0  ffd2                 call edx
// 005121a2  8b442414             mov eax, dword ptr [esp + 0x14]
// 005121a6  83c001               add eax, 1
// 005121a9  83c408               add esp, 8
// 005121ac  83c554               add ebp, 0x54
// 005121af  3b4624               cmp eax, dword ptr [esi + 0x24]
// 005121b2  8944240c             mov dword ptr [esp + 0xc], eax
// 005121b6  0f8c24ffffff         jl 0x5120e0
// 005121bc  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 005121c2  c6400d01             mov byte ptr [eax + 0xd], 1
// 005121c6  8b442410             mov eax, dword ptr [esp + 0x10]
// 005121ca  8938                 mov dword ptr [eax], edi
// 005121cc  5f                   pop edi
// 005121cd  895804               mov dword ptr [eax + 4], ebx
// 005121d0  5d                   pop ebp
// 005121d1  b001                 mov al, 1
// 005121d3  5b                   pop ebx
// 005121d4  83c408               add esp, 8
// 005121d7  c3                   ret 
// library jpeg-6b/jdmarker.c (function _get_sof)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
