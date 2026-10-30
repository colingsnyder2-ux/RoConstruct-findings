// roc 2009-12 008291e0  unit: CXTPReportHeader  size: 781 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008291e0
//
// 008291e0  6aff                 push -1
// 008291e2  689ab89500           push 0x95b89a
// 008291e7  64a100000000         mov eax, dword ptr fs:[0]
// 008291ed  50                   push eax
// 008291ee  83ec34               sub esp, 0x34
// 008291f1  53                   push ebx
// 008291f2  55                   push ebp
// 008291f3  56                   push esi
// 008291f4  57                   push edi
// 008291f5  a10052b600           mov eax, dword ptr [0xb65200]
// 008291fa  33c4                 xor eax, esp
// 008291fc  50                   push eax
// 008291fd  8d442448             lea eax, [esp + 0x48]
// 00829201  64a300000000         mov dword ptr fs:[0], eax
// 00829207  8bf9                 mov edi, ecx
// 00829209  8b742458             mov esi, dword ptr [esp + 0x58]
// 0082920d  897728               mov dword ptr [edi + 0x28], esi
// 00829210  85f6                 test esi, esi
// 00829212  7d0a                 jge 0x82921e
// 00829214  e817f1ffff           call 0x828330
// 00829219  e9b7020000           jmp 0x8294d5
// 0082921e  e8fdf0ffff           call 0x828320
// 00829223  8bd8                 mov ebx, eax
// 00829225  8b03                 mov eax, dword ptr [ebx]
// 00829227  8b5068               mov edx, dword ptr [eax + 0x68]
// 0082922a  8bcb                 mov ecx, ebx
// 0082922c  895c2414             mov dword ptr [esp + 0x14], ebx
// 00829230  ffd2                 call edx
// 00829232  8be8                 mov ebp, eax
// 00829234  8bcf                 mov ecx, edi
// 00829236  896c2418             mov dword ptr [esp + 0x18], ebp
// 0082923a  e84172f1ff           call 0x740480
// 0082923f  837c245c00           cmp dword ptr [esp + 0x5c], 0
// 00829244  8944241c             mov dword ptr [esp + 0x1c], eax
// 00829248  0f845f010000         je 0x8293ad
// 0082924e  85c0                 test eax, eax
// 00829250  0f848f000000         je 0x8292e5
// 00829256  8b4720               mov eax, dword ptr [edi + 0x20]
// 00829259  8b4830               mov ecx, dword ptr [eax + 0x30]
// 0082925c  33ed                 xor ebp, ebp
// 0082925e  33db                 xor ebx, ebx
// 00829260  83c6ff               add esi, -1
// 00829263  894c245c             mov dword ptr [esp + 0x5c], ecx
// 00829267  7831                 js 0x82929a
// 00829269  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 0082926d  7d26                 jge 0x829295
// 0082926f  8b4720               mov eax, dword ptr [edi + 0x20]
// 00829272  85f6                 test esi, esi
// 00829274  7c10                 jl 0x829286
// 00829276  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00829279  7d0b                 jge 0x829286
// 0082927b  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0082927e  8b2cb2               mov ebp, dword ptr [edx + esi*4]
// 00829281  8d04b2               lea eax, [edx + esi*4]
// 00829284  eb02                 jmp 0x829288
// 00829286  33ed                 xor ebp, ebp
// 00829288  8bcd                 mov ecx, ebp
// 0082928a  e831a80800           call 0x8b3ac0
// 0082928f  85c0                 test eax, eax
// 00829291  7507                 jne 0x82929a
// 00829293  33ed                 xor ebp, ebp
// 00829295  83ee01               sub esi, 1
// 00829298  79cf                 jns 0x829269
// 0082929a  8b742458             mov esi, dword ptr [esp + 0x58]
// 0082929e  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 008292a2  7d2d                 jge 0x8292d1
// 008292a4  8b4720               mov eax, dword ptr [edi + 0x20]
// 008292a7  85f6                 test esi, esi
// 008292a9  7c10                 jl 0x8292bb
// 008292ab  3b7030               cmp esi, dword ptr [eax + 0x30]
// 008292ae  7d0b                 jge 0x8292bb
// 008292b0  8b402c               mov eax, dword ptr [eax + 0x2c]
// 008292b3  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 008292b6  8d04b0               lea eax, [eax + esi*4]
// 008292b9  eb02                 jmp 0x8292bd
// 008292bb  33db                 xor ebx, ebx
// 008292bd  8bcb                 mov ecx, ebx
// 008292bf  e8fca70800           call 0x8b3ac0
// 008292c4  85c0                 test eax, eax
// 008292c6  7509                 jne 0x8292d1
// 008292c8  46                   inc esi
// 008292c9  33db                 xor ebx, ebx
// 008292cb  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 008292cf  7cd3                 jl 0x8292a4
// 008292d1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008292d5  3bc5                 cmp eax, ebp
// 008292d7  7462                 je 0x82933b
// 008292d9  3bc3                 cmp eax, ebx
// 008292db  745e                 je 0x82933b
// 008292dd  8b742458             mov esi, dword ptr [esp + 0x58]
// 008292e1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 008292e5  8b476c               mov eax, dword ptr [edi + 0x6c]
// 008292e8  034764               add eax, dword ptr [edi + 0x64]
// 008292eb  8b4f60               mov ecx, dword ptr [edi + 0x60]
// 008292ee  99                   cdq 
// 008292ef  2bc2                 sub eax, edx
// 008292f1  d1f8                 sar eax, 1
// 008292f3  89442424             mov dword ptr [esp + 0x24], eax
// 008292f7  8b4720               mov eax, dword ptr [edi + 0x20]
// 008292fa  894c2420             mov dword ptr [esp + 0x20], ecx
// 008292fe  3b7030               cmp esi, dword ptr [eax + 0x30]
// 00829301  0f8d9d000000         jge 0x8293a4
// 00829307  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0082930a  8d04b2               lea eax, [edx + esi*4]
// 0082930d  8b30                 mov esi, dword ptr [eax]
// 0082930f  8bce                 mov ecx, esi
// 00829311  e8aaa70800           call 0x8b3ac0
// 00829316  85c0                 test eax, eax
// 00829318  7430                 je 0x82934a
// 0082931a  8d442428             lea eax, [esp + 0x28]
// 0082931e  50                   push eax
// 0082931f  8bce                 mov ecx, esi
// 00829321  e8aae7ffff           call 0x827ad0
// 00829326  8b08                 mov ecx, dword ptr [eax]
// 00829328  894c2420             mov dword ptr [esp + 0x20], ecx
// 0082932c  8b742458             mov esi, dword ptr [esp + 0x58]
// 00829330  837c242000           cmp dword ptr [esp + 0x20], 0
// 00829335  0f8d13010000         jge 0x82944e
// 0082933b  8bcf                 mov ecx, edi
// 0082933d  e8eeefffff           call 0x828330
// 00829342  83c8ff               or eax, 0xffffffff
// 00829345  e98d010000           jmp 0x8294d7
// 0082934a  8b442458             mov eax, dword ptr [esp + 0x58]
// 0082934e  85c0                 test eax, eax
// 00829350  7eda                 jle 0x82932c
// 00829352  83c0ff               add eax, -1
// 00829355  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00829358  78d2                 js 0x82932c
// 0082935a  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 0082935d  7dcd                 jge 0x82932c
// 0082935f  8b512c               mov edx, dword ptr [ecx + 0x2c]
// 00829362  8d1482               lea edx, [edx + eax*4]
// 00829365  8b12                 mov edx, dword ptr [edx]
// 00829367  85d2                 test edx, edx
// 00829369  74c1                 je 0x82932c
// 0082936b  85c0                 test eax, eax
// 0082936d  7c20                 jl 0x82938f
// 0082936f  3b4130               cmp eax, dword ptr [ecx + 0x30]
// 00829372  7d1b                 jge 0x82938f
// 00829374  8b492c               mov ecx, dword ptr [ecx + 0x2c]
// 00829377  8d0481               lea eax, [ecx + eax*4]
// 0082937a  8b08                 mov ecx, dword ptr [eax]
// 0082937c  8d542438             lea edx, [esp + 0x38]
// 00829380  52                   push edx
// 00829381  e84ae7ffff           call 0x827ad0
// 00829386  8b4008               mov eax, dword ptr [eax + 8]
// 00829389  89442420             mov dword ptr [esp + 0x20], eax
// 0082938d  eb9d                 jmp 0x82932c
// 0082938f  8d542438             lea edx, [esp + 0x38]
// 00829393  33c9                 xor ecx, ecx
// 00829395  52                   push edx
// 00829396  e835e7ffff           call 0x827ad0
// 0082939b  8b4008               mov eax, dword ptr [eax + 8]
// 0082939e  89442420             mov dword ptr [esp + 0x20], eax
// 008293a2  eb88                 jmp 0x82932c
// 008293a4  8b4f68               mov ecx, dword ptr [edi + 0x68]
// 008293a7  894c2420             mov dword ptr [esp + 0x20], ecx
// 008293ab  eb83                 jmp 0x829330
// 008293ad  8b5720               mov edx, dword ptr [edi + 0x20]
// 008293b0  8b4a20               mov ecx, dword ptr [edx + 0x20]
// 008293b3  50                   push eax
// 008293b4  e827420400           call 0x86d5e0
// 008293b9  83f8ff               cmp eax, -1
// 008293bc  7413                 je 0x8293d1
// 008293be  3bc6                 cmp eax, esi
// 008293c0  0f8475ffffff         je 0x82933b
// 008293c6  8d4eff               lea ecx, [esi - 1]
// 008293c9  3bc1                 cmp eax, ecx
// 008293cb  0f846affffff         je 0x82933b
// 008293d1  8b5750               mov edx, dword ptr [edi + 0x50]
// 008293d4  8b4f54               mov ecx, dword ptr [edi + 0x54]
// 008293d7  83c209               add edx, 9
// 008293da  89542420             mov dword ptr [esp + 0x20], edx
// 008293de  8bc5                 mov eax, ebp
// 008293e0  99                   cdq 
// 008293e1  2bc2                 sub eax, edx
// 008293e3  d1f8                 sar eax, 1
// 008293e5  8d540106             lea edx, [ecx + eax + 6]
// 008293e9  8b4720               mov eax, dword ptr [edi + 0x20]
// 008293ec  89542424             mov dword ptr [esp + 0x24], edx
// 008293f0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008293f3  e878c4caff           call 0x4d5870
// 008293f8  8bd8                 mov ebx, eax
// 008293fa  3bde                 cmp ebx, esi
// 008293fc  8beb                 mov ebp, ebx
// 008293fe  7c02                 jl 0x829402
// 00829400  8bee                 mov ebp, esi
// 00829402  33f6                 xor esi, esi
// 00829404  85ed                 test ebp, ebp
// 00829406  7e3e                 jle 0x829446
// 00829408  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 0082940b  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0082940e  56                   push esi
// 0082940f  e89c410400           call 0x86d5b0
// 00829414  85c0                 test eax, eax
// 00829416  7429                 je 0x829441
// 00829418  8b9084000000         mov edx, dword ptr [eax + 0x84]
// 0082941e  2b507c               sub edx, dword ptr [eax + 0x7c]
// 00829421  8d43ff               lea eax, [ebx - 1]
// 00829424  01542420             add dword ptr [esp + 0x20], edx
// 00829428  3bf0                 cmp esi, eax
// 0082942a  7d15                 jge 0x829441
// 0082942c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00829430  8344242005           add dword ptr [esp + 0x20], 5
// 00829435  83c0fd               add eax, -3
// 00829438  99                   cdq 
// 00829439  2bc2                 sub eax, edx
// 0082943b  d1f8                 sar eax, 1
// 0082943d  01442424             add dword ptr [esp + 0x24], eax
// 00829441  46                   inc esi
// 00829442  3bf5                 cmp esi, ebp
// 00829444  7cc2                 jl 0x829408
// 00829446  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 0082944a  8b742458             mov esi, dword ptr [esp + 0x58]
// 0082944e  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 00829452  755d                 jne 0x8294b1
// 00829454  6a64                 push 0x64
// 00829456  e805a4fcff           call 0x7f3860
// 0082945b  83c404               add esp, 4
// 0082945e  89442458             mov dword ptr [esp + 0x58], eax
// 00829462  c744245000000000     mov dword ptr [esp + 0x50], 0
// 0082946a  85c0                 test eax, eax
// 0082946c  741b                 je 0x829489
// 0082946e  8b93f0000000         mov edx, dword ptr [ebx + 0xf0]
// 00829474  83faff               cmp edx, -1
// 00829477  7506                 jne 0x82947f
// 00829479  8b93ec000000         mov edx, dword ptr [ebx + 0xec]
// 0082947f  52                   push edx
// 00829480  8bc8                 mov ecx, eax
// 00829482  e809df0700           call 0x8a7390
// 00829487  eb02                 jmp 0x82948b
// 00829489  33c0                 xor eax, eax
// 0082948b  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00829493  89472c               mov dword ptr [edi + 0x2c], eax
// 00829496  85c0                 test eax, eax
// 00829498  7411                 je 0x8294ab
// 0082949a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082949e  8b10                 mov edx, dword ptr [eax]
// 008294a0  8b9244010000         mov edx, dword ptr [edx + 0x144]
// 008294a6  51                   push ecx
// 008294a7  8bc8                 mov ecx, eax
// 008294a9  ffd2                 call edx
// 008294ab  837f2c00             cmp dword ptr [edi + 0x2c], 0
// 008294af  7424                 je 0x8294d5
// 008294b1  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008294b4  8b5120               mov edx, dword ptr [ecx + 0x20]
// 008294b7  8d442420             lea eax, [esp + 0x20]
// 008294bb  50                   push eax
// 008294bc  52                   push edx
// 008294bd  ff1554cc9800         call dword ptr [0x98cc54]
// 008294c3  8b442424             mov eax, dword ptr [esp + 0x24]
// 008294c7  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008294cb  50                   push eax
// 008294cc  51                   push ecx
// 008294cd  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008294d0  e8cbd90700           call 0x8a6ea0
// 008294d5  8bc6                 mov eax, esi
// 008294d7  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008294db  64890d00000000       mov dword ptr fs:[0], ecx
// 008294e2  59                   pop ecx
// 008294e3  5f                   pop edi
// 008294e4  5e                   pop esi
// 008294e5  5d                   pop ebp
// 008294e6  5b                   pop ebx
// 008294e7  83c440               add esp, 0x40
// 008294ea  c20800               ret 8
// copied from an identical function in another client (function ?SetHotDivider@CXTPReportHeader@@IAEHHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportHeader.cpp