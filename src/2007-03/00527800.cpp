// roc 2007-03 00527800  unit: seg_00520000  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527800
//
// 00527800  83ec14               sub esp, 0x14
// 00527803  53                   push ebx
// 00527804  55                   push ebp
// 00527805  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00527809  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0052780c  8b8538010000         mov eax, dword ptr [ebp + 0x138]
// 00527812  8b11                 mov edx, dword ptr [ecx]
// 00527814  8b9d30010000         mov ebx, dword ptr [ebp + 0x130]
// 0052781a  56                   push esi
// 0052781b  57                   push edi
// 0052781c  8bbd5c010000         mov edi, dword ptr [ebp + 0x15c]
// 00527822  895710               mov dword ptr [edi + 0x10], edx
// 00527825  89442410             mov dword ptr [esp + 0x10], eax
// 00527829  8b4518               mov eax, dword ptr [ebp + 0x18]
// 0052782c  8b4804               mov ecx, dword ptr [eax + 4]
// 0052782f  894f14               mov dword ptr [edi + 0x14], ecx
// 00527832  83bdbc00000000       cmp dword ptr [ebp + 0xbc], 0
// 00527839  895c2420             mov dword ptr [esp + 0x20], ebx
// 0052783d  7414                 je 0x527853
// 0052783f  837f4400             cmp dword ptr [edi + 0x44], 0
// 00527843  750e                 jne 0x527853
// 00527845  8b5748               mov edx, dword ptr [edi + 0x48]
// 00527848  52                   push edx
// 00527849  8bc7                 mov eax, edi
// 0052784b  e8d0fdffff           call 0x527620
// 00527850  83c404               add esp, 4
// 00527853  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00527857  8b08                 mov ecx, dword ptr [eax]
// 00527859  8b852c010000         mov eax, dword ptr [ebp + 0x12c]
// 0052785f  33f6                 xor esi, esi
// 00527861  3bc3                 cmp eax, ebx
// 00527863  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00527867  89442418             mov dword ptr [esp + 0x18], eax
// 0052786b  0f8f10010000         jg 0x527981
// 00527871  8b1485202c7a00       mov edx, dword ptr [eax*4 + 0x7a2c20]
// 00527878  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0052787c  0fbf1c51             movsx ebx, word ptr [ecx + edx*2]
// 00527880  85db                 test ebx, ebx
// 00527882  7508                 jne 0x52788c
// 00527884  83c601               add esi, 1
// 00527887  e9cc000000           jmp 0x527958
// 0052788c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00527890  7d0e                 jge 0x5278a0
// 00527892  f7db                 neg ebx
// 00527894  d3fb                 sar ebx, cl
// 00527896  8bcb                 mov ecx, ebx
// 00527898  f7d1                 not ecx
// 0052789a  894c2414             mov dword ptr [esp + 0x14], ecx
// 0052789e  eb06                 jmp 0x5278a6
// 005278a0  d3fb                 sar ebx, cl
// 005278a2  895c2414             mov dword ptr [esp + 0x14], ebx
// 005278a6  85db                 test ebx, ebx
// 005278a8  7508                 jne 0x5278b2
// 005278aa  83c601               add esi, 1
// 005278ad  e9a6000000           jmp 0x527958
// 005278b2  837f3800             cmp dword ptr [edi + 0x38], 0
// 005278b6  7607                 jbe 0x5278bf
// 005278b8  8bc7                 mov eax, edi
// 005278ba  e8e1fcffff           call 0x5275a0
// 005278bf  83fe0f               cmp esi, 0xf
// 005278c2  7e34                 jle 0x5278f8
// 005278c4  8d6ef0               lea ebp, [esi - 0x10]
// 005278c7  c1ed04               shr ebp, 4
// 005278ca  83c501               add ebp, 1
// 005278cd  8bd5                 mov edx, ebp
// 005278cf  f7da                 neg edx
// 005278d1  c1e204               shl edx, 4
// 005278d4  03f2                 add esi, edx
// 005278d6  8974242c             mov dword ptr [esp + 0x2c], esi
// 005278da  8d9b00000000         lea ebx, [ebx]
// 005278e0  8b4734               mov eax, dword ptr [edi + 0x34]
// 005278e3  bef0000000           mov esi, 0xf0
// 005278e8  8bcf                 mov ecx, edi
// 005278ea  e851fcffff           call 0x527540
// 005278ef  83ed01               sub ebp, 1
// 005278f2  75ec                 jne 0x5278e0
// 005278f4  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 005278f8  d1fb                 sar ebx, 1
// 005278fa  bd01000000           mov ebp, 1
// 005278ff  7423                 je 0x527924
// 00527901  83c501               add ebp, 1
// 00527904  d1fb                 sar ebx, 1
// 00527906  75f9                 jne 0x527901
// 00527908  83fd0a               cmp ebp, 0xa
// 0052790b  7e17                 jle 0x527924
// 0052790d  8b442428             mov eax, dword ptr [esp + 0x28]
// 00527911  8b08                 mov ecx, dword ptr [eax]
// 00527913  c7411406000000       mov dword ptr [ecx + 0x14], 6
// 0052791a  8b10                 mov edx, dword ptr [eax]
// 0052791c  50                   push eax
// 0052791d  8b02                 mov eax, dword ptr [edx]
// 0052791f  ffd0                 call eax
// 00527921  83c404               add esp, 4
// 00527924  8b4734               mov eax, dword ptr [edi + 0x34]
// 00527927  c1e604               shl esi, 4
// 0052792a  03f5                 add esi, ebp
// 0052792c  8bcf                 mov ecx, edi
// 0052792e  e80dfcffff           call 0x527540
// 00527933  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00527937  51                   push ecx
// 00527938  8bc5                 mov eax, ebp
// 0052793a  8bcf                 mov ecx, edi
// 0052793c  e81ffbffff           call 0x527460
// 00527941  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00527945  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00527949  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00527951  8b742430             mov esi, dword ptr [esp + 0x30]
// 00527955  83c404               add esp, 4
// 00527958  83c001               add eax, 1
// 0052795b  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0052795f  89442418             mov dword ptr [esp + 0x18], eax
// 00527963  0f8e08ffffff         jle 0x527871
// 00527969  85f6                 test esi, esi
// 0052796b  7e14                 jle 0x527981
// 0052796d  83473801             add dword ptr [edi + 0x38], 1
// 00527971  817f38ff7f0000       cmp dword ptr [edi + 0x38], 0x7fff
// 00527978  7507                 jne 0x527981
// 0052797a  8bc7                 mov eax, edi
// 0052797c  e81ffcffff           call 0x5275a0
// 00527981  8b5518               mov edx, dword ptr [ebp + 0x18]
// 00527984  8b4710               mov eax, dword ptr [edi + 0x10]
// 00527987  8902                 mov dword ptr [edx], eax
// 00527989  8b4d18               mov ecx, dword ptr [ebp + 0x18]
// 0052798c  8b5714               mov edx, dword ptr [edi + 0x14]
// 0052798f  895104               mov dword ptr [ecx + 4], edx
// 00527992  8badbc000000         mov ebp, dword ptr [ebp + 0xbc]
// 00527998  85ed                 test ebp, ebp
// 0052799a  7419                 je 0x5279b5
// 0052799c  837f4400             cmp dword ptr [edi + 0x44], 0
// 005279a0  750f                 jne 0x5279b1
// 005279a2  8b4748               mov eax, dword ptr [edi + 0x48]
// 005279a5  83c001               add eax, 1
// 005279a8  83e007               and eax, 7
// 005279ab  896f44               mov dword ptr [edi + 0x44], ebp
// 005279ae  894748               mov dword ptr [edi + 0x48], eax
// 005279b1  834744ff             add dword ptr [edi + 0x44], -1
// 005279b5  5f                   pop edi
// 005279b6  5e                   pop esi
// 005279b7  5d                   pop ebp
// 005279b8  b001                 mov al, 1
// 005279ba  5b                   pop ebx
// 005279bb  83c414               add esp, 0x14
// 005279be  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_first)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
