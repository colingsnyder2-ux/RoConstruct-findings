// roc 2009-06 00513130  unit: CSHA1  size: 818 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00513130
//
// 00513130  8b442410             mov eax, dword ptr [esp + 0x10]
// 00513134  83ec24               sub esp, 0x24
// 00513137  03c0                 add eax, eax
// 00513139  55                   push ebp
// 0051313a  03c0                 add eax, eax
// 0051313c  57                   push edi
// 0051313d  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 00513141  03c0                 add eax, eax
// 00513143  85ff                 test edi, edi
// 00513145  0f840c030000         je 0x513457
// 0051314b  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 0051314f  85ed                 test ebp, ebp
// 00513151  0f8400030000         je 0x513457
// 00513157  8a0f                 mov cl, byte ptr [edi]
// 00513159  80f903               cmp cl, 3
// 0051315c  740a                 je 0x513168
// 0051315e  807d0000             cmp byte ptr [ebp], 0
// 00513162  0f84ef020000         je 0x513457
// 00513168  99                   cdq 
// 00513169  83e27f               and edx, 0x7f
// 0051316c  03c2                 add eax, edx
// 0051316e  53                   push ebx
// 0051316f  8bd8                 mov ebx, eax
// 00513171  0fb6c1               movzx eax, cl
// 00513174  c1fb07               sar ebx, 7
// 00513177  83e801               sub eax, 1
// 0051317a  56                   push esi
// 0051317b  895c2438             mov dword ptr [esp + 0x38], ebx
// 0051317f  0f8492020000         je 0x513417
// 00513185  83e801               sub eax, 1
// 00513188  0f84ee010000         je 0x51337c
// 0051318e  83e801               sub eax, 1
// 00513191  740d                 je 0x5131a0
// 00513193  5e                   pop esi
// 00513194  5b                   pop ebx
// 00513195  5f                   pop edi
// 00513196  b8fbffffff           mov eax, 0xfffffffb
// 0051319b  5d                   pop ebp
// 0051319c  83c424               add esp, 0x24
// 0051319f  c3                   ret 
// 005131a0  8b4701               mov eax, dword ptr [edi + 1]
// 005131a3  8b4f05               mov ecx, dword ptr [edi + 5]
// 005131a6  8b5709               mov edx, dword ptr [edi + 9]
// 005131a9  89442414             mov dword ptr [esp + 0x14], eax
// 005131ad  8b470d               mov eax, dword ptr [edi + 0xd]
// 005131b0  894c2418             mov dword ptr [esp + 0x18], ecx
// 005131b4  8954241c             mov dword ptr [esp + 0x1c], edx
// 005131b8  89442420             mov dword ptr [esp + 0x20], eax
// 005131bc  895c2410             mov dword ptr [esp + 0x10], ebx
// 005131c0  85db                 test ebx, ebx
// 005131c2  0f8ea7010000         jle 0x51336f
// 005131c8  8b7c2448             mov edi, dword ptr [esp + 0x48]
// 005131cc  83c530               add ebp, 0x30
// 005131cf  896c2444             mov dword ptr [esp + 0x44], ebp
// 005131d3  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005131d7  eb07                 jmp 0x5131e0
// 005131d9  8da42400000000       lea esp, [esp]
// 005131e0  33f6                 xor esi, esi
// 005131e2  8b542418             mov edx, dword ptr [esp + 0x18]
// 005131e6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005131ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005131ee  8a5c2415             mov bl, byte ptr [esp + 0x15]
// 005131f2  894c2424             mov dword ptr [esp + 0x24], ecx
// 005131f6  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005131fa  89542428             mov dword ptr [esp + 0x28], edx
// 005131fe  8b542444             mov edx, dword ptr [esp + 0x44]
// 00513202  8944242c             mov dword ptr [esp + 0x2c], eax
// 00513206  52                   push edx
// 00513207  8d442428             lea eax, [esp + 0x28]
// 0051320b  894c2434             mov dword ptr [esp + 0x34], ecx
// 0051320f  50                   push eax
// 00513210  8bc8                 mov ecx, eax
// 00513212  51                   push ecx
// 00513213  e8e8f2ffff           call 0x512500
// 00513218  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 0051321d  02c0                 add al, al
// 0051321f  8ad3                 mov dl, bl
// 00513221  c0ea07               shr dl, 7
// 00513224  0ad0                 or dl, al
// 00513226  8a442422             mov al, byte ptr [esp + 0x22]
// 0051322a  88542420             mov byte ptr [esp + 0x20], dl
// 0051322e  8ac8                 mov cl, al
// 00513230  c0e907               shr cl, 7
// 00513233  02db                 add bl, bl
// 00513235  0acb                 or cl, bl
// 00513237  884c2421             mov byte ptr [esp + 0x21], cl
// 0051323b  8a4c2423             mov cl, byte ptr [esp + 0x23]
// 0051323f  8ad1                 mov dl, cl
// 00513241  c0ea07               shr dl, 7
// 00513244  02c0                 add al, al
// 00513246  0ad0                 or dl, al
// 00513248  8a442424             mov al, byte ptr [esp + 0x24]
// 0051324c  88542422             mov byte ptr [esp + 0x22], dl
// 00513250  8ad0                 mov dl, al
// 00513252  c0ea07               shr dl, 7
// 00513255  02c9                 add cl, cl
// 00513257  0ad1                 or dl, cl
// 00513259  8a4c2425             mov cl, byte ptr [esp + 0x25]
// 0051325d  88542423             mov byte ptr [esp + 0x23], dl
// 00513261  8ad1                 mov dl, cl
// 00513263  c0ea07               shr dl, 7
// 00513266  02c0                 add al, al
// 00513268  0ad0                 or dl, al
// 0051326a  8a442426             mov al, byte ptr [esp + 0x26]
// 0051326e  88542424             mov byte ptr [esp + 0x24], dl
// 00513272  8ad0                 mov dl, al
// 00513274  c0ea07               shr dl, 7
// 00513277  02c9                 add cl, cl
// 00513279  0ad1                 or dl, cl
// 0051327b  8a4c2427             mov cl, byte ptr [esp + 0x27]
// 0051327f  88542425             mov byte ptr [esp + 0x25], dl
// 00513283  8ad1                 mov dl, cl
// 00513285  c0ea07               shr dl, 7
// 00513288  02c0                 add al, al
// 0051328a  0ad0                 or dl, al
// 0051328c  8a442428             mov al, byte ptr [esp + 0x28]
// 00513290  88542426             mov byte ptr [esp + 0x26], dl
// 00513294  8ad0                 mov dl, al
// 00513296  c0ea07               shr dl, 7
// 00513299  02c9                 add cl, cl
// 0051329b  0ad1                 or dl, cl
// 0051329d  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 005132a1  88542427             mov byte ptr [esp + 0x27], dl
// 005132a5  8ad1                 mov dl, cl
// 005132a7  c0ea07               shr dl, 7
// 005132aa  02c0                 add al, al
// 005132ac  0ad0                 or dl, al
// 005132ae  8a44242a             mov al, byte ptr [esp + 0x2a]
// 005132b2  88542428             mov byte ptr [esp + 0x28], dl
// 005132b6  8ad0                 mov dl, al
// 005132b8  c0ea07               shr dl, 7
// 005132bb  02c9                 add cl, cl
// 005132bd  0ad1                 or dl, cl
// 005132bf  8a4c242b             mov cl, byte ptr [esp + 0x2b]
// 005132c3  88542429             mov byte ptr [esp + 0x29], dl
// 005132c7  8ad1                 mov dl, cl
// 005132c9  83c40c               add esp, 0xc
// 005132cc  c0ea07               shr dl, 7
// 005132cf  02c0                 add al, al
// 005132d1  0ad0                 or dl, al
// 005132d3  8a442420             mov al, byte ptr [esp + 0x20]
// 005132d7  8854241e             mov byte ptr [esp + 0x1e], dl
// 005132db  02c9                 add cl, cl
// 005132dd  8ad0                 mov dl, al
// 005132df  c0ea07               shr dl, 7
// 005132e2  0ad1                 or dl, cl
// 005132e4  8a4c2421             mov cl, byte ptr [esp + 0x21]
// 005132e8  8854241f             mov byte ptr [esp + 0x1f], dl
// 005132ec  8ad1                 mov dl, cl
// 005132ee  c0ea07               shr dl, 7
// 005132f1  02c0                 add al, al
// 005132f3  0ad0                 or dl, al
// 005132f5  8a442422             mov al, byte ptr [esp + 0x22]
// 005132f9  02c9                 add cl, cl
// 005132fb  88542420             mov byte ptr [esp + 0x20], dl
// 005132ff  8ad0                 mov dl, al
// 00513301  c0ea07               shr dl, 7
// 00513304  0ad1                 or dl, cl
// 00513306  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 0051330b  c0e907               shr cl, 7
// 0051330e  02c0                 add al, al
// 00513310  0ac8                 or cl, al
// 00513312  884c2422             mov byte ptr [esp + 0x22], cl
// 00513316  8bc6                 mov eax, esi
// 00513318  88542421             mov byte ptr [esp + 0x21], dl
// 0051331c  c1e803               shr eax, 3
// 0051331f  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 00513323  8bd6                 mov edx, esi
// 00513325  83e207               and edx, 7
// 00513328  b107                 mov cl, 7
// 0051332a  2aca                 sub cl, dl
// 0051332c  d2eb                 shr bl, cl
// 0051332e  0fb64c2423           movzx ecx, byte ptr [esp + 0x23]
// 00513333  80e301               and bl, 1
// 00513336  02c9                 add cl, cl
// 00513338  0ad9                 or bl, cl
// 0051333a  885c2423             mov byte ptr [esp + 0x23], bl
// 0051333e  0fb65c2424           movzx ebx, byte ptr [esp + 0x24]
// 00513343  80e380               and bl, 0x80
// 00513346  8aca                 mov cl, dl
// 00513348  d2eb                 shr bl, cl
// 0051334a  46                   inc esi
// 0051334b  301c38               xor byte ptr [eax + edi], bl
// 0051334e  81fe80000000         cmp esi, 0x80
// 00513354  0f8c88feffff         jl 0x5131e2
// 0051335a  8b442410             mov eax, dword ptr [esp + 0x10]
// 0051335e  48                   dec eax
// 0051335f  89442410             mov dword ptr [esp + 0x10], eax
// 00513363  85c0                 test eax, eax
// 00513365  0f8f75feffff         jg 0x5131e0
// 0051336b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0051336f  5e                   pop esi
// 00513370  8bc3                 mov eax, ebx
// 00513372  5b                   pop ebx
// 00513373  5f                   pop edi
// 00513374  c1e007               shl eax, 7
// 00513377  5d                   pop ebp
// 00513378  83c424               add esp, 0x24
// 0051337b  c3                   ret 
// 0051337c  8b742440             mov esi, dword ptr [esp + 0x40]
// 00513380  83c530               add ebp, 0x30
// 00513383  55                   push ebp
// 00513384  8d542428             lea edx, [esp + 0x28]
// 00513388  52                   push edx
// 00513389  56                   push esi
// 0051338a  e831f5ffff           call 0x5128c0
// 0051338f  8b4f01               mov ecx, dword ptr [edi + 1]
// 00513392  334c2430             xor ecx, dword ptr [esp + 0x30]
// 00513396  8b442454             mov eax, dword ptr [esp + 0x54]
// 0051339a  8908                 mov dword ptr [eax], ecx
// 0051339c  8b5705               mov edx, dword ptr [edi + 5]
// 0051339f  33542434             xor edx, dword ptr [esp + 0x34]
// 005133a3  4b                   dec ebx
// 005133a4  895004               mov dword ptr [eax + 4], edx
// 005133a7  8b4f09               mov ecx, dword ptr [edi + 9]
// 005133aa  334c2438             xor ecx, dword ptr [esp + 0x38]
// 005133ae  83c40c               add esp, 0xc
// 005133b1  894808               mov dword ptr [eax + 8], ecx
// 005133b4  8b570d               mov edx, dword ptr [edi + 0xd]
// 005133b7  33542430             xor edx, dword ptr [esp + 0x30]
// 005133bb  89500c               mov dword ptr [eax + 0xc], edx
// 005133be  85db                 test ebx, ebx
// 005133c0  7ea9                 jle 0x51336b
// 005133c2  8d7814               lea edi, [eax + 0x14]
// 005133c5  55                   push ebp
// 005133c6  8d442428             lea eax, [esp + 0x28]
// 005133ca  50                   push eax
// 005133cb  56                   push esi
// 005133cc  e8eff4ffff           call 0x5128c0
// 005133d1  8b4ef0               mov ecx, dword ptr [esi - 0x10]
// 005133d4  334c2430             xor ecx, dword ptr [esp + 0x30]
// 005133d8  4b                   dec ebx
// 005133d9  894ffc               mov dword ptr [edi - 4], ecx
// 005133dc  8b56f4               mov edx, dword ptr [esi - 0xc]
// 005133df  33542434             xor edx, dword ptr [esp + 0x34]
// 005133e3  83c40c               add esp, 0xc
// 005133e6  8917                 mov dword ptr [edi], edx
// 005133e8  8b46f8               mov eax, dword ptr [esi - 8]
// 005133eb  3344242c             xor eax, dword ptr [esp + 0x2c]
// 005133ef  83c610               add esi, 0x10
// 005133f2  894704               mov dword ptr [edi + 4], eax
// 005133f5  8b4eec               mov ecx, dword ptr [esi - 0x14]
// 005133f8  334c2430             xor ecx, dword ptr [esp + 0x30]
// 005133fc  83c710               add edi, 0x10
// 005133ff  894ff8               mov dword ptr [edi - 8], ecx
// 00513402  85db                 test ebx, ebx
// 00513404  7fbf                 jg 0x5133c5
// 00513406  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0051340a  5e                   pop esi
// 0051340b  8bc3                 mov eax, ebx
// 0051340d  5b                   pop ebx
// 0051340e  5f                   pop edi
// 0051340f  c1e007               shl eax, 7
// 00513412  5d                   pop ebp
// 00513413  83c424               add esp, 0x24
// 00513416  c3                   ret 
// 00513417  8bf3                 mov esi, ebx
// 00513419  85db                 test ebx, ebx
// 0051341b  0f8e4effffff         jle 0x51336f
// 00513421  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00513425  83c530               add ebp, 0x30
// 00513428  896c2444             mov dword ptr [esp + 0x44], ebp
// 0051342c  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 00513430  8b542444             mov edx, dword ptr [esp + 0x44]
// 00513434  52                   push edx
// 00513435  55                   push ebp
// 00513436  57                   push edi
// 00513437  e884f4ffff           call 0x5128c0
// 0051343c  4e                   dec esi
// 0051343d  83c40c               add esp, 0xc
// 00513440  83c710               add edi, 0x10
// 00513443  83c510               add ebp, 0x10
// 00513446  85f6                 test esi, esi
// 00513448  7fe6                 jg 0x513430
// 0051344a  5e                   pop esi
// 0051344b  8bc3                 mov eax, ebx
// 0051344d  5b                   pop ebx
// 0051344e  5f                   pop edi
// 0051344f  c1e007               shl eax, 7
// 00513452  5d                   pop ebp
// 00513453  83c424               add esp, 0x24
// 00513456  c3                   ret 
// 00513457  5f                   pop edi
// 00513458  b8fbffffff           mov eax, 0xfffffffb
// 0051345d  5d                   pop ebp
// 0051345e  83c424               add esp, 0x24
// 00513461  c3                   ret 
// library rbxgs-raknet/rijndael.cpp (function ?blockDecrypt@@YAHPAUcipherInstance@@PAUkeyInstance@@PAEH2@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp
