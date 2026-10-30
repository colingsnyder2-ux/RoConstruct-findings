// from server: 100% by auto
// roc 2007-08 006156a0  unit: seg_00610000  size: 296 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006156a0
//
// 006156a0  83ec24               sub esp, 0x24
// 006156a3  55                   push ebp
// 006156a4  56                   push esi
// 006156a5  8bf0                 mov esi, eax
// 006156a7  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 006156aa  57                   push edi
// 006156ab  56                   push esi
// 006156ac  e83f330000           call 0x6189f0
// 006156b1  55                   push ebp
// 006156b2  e8292f0100           call 0x6285e0
// 006156b7  8bf8                 mov edi, eax
// 006156b9  6a00                 push 0
// 006156bb  8d442424             lea eax, [esp + 0x24]
// 006156bf  50                   push eax
// 006156c0  56                   push esi
// 006156c1  e85afcffff           call 0x615320
// 006156c6  83c414               add esp, 0x14
// 006156c9  837c241801           cmp dword ptr [esp + 0x18], 1
// 006156ce  7508                 jne 0x6156d8
// 006156d0  c744241803000000     mov dword ptr [esp + 0x18], 3
// 006156d8  8b5630               mov edx, dword ptr [esi + 0x30]
// 006156db  8d4c2418             lea ecx, [esp + 0x18]
// 006156df  51                   push ecx
// 006156e0  52                   push edx
// 006156e1  e8ca400100           call 0x6297b0
// 006156e6  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 006156ee  c644241e01           mov byte ptr [esp + 0x1e], 1
// 006156f3  8a4532               mov al, byte ptr [ebp + 0x32]
// 006156f6  8844241c             mov byte ptr [esp + 0x1c], al
// 006156fa  c644241d00           mov byte ptr [esp + 0x1d], 0
// 006156ff  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00615702  8d542414             lea edx, [esp + 0x14]
// 00615706  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061570a  83c408               add esp, 8
// 0061570d  895514               mov dword ptr [ebp + 0x14], edx
// 00615710  817e1003010000       cmp dword ptr [esi + 0x10], 0x103
// 00615717  7424                 je 0x61573d
// 00615719  6803010000           push 0x103
// 0061571e  56                   push esi
// 0061571f  e89c1d0000           call 0x6174c0
// 00615724  50                   push eax
// 00615725  8b4634               mov eax, dword ptr [esi + 0x34]
// 00615728  6870337c00           push 0x7c3370
// 0061572d  50                   push eax
// 0061572e  e85d97ffff           call 0x60ee90
// 00615733  50                   push eax
// 00615734  56                   push esi
// 00615735  e8861e0000           call 0x6175c0
// 0061573a  83c41c               add esp, 0x1c
// 0061573d  56                   push esi
// 0061573e  e8ad320000           call 0x6189f0
// 00615743  83c404               add esp, 4
// 00615746  8bc6                 mov eax, esi
// 00615748  e8e3fcffff           call 0x615430
// 0061574d  57                   push edi
// 0061574e  55                   push ebp
// 0061574f  e8bc370100           call 0x628f10
// 00615754  83c404               add esp, 4
// 00615757  50                   push eax
// 00615758  55                   push ebp
// 00615759  e802470100           call 0x629e60
// 0061575e  8b442440             mov eax, dword ptr [esp + 0x40]
// 00615762  6815010000           push 0x115
// 00615767  bf06010000           mov edi, 0x106
// 0061576c  e8afe3ffff           call 0x613b20
// 00615771  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00615774  8b0e                 mov ecx, dword ptr [esi]
// 00615776  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00615779  894d14               mov dword ptr [ebp + 0x14], ecx
// 0061577c  0fb65608             movzx edx, byte ptr [esi + 8]
// 00615780  83c410               add esp, 0x10
// 00615783  e878e5ffff           call 0x613d00
// 00615788  807e0900             cmp byte ptr [esi + 9], 0
// 0061578c  7414                 je 0x6157a2
// 0061578e  0fb65608             movzx edx, byte ptr [esi + 8]
// 00615792  6a00                 push 0
// 00615794  6a00                 push 0
// 00615796  52                   push edx
// 00615797  6a23                 push 0x23
// 00615799  55                   push ebp
// 0061579a  e8e1350100           call 0x628d80
// 0061579f  83c414               add esp, 0x14
// 006157a2  0fb64532             movzx eax, byte ptr [ebp + 0x32]
// 006157a6  894524               mov dword ptr [ebp + 0x24], eax
// 006157a9  8b4e04               mov ecx, dword ptr [esi + 4]
// 006157ac  51                   push ecx
// 006157ad  55                   push ebp
// 006157ae  e82d380100           call 0x628fe0
// 006157b3  8b542434             mov edx, dword ptr [esp + 0x34]
// 006157b7  52                   push edx
// 006157b8  55                   push ebp
// 006157b9  e822380100           call 0x628fe0
// 006157be  83c410               add esp, 0x10
// 006157c1  5f                   pop edi
// 006157c2  5e                   pop esi
// 006157c3  5d                   pop ebp
// 006157c4  83c424               add esp, 0x24
// 006157c7  c3                   ret 
// library lua-5.1.4/lparser.c (function _whilestat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
