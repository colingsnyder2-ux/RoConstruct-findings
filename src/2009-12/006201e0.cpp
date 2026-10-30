// roc 2009-12 006201e0  unit: seg_00620000  size: 214 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006201e0
//
// 006201e0  83ec0c               sub esp, 0xc
// 006201e3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006201e7  8b12                 mov edx, dword ptr [edx]
// 006201e9  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006201ed  8b81a0010000         mov eax, dword ptr [ecx + 0x1a0]
// 006201f3  891424               mov dword ptr [esp], edx
// 006201f6  8b542414             mov edx, dword ptr [esp + 0x14]
// 006201fa  8b5204               mov edx, dword ptr [edx + 4]
// 006201fd  03d0                 add edx, eax
// 006201ff  0fb6828c000000       movzx eax, byte ptr [edx + 0x8c]
// 00620206  0fb69296000000       movzx edx, byte ptr [edx + 0x96]
// 0062020d  53                   push ebx
// 0062020e  33db                 xor ebx, ebx
// 00620210  399914010000         cmp dword ptr [ecx + 0x114], ebx
// 00620216  89442420             mov dword ptr [esp + 0x20], eax
// 0062021a  89542408             mov dword ptr [esp + 8], edx
// 0062021e  0f8e8d000000         jle 0x6202b1
// 00620224  55                   push ebp
// 00620225  56                   push esi
// 00620226  8b742424             mov esi, dword ptr [esp + 0x24]
// 0062022a  57                   push edi
// 0062022b  89742424             mov dword ptr [esp + 0x24], esi
// 0062022f  90                   nop 
// 00620230  8b742424             mov esi, dword ptr [esp + 0x24]
// 00620234  8b2e                 mov ebp, dword ptr [esi]
// 00620236  8b742410             mov esi, dword ptr [esp + 0x10]
// 0062023a  8b349e               mov esi, dword ptr [esi + ebx*4]
// 0062023d  8b795c               mov edi, dword ptr [ecx + 0x5c]
// 00620240  03fe                 add edi, esi
// 00620242  3bf7                 cmp esi, edi
// 00620244  732f                 jae 0x620275
// 00620246  8a5500               mov dl, byte ptr [ebp]
// 00620249  45                   inc ebp
// 0062024a  88542418             mov byte ptr [esp + 0x18], dl
// 0062024e  85c0                 test eax, eax
// 00620250  7e1b                 jle 0x62026d
// 00620252  50                   push eax
// 00620253  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00620257  50                   push eax
// 00620258  56                   push esi
// 00620259  e846481d00           call 0x7f4aa4
// 0062025e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00620262  8b442438             mov eax, dword ptr [esp + 0x38]
// 00620266  83c40c               add esp, 0xc
// 00620269  0374242c             add esi, dword ptr [esp + 0x2c]
// 0062026d  3bf7                 cmp esi, edi
// 0062026f  72d5                 jb 0x620246
// 00620271  8b542414             mov edx, dword ptr [esp + 0x14]
// 00620275  83fa01               cmp edx, 1
// 00620278  7e21                 jle 0x62029b
// 0062027a  8b495c               mov ecx, dword ptr [ecx + 0x5c]
// 0062027d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00620281  51                   push ecx
// 00620282  4a                   dec edx
// 00620283  52                   push edx
// 00620284  8d5301               lea edx, [ebx + 1]
// 00620287  52                   push edx
// 00620288  50                   push eax
// 00620289  53                   push ebx
// 0062028a  50                   push eax
// 0062028b  e800bafeff           call 0x60bc90
// 00620290  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00620294  8b442444             mov eax, dword ptr [esp + 0x44]
// 00620298  83c418               add esp, 0x18
// 0062029b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0062029f  8344242404           add dword ptr [esp + 0x24], 4
// 006202a4  03da                 add ebx, edx
// 006202a6  3b9914010000         cmp ebx, dword ptr [ecx + 0x114]
// 006202ac  7c82                 jl 0x620230
// 006202ae  5f                   pop edi
// 006202af  5e                   pop esi
// 006202b0  5d                   pop ebp
// 006202b1  5b                   pop ebx
// 006202b2  83c40c               add esp, 0xc
// 006202b5  c3                   ret 
// library jpeg-6b/jdsample.c (function _int_upsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdsample.c
