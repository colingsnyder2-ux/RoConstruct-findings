// from server: 100% by colin
// roc 2008-06 0051ea70  unit: seg_00510000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0051ea70
//
// 0051ea70  8b442404             mov eax, dword ptr [esp + 4]
// 0051ea74  8b00                 mov eax, dword ptr [eax]
// 0051ea76  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0051ea79  56                   push esi
// 0051ea7a  85c9                 test ecx, ecx
// 0051ea7c  7e0d                 jle 0x51ea8b
// 0051ea7e  3b4874               cmp ecx, dword ptr [eax + 0x74]
// 0051ea81  7f08                 jg 0x51ea8b
// 0051ea83  8b5070               mov edx, dword ptr [eax + 0x70]
// 0051ea86  8b348a               mov esi, dword ptr [edx + ecx*4]
// 0051ea89  eb1f                 jmp 0x51eaaa
// 0051ea8b  8b7078               mov esi, dword ptr [eax + 0x78]
// 0051ea8e  85f6                 test esi, esi
// 0051ea90  741c                 je 0x51eaae
// 0051ea92  8b507c               mov edx, dword ptr [eax + 0x7c]
// 0051ea95  3bca                 cmp ecx, edx
// 0051ea97  7c15                 jl 0x51eaae
// 0051ea99  3b8880000000         cmp ecx, dword ptr [eax + 0x80]
// 0051ea9f  7f0d                 jg 0x51eaae
// 0051eaa1  57                   push edi
// 0051eaa2  8bf9                 mov edi, ecx
// 0051eaa4  2bfa                 sub edi, edx
// 0051eaa6  8b34be               mov esi, dword ptr [esi + edi*4]
// 0051eaa9  5f                   pop edi
// 0051eaaa  85f6                 test esi, esi
// 0051eaac  7508                 jne 0x51eab6
// 0051eaae  894818               mov dword ptr [eax + 0x18], ecx
// 0051eab1  8b4870               mov ecx, dword ptr [eax + 0x70]
// 0051eab4  8b31                 mov esi, dword ptr [ecx]
// 0051eab6  8a0e                 mov cl, byte ptr [esi]
// 0051eab8  8bd6                 mov edx, esi
// 0051eaba  84c9                 test cl, cl
// 0051eabc  740e                 je 0x51eacc
// 0051eabe  8bff                 mov edi, edi
// 0051eac0  42                   inc edx
// 0051eac1  80f925               cmp cl, 0x25
// 0051eac4  7437                 je 0x51eafd
// 0051eac6  8a0a                 mov cl, byte ptr [edx]
// 0051eac8  84c9                 test cl, cl
// 0051eaca  75f4                 jne 0x51eac0
// 0051eacc  8b4834               mov ecx, dword ptr [eax + 0x34]
// 0051eacf  8b5030               mov edx, dword ptr [eax + 0x30]
// 0051ead2  51                   push ecx
// 0051ead3  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0051ead6  52                   push edx
// 0051ead7  8b5028               mov edx, dword ptr [eax + 0x28]
// 0051eada  51                   push ecx
// 0051eadb  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0051eade  52                   push edx
// 0051eadf  8b5020               mov edx, dword ptr [eax + 0x20]
// 0051eae2  51                   push ecx
// 0051eae3  8b481c               mov ecx, dword ptr [eax + 0x1c]
// 0051eae6  52                   push edx
// 0051eae7  8b5018               mov edx, dword ptr [eax + 0x18]
// 0051eaea  8b442424             mov eax, dword ptr [esp + 0x24]
// 0051eaee  51                   push ecx
// 0051eaef  52                   push edx
// 0051eaf0  56                   push esi
// 0051eaf1  50                   push eax
// 0051eaf2  ff1530288000         call dword ptr [0x802830]
// 0051eaf8  83c428               add esp, 0x28
// 0051eafb  5e                   pop esi
// 0051eafc  c3                   ret 
// 0051eafd  803a73               cmp byte ptr [edx], 0x73
// 0051eb00  75ca                 jne 0x51eacc
// 0051eb02  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0051eb06  83c018               add eax, 0x18
// 0051eb09  50                   push eax
// 0051eb0a  56                   push esi
// 0051eb0b  52                   push edx
// 0051eb0c  ff1530288000         call dword ptr [0x802830]
// 0051eb12  83c40c               add esp, 0xc
// 0051eb15  5e                   pop esi
// 0051eb16  c3                   ret 
// library g3d-6.09-ijg-dll/jerror.c (function _format_message)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09-ijg-dll jerror.c
