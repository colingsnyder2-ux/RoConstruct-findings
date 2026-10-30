// from server: 100% by auto
// roc 2010-06 00736870  unit: seg_00730000  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00736870
//
// 00736870  53                   push ebx
// 00736871  55                   push ebp
// 00736872  56                   push esi
// 00736873  8bf1                 mov esi, ecx
// 00736875  8b6e08               mov ebp, dword ptr [esi + 8]
// 00736878  6a03                 push 3
// 0073687a  55                   push ebp
// 0073687b  8bd8                 mov ebx, eax
// 0073687d  e8bea8feff           call 0x721140
// 00736882  83c0fd               add eax, -3
// 00736885  83c408               add esp, 8
// 00736888  83f803               cmp eax, 3
// 0073688b  775c                 ja 0x7368e9
// 0073688d  ff248560697300       jmp dword ptr [eax*4 + 0x736960]
// 00736894  8b442414             mov eax, dword ptr [esp + 0x14]
// 00736898  53                   push ebx
// 00736899  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0073689d  50                   push eax
// 0073689e  8bc6                 mov eax, esi
// 007368a0  e8ebfeffff           call 0x736790
// 007368a5  83c408               add esp, 8
// 007368a8  5e                   pop esi
// 007368a9  5d                   pop ebp
// 007368aa  5b                   pop ebx
// 007368ab  c3                   ret 
// 007368ac  6a03                 push 3
// 007368ae  55                   push ebp
// 007368af  e85ca8feff           call 0x721110
// 007368b4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007368b8  53                   push ebx
// 007368b9  51                   push ecx
// 007368ba  8bc6                 mov eax, esi
// 007368bc  e8dffaffff           call 0x7363a0
// 007368c1  6a01                 push 1
// 007368c3  50                   push eax
// 007368c4  55                   push ebp
// 007368c5  e8a6b3feff           call 0x721c70
// 007368ca  83c41c               add esp, 0x1c
// 007368cd  eb1a                 jmp 0x7368e9
// 007368cf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007368d3  57                   push edi
// 007368d4  8bc3                 mov eax, ebx
// 007368d6  33ff                 xor edi, edi
// 007368d8  e843faffff           call 0x736320
// 007368dd  6a03                 push 3
// 007368df  55                   push ebp
// 007368e0  e88baefeff           call 0x721770
// 007368e5  83c408               add esp, 8
// 007368e8  5f                   pop edi
// 007368e9  6aff                 push -1
// 007368eb  55                   push ebp
// 007368ec  e82faafeff           call 0x721320
// 007368f1  83c408               add esp, 8
// 007368f4  85c0                 test eax, eax
// 007368f6  752a                 jne 0x736922
// 007368f8  6afe                 push -2
// 007368fa  55                   push ebp
// 007368fb  e860a6feff           call 0x720f60
// 00736900  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00736904  2bd8                 sub ebx, eax
// 00736906  53                   push ebx
// 00736907  50                   push eax
// 00736908  55                   push ebp
// 00736909  e842acfeff           call 0x721550
// 0073690e  8b542424             mov edx, dword ptr [esp + 0x24]
// 00736912  83c414               add esp, 0x14
// 00736915  52                   push edx
// 00736916  e845bffeff           call 0x722860
// 0073691b  83c404               add esp, 4
// 0073691e  5e                   pop esi
// 0073691f  5d                   pop ebp
// 00736920  5b                   pop ebx
// 00736921  c3                   ret 
// 00736922  6aff                 push -1
// 00736924  55                   push ebp
// 00736925  e8c6a8feff           call 0x7211f0
// 0073692a  83c408               add esp, 8
// 0073692d  85c0                 test eax, eax
// 0073692f  751e                 jne 0x73694f
// 00736931  6aff                 push -1
// 00736933  55                   push ebp
// 00736934  e807a8feff           call 0x721140
// 00736939  50                   push eax
// 0073693a  55                   push ebp
// 0073693b  e820a8feff           call 0x721160
// 00736940  50                   push eax
// 00736941  6818e4a400           push 0xa4e418
// 00736946  55                   push ebp
// 00736947  e854bbfeff           call 0x7224a0
// 0073694c  83c41c               add esp, 0x1c
// 0073694f  8b542410             mov edx, dword ptr [esp + 0x10]
// 00736953  52                   push edx
// 00736954  e807bffeff           call 0x722860
// 00736959  83c404               add esp, 4
// 0073695c  5e                   pop esi
// 0073695d  5d                   pop ebp
// 0073695e  5b                   pop ebx
// 0073695f  c3                   ret 
// 00736960  94                   xchg esp, eax
// 00736961  6873009468           push 0x68940073
// 00736966  7300                 jae 0x736968
// 00736968  cf                   iretd 
// 00736969  687300ac68           push 0x68ac0073
// 0073696e  7300                 jae 0x736970
// library lua-5.1.4/lstrlib.c (function _add_value)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
