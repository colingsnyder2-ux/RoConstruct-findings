// roc 2009-12 008a0070  unit: CXTPReportPaintManager  size: 2184 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a0070
//
// 008a0070  83ec50               sub esp, 0x50
// 008a0073  a10052b600           mov eax, dword ptr [0xb65200]
// 008a0078  33c4                 xor eax, esp
// 008a007a  8944244c             mov dword ptr [esp + 0x4c], eax
// 008a007e  53                   push ebx
// 008a007f  55                   push ebp
// 008a0080  56                   push esi
// 008a0081  57                   push edi
// 008a0082  8bf1                 mov esi, ecx
// 008a0084  e81715f9ff           call 0x8315a0
// 008a0089  e842f9f8ff           call 0x82f9d0
// 008a008e  6a0f                 push 0xf
// 008a0090  8bc8                 mov ecx, eax
// 008a0092  e869f0f8ff           call 0x82f100
// 008a0097  89861c010000         mov dword ptr [esi + 0x11c], eax
// 008a009d  e82ef9f8ff           call 0x82f9d0
// 008a00a2  6a12                 push 0x12
// 008a00a4  8bc8                 mov ecx, eax
// 008a00a6  e855f0f8ff           call 0x82f100
// 008a00ab  898628010000         mov dword ptr [esi + 0x128], eax
// 008a00b1  e81af9f8ff           call 0x82f9d0
// 008a00b6  6a10                 push 0x10
// 008a00b8  8bc8                 mov ecx, eax
// 008a00ba  e841f0f8ff           call 0x82f100
// 008a00bf  8986d4000000         mov dword ptr [esi + 0xd4], eax
// 008a00c5  e806f9f8ff           call 0x82f9d0
// 008a00ca  6a0d                 push 0xd
// 008a00cc  8bc8                 mov ecx, eax
// 008a00ce  e82df0f8ff           call 0x82f100
// 008a00d3  894644               mov dword ptr [esi + 0x44], eax
// 008a00d6  e8f5f8f8ff           call 0x82f9d0
// 008a00db  6a0e                 push 0xe
// 008a00dd  8bc8                 mov ecx, eax
// 008a00df  e81cf0f8ff           call 0x82f100
// 008a00e4  894668               mov dword ptr [esi + 0x68], eax
// 008a00e7  e8e4f8f8ff           call 0x82f9d0
// 008a00ec  6a08                 push 8
// 008a00ee  8bc8                 mov ecx, eax
// 008a00f0  e80bf0f8ff           call 0x82f100
// 008a00f5  89465c               mov dword ptr [esi + 0x5c], eax
// 008a00f8  e8d3f8f8ff           call 0x82f9d0
// 008a00fd  6a14                 push 0x14
// 008a00ff  8bc8                 mov ecx, eax
// 008a0101  e8faeff8ff           call 0x82f100
// 008a0106  8986e0000000         mov dword ptr [esi + 0xe0], eax
// 008a010c  e8bff8f8ff           call 0x82f9d0
// 008a0111  6a05                 push 5
// 008a0113  8bc8                 mov ecx, eax
// 008a0115  e8e6eff8ff           call 0x82f100
// 008a011a  89868c000000         mov dword ptr [esi + 0x8c], eax
// 008a0120  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008a0126  83f8ff               cmp eax, -1
// 008a0129  7506                 jne 0x8a0131
// 008a012b  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008a0131  898604010000         mov dword ptr [esi + 0x104], eax
// 008a0137  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008a013d  83f8ff               cmp eax, -1
// 008a0140  7506                 jne 0x8a0148
// 008a0142  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 008a0148  898680000000         mov dword ptr [esi + 0x80], eax
// 008a014e  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008a0154  83f8ff               cmp eax, -1
// 008a0157  7506                 jne 0x8a015f
// 008a0159  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008a015f  894650               mov dword ptr [esi + 0x50], eax
// 008a0162  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008a0168  83f8ff               cmp eax, -1
// 008a016b  7506                 jne 0x8a0173
// 008a016d  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008a0173  894674               mov dword ptr [esi + 0x74], eax
// 008a0176  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008a017c  83f8ff               cmp eax, -1
// 008a017f  7506                 jne 0x8a0187
// 008a0181  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008a0187  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 008a018d  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008a0193  83f8ff               cmp eax, -1
// 008a0196  7506                 jne 0x8a019e
// 008a0198  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008a019e  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008a01a4  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008a01aa  83f8ff               cmp eax, -1
// 008a01ad  7506                 jne 0x8a01b5
// 008a01af  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 008a01b5  8986b0000000         mov dword ptr [esi + 0xb0], eax
// 008a01bb  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008a01c1  83f8ff               cmp eax, -1
// 008a01c4  7506                 jne 0x8a01cc
// 008a01c6  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008a01cc  898698000000         mov dword ptr [esi + 0x98], eax
// 008a01d2  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008a01d8  83f8ff               cmp eax, -1
// 008a01db  7506                 jne 0x8a01e3
// 008a01dd  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008a01e3  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008a01e9  8b8620010000         mov eax, dword ptr [esi + 0x120]
// 008a01ef  83f8ff               cmp eax, -1
// 008a01f2  7506                 jne 0x8a01fa
// 008a01f4  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 008a01fa  898640010000         mov dword ptr [esi + 0x140], eax
// 008a0200  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 008a0206  83f8ff               cmp eax, -1
// 008a0209  7506                 jne 0x8a0211
// 008a020b  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 008a0211  89864c010000         mov dword ptr [esi + 0x14c], eax
// 008a0217  c786f80000000000ff00 mov dword ptr [esi + 0xf8], 0xff0000
// 008a0221  c78610010000f5f5f500 mov dword ptr [esi + 0x110], 0xf5f5f5
// 008a022b  c786ec000000ff000000 mov dword ptr [esi + 0xec], 0xff
// 008a0235  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008a023b  83f8ff               cmp eax, -1
// 008a023e  7506                 jne 0x8a0246
// 008a0240  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008a0246  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 008a024c  8b86d8000000         mov eax, dword ptr [esi + 0xd8]
// 008a0252  83f8ff               cmp eax, -1
// 008a0255  7506                 jne 0x8a025d
// 008a0257  8b86d4000000         mov eax, dword ptr [esi + 0xd4]
// 008a025d  68b053a000           push 0xa053b0
// 008a0262  6a00                 push 0
// 008a0264  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 008a026a  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008a0270  e88bbafcff           call 0x86bd00
// 008a0275  6820299f00           push 0x9f2920
// 008a027a  6a00                 push 0
// 008a027c  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 008a0282  e879bafcff           call 0x86bd00
// 008a0287  68c42ba000           push 0xa02bc4
// 008a028c  6a00                 push 0
// 008a028e  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 008a0294  e867bafcff           call 0x86bd00
// 008a0299  e832f7f8ff           call 0x82f9d0
// 008a029e  8bc8                 mov ecx, eax
// 008a02a0  e83bf1f8ff           call 0x82f3e0
// 008a02a5  bbafba9100           mov ebx, 0x91baaf
// 008a02aa  bfe5e5eb00           mov edi, 0xebe5e5
// 008a02af  bdbedafb00           mov ebp, 0xfbdabe
// 008a02b4  85c0                 test eax, eax
// 008a02b6  0f8586000000         jne 0x8a0342
// 008a02bc  e80ff7f8ff           call 0x82f9d0
// 008a02c1  8bc8                 mov ecx, eax
// 008a02c3  e868f4f8ff           call 0x82f730
// 008a02c8  48                   dec eax
// 008a02c9  83f804               cmp eax, 4
// 008a02cc  7774                 ja 0x8a0342
// 008a02ce  ff2485d0088a00       jmp dword ptr [eax*4 + 0x8a08d0]
// 008a02d5  c786bc0000007ba4e000 mov dword ptr [esi + 0xbc], 0xe0a47b
// 008a02df  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 008a02e5  c786980000003768b900 mov dword ptr [esi + 0x98], 0xb96837
// 008a02ef  c74650eae9e100       mov dword ptr [esi + 0x50], 0xe1e9ea
// 008a02f6  eb40                 jmp 0x8a0338
// 008a02f8  c786bc000000b5c48f00 mov dword ptr [esi + 0xbc], 0x8fc4b5
// 008a0302  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 008a0308  c7869800000073895400 mov dword ptr [esi + 0x98], 0x548973
// 008a0312  c74650eae9e100       mov dword ptr [esi + 0x50], 0xe1e9ea
// 008a0319  eb1d                 jmp 0x8a0338
// 008a031b  c786bc000000a5a4bd00 mov dword ptr [esi + 0xbc], 0xbda4a5
// 008a0325  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008a032b  c78698000000706f9100 mov dword ptr [esi + 0x98], 0x916f70
// 008a0335  897e50               mov dword ptr [esi + 0x50], edi
// 008a0338  c78604010000fdeec900 mov dword ptr [esi + 0x104], 0xc9eefd
// 008a0342  8b86bc020000         mov eax, dword ptr [esi + 0x2bc]
// 008a0348  83f804               cmp eax, 4
// 008a034b  0f8565030000         jne 0x8a06b6
// 008a0351  83befc010000ff       cmp dword ptr [esi + 0x1fc], -1
// 008a0358  0f84d8010000         je 0x8a0536
// 008a035e  e83dcffaff           call 0x84d2a0
// 008a0363  8b86fc010000         mov eax, dword ptr [esi + 0x1fc]
// 008a0369  50                   push eax
// 008a036a  e821a1faff           call 0x84a490
// 008a036f  8bd8                 mov ebx, eax
// 008a0371  89442418             mov dword ptr [esp + 0x18], eax
// 008a0375  c1eb08               shr ebx, 8
// 008a0378  e823cffaff           call 0x84d2a0
// 008a037d  e81ecffaff           call 0x84d2a0
// 008a0382  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a0388  0fb6fb               movzx edi, bl
// 008a038b  d91c24               fstp dword ptr [esp]
// 008a038e  0fb65c2418           movzx ebx, byte ptr [esp + 0x18]
// 008a0393  8bef                 mov ebp, edi
// 008a0395  81cd00ef0000         or ebp, 0xef00
// 008a039b  8bc7                 mov eax, edi
// 008a039d  0d00d40000           or eax, 0xd400
// 008a03a2  c1e508               shl ebp, 8
// 008a03a5  c1e008               shl eax, 8
// 008a03a8  0beb                 or ebp, ebx
// 008a03aa  0bc3                 or eax, ebx
// 008a03ac  55                   push ebp
// 008a03ad  897c2418             mov dword ptr [esp + 0x18], edi
// 008a03b1  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a03b5  e816a3faff           call 0x84a6d0
// 008a03ba  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008a03be  83c404               add esp, 4
// 008a03c1  50                   push eax
// 008a03c2  51                   push ecx
// 008a03c3  e808a3faff           call 0x84a6d0
// 008a03c8  83c404               add esp, 4
// 008a03cb  50                   push eax
// 008a03cc  8d8e94010000         lea ecx, [esi + 0x194]
// 008a03d2  e889eaf8ff           call 0x82ee60
// 008a03d7  e8c4cefaff           call 0x84d2a0
// 008a03dc  e8bfcefaff           call 0x84d2a0
// 008a03e1  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a03e7  8b542414             mov edx, dword ptr [esp + 0x14]
// 008a03eb  51                   push ecx
// 008a03ec  d91c24               fstp dword ptr [esp]
// 008a03ef  52                   push edx
// 008a03f0  e8dba2faff           call 0x84a6d0
// 008a03f5  83c404               add esp, 4
// 008a03f8  50                   push eax
// 008a03f9  55                   push ebp
// 008a03fa  e8d1a2faff           call 0x84a6d0
// 008a03ff  83c404               add esp, 4
// 008a0402  50                   push eax
// 008a0403  8d8e54010000         lea ecx, [esi + 0x154]
// 008a0409  e852eaf8ff           call 0x82ee60
// 008a040e  e88dcefaff           call 0x84d2a0
// 008a0413  db442410             fild dword ptr [esp + 0x10]
// 008a0417  d97c2414             fnstcw word ptr [esp + 0x14]
// 008a041b  0fb7442414           movzx eax, word ptr [esp + 0x14]
// 008a0420  dd542418             fst qword ptr [esp + 0x18]
// 008a0424  dc0da853a000         fmul qword ptr [0xa053a8]
// 008a042a  0d000c0000           or eax, 0xc00
// 008a042f  89442410             mov dword ptr [esp + 0x10], eax
// 008a0433  d96c2410             fldcw word ptr [esp + 0x10]
// 008a0437  db5c2410             fistp dword ptr [esp + 0x10]
// 008a043b  0fb6442410           movzx eax, byte ptr [esp + 0x10]
// 008a0440  0fb6c8               movzx ecx, al
// 008a0443  d96c2414             fldcw word ptr [esp + 0x14]
// 008a0447  81c900910000         or ecx, 0x9100
// 008a044d  c1e108               shl ecx, 8
// 008a0450  0bcb                 or ecx, ebx
// 008a0452  51                   push ecx
// 008a0453  e878a2faff           call 0x84a6d0
// 008a0458  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 008a045e  e83dcefaff           call 0x84d2a0
// 008a0463  8bd7                 mov edx, edi
// 008a0465  81ca00c00000         or edx, 0xc000
// 008a046b  c1e208               shl edx, 8
// 008a046e  0bd3                 or edx, ebx
// 008a0470  52                   push edx
// 008a0471  e85aa2faff           call 0x84a6d0
// 008a0476  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008a047c  e81fcefaff           call 0x84d2a0
// 008a0481  81cf00e30000         or edi, 0xe300
// 008a0487  c1e708               shl edi, 8
// 008a048a  0bfb                 or edi, ebx
// 008a048c  57                   push edi
// 008a048d  e83ea2faff           call 0x84a6d0
// 008a0492  8986c8000000         mov dword ptr [esi + 0xc8], eax
// 008a0498  e803cefaff           call 0x84d2a0
// 008a049d  dd442424             fld qword ptr [esp + 0x24]
// 008a04a1  dc0d78329f00         fmul qword ptr [0x9f3278]
// 008a04a7  d97c2420             fnstcw word ptr [esp + 0x20]
// 008a04ab  0fb7442420           movzx eax, word ptr [esp + 0x20]
// 008a04b0  0d000c0000           or eax, 0xc00
// 008a04b5  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a04b9  d96c241c             fldcw word ptr [esp + 0x1c]
// 008a04bd  db5c241c             fistp dword ptr [esp + 0x1c]
// 008a04c1  0fb644241c           movzx eax, byte ptr [esp + 0x1c]
// 008a04c6  0fb6c8               movzx ecx, al
// 008a04c9  d96c2420             fldcw word ptr [esp + 0x20]
// 008a04cd  81c9004f0000         or ecx, 0x4f00
// 008a04d3  c1e108               shl ecx, 8
// 008a04d6  0bcb                 or ecx, ebx
// 008a04d8  51                   push ecx
// 008a04d9  e8f2a1faff           call 0x84a6d0
// 008a04de  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 008a04e4  e8b7cdfaff           call 0x84d2a0
// 008a04e9  dd442428             fld qword ptr [esp + 0x28]
// 008a04ed  dc0da053a000         fmul qword ptr [0xa053a0]
// 008a04f3  d97c2424             fnstcw word ptr [esp + 0x24]
// 008a04f7  0fb7442424           movzx eax, word ptr [esp + 0x24]
// 008a04fc  0d000c0000           or eax, 0xc00
// 008a0501  89442420             mov dword ptr [esp + 0x20], eax
// 008a0505  d96c2420             fldcw word ptr [esp + 0x20]
// 008a0509  db5c2420             fistp dword ptr [esp + 0x20]
// 008a050d  8a542420             mov dl, byte ptr [esp + 0x20]
// 008a0511  0fb6c2               movzx eax, dl
// 008a0514  0d00d00000           or eax, 0xd000
// 008a0519  d96c2424             fldcw word ptr [esp + 0x24]
// 008a051d  c1e008               shl eax, 8
// 008a0520  0bc3                 or eax, ebx
// 008a0522  50                   push eax
// 008a0523  e8a8a1faff           call 0x84a6d0
// 008a0528  83c414               add esp, 0x14
// 008a052b  8986a4000000         mov dword ptr [esi + 0xa4], eax
// 008a0531  e93b010000           jmp 0x8a0671
// 008a0536  e895f4f8ff           call 0x82f9d0
// 008a053b  8bc8                 mov ecx, eax
// 008a053d  e8eef1f8ff           call 0x82f730
// 008a0542  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a0548  83e802               sub eax, 2
// 008a054b  51                   push ecx
// 008a054c  d91c24               fstp dword ptr [esp]
// 008a054f  8d8e94010000         lea ecx, [esi + 0x194]
// 008a0555  0f84ba000000         je 0x8a0615
// 008a055b  83e801               sub eax, 1
// 008a055e  7461                 je 0x8a05c1
// 008a0560  68fcfdff00           push 0xfffdfc
// 008a0565  68c4ddff00           push 0xffddc4
// 008a056a  e8f1e8f8ff           call 0x82ee60
// 008a056f  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a0575  8d8e54010000         lea ecx, [esi + 0x154]
// 008a057b  51                   push ecx
// 008a057c  d91c24               fstp dword ptr [esp]
// 008a057f  68c4ddff00           push 0xffddc4
// 008a0584  68fcfdff00           push 0xfffdfc
// 008a0589  e8d2e8f8ff           call 0x82ee60
// 008a058e  c786b80100006593cf00 mov dword ptr [esi + 0x1b8], 0xcf9365
// 008a0598  c786c40100009ac6ff00 mov dword ptr [esi + 0x1c4], 0xffc69a
// 008a05a2  c786c8000000e3efff00 mov dword ptr [esi + 0xc8], 0xffefe3
// 008a05ac  c786d0010000324b2c00 mov dword ptr [esi + 0x1d0], 0x2c4b32
// 008a05b6  89aea4000000         mov dword ptr [esi + 0xa4], ebp
// 008a05bc  e9b0000000           jmp 0x8a0671
// 008a05c1  68fdfdfd00           push 0xfdfdfd
// 008a05c6  68dddddd00           push 0xdddddd
// 008a05cb  e890e8f8ff           call 0x82ee60
// 008a05d0  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a05d6  8d8e54010000         lea ecx, [esi + 0x154]
// 008a05dc  51                   push ecx
// 008a05dd  d91c24               fstp dword ptr [esp]
// 008a05e0  68dddddd00           push 0xdddddd
// 008a05e5  68fdfdfd00           push 0xfdfdfd
// 008a05ea  e871e8f8ff           call 0x82ee60
// 008a05ef  c786b801000093939300 mov dword ptr [esi + 0x1b8], 0x939393
// 008a05f9  c786c4010000c6c6c600 mov dword ptr [esi + 0x1c4], 0xc6c6c6
// 008a0603  c786c8000000efefef00 mov dword ptr [esi + 0xc8], 0xefefef
// 008a060d  89bea4000000         mov dword ptr [esi + 0xa4], edi
// 008a0613  eb52                 jmp 0x8a0667
// 008a0615  68fdfdfd00           push 0xfdfdfd
// 008a061a  68a5b87200           push 0x72b8a5
// 008a061f  e83ce8f8ff           call 0x82ee60
// 008a0624  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a062a  8d8e54010000         lea ecx, [esi + 0x154]
// 008a0630  51                   push ecx
// 008a0631  d91c24               fstp dword ptr [esp]
// 008a0634  68a5b87200           push 0x72b8a5
// 008a0639  68fdfdfd00           push 0xfdfdfd
// 008a063e  e81de8f8ff           call 0x82ee60
// 008a0643  c786b801000060805800 mov dword ptr [esi + 0x1b8], 0x588060
// 008a064d  c786c401000078b76800 mov dword ptr [esi + 0x1c4], 0x68b778
// 008a0657  c786c8000000d8e1bb00 mov dword ptr [esi + 0xc8], 0xbbe1d8
// 008a0661  899ea4000000         mov dword ptr [esi + 0xa4], ebx
// 008a0667  c786d00100004a4a4a00 mov dword ptr [esi + 0x1d0], 0x4a4a4a
// 008a0671  8d8654010000         lea eax, [esi + 0x154]
// 008a0677  50                   push eax
// 008a0678  8d8e74010000         lea ecx, [esi + 0x174]
// 008a067e  e8fde7f8ff           call 0x82ee80
// 008a0683  8b86d4010000         mov eax, dword ptr [esi + 0x1d4]
// 008a0689  83f8ff               cmp eax, -1
// 008a068c  7506                 jne 0x8a0694
// 008a068e  8b86d0010000         mov eax, dword ptr [esi + 0x1d0]
// 008a0694  898698000000         mov dword ptr [esi + 0x98], eax
// 008a069a  8b86c8010000         mov eax, dword ptr [esi + 0x1c8]
// 008a06a0  83f8ff               cmp eax, -1
// 008a06a3  7506                 jne 0x8a06ab
// 008a06a5  8b86c4010000         mov eax, dword ptr [esi + 0x1c4]
// 008a06ab  8986bc000000         mov dword ptr [esi + 0xbc], eax
// 008a06b1  e9ac010000           jmp 0x8a0862
// 008a06b6  83f803               cmp eax, 3
// 008a06b9  0f85a3010000         jne 0x8a0862
// 008a06bf  e80cf3f8ff           call 0x82f9d0
// 008a06c4  6a0f                 push 0xf
// 008a06c6  8bc8                 mov ecx, eax
// 008a06c8  e833eaf8ff           call 0x82f100
// 008a06cd  8bd8                 mov ebx, eax
// 008a06cf  e8fcf2f8ff           call 0x82f9d0
// 008a06d4  6a05                 push 5
// 008a06d6  8bc8                 mov ecx, eax
// 008a06d8  e823eaf8ff           call 0x82f100
// 008a06dd  8be8                 mov ebp, eax
// 008a06df  e8ecf2f8ff           call 0x82f9d0
// 008a06e4  6a0f                 push 0xf
// 008a06e6  8bc8                 mov ecx, eax
// 008a06e8  e813eaf8ff           call 0x82f100
// 008a06ed  89442410             mov dword ptr [esp + 0x10], eax
// 008a06f1  e8daf2f8ff           call 0x82f9d0
// 008a06f6  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a06fc  51                   push ecx
// 008a06fd  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008a0701  d91c24               fstp dword ptr [esp]
// 008a0704  53                   push ebx
// 008a0705  68cd000000           push 0xcd
// 008a070a  55                   push ebp
// 008a070b  51                   push ecx
// 008a070c  8bc8                 mov ecx, eax
// 008a070e  8dbe54010000         lea edi, [esi + 0x154]
// 008a0714  e837e9f8ff           call 0x82f050
// 008a0719  50                   push eax
// 008a071a  8bcf                 mov ecx, edi
// 008a071c  e83fe7f8ff           call 0x82ee60
// 008a0721  e8aaf2f8ff           call 0x82f9d0
// 008a0726  6a1f                 push 0x1f
// 008a0728  8bc8                 mov ecx, eax
// 008a072a  8d9e74010000         lea ebx, [esi + 0x174]
// 008a0730  e8cbe9f8ff           call 0x82f100
// 008a0735  50                   push eax
// 008a0736  8bcb                 mov ecx, ebx
// 008a0738  e8e3f1f8ff           call 0x82f920
// 008a073d  e88ef2f8ff           call 0x82f9d0
// 008a0742  6a21                 push 0x21
// 008a0744  8bc8                 mov ecx, eax
// 008a0746  8dae94010000         lea ebp, [esi + 0x194]
// 008a074c  e8afe9f8ff           call 0x82f100
// 008a0751  50                   push eax
// 008a0752  8bcd                 mov ecx, ebp
// 008a0754  e8c7f1f8ff           call 0x82f920
// 008a0759  e872f2f8ff           call 0x82f9d0
// 008a075e  6a1e                 push 0x1e
// 008a0760  8bc8                 mov ecx, eax
// 008a0762  e899e9f8ff           call 0x82f100
// 008a0767  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 008a076d  e85ef2f8ff           call 0x82f9d0
// 008a0772  6a27                 push 0x27
// 008a0774  8bc8                 mov ecx, eax
// 008a0776  e885e9f8ff           call 0x82f100
// 008a077b  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008a0781  e84af2f8ff           call 0x82f9d0
// 008a0786  8bc8                 mov ecx, eax
// 008a0788  e8a3eff8ff           call 0x82f730
// 008a078d  48                   dec eax
// 008a078e  83f804               cmp eax, 4
// 008a0791  0f87cb000000         ja 0x8a0862
// 008a0797  ff2485e4088a00       jmp dword ptr [eax*4 + 0x8a08e4]
// 008a079e  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a07a4  51                   push ecx
// 008a07a5  d91c24               fstp dword ptr [esp]
// 008a07a8  6881a9e200           push 0xe2a981
// 008a07ad  68ddecfe00           push 0xfeecdd
// 008a07b2  8bcf                 mov ecx, edi
// 008a07b4  e8a7e6f8ff           call 0x82ee60
// 008a07b9  c786b80100003b619c00 mov dword ptr [esi + 0x1b8], 0x9c613b
// 008a07c3  c786c40100006a8ccb00 mov dword ptr [esi + 0x1c4], 0xcb8c6a
// 008a07cd  eb5d                 jmp 0x8a082c
// 008a07cf  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a07d5  51                   push ecx
// 008a07d6  d91c24               fstp dword ptr [esp]
// 008a07d9  68b7c69100           push 0x91c6b7
// 008a07de  68f4f7de00           push 0xdef7f4
// 008a07e3  8bcf                 mov ecx, edi
// 008a07e5  e876e6f8ff           call 0x82ee60
// 008a07ea  b860805800           mov eax, 0x588060
// 008a07ef  8986b8010000         mov dword ptr [esi + 0x1b8], eax
// 008a07f5  8986c4010000         mov dword ptr [esi + 0x1c4], eax
// 008a07fb  eb2f                 jmp 0x8a082c
// 008a07fd  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a0803  51                   push ecx
// 008a0804  d91c24               fstp dword ptr [esp]
// 008a0807  689997b500           push 0xb59799
// 008a080c  68f3f4fa00           push 0xfaf4f3
// 008a0811  8bcf                 mov ecx, edi
// 008a0813  e848e6f8ff           call 0x82ee60
// 008a0818  c786b80100007c7c9400 mov dword ptr [esi + 0x1b8], 0x947c7c
// 008a0822  c786c40100006e6d8f00 mov dword ptr [esi + 0x1c4], 0x8f6d6e
// 008a082c  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a0832  51                   push ecx
// 008a0833  d91c24               fstp dword ptr [esp]
// 008a0836  68ffcf8b00           push 0x8bcfff
// 008a083b  68fe8e4b00           push 0x4b8efe
// 008a0840  8bcd                 mov ecx, ebp
// 008a0842  e819e6f8ff           call 0x82ee60
// 008a0847  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008a084d  51                   push ecx
// 008a084e  d91c24               fstp dword ptr [esp]
// 008a0851  68ffd49700           push 0x97d4ff
// 008a0856  68fff2c800           push 0xc8f2ff
// 008a085b  8bcb                 mov ecx, ebx
// 008a085d  e8fee5f8ff           call 0x82ee60
// 008a0862  8d8e8c020000         lea ecx, [esi + 0x28c]
// 008a0868  e8b135f5ff           call 0x7f3e1e
// 008a086d  8d8e94020000         lea ecx, [esi + 0x294]
// 008a0873  e8a635f5ff           call 0x7f3e1e
// 008a0878  8d8e9c020000         lea ecx, [esi + 0x29c]
// 008a087e  e89b35f5ff           call 0x7f3e1e
// 008a0883  b80f000000           mov eax, 0xf
// 008a0888  8d542420             lea edx, [esp + 0x20]
// 008a088c  52                   push edx
// 008a088d  8986e8010000         mov dword ptr [esi + 0x1e8], eax
// 008a0893  8986f4010000         mov dword ptr [esi + 0x1f4], eax
// 008a0899  8b4634               mov eax, dword ptr [esi + 0x34]
// 008a089c  6a3c                 push 0x3c
// 008a089e  50                   push eax
// 008a089f  c786dc0100000000de00 mov dword ptr [esi + 0x1dc], 0xde0000
// 008a08a9  ff155cb19800         call dword ptr [0x98b15c]
// 008a08af  8d4c2420             lea ecx, [esp + 0x20]
// 008a08b3  51                   push ecx
// 008a08b4  8bce                 mov ecx, esi
// 008a08b6  e895d2ffff           call 0x89db50
// 008a08bb  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008a08bf  5f                   pop edi
// 008a08c0  5e                   pop esi
// 008a08c1  5d                   pop ebp
// 008a08c2  5b                   pop ebx
// 008a08c3  33cc                 xor ecx, esp
// 008a08c5  e8d04af5ff           call 0x7f539a
// 008a08ca  83c450               add esp, 0x50
// 008a08cd  c3                   ret 
// 008a08ce  8bff                 mov edi, edi
// 008a08d0  d502                 aad 2
// 008a08d2  8a00                 mov al, byte ptr [eax]
// 008a08d4  f8                   clc 
// 008a08d5  028a001b038a         add cl, byte ptr [edx - 0x75fce500]
// 008a08db  00d5                 add ch, dl
// 008a08dd  028a00d5028a         add cl, byte ptr [edx - 0x75fd2b00]
// 008a08e3  009e078a00cf         add byte ptr [esi - 0x30ff75f9], bl
// 008a08e9  07                   pop es
// 008a08ea  8a00                 mov al, byte ptr [eax]
// 008a08ec  fd                   std 
// 008a08ed  07                   pop es
// 008a08ee  8a00                 mov al, byte ptr [eax]
// 008a08f0  9e                   sahf 
// 008a08f1  07                   pop es
// 008a08f2  8a00                 mov al, byte ptr [eax]
// 008a08f4  9e                   sahf 
// 008a08f5  07                   pop es
// 008a08f6  8a00                 mov al, byte ptr [eax]
// copied from an identical function in another client (function ?RefreshMetrics@CXTPReportPaintManager@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportPaintManager.cpp