// roc 2010-06 00854f00  unit: CXTPReportPaintManager  size: 1251 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00854f00
//
// 00854f00  6aff                 push -1
// 00854f02  6884809b00           push 0x9b8084
// 00854f07  64a100000000         mov eax, dword ptr fs:[0]
// 00854f0d  50                   push eax
// 00854f0e  83ec50               sub esp, 0x50
// 00854f11  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00854f16  33c4                 xor eax, esp
// 00854f18  8944244c             mov dword ptr [esp + 0x4c], eax
// 00854f1c  53                   push ebx
// 00854f1d  55                   push ebp
// 00854f1e  56                   push esi
// 00854f1f  57                   push edi
// 00854f20  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00854f25  33c4                 xor eax, esp
// 00854f27  50                   push eax
// 00854f28  8d442464             lea eax, [esp + 0x64]
// 00854f2c  64a300000000         mov dword ptr fs:[0], eax
// 00854f32  8bf1                 mov esi, ecx
// 00854f34  89742420             mov dword ptr [esp + 0x20], esi
// 00854f38  e8417e1200           call 0x97cd7e
// 00854f3d  33ff                 xor edi, edi
// 00854f3f  c7067c95a600         mov dword ptr [esi], 0xa6957c
// 00854f45  b8080ea100           mov eax, 0xa10e08
// 00854f4a  897c246c             mov dword ptr [esp + 0x6c], edi
// 00854f4e  897e24               mov dword ptr [esi + 0x24], edi
// 00854f51  894620               mov dword ptr [esi + 0x20], eax
// 00854f54  897e2c               mov dword ptr [esi + 0x2c], edi
// 00854f57  894628               mov dword ptr [esi + 0x28], eax
// 00854f5a  897e34               mov dword ptr [esi + 0x34], edi
// 00854f5d  894630               mov dword ptr [esi + 0x30], eax
// 00854f60  897e3c               mov dword ptr [esi + 0x3c], edi
// 00854f63  894638               mov dword ptr [esi + 0x38], eax
// 00854f66  8d4e40               lea ecx, [esi + 0x40]
// 00854f69  c644246c04           mov byte ptr [esp + 0x6c], 4
// 00854f6e  e84de0f8ff           call 0x7e2fc0
// 00854f73  8d4e4c               lea ecx, [esi + 0x4c]
// 00854f76  e845e0f8ff           call 0x7e2fc0
// 00854f7b  8d4e58               lea ecx, [esi + 0x58]
// 00854f7e  e83de0f8ff           call 0x7e2fc0
// 00854f83  8d4e64               lea ecx, [esi + 0x64]
// 00854f86  e835e0f8ff           call 0x7e2fc0
// 00854f8b  8d4e70               lea ecx, [esi + 0x70]
// 00854f8e  e82de0f8ff           call 0x7e2fc0
// 00854f93  8d4e7c               lea ecx, [esi + 0x7c]
// 00854f96  e825e0f8ff           call 0x7e2fc0
// 00854f9b  8d8e88000000         lea ecx, [esi + 0x88]
// 00854fa1  e81ae0f8ff           call 0x7e2fc0
// 00854fa6  8d8e94000000         lea ecx, [esi + 0x94]
// 00854fac  e80fe0f8ff           call 0x7e2fc0
// 00854fb1  8d8ea0000000         lea ecx, [esi + 0xa0]
// 00854fb7  e804e0f8ff           call 0x7e2fc0
// 00854fbc  8d8eac000000         lea ecx, [esi + 0xac]
// 00854fc2  e8f9dff8ff           call 0x7e2fc0
// 00854fc7  8d8eb8000000         lea ecx, [esi + 0xb8]
// 00854fcd  e8eedff8ff           call 0x7e2fc0
// 00854fd2  8d8ec4000000         lea ecx, [esi + 0xc4]
// 00854fd8  e8e3dff8ff           call 0x7e2fc0
// 00854fdd  8d8ed0000000         lea ecx, [esi + 0xd0]
// 00854fe3  e8d8dff8ff           call 0x7e2fc0
// 00854fe8  8d8edc000000         lea ecx, [esi + 0xdc]
// 00854fee  e8cddff8ff           call 0x7e2fc0
// 00854ff3  8d8ee8000000         lea ecx, [esi + 0xe8]
// 00854ff9  e8c2dff8ff           call 0x7e2fc0
// 00854ffe  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00855004  e8b7dff8ff           call 0x7e2fc0
// 00855009  8d8e00010000         lea ecx, [esi + 0x100]
// 0085500f  e8acdff8ff           call 0x7e2fc0
// 00855014  8d8e0c010000         lea ecx, [esi + 0x10c]
// 0085501a  e8a1dff8ff           call 0x7e2fc0
// 0085501f  8d8e18010000         lea ecx, [esi + 0x118]
// 00855025  e896dff8ff           call 0x7e2fc0
// 0085502a  8d8e24010000         lea ecx, [esi + 0x124]
// 00855030  e88bdff8ff           call 0x7e2fc0
// 00855035  8d8e30010000         lea ecx, [esi + 0x130]
// 0085503b  e880dff8ff           call 0x7e2fc0
// 00855040  8d8e3c010000         lea ecx, [esi + 0x13c]
// 00855046  e875dff8ff           call 0x7e2fc0
// 0085504b  8d8e48010000         lea ecx, [esi + 0x148]
// 00855051  e86adff8ff           call 0x7e2fc0
// 00855056  8d8e54010000         lea ecx, [esi + 0x154]
// 0085505c  e87fdff8ff           call 0x7e2fe0
// 00855061  8d8e74010000         lea ecx, [esi + 0x174]
// 00855067  e874dff8ff           call 0x7e2fe0
// 0085506c  8d8e94010000         lea ecx, [esi + 0x194]
// 00855072  e869dff8ff           call 0x7e2fe0
// 00855077  8d8eb4010000         lea ecx, [esi + 0x1b4]
// 0085507d  e83edff8ff           call 0x7e2fc0
// 00855082  8d8ec0010000         lea ecx, [esi + 0x1c0]
// 00855088  e833dff8ff           call 0x7e2fc0
// 0085508d  8d8ecc010000         lea ecx, [esi + 0x1cc]
// 00855093  e828dff8ff           call 0x7e2fc0
// 00855098  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 0085509e  e81ddff8ff           call 0x7e2fc0
// 008550a3  8d8ee4010000         lea ecx, [esi + 0x1e4]
// 008550a9  e812dff8ff           call 0x7e2fc0
// 008550ae  8d8ef0010000         lea ecx, [esi + 0x1f0]
// 008550b4  e807dff8ff           call 0x7e2fc0
// 008550b9  8d8e14020000         lea ecx, [esi + 0x214]
// 008550bf  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008550c5  8d9e18020000         lea ebx, [esi + 0x218]
// 008550cb  8bcb                 mov ecx, ebx
// 008550cd  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008550d3  8d8e1c020000         lea ecx, [esi + 0x21c]
// 008550d9  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008550df  8d8e20020000         lea ecx, [esi + 0x220]
// 008550e5  ff15a4ce9e00         call dword ptr [0x9ecea4]
// 008550eb  8d8e70020000         lea ecx, [esi + 0x270]
// 008550f1  c644246c08           mov byte ptr [esp + 0x6c], 8
// 008550f6  e85530f5ff           call 0x7a8150
// 008550fb  b8c824a000           mov eax, 0xa024c8
// 00855100  89be90020000         mov dword ptr [esi + 0x290], edi
// 00855106  89868c020000         mov dword ptr [esi + 0x28c], eax
// 0085510c  89be98020000         mov dword ptr [esi + 0x298], edi
// 00855112  898694020000         mov dword ptr [esi + 0x294], eax
// 00855118  89bea0020000         mov dword ptr [esi + 0x2a0], edi
// 0085511e  89869c020000         mov dword ptr [esi + 0x29c], eax
// 00855124  bd01000000           mov ebp, 1
// 00855129  55                   push ebp
// 0085512a  8d8ec0020000         lea ecx, [esi + 0x2c0]
// 00855130  c64424700c           mov byte ptr [esp + 0x70], 0xc
// 00855135  e806a6fcff           call 0x81f740
// 0085513a  55                   push ebp
// 0085513b  8d8ecc020000         lea ecx, [esi + 0x2cc]
// 00855141  c64424700d           mov byte ptr [esp + 0x70], 0xd
// 00855146  e8f5a5fcff           call 0x81f740
// 0085514b  55                   push ebp
// 0085514c  8d8ed8020000         lea ecx, [esi + 0x2d8]
// 00855152  c64424700e           mov byte ptr [esp + 0x70], 0xe
// 00855157  e8e4a5fcff           call 0x81f740
// 0085515c  6a2c                 push 0x2c
// 0085515e  c64424700f           mov byte ptr [esp + 0x70], 0xf
// 00855163  e83828f5ff           call 0x7a79a0
// 00855168  83c404               add esp, 4
// 0085516b  8944241c             mov dword ptr [esp + 0x1c], eax
// 0085516f  c644246c10           mov byte ptr [esp + 0x6c], 0x10
// 00855174  3bc7                 cmp eax, edi
// 00855176  7409                 je 0x855181
// 00855178  8bc8                 mov ecx, eax
// 0085517a  e84195ffff           call 0x84e6c0
// 0085517f  eb02                 jmp 0x855183
// 00855181  33c0                 xor eax, eax
// 00855183  6a08                 push 8
// 00855185  8986e4020000         mov dword ptr [esi + 0x2e4], eax
// 0085518b  8b10                 mov edx, dword ptr [eax]
// 0085518d  6a0a                 push 0xa
// 0085518f  8bc8                 mov ecx, eax
// 00855191  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00855194  6a0b                 push 0xb
// 00855196  c64424780f           mov byte ptr [esp + 0x78], 0xf
// 0085519b  ffd0                 call eax
// 0085519d  b80c000000           mov eax, 0xc
// 008551a2  8bc8                 mov ecx, eax
// 008551a4  c786340100000000ff00 mov dword ptr [esi + 0x134], 0xff0000
// 008551ae  c786fc010000ffffffff mov dword ptr [esi + 0x1fc], 0xffffffff
// 008551b8  c7868002000003000000 mov dword ptr [esi + 0x280], 3
// 008551c2  898684020000         mov dword ptr [esi + 0x284], eax
// 008551c8  898e88020000         mov dword ptr [esi + 0x288], ecx
// 008551ce  89ae5c020000         mov dword ptr [esi + 0x25c], ebp
// 008551d4  c7866c02000002000000 mov dword ptr [esi + 0x26c], 2
// 008551de  89ae7c020000         mov dword ptr [esi + 0x27c], ebp
// 008551e4  89be78020000         mov dword ptr [esi + 0x278], edi
// 008551ea  89be04020000         mov dword ptr [esi + 0x204], edi
// 008551f0  89be00020000         mov dword ptr [esi + 0x200], edi
// 008551f6  89ae08020000         mov dword ptr [esi + 0x208], ebp
// 008551fc  89bebc020000         mov dword ptr [esi + 0x2bc], edi
// 00855202  89ae3c020000         mov dword ptr [esi + 0x23c], ebp
// 00855208  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 0085520e  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 00855214  89beb4020000         mov dword ptr [esi + 0x2b4], edi
// 0085521a  c786b802000004000000 mov dword ptr [esi + 0x2b8], 4
// 00855224  89be30020000         mov dword ptr [esi + 0x230], edi
// 0085522a  89ae34020000         mov dword ptr [esi + 0x234], ebp
// 00855230  89be2c020000         mov dword ptr [esi + 0x22c], edi
// 00855236  89ae0c020000         mov dword ptr [esi + 0x20c], ebp
// 0085523c  89ae10020000         mov dword ptr [esi + 0x210], ebp
// 00855242  e869d6fcff           call 0x8228b0
// 00855247  8b10                 mov edx, dword ptr [eax]
// 00855249  6851250000           push 0x2551
// 0085524e  8d8e14020000         lea ecx, [esi + 0x214]
// 00855254  51                   push ecx
// 00855255  8bc8                 mov ecx, eax
// 00855257  8b4208               mov eax, dword ptr [edx + 8]
// 0085525a  ffd0                 call eax
// 0085525c  e84fd6fcff           call 0x8228b0
// 00855261  8b10                 mov edx, dword ptr [eax]
// 00855263  6850250000           push 0x2550
// 00855268  8d8e1c020000         lea ecx, [esi + 0x21c]
// 0085526e  51                   push ecx
// 0085526f  8bc8                 mov ecx, eax
// 00855271  8b4208               mov eax, dword ptr [edx + 8]
// 00855274  ffd0                 call eax
// 00855276  e835d6fcff           call 0x8228b0
// 0085527b  8b10                 mov edx, dword ptr [eax]
// 0085527d  6852250000           push 0x2552
// 00855282  8d8e20020000         lea ecx, [esi + 0x220]
// 00855288  51                   push ecx
// 00855289  8bc8                 mov ecx, eax
// 0085528b  8b4208               mov eax, dword ptr [edx + 8]
// 0085528e  ffd0                 call eax
// 00855290  e81bd6fcff           call 0x8228b0
// 00855295  8b10                 mov edx, dword ptr [eax]
// 00855297  6853250000           push 0x2553
// 0085529c  8bc8                 mov ecx, eax
// 0085529e  8b4208               mov eax, dword ptr [edx + 8]
// 008552a1  53                   push ebx
// 008552a2  ffd0                 call eax
// 008552a4  85c0                 test eax, eax
// 008552a6  740d                 je 0x8552b5
// 008552a8  68e86ea000           push 0xa06ee8
// 008552ad  8bcb                 mov ecx, ebx
// 008552af  ff15c4c29e00         call dword ptr [0x9ec2c4]
// 008552b5  6a02                 push 2
// 008552b7  6a0a                 push 0xa
// 008552b9  57                   push edi
// 008552ba  6a0a                 push 0xa
// 008552bc  8d8e48020000         lea ecx, [esi + 0x248]
// 008552c2  51                   push ecx
// 008552c3  89be24020000         mov dword ptr [esi + 0x224], edi
// 008552c9  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 008552cf  57                   push edi
// 008552d0  8d542428             lea edx, [esp + 0x28]
// 008552d4  52                   push edx
// 008552d5  6a3c                 push 0x3c
// 008552d7  6a1f                 push 0x1f
// 008552d9  c7865802000014000000 mov dword ptr [esi + 0x258], 0x14
// 008552e3  89ae28020000         mov dword ptr [esi + 0x228], ebp
// 008552e9  ff1594ba9e00         call dword ptr [0x9eba94]
// 008552ef  8d442424             lea eax, [esp + 0x24]
// 008552f3  50                   push eax
// 008552f4  ff1570a19e00         call dword ptr [0x9ea170]
// 008552fa  50                   push eax
// 008552fb  8d4e38               lea ecx, [esi + 0x38]
// 008552fe  e8672cf5ff           call 0x7a7f6a
// 00855303  8d4c2424             lea ecx, [esp + 0x24]
// 00855307  51                   push ecx
// 00855308  8bce                 mov ecx, esi
// 0085530a  e8a1c9ffff           call 0x851cb0
// 0085530f  8d542424             lea edx, [esp + 0x24]
// 00855313  52                   push edx
// 00855314  8bce                 mov ecx, esi
// 00855316  e8a5c8ffff           call 0x851bc0
// 0085531b  55                   push ebp
// 0085531c  57                   push edi
// 0085531d  6a19                 push 0x19
// 0085531f  6a0c                 push 0xc
// 00855321  6a0c                 push 0xc
// 00855323  8d8e70020000         lea ecx, [esi + 0x270]
// 00855329  e81c2ef5ff           call 0x7a814a
// 0085532e  bba02ea000           mov ebx, 0xa02ea0
// 00855333  897c2418             mov dword ptr [esp + 0x18], edi
// 00855337  895c2414             mov dword ptr [esp + 0x14], ebx
// 0085533b  c644246c11           mov byte ptr [esp + 0x6c], 0x11
// 00855340  e86bd5fcff           call 0x8228b0
// 00855345  8b10                 mov edx, dword ptr [eax]
// 00855347  8b5214               mov edx, dword ptr [edx + 0x14]
// 0085534a  684e250000           push 0x254e
// 0085534f  8d4c2418             lea ecx, [esp + 0x18]
// 00855353  51                   push ecx
// 00855354  8bc8                 mov ecx, eax
// 00855356  ffd2                 call edx
// 00855358  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0085535c  8b8674020000         mov eax, dword ptr [esi + 0x274]
// 00855362  68ff00ff00           push 0xff00ff
// 00855367  51                   push ecx
// 00855368  50                   push eax
// 00855369  e8f028f5ff           call 0x7a7c5e
// 0085536e  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00855374  8b0a                 mov ecx, dword ptr [edx]
// 00855376  e855e0bbff           call 0x4133d0
// 0085537b  8bce                 mov ecx, esi
// 0085537d  89aea8020000         mov dword ptr [esi + 0x2a8], ebp
// 00855383  89beac020000         mov dword ptr [esi + 0x2ac], edi
// 00855389  89beb0020000         mov dword ptr [esi + 0x2b0], edi
// 0085538f  c786a40200000d000000 mov dword ptr [esi + 0x2a4], 0xd
// 00855399  89ae40020000         mov dword ptr [esi + 0x240], ebp
// 0085539f  89ae44020000         mov dword ptr [esi + 0x244], ebp
// 008553a5  89be38020000         mov dword ptr [esi + 0x238], edi
// 008553ab  e820eeffff           call 0x8541d0
// 008553b0  8d4c2414             lea ecx, [esp + 0x14]
// 008553b4  c644246c0f           mov byte ptr [esp + 0x6c], 0xf
// 008553b9  895c2414             mov dword ptr [esp + 0x14], ebx
// 008553bd  e89ea2bbff           call 0x40f660
// 008553c2  8bc6                 mov eax, esi
// 008553c4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008553c8  64890d00000000       mov dword ptr fs:[0], ecx
// 008553cf  59                   pop ecx
// 008553d0  5f                   pop edi
// 008553d1  5e                   pop esi
// 008553d2  5d                   pop ebp
// 008553d3  5b                   pop ebx
// 008553d4  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008553d8  33cc                 xor ecx, esp
// 008553da  e8f540f5ff           call 0x7a94d4
// 008553df  83c45c               add esp, 0x5c
// 008553e2  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp