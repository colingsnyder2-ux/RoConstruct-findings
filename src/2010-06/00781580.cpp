// from server: 100% by auto
// roc 2010-06 00781580  unit: seg_00780000  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00781580
//
// 00781580  83ec18               sub esp, 0x18
// 00781583  53                   push ebx
// 00781584  56                   push esi
// 00781585  8bf0                 mov esi, eax
// 00781587  8b5e30               mov ebx, dword ptr [esi + 0x30]
// 0078158a  56                   push esi
// 0078158b  e8f0230000           call 0x783980
// 00781590  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00781593  8d81fcfeffff         lea eax, [ecx - 0x104]
// 00781599  83c404               add esp, 4
// 0078159c  83f81b               cmp eax, 0x1b
// 0078159f  770e                 ja 0x7815af
// 007815a1  0fb68084167800       movzx eax, byte ptr [eax + 0x781684]
// 007815a8  ff24857c167800       jmp dword ptr [eax*4 + 0x78167c]
// 007815af  83f93b               cmp ecx, 0x3b
// 007815b2  0f84ad000000         je 0x781665
// 007815b8  57                   push edi
// 007815b9  8d7c240c             lea edi, [esp + 0xc]
// 007815bd  e8cee4ffff           call 0x77fa90
// 007815c2  8bf0                 mov esi, eax
// 007815c4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007815c8  5f                   pop edi
// 007815c9  83f80d               cmp eax, 0xd
// 007815cc  744c                 je 0x78161a
// 007815ce  83f80e               cmp eax, 0xe
// 007815d1  7447                 je 0x78161a
// 007815d3  83fe01               cmp esi, 1
// 007815d6  751f                 jne 0x7815f7
// 007815d8  8d4c2408             lea ecx, [esp + 8]
// 007815dc  51                   push ecx
// 007815dd  53                   push ebx
// 007815de  e80dec0000           call 0x7901f0
// 007815e3  83c408               add esp, 8
// 007815e6  56                   push esi
// 007815e7  50                   push eax
// 007815e8  53                   push ebx
// 007815e9  e842e70000           call 0x78fd30
// 007815ee  83c40c               add esp, 0xc
// 007815f1  5e                   pop esi
// 007815f2  5b                   pop ebx
// 007815f3  83c418               add esp, 0x18
// 007815f6  c3                   ret 
// 007815f7  8d542408             lea edx, [esp + 8]
// 007815fb  52                   push edx
// 007815fc  53                   push ebx
// 007815fd  e86eeb0000           call 0x790170
// 00781602  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 00781606  83c408               add esp, 8
// 00781609  56                   push esi
// 0078160a  50                   push eax
// 0078160b  53                   push ebx
// 0078160c  e81fe70000           call 0x78fd30
// 00781611  83c40c               add esp, 0xc
// 00781614  5e                   pop esi
// 00781615  5b                   pop ebx
// 00781616  83c418               add esp, 0x18
// 00781619  c3                   ret 
// 0078161a  6aff                 push -1
// 0078161c  8d44240c             lea eax, [esp + 0xc]
// 00781620  50                   push eax
// 00781621  53                   push ebx
// 00781622  e839e20000           call 0x78f860
// 00781627  83c40c               add esp, 0xc
// 0078162a  837c24080d           cmp dword ptr [esp + 8], 0xd
// 0078162f  751c                 jne 0x78164d
// 00781631  83fe01               cmp esi, 1
// 00781634  7517                 jne 0x78164d
// 00781636  8b0b                 mov ecx, dword ptr [ebx]
// 00781638  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0078163b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0078163f  8b0c82               mov ecx, dword ptr [edx + eax*4]
// 00781642  8d0482               lea eax, [edx + eax*4]
// 00781645  83e1dd               and ecx, 0xffffffdd
// 00781648  83c91d               or ecx, 0x1d
// 0078164b  8908                 mov dword ptr [eax], ecx
// 0078164d  0fb64332             movzx eax, byte ptr [ebx + 0x32]
// 00781651  83ceff               or esi, 0xffffffff
// 00781654  56                   push esi
// 00781655  50                   push eax
// 00781656  53                   push ebx
// 00781657  e8d4e60000           call 0x78fd30
// 0078165c  83c40c               add esp, 0xc
// 0078165f  5e                   pop esi
// 00781660  5b                   pop ebx
// 00781661  83c418               add esp, 0x18
// 00781664  c3                   ret 
// 00781665  33f6                 xor esi, esi
// 00781667  33c0                 xor eax, eax
// 00781669  56                   push esi
// 0078166a  50                   push eax
// 0078166b  53                   push ebx
// 0078166c  e8bfe60000           call 0x78fd30
// 00781671  83c40c               add esp, 0xc
// 00781674  5e                   pop esi
// 00781675  5b                   pop ebx
// 00781676  83c418               add esp, 0x18
// 00781679  c3                   ret 
// 0078167a  8bff                 mov edi, edi
// 0078167c  6516                 push ss
// 0078167e  7800                 js 0x781680
// 00781680  af                   scasd eax, dword ptr es:[edi]
// 00781681  1578000000           adc eax, 0x78
// 00781686  0001                 add byte ptr [ecx], al
// 00781688  0101                 add dword ptr [ecx], eax
// 0078168a  0101                 add dword ptr [ecx], eax
// 0078168c  0101                 add dword ptr [ecx], eax
// 0078168e  0101                 add dword ptr [ecx], eax
// 00781690  0101                 add dword ptr [ecx], eax
// 00781692  0101                 add dword ptr [ecx], eax
// 00781694  0001                 add byte ptr [ecx], al
// 00781696  0101                 add dword ptr [ecx], eax
// 00781698  0101                 add dword ptr [ecx], eax
// 0078169a  0101                 add dword ptr [ecx], eax
// 0078169c  0101                 add dword ptr [ecx], eax
// 0078169e  0100                 add dword ptr [eax], eax
// library lua-5.1.4/lparser.c (function _retstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
