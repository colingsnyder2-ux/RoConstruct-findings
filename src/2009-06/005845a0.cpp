// from server: 100% by auto
// roc 2009-06 005845a0  unit: seg_00580000  size: 467 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005845a0
//
// 005845a0  8b542404             mov edx, dword ptr [esp + 4]
// 005845a4  83ec10               sub esp, 0x10
// 005845a7  53                   push ebx
// 005845a8  8a5a08               mov bl, byte ptr [edx + 8]
// 005845ab  80fb03               cmp bl, 3
// 005845ae  0f8496010000         je 0x58474a
// 005845b4  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005845b8  55                   push ebp
// 005845b9  8b2a                 mov ebp, dword ptr [edx]
// 005845bb  56                   push esi
// 005845bc  33f6                 xor esi, esi
// 005845be  57                   push edi
// 005845bf  89742424             mov dword ptr [esp + 0x24], esi
// 005845c3  f6c302               test bl, 2
// 005845c6  7430                 je 0x5845f8
// 005845c8  0fb64209             movzx eax, byte ptr [edx + 9]
// 005845cc  0fb631               movzx esi, byte ptr [ecx]
// 005845cf  8bf8                 mov edi, eax
// 005845d1  2bfe                 sub edi, esi
// 005845d3  0fb67101             movzx esi, byte ptr [ecx + 1]
// 005845d7  897c2410             mov dword ptr [esp + 0x10], edi
// 005845db  8bf8                 mov edi, eax
// 005845dd  2bfe                 sub edi, esi
// 005845df  0fb67102             movzx esi, byte ptr [ecx + 2]
// 005845e3  2bc6                 sub eax, esi
// 005845e5  8b742424             mov esi, dword ptr [esp + 0x24]
// 005845e9  897c2414             mov dword ptr [esp + 0x14], edi
// 005845ed  89442418             mov dword ptr [esp + 0x18], eax
// 005845f1  bf03000000           mov edi, 3
// 005845f6  eb13                 jmp 0x58460b
// 005845f8  0fb64103             movzx eax, byte ptr [ecx + 3]
// 005845fc  0fb67a09             movzx edi, byte ptr [edx + 9]
// 00584600  2bf8                 sub edi, eax
// 00584602  897c2410             mov dword ptr [esp + 0x10], edi
// 00584606  bf01000000           mov edi, 1
// 0058460b  f6c304               test bl, 4
// 0058460e  740f                 je 0x58461f
// 00584610  0fb64904             movzx ecx, byte ptr [ecx + 4]
// 00584614  0fb64209             movzx eax, byte ptr [edx + 9]
// 00584618  2bc1                 sub eax, ecx
// 0058461a  8944bc10             mov dword ptr [esp + edi*4 + 0x10], eax
// 0058461e  47                   inc edi
// 0058461f  33c9                 xor ecx, ecx
// 00584621  33c0                 xor eax, eax
// 00584623  3bf9                 cmp edi, ecx
// 00584625  0f8e1c010000         jle 0x584747
// 0058462b  eb03                 jmp 0x584630
// 0058462d  8d4900               lea ecx, [ecx]
// 00584630  394c8410             cmp dword ptr [esp + eax*4 + 0x10], ecx
// 00584634  7f06                 jg 0x58463c
// 00584636  894c8410             mov dword ptr [esp + eax*4 + 0x10], ecx
// 0058463a  eb05                 jmp 0x584641
// 0058463c  be01000000           mov esi, 1
// 00584641  40                   inc eax
// 00584642  3bc7                 cmp eax, edi
// 00584644  7cea                 jl 0x584630
// 00584646  663bf1               cmp si, cx
// 00584649  0f84f8000000         je 0x584747
// 0058464f  0fb64209             movzx eax, byte ptr [edx + 9]
// 00584653  83c0fe               add eax, -2
// 00584656  83f80e               cmp eax, 0xe
// 00584659  0f87e8000000         ja 0x584747
// 0058465f  0fb68064475800       movzx eax, byte ptr [eax + 0x584764]
// 00584666  ff248550475800       jmp dword ptr [eax*4 + 0x584750]
// 0058466d  8b5204               mov edx, dword ptr [edx + 4]
// 00584670  8b442428             mov eax, dword ptr [esp + 0x28]
// 00584674  3bd1                 cmp edx, ecx
// 00584676  0f86cb000000         jbe 0x584747
// 0058467c  8d642400             lea esp, [esp]
// 00584680  8a08                 mov cl, byte ptr [eax]
// 00584682  d0e9                 shr cl, 1
// 00584684  80e155               and cl, 0x55
// 00584687  8808                 mov byte ptr [eax], cl
// 00584689  40                   inc eax
// 0058468a  83ea01               sub edx, 1
// 0058468d  75f1                 jne 0x584680
// 0058468f  5f                   pop edi
// 00584690  5e                   pop esi
// 00584691  5d                   pop ebp
// 00584692  5b                   pop ebx
// 00584693  83c410               add esp, 0x10
// 00584696  c3                   ret 
// 00584697  8b7a04               mov edi, dword ptr [edx + 4]
// 0058469a  8b542410             mov edx, dword ptr [esp + 0x10]
// 0058469e  8b742428             mov esi, dword ptr [esp + 0x28]
// 005846a2  8bca                 mov ecx, edx
// 005846a4  b8f0000000           mov eax, 0xf0
// 005846a9  d3f8                 sar eax, cl
// 005846ab  bb0f000000           mov ebx, 0xf
// 005846b0  d3fb                 sar ebx, cl
// 005846b2  24f0                 and al, 0xf0
// 005846b4  0ac3                 or al, bl
// 005846b6  85ff                 test edi, edi
// 005846b8  0f8689000000         jbe 0x584747
// 005846be  8bff                 mov edi, edi
// 005846c0  8a1e                 mov bl, byte ptr [esi]
// 005846c2  8aca                 mov cl, dl
// 005846c4  d2eb                 shr bl, cl
// 005846c6  46                   inc esi
// 005846c7  22d8                 and bl, al
// 005846c9  83ef01               sub edi, 1
// 005846cc  885eff               mov byte ptr [esi - 1], bl
// 005846cf  75ef                 jne 0x5846c0
// 005846d1  5f                   pop edi
// 005846d2  5e                   pop esi
// 005846d3  5d                   pop ebp
// 005846d4  5b                   pop ebx
// 005846d5  83c410               add esp, 0x10
// 005846d8  c3                   ret 
// 005846d9  8b742428             mov esi, dword ptr [esp + 0x28]
// 005846dd  0fafef               imul ebp, edi
// 005846e0  33db                 xor ebx, ebx
// 005846e2  85ed                 test ebp, ebp
// 005846e4  7661                 jbe 0x584747
// 005846e6  8bc3                 mov eax, ebx
// 005846e8  33d2                 xor edx, edx
// 005846ea  f7f7                 div edi
// 005846ec  43                   inc ebx
// 005846ed  46                   inc esi
// 005846ee  8a4c9410             mov cl, byte ptr [esp + edx*4 + 0x10]
// 005846f2  d26eff               shr byte ptr [esi - 1], cl
// 005846f5  3bdd                 cmp ebx, ebp
// 005846f7  72ed                 jb 0x5846e6
// 005846f9  5f                   pop edi
// 005846fa  5e                   pop esi
// 005846fb  5d                   pop ebp
// 005846fc  5b                   pop ebx
// 005846fd  83c410               add esp, 0x10
// 00584700  c3                   ret 
// 00584701  8b742428             mov esi, dword ptr [esp + 0x28]
// 00584705  0fafef               imul ebp, edi
// 00584708  33db                 xor ebx, ebx
// 0058470a  85ed                 test ebp, ebp
// 0058470c  7639                 jbe 0x584747
// 0058470e  8bff                 mov edi, edi
// 00584710  33d2                 xor edx, edx
// 00584712  8bc3                 mov eax, ebx
// 00584714  f7f7                 div edi
// 00584716  660fb606             movzx ax, byte ptr [esi]
// 0058471a  b900010000           mov ecx, 0x100
// 0058471f  660fafc1             imul ax, cx
// 00584723  0fb64e01             movzx ecx, byte ptr [esi + 1]
// 00584727  6603c1               add ax, cx
// 0058472a  46                   inc esi
// 0058472b  43                   inc ebx
// 0058472c  46                   inc esi
// 0058472d  0fb74c9410           movzx ecx, word ptr [esp + edx*4 + 0x10]
// 00584732  66d3e8               shr ax, cl
// 00584735  0fb7c0               movzx eax, ax
// 00584738  8bd0                 mov edx, eax
// 0058473a  c1ea08               shr edx, 8
// 0058473d  8856fe               mov byte ptr [esi - 2], dl
// 00584740  8846ff               mov byte ptr [esi - 1], al
// 00584743  3bdd                 cmp ebx, ebp
// 00584745  72c9                 jb 0x584710
// 00584747  5f                   pop edi
// 00584748  5e                   pop esi
// 00584749  5d                   pop ebp
// 0058474a  5b                   pop ebx
// 0058474b  83c410               add esp, 0x10
// 0058474e  c3                   ret 
// 0058474f  90                   nop 
// 00584750  6d                   insd dword ptr es:[edi], dx
// 00584751  46                   inc esi
// 00584752  58                   pop eax
// 00584753  0097465800d9         add byte ptr [edi - 0x26ffa7ba], dl
// 00584759  46                   inc esi
// 0058475a  58                   pop eax
// 0058475b  0001                 add byte ptr [ecx], al
// 0058475d  47                   inc edi
// 0058475e  58                   pop eax
// 0058475f  004747               add byte ptr [edi + 0x47], al
// 00584762  58                   pop eax
// 00584763  0000                 add byte ptr [eax], al
// 00584765  0401                 add al, 1
// 00584767  0404                 add al, 4
// 00584769  0402                 add al, 2
// 0058476b  0404                 add al, 4
// 0058476d  0404                 add al, 4
// 0058476f  0404                 add al, 4
// 00584771  0403                 add al, 3
// library libpng-1.2.5/pngrtran.c (function _png_do_unshift)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngrtran.c
