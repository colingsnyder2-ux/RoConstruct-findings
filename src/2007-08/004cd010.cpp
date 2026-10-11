// from server: 100% by auto
// roc 2007-08 004cd010  unit: CSHA1  size: 841 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004cd010
//
// 004cd010  83ec30               sub esp, 0x30
// 004cd013  a188518b00           mov eax, dword ptr [0x8b5188]
// 004cd018  33c4                 xor eax, esp
// 004cd01a  8944242c             mov dword ptr [esp + 0x2c], eax
// 004cd01e  8b442440             mov eax, dword ptr [esp + 0x40]
// 004cd022  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004cd026  03c0                 add eax, eax
// 004cd028  53                   push ebx
// 004cd029  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 004cd02d  03c0                 add eax, eax
// 004cd02f  03c0                 add eax, eax
// 004cd031  85db                 test ebx, ebx
// 004cd033  57                   push edi
// 004cd034  8b7c244c             mov edi, dword ptr [esp + 0x4c]
// 004cd038  0f8405030000         je 0x4cd343
// 004cd03e  85c9                 test ecx, ecx
// 004cd040  0f84fd020000         je 0x4cd343
// 004cd046  803b03               cmp byte ptr [ebx], 3
// 004cd049  7409                 je 0x4cd054
// 004cd04b  803900               cmp byte ptr [ecx], 0
// 004cd04e  0f84ef020000         je 0x4cd343
// 004cd054  99                   cdq 
// 004cd055  83e27f               and edx, 0x7f
// 004cd058  03c2                 add eax, edx
// 004cd05a  55                   push ebp
// 004cd05b  8be8                 mov ebp, eax
// 004cd05d  0fb603               movzx eax, byte ptr [ebx]
// 004cd060  c1fd07               sar ebp, 7
// 004cd063  83e801               sub eax, 1
// 004cd066  56                   push esi
// 004cd067  896c2410             mov dword ptr [esp + 0x10], ebp
// 004cd06b  0f849c020000         je 0x4cd30d
// 004cd071  83e801               sub eax, 1
// 004cd074  0f8400020000         je 0x4cd27a
// 004cd07a  83e801               sub eax, 1
// 004cd07d  7418                 je 0x4cd097
// 004cd07f  5e                   pop esi
// 004cd080  5d                   pop ebp
// 004cd081  5f                   pop edi
// 004cd082  b8fbffffff           mov eax, 0xfffffffb
// 004cd087  5b                   pop ebx
// 004cd088  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cd08c  33cc                 xor ecx, esp
// 004cd08e  e88b391600           call 0x630a1e
// 004cd093  83c430               add esp, 0x30
// 004cd096  c3                   ret 
// 004cd097  85ed                 test ebp, ebp
// 004cd099  8b4301               mov eax, dword ptr [ebx + 1]
// 004cd09c  8b5305               mov edx, dword ptr [ebx + 5]
// 004cd09f  8944241c             mov dword ptr [esp + 0x1c], eax
// 004cd0a3  8b4309               mov eax, dword ptr [ebx + 9]
// 004cd0a6  89542420             mov dword ptr [esp + 0x20], edx
// 004cd0aa  8b530d               mov edx, dword ptr [ebx + 0xd]
// 004cd0ad  89442424             mov dword ptr [esp + 0x24], eax
// 004cd0b1  89542428             mov dword ptr [esp + 0x28], edx
// 004cd0b5  896c2418             mov dword ptr [esp + 0x18], ebp
// 004cd0b9  0f8ea3010000         jle 0x4cd262
// 004cd0bf  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 004cd0c3  83c130               add ecx, 0x30
// 004cd0c6  894c2414             mov dword ptr [esp + 0x14], ecx
// 004cd0ca  8d9b00000000         lea ebx, [ebx]
// 004cd0d0  33f6                 xor esi, esi
// 004cd0d2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004cd0d6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 004cd0da  8b542424             mov edx, dword ptr [esp + 0x24]
// 004cd0de  8a5c241d             mov bl, byte ptr [esp + 0x1d]
// 004cd0e2  8944242c             mov dword ptr [esp + 0x2c], eax
// 004cd0e6  8b442428             mov eax, dword ptr [esp + 0x28]
// 004cd0ea  894c2430             mov dword ptr [esp + 0x30], ecx
// 004cd0ee  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004cd0f2  89542434             mov dword ptr [esp + 0x34], edx
// 004cd0f6  51                   push ecx
// 004cd0f7  8d542430             lea edx, [esp + 0x30]
// 004cd0fb  8944243c             mov dword ptr [esp + 0x3c], eax
// 004cd0ff  52                   push edx
// 004cd100  8bc2                 mov eax, edx
// 004cd102  50                   push eax
// 004cd103  e828f2ffff           call 0x4cc330
// 004cd108  8a542428             mov dl, byte ptr [esp + 0x28]
// 004cd10c  8a44242a             mov al, byte ptr [esp + 0x2a]
// 004cd110  02d2                 add dl, dl
// 004cd112  8acb                 mov cl, bl
// 004cd114  c0e907               shr cl, 7
// 004cd117  0aca                 or cl, dl
// 004cd119  884c2428             mov byte ptr [esp + 0x28], cl
// 004cd11d  8ac8                 mov cl, al
// 004cd11f  c0e907               shr cl, 7
// 004cd122  02db                 add bl, bl
// 004cd124  0acb                 or cl, bl
// 004cd126  884c2429             mov byte ptr [esp + 0x29], cl
// 004cd12a  8a4c242b             mov cl, byte ptr [esp + 0x2b]
// 004cd12e  8ad1                 mov dl, cl
// 004cd130  c0ea07               shr dl, 7
// 004cd133  02c0                 add al, al
// 004cd135  0ad0                 or dl, al
// 004cd137  8a44242c             mov al, byte ptr [esp + 0x2c]
// 004cd13b  8854242a             mov byte ptr [esp + 0x2a], dl
// 004cd13f  8ad0                 mov dl, al
// 004cd141  c0ea07               shr dl, 7
// 004cd144  02c9                 add cl, cl
// 004cd146  0ad1                 or dl, cl
// 004cd148  8a4c242d             mov cl, byte ptr [esp + 0x2d]
// 004cd14c  8854242b             mov byte ptr [esp + 0x2b], dl
// 004cd150  8ad1                 mov dl, cl
// 004cd152  c0ea07               shr dl, 7
// 004cd155  02c0                 add al, al
// 004cd157  0ad0                 or dl, al
// 004cd159  8a44242e             mov al, byte ptr [esp + 0x2e]
// 004cd15d  8854242c             mov byte ptr [esp + 0x2c], dl
// 004cd161  8ad0                 mov dl, al
// 004cd163  c0ea07               shr dl, 7
// 004cd166  02c9                 add cl, cl
// 004cd168  0ad1                 or dl, cl
// 004cd16a  8a4c242f             mov cl, byte ptr [esp + 0x2f]
// 004cd16e  8854242d             mov byte ptr [esp + 0x2d], dl
// 004cd172  8ad1                 mov dl, cl
// 004cd174  c0ea07               shr dl, 7
// 004cd177  02c0                 add al, al
// 004cd179  0ad0                 or dl, al
// 004cd17b  8a442430             mov al, byte ptr [esp + 0x30]
// 004cd17f  8854242e             mov byte ptr [esp + 0x2e], dl
// 004cd183  8ad0                 mov dl, al
// 004cd185  c0ea07               shr dl, 7
// 004cd188  02c9                 add cl, cl
// 004cd18a  0ad1                 or dl, cl
// 004cd18c  8a4c2431             mov cl, byte ptr [esp + 0x31]
// 004cd190  8854242f             mov byte ptr [esp + 0x2f], dl
// 004cd194  8ad1                 mov dl, cl
// 004cd196  c0ea07               shr dl, 7
// 004cd199  02c0                 add al, al
// 004cd19b  0ad0                 or dl, al
// 004cd19d  8a442432             mov al, byte ptr [esp + 0x32]
// 004cd1a1  88542430             mov byte ptr [esp + 0x30], dl
// 004cd1a5  8ad0                 mov dl, al
// 004cd1a7  c0ea07               shr dl, 7
// 004cd1aa  02c9                 add cl, cl
// 004cd1ac  0ad1                 or dl, cl
// 004cd1ae  8a4c2433             mov cl, byte ptr [esp + 0x33]
// 004cd1b2  88542431             mov byte ptr [esp + 0x31], dl
// 004cd1b6  8ad1                 mov dl, cl
// 004cd1b8  83c40c               add esp, 0xc
// 004cd1bb  c0ea07               shr dl, 7
// 004cd1be  02c0                 add al, al
// 004cd1c0  0ad0                 or dl, al
// 004cd1c2  8a442428             mov al, byte ptr [esp + 0x28]
// 004cd1c6  88542426             mov byte ptr [esp + 0x26], dl
// 004cd1ca  02c9                 add cl, cl
// 004cd1cc  8ad0                 mov dl, al
// 004cd1ce  c0ea07               shr dl, 7
// 004cd1d1  0ad1                 or dl, cl
// 004cd1d3  8a4c2429             mov cl, byte ptr [esp + 0x29]
// 004cd1d7  88542427             mov byte ptr [esp + 0x27], dl
// 004cd1db  8ad1                 mov dl, cl
// 004cd1dd  c0ea07               shr dl, 7
// 004cd1e0  02c0                 add al, al
// 004cd1e2  0ad0                 or dl, al
// 004cd1e4  8a44242a             mov al, byte ptr [esp + 0x2a]
// 004cd1e8  02c9                 add cl, cl
// 004cd1ea  88542428             mov byte ptr [esp + 0x28], dl
// 004cd1ee  8ad0                 mov dl, al
// 004cd1f0  c0ea07               shr dl, 7
// 004cd1f3  0ad1                 or dl, cl
// 004cd1f5  0fb64c242b           movzx ecx, byte ptr [esp + 0x2b]
// 004cd1fa  c0e907               shr cl, 7
// 004cd1fd  02c0                 add al, al
// 004cd1ff  0ac8                 or cl, al
// 004cd201  884c242a             mov byte ptr [esp + 0x2a], cl
// 004cd205  8bc6                 mov eax, esi
// 004cd207  88542429             mov byte ptr [esp + 0x29], dl
// 004cd20b  c1e803               shr eax, 3
// 004cd20e  0fb61c28             movzx ebx, byte ptr [eax + ebp]
// 004cd212  8bd6                 mov edx, esi
// 004cd214  83e207               and edx, 7
// 004cd217  b107                 mov cl, 7
// 004cd219  2aca                 sub cl, dl
// 004cd21b  d2eb                 shr bl, cl
// 004cd21d  0fb64c242b           movzx ecx, byte ptr [esp + 0x2b]
// 004cd222  80e301               and bl, 1
// 004cd225  02c9                 add cl, cl
// 004cd227  0ad9                 or bl, cl
// 004cd229  885c242b             mov byte ptr [esp + 0x2b], bl
// 004cd22d  0fb65c242c           movzx ebx, byte ptr [esp + 0x2c]
// 004cd232  80e380               and bl, 0x80
// 004cd235  8aca                 mov cl, dl
// 004cd237  d2eb                 shr bl, cl
// 004cd239  83c601               add esi, 1
// 004cd23c  301c38               xor byte ptr [eax + edi], bl
// 004cd23f  81fe80000000         cmp esi, 0x80
// 004cd245  0f8c87feffff         jl 0x4cd0d2
// 004cd24b  8b442418             mov eax, dword ptr [esp + 0x18]
// 004cd24f  83e801               sub eax, 1
// 004cd252  85c0                 test eax, eax
// 004cd254  89442418             mov dword ptr [esp + 0x18], eax
// 004cd258  0f8f72feffff         jg 0x4cd0d0
// 004cd25e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004cd262  5e                   pop esi
// 004cd263  8bc5                 mov eax, ebp
// 004cd265  5d                   pop ebp
// 004cd266  5f                   pop edi
// 004cd267  c1e007               shl eax, 7
// 004cd26a  5b                   pop ebx
// 004cd26b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004cd26f  33cc                 xor ecx, esp
// 004cd271  e8a8371600           call 0x630a1e
// 004cd276  83c430               add esp, 0x30
// 004cd279  c3                   ret 
// 004cd27a  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 004cd27e  8d6930               lea ebp, [ecx + 0x30]
// 004cd281  55                   push ebp
// 004cd282  8d542430             lea edx, [esp + 0x30]
// 004cd286  52                   push edx
// 004cd287  56                   push esi
// 004cd288  e893f4ffff           call 0x4cc720
// 004cd28d  8b4301               mov eax, dword ptr [ebx + 1]
// 004cd290  33442438             xor eax, dword ptr [esp + 0x38]
// 004cd294  83c40c               add esp, 0xc
// 004cd297  8907                 mov dword ptr [edi], eax
// 004cd299  8b4b05               mov ecx, dword ptr [ebx + 5]
// 004cd29c  334c2430             xor ecx, dword ptr [esp + 0x30]
// 004cd2a0  894f04               mov dword ptr [edi + 4], ecx
// 004cd2a3  8b5309               mov edx, dword ptr [ebx + 9]
// 004cd2a6  33542434             xor edx, dword ptr [esp + 0x34]
// 004cd2aa  895708               mov dword ptr [edi + 8], edx
// 004cd2ad  8b430d               mov eax, dword ptr [ebx + 0xd]
// 004cd2b0  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004cd2b4  33442438             xor eax, dword ptr [esp + 0x38]
// 004cd2b8  83c3ff               add ebx, -1
// 004cd2bb  85db                 test ebx, ebx
// 004cd2bd  89470c               mov dword ptr [edi + 0xc], eax
// 004cd2c0  7e9c                 jle 0x4cd25e
// 004cd2c2  83c714               add edi, 0x14
// 004cd2c5  55                   push ebp
// 004cd2c6  8d4c2430             lea ecx, [esp + 0x30]
// 004cd2ca  51                   push ecx
// 004cd2cb  56                   push esi
// 004cd2cc  e84ff4ffff           call 0x4cc720
// 004cd2d1  8b56f0               mov edx, dword ptr [esi - 0x10]
// 004cd2d4  33542438             xor edx, dword ptr [esp + 0x38]
// 004cd2d8  83eb01               sub ebx, 1
// 004cd2db  8957fc               mov dword ptr [edi - 4], edx
// 004cd2de  8b46f4               mov eax, dword ptr [esi - 0xc]
// 004cd2e1  3344243c             xor eax, dword ptr [esp + 0x3c]
// 004cd2e5  83c40c               add esp, 0xc
// 004cd2e8  8907                 mov dword ptr [edi], eax
// 004cd2ea  8b4ef8               mov ecx, dword ptr [esi - 8]
// 004cd2ed  334c2434             xor ecx, dword ptr [esp + 0x34]
// 004cd2f1  83c610               add esi, 0x10
// 004cd2f4  894f04               mov dword ptr [edi + 4], ecx
// 004cd2f7  8b56ec               mov edx, dword ptr [esi - 0x14]
// 004cd2fa  33542438             xor edx, dword ptr [esp + 0x38]
// 004cd2fe  83c710               add edi, 0x10
// 004cd301  85db                 test ebx, ebx
// 004cd303  8957f8               mov dword ptr [edi - 8], edx
// 004cd306  7fbd                 jg 0x4cd2c5
// 004cd308  e951ffffff           jmp 0x4cd25e
// 004cd30d  85ed                 test ebp, ebp
// 004cd30f  8bf5                 mov esi, ebp
// 004cd311  0f8e4bffffff         jle 0x4cd262
// 004cd317  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 004cd31b  83c130               add ecx, 0x30
// 004cd31e  894c2414             mov dword ptr [esp + 0x14], ecx
// 004cd322  8b442414             mov eax, dword ptr [esp + 0x14]
// 004cd326  50                   push eax
// 004cd327  57                   push edi
// 004cd328  53                   push ebx
// 004cd329  e8f2f3ffff           call 0x4cc720
// 004cd32e  83ee01               sub esi, 1
// 004cd331  83c40c               add esp, 0xc
// 004cd334  83c310               add ebx, 0x10
// 004cd337  83c710               add edi, 0x10
// 004cd33a  85f6                 test esi, esi
// 004cd33c  7fe4                 jg 0x4cd322
// 004cd33e  e91fffffff           jmp 0x4cd262
// 004cd343  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 004cd347  5f                   pop edi
// 004cd348  5b                   pop ebx
// 004cd349  33cc                 xor ecx, esp
// 004cd34b  b8fbffffff           mov eax, 0xfffffffb
// 004cd350  e8c9361600           call 0x630a1e
// 004cd355  83c430               add esp, 0x30
// 004cd358  c3                   ret 

// from server: 22% by colin
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet rijndael.cpp