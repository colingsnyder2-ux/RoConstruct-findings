// roc 2009-06 006ef540  unit: seg_006e0000  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006ef540
//
// 006ef540  83ec34               sub esp, 0x34
// 006ef543  55                   push ebp
// 006ef544  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 006ef547  56                   push esi
// 006ef548  57                   push edi
// 006ef549  55                   push ebp
// 006ef54a  e821a50000           call 0x6f9a70
// 006ef54f  c644242a01           mov byte ptr [esp + 0x2a], 1
// 006ef554  89442410             mov dword ptr [esp + 0x10], eax
// 006ef558  83c8ff               or eax, 0xffffffff
// 006ef55b  89442424             mov dword ptr [esp + 0x24], eax
// 006ef55f  8a4d32               mov cl, byte ptr [ebp + 0x32]
// 006ef562  884c2428             mov byte ptr [esp + 0x28], cl
// 006ef566  c644242900           mov byte ptr [esp + 0x29], 0
// 006ef56b  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006ef56e  89542420             mov dword ptr [esp + 0x20], edx
// 006ef572  8d4c2420             lea ecx, [esp + 0x20]
// 006ef576  894d14               mov dword ptr [ebp + 0x14], ecx
// 006ef579  89442418             mov dword ptr [esp + 0x18], eax
// 006ef57d  c644241e00           mov byte ptr [esp + 0x1e], 0
// 006ef582  8a5532               mov dl, byte ptr [ebp + 0x32]
// 006ef585  8854241c             mov byte ptr [esp + 0x1c], dl
// 006ef589  c644241d00           mov byte ptr [esp + 0x1d], 0
// 006ef58e  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006ef591  8d4c2414             lea ecx, [esp + 0x14]
// 006ef595  89442414             mov dword ptr [esp + 0x14], eax
// 006ef599  53                   push ebx
// 006ef59a  894d14               mov dword ptr [ebp + 0x14], ecx
// 006ef59d  e83e310000           call 0x6f26e0
// 006ef5a2  53                   push ebx
// 006ef5a3  e8a80f0000           call 0x6f0550
// 006ef5a8  8b442450             mov eax, dword ptr [esp + 0x50]
// 006ef5ac  6810010000           push 0x110
// 006ef5b1  bf14010000           mov edi, 0x114
// 006ef5b6  8bf3                 mov esi, ebx
// 006ef5b8  e8d3e2ffff           call 0x6ed890
// 006ef5bd  6a00                 push 0
// 006ef5bf  8d54243c             lea edx, [esp + 0x3c]
// 006ef5c3  52                   push edx
// 006ef5c4  53                   push ebx
// 006ef5c5  e896faffff           call 0x6ef060
// 006ef5ca  83c41c               add esp, 0x1c
// 006ef5cd  837c242801           cmp dword ptr [esp + 0x28], 1
// 006ef5d2  7508                 jne 0x6ef5dc
// 006ef5d4  c744242803000000     mov dword ptr [esp + 0x28], 3
// 006ef5dc  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006ef5df  8d442428             lea eax, [esp + 0x28]
// 006ef5e3  50                   push eax
// 006ef5e4  51                   push ecx
// 006ef5e5  e816b60000           call 0x6fac00
// 006ef5ea  83c408               add esp, 8
// 006ef5ed  807c241900           cmp byte ptr [esp + 0x19], 0
// 006ef5f2  7517                 jne 0x6ef60b
// 006ef5f4  8bf5                 mov esi, ebp
// 006ef5f6  e895e7ffff           call 0x6edd90
// 006ef5fb  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ef5ff  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006ef603  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 006ef606  52                   push edx
// 006ef607  50                   push eax
// 006ef608  51                   push ecx
// 006ef609  eb32                 jmp 0x6ef63d
// 006ef60b  8bc3                 mov eax, ebx
// 006ef60d  e89efdffff           call 0x6ef3b0
// 006ef612  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 006ef616  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006ef619  52                   push edx
// 006ef61a  50                   push eax
// 006ef61b  e810ae0000           call 0x6fa430
// 006ef620  83c408               add esp, 8
// 006ef623  8bf5                 mov esi, ebp
// 006ef625  e866e7ffff           call 0x6edd90
// 006ef62a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006ef62e  51                   push ecx
// 006ef62f  55                   push ebp
// 006ef630  e82bad0000           call 0x6fa360
// 006ef635  8b5330               mov edx, dword ptr [ebx + 0x30]
// 006ef638  83c404               add esp, 4
// 006ef63b  50                   push eax
// 006ef63c  52                   push edx
// 006ef63d  e8debc0000           call 0x6fb320
// 006ef642  8b7514               mov esi, dword ptr [ebp + 0x14]
// 006ef645  8b06                 mov eax, dword ptr [esi]
// 006ef647  894514               mov dword ptr [ebp + 0x14], eax
// 006ef64a  0fb65608             movzx edx, byte ptr [esi + 8]
// 006ef64e  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006ef651  83c40c               add esp, 0xc
// 006ef654  e807e4ffff           call 0x6eda60
// 006ef659  807e0900             cmp byte ptr [esi + 9], 0
// 006ef65d  7414                 je 0x6ef673
// 006ef65f  0fb64e08             movzx ecx, byte ptr [esi + 8]
// 006ef663  6a00                 push 0
// 006ef665  6a00                 push 0
// 006ef667  51                   push ecx
// 006ef668  6a23                 push 0x23
// 006ef66a  55                   push ebp
// 006ef66b  e860ab0000           call 0x6fa1d0
// 006ef670  83c414               add esp, 0x14
// 006ef673  0fb65532             movzx edx, byte ptr [ebp + 0x32]
// 006ef677  895524               mov dword ptr [ebp + 0x24], edx
// 006ef67a  8b4604               mov eax, dword ptr [esi + 4]
// 006ef67d  50                   push eax
// 006ef67e  55                   push ebp
// 006ef67f  e8acad0000           call 0x6fa430
// 006ef684  83c408               add esp, 8
// 006ef687  5f                   pop edi
// 006ef688  5e                   pop esi
// 006ef689  5d                   pop ebp
// 006ef68a  83c434               add esp, 0x34
// 006ef68d  c3                   ret 
// library lua-5.1.4/lparser.c (function _repeatstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
