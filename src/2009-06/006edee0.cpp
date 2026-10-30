// from server: 100% by auto
// roc 2009-06 006edee0  unit: seg_006e0000  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006edee0
//
// 006edee0  55                   push ebp
// 006edee1  56                   push esi
// 006edee2  57                   push edi
// 006edee3  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 006edee6  57                   push edi
// 006edee7  8bf0                 mov esi, eax
// 006edee9  e802f0ffff           call 0x6ecef0
// 006edeee  8be8                 mov ebp, eax
// 006edef0  892e                 mov dword ptr [esi], ebp
// 006edef2  8b4330               mov eax, dword ptr [ebx + 0x30]
// 006edef5  894608               mov dword ptr [esi + 8], eax
// 006edef8  33c0                 xor eax, eax
// 006edefa  895e0c               mov dword ptr [esi + 0xc], ebx
// 006edefd  897e10               mov dword ptr [esi + 0x10], edi
// 006edf00  897330               mov dword ptr [ebx + 0x30], esi
// 006edf03  83c9ff               or ecx, 0xffffffff
// 006edf06  894e1c               mov dword ptr [esi + 0x1c], ecx
// 006edf09  894e20               mov dword ptr [esi + 0x20], ecx
// 006edf0c  50                   push eax
// 006edf0d  894618               mov dword ptr [esi + 0x18], eax
// 006edf10  894624               mov dword ptr [esi + 0x24], eax
// 006edf13  894628               mov dword ptr [esi + 0x28], eax
// 006edf16  89462c               mov dword ptr [esi + 0x2c], eax
// 006edf19  33c9                 xor ecx, ecx
// 006edf1b  66894e30             mov word ptr [esi + 0x30], cx
// 006edf1f  884632               mov byte ptr [esi + 0x32], al
// 006edf22  894614               mov dword ptr [esi + 0x14], eax
// 006edf25  8b5340               mov edx, dword ptr [ebx + 0x40]
// 006edf28  50                   push eax
// 006edf29  57                   push edi
// 006edf2a  895520               mov dword ptr [ebp + 0x20], edx
// 006edf2d  c6454b02             mov byte ptr [ebp + 0x4b], 2
// 006edf31  e81ae2ffff           call 0x6ec150
// 006edf36  894604               mov dword ptr [esi + 4], eax
// 006edf39  8b4f08               mov ecx, dword ptr [edi + 8]
// 006edf3c  8901                 mov dword ptr [ecx], eax
// 006edf3e  c7410805000000       mov dword ptr [ecx + 8], 5
// 006edf45  8b471c               mov eax, dword ptr [edi + 0x1c]
// 006edf48  2b4708               sub eax, dword ptr [edi + 8]
// 006edf4b  be10000000           mov esi, 0x10
// 006edf50  83c410               add esp, 0x10
// 006edf53  3bc6                 cmp eax, esi
// 006edf55  7f0b                 jg 0x6edf62
// 006edf57  6a01                 push 1
// 006edf59  57                   push edi
// 006edf5a  e8614efdff           call 0x6c2dc0
// 006edf5f  83c408               add esp, 8
// 006edf62  017708               add dword ptr [edi + 8], esi
// 006edf65  8b4708               mov eax, dword ptr [edi + 8]
// 006edf68  8928                 mov dword ptr [eax], ebp
// 006edf6a  c7400809000000       mov dword ptr [eax + 8], 9
// 006edf71  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 006edf74  2b4f08               sub ecx, dword ptr [edi + 8]
// 006edf77  3bce                 cmp ecx, esi
// 006edf79  7f0b                 jg 0x6edf86
// 006edf7b  6a01                 push 1
// 006edf7d  57                   push edi
// 006edf7e  e83d4efdff           call 0x6c2dc0
// 006edf83  83c408               add esp, 8
// 006edf86  017708               add dword ptr [edi + 8], esi
// 006edf89  5f                   pop edi
// 006edf8a  5e                   pop esi
// 006edf8b  5d                   pop ebp
// 006edf8c  c3                   ret 
// library lua-5.1.4/lparser.c (function _open_func)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
