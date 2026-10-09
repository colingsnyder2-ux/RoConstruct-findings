// roc 2009-12 00801310  unit: CXTPPaintManager  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00801310
//
// 00801310  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 00801315  0f84cb000000         je 0x8013e6
// 0080131b  83796c00             cmp dword ptr [ecx + 0x6c], 0
// 0080131f  56                   push esi
// 00801320  7479                 je 0x80139b
// 00801322  8db138010000         lea esi, [ecx + 0x138]
// 00801328  8bce                 mov ecx, esi
// 0080132a  e891a80600           call 0x86bbc0
// 0080132f  85c0                 test eax, eax
// 00801331  7468                 je 0x80139b
// 00801333  33c0                 xor eax, eax
// 00801335  39442430             cmp dword ptr [esp + 0x30], eax
// 00801339  7507                 jne 0x801342
// 0080133b  b803000000           mov eax, 3
// 00801340  eb10                 jmp 0x801352
// 00801342  39442424             cmp dword ptr [esp + 0x24], eax
// 00801346  740a                 je 0x801352
// 00801348  33c0                 xor eax, eax
// 0080134a  39442428             cmp dword ptr [esp + 0x28], eax
// 0080134e  0f95c0               setne al
// 00801351  40                   inc eax
// 00801352  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00801356  83f901               cmp ecx, 1
// 00801359  7505                 jne 0x801360
// 0080135b  83c004               add eax, 4
// 0080135e  eb08                 jmp 0x801368
// 00801360  83f902               cmp ecx, 2
// 00801363  7503                 jne 0x801368
// 00801365  83c008               add eax, 8
// 00801368  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080136c  85c9                 test ecx, ecx
// 0080136e  7403                 je 0x801373
// 00801370  8b4904               mov ecx, dword ptr [ecx + 4]
// 00801373  6a00                 push 0
// 00801375  8d542414             lea edx, [esp + 0x14]
// 00801379  52                   push edx
// 0080137a  40                   inc eax
// 0080137b  50                   push eax
// 0080137c  6a03                 push 3
// 0080137e  51                   push ecx
// 0080137f  8bce                 mov ecx, esi
// 00801381  e8baa40600           call 0x86b840
// 00801386  8b442408             mov eax, dword ptr [esp + 8]
// 0080138a  5e                   pop esi
// 0080138b  c7000d000000         mov dword ptr [eax], 0xd
// 00801391  c740040d000000       mov dword ptr [eax + 4], 0xd
// 00801398  c22c00               ret 0x2c
// 0080139b  837c243000           cmp dword ptr [esp + 0x30], 0
// 008013a0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008013a4  7409                 je 0x8013af
// 008013a6  83f802               cmp eax, 2
// 008013a9  7404                 je 0x8013af
// 008013ab  33c9                 xor ecx, ecx
// 008013ad  eb05                 jmp 0x8013b4
// 008013af  b900010000           mov ecx, 0x100
// 008013b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 008013b8  f7d8                 neg eax
// 008013ba  1bc0                 sbb eax, eax
// 008013bc  2500040000           and eax, 0x400
// 008013c1  f7da                 neg edx
// 008013c3  1bd2                 sbb edx, edx
// 008013c5  81e200020000         and edx, 0x200
// 008013cb  0bc2                 or eax, edx
// 008013cd  0bc1                 or eax, ecx
// 008013cf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008013d3  8b5104               mov edx, dword ptr [ecx + 4]
// 008013d6  50                   push eax
// 008013d7  6a04                 push 4
// 008013d9  8d442418             lea eax, [esp + 0x18]
// 008013dd  50                   push eax
// 008013de  52                   push edx
// 008013df  ff1568ca9800         call dword ptr [0x98ca68]
// 008013e5  5e                   pop esi
// 008013e6  8b442404             mov eax, dword ptr [esp + 4]
// 008013ea  c7000d000000         mov dword ptr [eax], 0xd
// 008013f0  c740040d000000       mov dword ptr [eax + 4], 0xd
// 008013f7  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPPaintManager.cpp (function ?DrawControlCheckBoxMark@CXTPPaintManager@@UAE?AVCSize@@PAVCDC@@VCRect@@HHHHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPaintManager.cpp
