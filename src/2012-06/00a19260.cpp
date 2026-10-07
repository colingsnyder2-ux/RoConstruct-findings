// roc 2012-06 00a19260  unit: CXTPShortcutManager  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a19260
//
// 00a19260  83ec44               sub esp, 0x44
// 00a19263  56                   push esi
// 00a19264  6a2c                 push 0x2c
// 00a19266  33f6                 xor esi, esi
// 00a19268  8d442420             lea eax, [esp + 0x20]
// 00a1926c  56                   push esi
// 00a1926d  50                   push eax
// 00a1926e  e801a1f6ff           call 0x983374
// 00a19273  8b542460             mov edx, dword ptr [esp + 0x60]
// 00a19277  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 00a1927b  83c40c               add esp, 0xc
// 00a1927e  56                   push esi
// 00a1927f  f7da                 neg edx
// 00a19281  56                   push esi
// 00a19282  8954242c             mov dword ptr [esp + 0x2c], edx
// 00a19286  8d542410             lea edx, [esp + 0x10]
// 00a1928a  52                   push edx
// 00a1928b  b801000000           mov eax, 1
// 00a19290  6689442434           mov word ptr [esp + 0x34], ax
// 00a19295  56                   push esi
// 00a19296  8d44242c             lea eax, [esp + 0x2c]
// 00a1929a  894c2430             mov dword ptr [esp + 0x30], ecx
// 00a1929e  50                   push eax
// 00a1929f  b920000000           mov ecx, 0x20
// 00a192a4  56                   push esi
// 00a192a5  c744243428000000     mov dword ptr [esp + 0x34], 0x28
// 00a192ad  66894c2442           mov word ptr [esp + 0x42], cx
// 00a192b2  89742444             mov dword ptr [esp + 0x44], esi
// 00a192b6  ff154c21b200         call dword ptr [0xb2214c]
// 00a192bc  8bc8                 mov ecx, eax
// 00a192be  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a192c2  3bce                 cmp ecx, esi
// 00a192c4  0f84ad000000         je 0xa19377
// 00a192ca  39742408             cmp dword ptr [esp + 8], esi
// 00a192ce  0f84a3000000         je 0xa19377
// 00a192d4  8b442450             mov eax, dword ptr [esp + 0x50]
// 00a192d8  53                   push ebx
// 00a192d9  57                   push edi
// 00a192da  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 00a192de  8bd8                 mov ebx, eax
// 00a192e0  0fafdf               imul ebx, edi
// 00a192e3  3974245c             cmp dword ptr [esp + 0x5c], esi
// 00a192e7  8d148500000000       lea edx, [eax*4]
// 00a192ee  895c2418             mov dword ptr [esp + 0x18], ebx
// 00a192f2  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a192f6  89742414             mov dword ptr [esp + 0x14], esi
// 00a192fa  7e70                 jle 0xa1936c
// 00a192fc  55                   push ebp
// 00a192fd  8b6c2458             mov ebp, dword ptr [esp + 0x58]
// 00a19301  89742410             mov dword ptr [esp + 0x10], esi
// 00a19305  8b742410             mov esi, dword ptr [esp + 0x10]
// 00a19309  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a1930d  03ce                 add ecx, esi
// 00a1930f  33f6                 xor esi, esi
// 00a19311  8bd5                 mov edx, ebp
// 00a19313  85c0                 test eax, eax
// 00a19315  7e37                 jle 0xa1934e
// 00a19317  8a02                 mov al, byte ptr [edx]
// 00a19319  0fb65a01             movzx ebx, byte ptr [edx + 1]
// 00a1931d  42                   inc edx
// 00a1931e  42                   inc edx
// 00a1931f  885c2464             mov byte ptr [esp + 0x64], bl
// 00a19323  8a1a                 mov bl, byte ptr [edx]
// 00a19325  8819                 mov byte ptr [ecx], bl
// 00a19327  0fb65c2464           movzx ebx, byte ptr [esp + 0x64]
// 00a1932c  41                   inc ecx
// 00a1932d  8819                 mov byte ptr [ecx], bl
// 00a1932f  41                   inc ecx
// 00a19330  8801                 mov byte ptr [ecx], al
// 00a19332  42                   inc edx
// 00a19333  41                   inc ecx
// 00a19334  32c0                 xor al, al
// 00a19336  83ff04               cmp edi, 4
// 00a19339  7503                 jne 0xa1933e
// 00a1933b  8a02                 mov al, byte ptr [edx]
// 00a1933d  42                   inc edx
// 00a1933e  8801                 mov byte ptr [ecx], al
// 00a19340  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a19344  46                   inc esi
// 00a19345  41                   inc ecx
// 00a19346  3bf0                 cmp esi, eax
// 00a19348  7ccd                 jl 0xa19317
// 00a1934a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a1934e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a19352  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a19356  01542410             add dword ptr [esp + 0x10], edx
// 00a1935a  41                   inc ecx
// 00a1935b  03eb                 add ebp, ebx
// 00a1935d  3b4c2460             cmp ecx, dword ptr [esp + 0x60]
// 00a19361  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a19365  7c9e                 jl 0xa19305
// 00a19367  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a1936b  5d                   pop ebp
// 00a1936c  5f                   pop edi
// 00a1936d  5b                   pop ebx
// 00a1936e  8bc1                 mov eax, ecx
// 00a19370  5e                   pop esi
// 00a19371  83c444               add esp, 0x44
// 00a19374  c21000               ret 0x10
// 00a19377  33c0                 xor eax, eax
// 00a19379  5e                   pop esi
// 00a1937a  83c444               add esp, 0x44
// 00a1937d  c21000               ret 0x10
// library xtp-15.2.1/Source\GraphicLibrary\XTPGraphicBitmapPng.cpp (function ?ConvertToBitmap@CXTPGraphicBitmapPng@@ABEPAUHBITMAP__@@PAEVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/GraphicLibrary/XTPGraphicBitmapPng.cpp
