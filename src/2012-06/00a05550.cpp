// roc 2012-06 00a05550  unit: CXTPRibbonTheme  size: 1500 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a05550
//
// 00a05550  6aff                 push -1
// 00a05552  68212dae00           push 0xae2d21
// 00a05557  64a100000000         mov eax, dword ptr fs:[0]
// 00a0555d  50                   push eax
// 00a0555e  81ec84000000         sub esp, 0x84
// 00a05564  53                   push ebx
// 00a05565  55                   push ebp
// 00a05566  56                   push esi
// 00a05567  57                   push edi
// 00a05568  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a0556d  33c4                 xor eax, esp
// 00a0556f  50                   push eax
// 00a05570  8d842498000000       lea eax, [esp + 0x98]
// 00a05577  64a300000000         mov dword ptr fs:[0], eax
// 00a0557d  8be9                 mov ebp, ecx
// 00a0557f  896c242c             mov dword ptr [esp + 0x2c], ebp
// 00a05583  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 00a0558a  8bcf                 mov ecx, edi
// 00a0558c  e8af03f9ff           call 0x995940
// 00a05591  8b8f00020000         mov ecx, dword ptr [edi + 0x200]
// 00a05597  8b9704020000         mov edx, dword ptr [edi + 0x204]
// 00a0559d  89442428             mov dword ptr [esp + 0x28], eax
// 00a055a1  8b87fc010000         mov eax, dword ptr [edi + 0x1fc]
// 00a055a7  89442430             mov dword ptr [esp + 0x30], eax
// 00a055ab  8b8708020000         mov eax, dword ptr [edi + 0x208]
// 00a055b1  894c2434             mov dword ptr [esp + 0x34], ecx
// 00a055b5  8bcf                 mov ecx, edi
// 00a055b7  89542438             mov dword ptr [esp + 0x38], edx
// 00a055bb  8944243c             mov dword ptr [esp + 0x3c], eax
// 00a055bf  e87c950100           call 0xa1eb40
// 00a055c4  85c0                 test eax, eax
// 00a055c6  0f85e8010000         jne 0xa057b4
// 00a055cc  68a8c0c100           push 0xc1c0a8
// 00a055d1  8bcd                 mov ecx, ebp
// 00a055d3  e898220000           call 0xa07870
// 00a055d8  8bd8                 mov ebx, eax
// 00a055da  85db                 test ebx, ebx
// 00a055dc  0f842e050000         je 0xa05b10
// 00a055e2  33c9                 xor ecx, ecx
// 00a055e4  398c24b0000000       cmp dword ptr [esp + 0xb0], ecx
// 00a055eb  6a02                 push 2
// 00a055ed  0f94c1               sete cl
// 00a055f0  8d542418             lea edx, [esp + 0x18]
// 00a055f4  8bf9                 mov edi, ecx
// 00a055f6  57                   push edi
// 00a055f7  52                   push edx
// 00a055f8  8bcb                 mov ecx, ebx
// 00a055fa  e8f1040600           call 0xa65af0
// 00a055ff  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a05603  8b542414             mov edx, dword ptr [esp + 0x14]
// 00a05607  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a0560b  8bc1                 mov eax, ecx
// 00a0560d  2bc2                 sub eax, edx
// 00a0560f  03c6                 add eax, esi
// 00a05611  89442448             mov dword ptr [esp + 0x48], eax
// 00a05615  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a05619  8944244c             mov dword ptr [esp + 0x4c], eax
// 00a0561d  33c0                 xor eax, eax
// 00a0561f  68ff00ff00           push 0xff00ff
// 00a05624  89442464             mov dword ptr [esp + 0x64], eax
// 00a05628  8944246c             mov dword ptr [esp + 0x6c], eax
// 00a0562c  8d442464             lea eax, [esp + 0x64]
// 00a05630  50                   push eax
// 00a05631  83ec10               sub esp, 0x10
// 00a05634  8bc4                 mov eax, esp
// 00a05636  8910                 mov dword ptr [eax], edx
// 00a05638  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a0563c  89742458             mov dword ptr [esp + 0x58], esi
// 00a05640  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 00a05644  895004               mov dword ptr [eax + 4], edx
// 00a05647  894808               mov dword ptr [eax + 8], ecx
// 00a0564a  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a0564e  8d542458             lea edx, [esp + 0x58]
// 00a05652  8974245c             mov dword ptr [esp + 0x5c], esi
// 00a05656  8bb424c0000000       mov esi, dword ptr [esp + 0xc0]
// 00a0565d  52                   push edx
// 00a0565e  89480c               mov dword ptr [eax + 0xc], ecx
// 00a05661  56                   push esi
// 00a05662  8bcb                 mov ecx, ebx
// 00a05664  c784248400000005000000 mov dword ptr [esp + 0x84], 5
// 00a0566f  c784248c00000003000000 mov dword ptr [esp + 0x8c], 3
// 00a0567a  e8b1090600           call 0xa66030
// 00a0567f  6898c0c100           push 0xc1c098
// 00a05684  8bcd                 mov ecx, ebp
// 00a05686  e8e5210000           call 0xa07870
// 00a0568b  6a02                 push 2
// 00a0568d  8bd8                 mov ebx, eax
// 00a0568f  57                   push edi
// 00a05690  8d442468             lea eax, [esp + 0x68]
// 00a05694  50                   push eax
// 00a05695  8bcb                 mov ecx, ebx
// 00a05697  e854040600           call 0xa65af0
// 00a0569c  8b10                 mov edx, dword ptr [eax]
// 00a0569e  89542414             mov dword ptr [esp + 0x14], edx
// 00a056a2  8b4804               mov ecx, dword ptr [eax + 4]
// 00a056a5  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a056a9  8b6808               mov ebp, dword ptr [eax + 8]
// 00a056ac  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00a056b0  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a056b3  89442420             mov dword ptr [esp + 0x20], eax
// 00a056b7  8b442438             mov eax, dword ptr [esp + 0x38]
// 00a056bb  8bca                 mov ecx, edx
// 00a056bd  2bcd                 sub ecx, ebp
// 00a056bf  03c8                 add ecx, eax
// 00a056c1  89442478             mov dword ptr [esp + 0x78], eax
// 00a056c5  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a056c9  894c2470             mov dword ptr [esp + 0x70], ecx
// 00a056cd  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a056d1  8944247c             mov dword ptr [esp + 0x7c], eax
// 00a056d5  33c0                 xor eax, eax
// 00a056d7  83ec10               sub esp, 0x10
// 00a056da  898c2484000000       mov dword ptr [esp + 0x84], ecx
// 00a056e1  8bcc                 mov ecx, esp
// 00a056e3  8901                 mov dword ptr [ecx], eax
// 00a056e5  b805000000           mov eax, 5
// 00a056ea  894104               mov dword ptr [ecx + 4], eax
// 00a056ed  33c0                 xor eax, eax
// 00a056ef  894108               mov dword ptr [ecx + 8], eax
// 00a056f2  b803000000           mov eax, 3
// 00a056f7  89410c               mov dword ptr [ecx + 0xc], eax
// 00a056fa  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a056fe  83ec10               sub esp, 0x10
// 00a05701  8bcc                 mov ecx, esp
// 00a05703  8911                 mov dword ptr [ecx], edx
// 00a05705  8b542438             mov edx, dword ptr [esp + 0x38]
// 00a05709  895104               mov dword ptr [ecx + 4], edx
// 00a0570c  896908               mov dword ptr [ecx + 8], ebp
// 00a0570f  89410c               mov dword ptr [ecx + 0xc], eax
// 00a05712  8d8c2490000000       lea ecx, [esp + 0x90]
// 00a05719  51                   push ecx
// 00a0571a  56                   push esi
// 00a0571b  8bcb                 mov ecx, ebx
// 00a0571d  e89efc0500           call 0xa653c0
// 00a05722  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a05726  686cc0c100           push 0xc1c06c
// 00a0572b  e840210000           call 0xa07870
// 00a05730  8b542448             mov edx, dword ptr [esp + 0x48]
// 00a05734  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00a05738  8bd8                 mov ebx, eax
// 00a0573a  8b442434             mov eax, dword ptr [esp + 0x34]
// 00a0573e  6a02                 push 2
// 00a05740  89442458             mov dword ptr [esp + 0x58], eax
// 00a05744  89542454             mov dword ptr [esp + 0x54], edx
// 00a05748  8b542440             mov edx, dword ptr [esp + 0x40]
// 00a0574c  57                   push edi
// 00a0574d  8d442468             lea eax, [esp + 0x68]
// 00a05751  894c2460             mov dword ptr [esp + 0x60], ecx
// 00a05755  50                   push eax
// 00a05756  8bcb                 mov ecx, ebx
// 00a05758  89542468             mov dword ptr [esp + 0x68], edx
// 00a0575c  33ed                 xor ebp, ebp
// 00a0575e  e88d030600           call 0xa65af0
// 00a05763  83ec10               sub esp, 0x10
// 00a05766  8bcc                 mov ecx, esp
// 00a05768  8929                 mov dword ptr [ecx], ebp
// 00a0576a  ba05000000           mov edx, 5
// 00a0576f  895104               mov dword ptr [ecx + 4], edx
// 00a05772  33d2                 xor edx, edx
// 00a05774  895108               mov dword ptr [ecx + 8], edx
// 00a05777  83ec10               sub esp, 0x10
// 00a0577a  ba03000000           mov edx, 3
// 00a0577f  89510c               mov dword ptr [ecx + 0xc], edx
// 00a05782  8b10                 mov edx, dword ptr [eax]
// 00a05784  8bcc                 mov ecx, esp
// 00a05786  8911                 mov dword ptr [ecx], edx
// 00a05788  8b5004               mov edx, dword ptr [eax + 4]
// 00a0578b  895104               mov dword ptr [ecx + 4], edx
// 00a0578e  8b5008               mov edx, dword ptr [eax + 8]
// 00a05791  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a05794  895108               mov dword ptr [ecx + 8], edx
// 00a05797  89410c               mov dword ptr [ecx + 0xc], eax
// 00a0579a  8d4c2470             lea ecx, [esp + 0x70]
// 00a0579e  51                   push ecx
// 00a0579f  56                   push esi
// 00a057a0  8bcb                 mov ecx, ebx
// 00a057a2  e819fc0500           call 0xa653c0
// 00a057a7  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00a057ab  8bbc24ac000000       mov edi, dword ptr [esp + 0xac]
// 00a057b2  eb15                 jmp 0xa057c9
// 00a057b4  8bb424a8000000       mov esi, dword ptr [esp + 0xa8]
// 00a057bb  6a00                 push 0
// 00a057bd  8d542434             lea edx, [esp + 0x34]
// 00a057c1  52                   push edx
// 00a057c2  8bce                 mov ecx, esi
// 00a057c4  e8e3d6f7ff           call 0x982eac
// 00a057c9  8bcf                 mov ecx, edi
// 00a057cb  e8d0950100           call 0xa1eda0
// 00a057d0  85c0                 test eax, eax
// 00a057d2  0f8509010000         jne 0xa058e1
// 00a057d8  39874c020000         cmp dword ptr [edi + 0x24c], eax
// 00a057de  0f84fd000000         je 0xa058e1
// 00a057e4  8b8f64020000         mov ecx, dword ptr [edi + 0x264]
// 00a057ea  50                   push eax
// 00a057eb  e890a9fcff           call 0x9d0180
// 00a057f0  85c0                 test eax, eax
// 00a057f2  0f8ee9000000         jle 0xa058e1
// 00a057f8  8b872c020000         mov eax, dword ptr [edi + 0x22c]
// 00a057fe  8b8f30020000         mov ecx, dword ptr [edi + 0x230]
// 00a05804  8b9734020000         mov edx, dword ptr [edi + 0x234]
// 00a0580a  89442414             mov dword ptr [esp + 0x14], eax
// 00a0580e  8b8738020000         mov eax, dword ptr [edi + 0x238]
// 00a05814  89442420             mov dword ptr [esp + 0x20], eax
// 00a05818  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00a0581e  894c2418             mov dword ptr [esp + 0x18], ecx
// 00a05822  8954241c             mov dword ptr [esp + 0x1c], edx
// 00a05826  8b5840               mov ebx, dword ptr [eax + 0x40]
// 00a05829  8bcf                 mov ecx, edi
// 00a0582b  e8508d0100           call 0xa1e580
// 00a05830  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a05834  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a05838  03c3                 add eax, ebx
// 00a0583a  8944245c             mov dword ptr [esp + 0x5c], eax
// 00a0583e  8d442414             lea eax, [esp + 0x14]
// 00a05842  50                   push eax
// 00a05843  83c1f1               add ecx, -0xf
// 00a05846  57                   push edi
// 00a05847  894c2458             mov dword ptr [esp + 0x58], ecx
// 00a0584b  895c245c             mov dword ptr [esp + 0x5c], ebx
// 00a0584f  89542460             mov dword ptr [esp + 0x60], edx
// 00a05853  e898caffff           call 0xa022f0
// 00a05858  83c408               add esp, 8
// 00a0585b  85c0                 test eax, eax
// 00a0585d  b87cc0c100           mov eax, 0xc1c07c
// 00a05862  7505                 jne 0xa05869
// 00a05864  b854c0c100           mov eax, 0xc1c054
// 00a05869  50                   push eax
// 00a0586a  8bcd                 mov ecx, ebp
// 00a0586c  e8ff1f0000           call 0xa07870
// 00a05871  8bd8                 mov ebx, eax
// 00a05873  85db                 test ebx, ebx
// 00a05875  746a                 je 0xa058e1
// 00a05877  6a01                 push 1
// 00a05879  6a00                 push 0
// 00a0587b  8d4c2478             lea ecx, [esp + 0x78]
// 00a0587f  51                   push ecx
// 00a05880  8bcb                 mov ecx, ebx
// 00a05882  c7432c01000000       mov dword ptr [ebx + 0x2c], 1
// 00a05889  c744247410000000     mov dword ptr [esp + 0x74], 0x10
// 00a05891  e85a020600           call 0xa65af0
// 00a05896  83ec10               sub esp, 0x10
// 00a05899  8bcc                 mov ecx, esp
// 00a0589b  ba10000000           mov edx, 0x10
// 00a058a0  8911                 mov dword ptr [ecx], edx
// 00a058a2  ba03000000           mov edx, 3
// 00a058a7  895104               mov dword ptr [ecx + 4], edx
// 00a058aa  8b542478             mov edx, dword ptr [esp + 0x78]
// 00a058ae  895108               mov dword ptr [ecx + 8], edx
// 00a058b1  83ec10               sub esp, 0x10
// 00a058b4  ba03000000           mov edx, 3
// 00a058b9  89510c               mov dword ptr [ecx + 0xc], edx
// 00a058bc  8b10                 mov edx, dword ptr [eax]
// 00a058be  8bcc                 mov ecx, esp
// 00a058c0  8911                 mov dword ptr [ecx], edx
// 00a058c2  8b5004               mov edx, dword ptr [eax + 4]
// 00a058c5  895104               mov dword ptr [ecx + 4], edx
// 00a058c8  8b5008               mov edx, dword ptr [eax + 8]
// 00a058cb  8b400c               mov eax, dword ptr [eax + 0xc]
// 00a058ce  895108               mov dword ptr [ecx + 8], edx
// 00a058d1  89410c               mov dword ptr [ecx + 0xc], eax
// 00a058d4  8d4c2470             lea ecx, [esp + 0x70]
// 00a058d8  51                   push ecx
// 00a058d9  56                   push esi
// 00a058da  8bcb                 mov ecx, ebx
// 00a058dc  e8dffa0500           call 0xa653c0
// 00a058e1  83bf7402000000       cmp dword ptr [edi + 0x274], 0
// 00a058e8  7567                 jne 0xa05951
// 00a058ea  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a058ee  52                   push edx
// 00a058ef  8bcd                 mov ecx, ebp
// 00a058f1  e88a390000           call 0xa09280
// 00a058f6  8944242c             mov dword ptr [esp + 0x2c], eax
// 00a058fa  85c0                 test eax, eax
// 00a058fc  7453                 je 0xa05951
// 00a058fe  6a32                 push 0x32
// 00a05900  ff15fc3bb200         call dword ptr [0xb23bfc]
// 00a05906  6a31                 push 0x31
// 00a05908  8bd8                 mov ebx, eax
// 00a0590a  ff15fc3bb200         call dword ptr [0xb23bfc]
// 00a05910  8bc8                 mov ecx, eax
// 00a05912  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00a05916  2bc3                 sub eax, ebx
// 00a05918  2b442434             sub eax, dword ptr [esp + 0x34]
// 00a0591c  99                   cdq 
// 00a0591d  2bc2                 sub eax, edx
// 00a0591f  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a05923  83c20a               add edx, 0xa
// 00a05926  d1f8                 sar eax, 1
// 00a05928  89542440             mov dword ptr [esp + 0x40], edx
// 00a0592c  85f6                 test esi, esi
// 00a0592e  7504                 jne 0xa05934
// 00a05930  33d2                 xor edx, edx
// 00a05932  eb03                 jmp 0xa05937
// 00a05934  8b5604               mov edx, dword ptr [esi + 4]
// 00a05937  6a03                 push 3
// 00a05939  6a00                 push 0
// 00a0593b  6a00                 push 0
// 00a0593d  53                   push ebx
// 00a0593e  51                   push ecx
// 00a0593f  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00a05943  51                   push ecx
// 00a05944  50                   push eax
// 00a05945  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 00a05949  50                   push eax
// 00a0594a  52                   push edx
// 00a0594b  ff15383db200         call dword ptr [0xb23d38]
// 00a05951  8b8f0c020000         mov ecx, dword ptr [edi + 0x20c]
// 00a05957  8b9f84020000         mov ebx, dword ptr [edi + 0x284]
// 00a0595d  8b9710020000         mov edx, dword ptr [edi + 0x210]
// 00a05963  8b8714020000         mov eax, dword ptr [edi + 0x214]
// 00a05969  894c2414             mov dword ptr [esp + 0x14], ecx
// 00a0596d  8b8f18020000         mov ecx, dword ptr [edi + 0x218]
// 00a05973  894c2420             mov dword ptr [esp + 0x20], ecx
// 00a05977  8bcb                 mov ecx, ebx
// 00a05979  89542418             mov dword ptr [esp + 0x18], edx
// 00a0597d  8944241c             mov dword ptr [esp + 0x1c], eax
// 00a05981  e89af3a5ff           call 0x464d20
// 00a05986  85c0                 test eax, eax
// 00a05988  7410                 je 0xa0599a
// 00a0598a  8b5500               mov edx, dword ptr [ebp]
// 00a0598d  8b8260010000         mov eax, dword ptr [edx + 0x160]
// 00a05993  53                   push ebx
// 00a05994  57                   push edi
// 00a05995  56                   push esi
// 00a05996  8bcd                 mov ecx, ebp
// 00a05998  ffd0                 call eax
// 00a0599a  8d8db4050000         lea ecx, [ebp + 0x5b4]
// 00a059a0  51                   push ecx
// 00a059a1  56                   push esi
// 00a059a2  8d8c2490000000       lea ecx, [esp + 0x90]
// 00a059a9  e882fbfcff           call 0x9d5530
// 00a059ae  8d4c2424             lea ecx, [esp + 0x24]
// 00a059b2  c78424a000000000000000 mov dword ptr [esp + 0xa0], 0
// 00a059bd  ff158447b200         call dword ptr [0xb24784]
// 00a059c3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a059c7  8d542424             lea edx, [esp + 0x24]
// 00a059cb  52                   push edx
// 00a059cc  c68424a400000001     mov byte ptr [esp + 0xa4], 1
// 00a059d4  e81dcdf7ff           call 0x9826f6
// 00a059d9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00a059dd  2b5c2414             sub ebx, dword ptr [esp + 0x14]
// 00a059e1  8d442440             lea eax, [esp + 0x40]
// 00a059e5  50                   push eax
// 00a059e6  8d4c2428             lea ecx, [esp + 0x28]
// 00a059ea  ff155846b200         call dword ptr [0xb24658]
// 00a059f0  50                   push eax
// 00a059f1  8d4c242c             lea ecx, [esp + 0x2c]
// 00a059f5  ff159847b200         call dword ptr [0xb24798]
// 00a059fb  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a059fe  50                   push eax
// 00a059ff  51                   push ecx
// 00a05a00  ff154021b200         call dword ptr [0xb22140]
// 00a05a06  8bc3                 mov eax, ebx
// 00a05a08  2b442440             sub eax, dword ptr [esp + 0x40]
// 00a05a0c  99                   cdq 
// 00a05a0d  2bc2                 sub eax, edx
// 00a05a0f  d1f8                 sar eax, 1
// 00a05a11  7904                 jns 0xa05a17
// 00a05a13  33c0                 xor eax, eax
// 00a05a15  eb36                 jmp 0xa05a4d
// 00a05a17  8d942480000000       lea edx, [esp + 0x80]
// 00a05a1e  52                   push edx
// 00a05a1f  8d4c2428             lea ecx, [esp + 0x28]
// 00a05a23  ff155846b200         call dword ptr [0xb24658]
// 00a05a29  50                   push eax
// 00a05a2a  8d4c242c             lea ecx, [esp + 0x2c]
// 00a05a2e  ff159847b200         call dword ptr [0xb24798]
// 00a05a34  50                   push eax
// 00a05a35  8b4608               mov eax, dword ptr [esi + 8]
// 00a05a38  50                   push eax
// 00a05a39  ff154021b200         call dword ptr [0xb22140]
// 00a05a3f  8bc3                 mov eax, ebx
// 00a05a41  2b842480000000       sub eax, dword ptr [esp + 0x80]
// 00a05a48  99                   cdq 
// 00a05a49  2bc2                 sub eax, edx
// 00a05a4b  d1f8                 sar eax, 1
// 00a05a4d  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a05a51  01442414             add dword ptr [esp + 0x14], eax
// 00a05a55  e8783b0900           call 0xa995d2
// 00a05a5a  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00a05a5e  a900000001           test eax, 0x1000000
// 00a05a63  7410                 je 0xa05a75
// 00a05a65  8b8780020000         mov eax, dword ptr [edi + 0x280]
// 00a05a6b  8b4040               mov eax, dword ptr [eax + 0x40]
// 00a05a6e  99                   cdq 
// 00a05a6f  2bc2                 sub eax, edx
// 00a05a71  d1f8                 sar eax, 1
// 00a05a73  03d8                 add ebx, eax
// 00a05a75  8bcf                 mov ecx, edi
// 00a05a77  e8c4900100           call 0xa1eb40
// 00a05a7c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00a05a80  85c0                 test eax, eax
// 00a05a82  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00a05a89  50                   push eax
// 00a05a8a  51                   push ecx
// 00a05a8b  752c                 jne 0xa05ab9
// 00a05a8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00a05a91  8b5500               mov edx, dword ptr [ebp]
// 00a05a94  8b9234010000         mov edx, dword ptr [edx + 0x134]
// 00a05a9a  83ec10               sub esp, 0x10
// 00a05a9d  8bc4                 mov eax, esp
// 00a05a9f  8908                 mov dword ptr [eax], ecx
// 00a05aa1  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00a05aa5  895804               mov dword ptr [eax + 4], ebx
// 00a05aa8  894808               mov dword ptr [eax + 8], ecx
// 00a05aab  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 00a05aaf  89480c               mov dword ptr [eax + 0xc], ecx
// 00a05ab2  56                   push esi
// 00a05ab3  8bcd                 mov ecx, ebp
// 00a05ab5  ffd2                 call edx
// 00a05ab7  eb36                 jmp 0xa05aef
// 00a05ab9  51                   push ecx
// 00a05aba  8d542430             lea edx, [esp + 0x30]
// 00a05abe  8bcc                 mov ecx, esp
// 00a05ac0  8964244c             mov dword ptr [esp + 0x4c], esp
// 00a05ac4  52                   push edx
// 00a05ac5  ff158047b200         call dword ptr [0xb24780]
// 00a05acb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a05acf  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a05ad3  83ec10               sub esp, 0x10
// 00a05ad6  8bc4                 mov eax, esp
// 00a05ad8  8908                 mov dword ptr [eax], ecx
// 00a05ada  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00a05ade  895804               mov dword ptr [eax + 4], ebx
// 00a05ae1  895008               mov dword ptr [eax + 8], edx
// 00a05ae4  89480c               mov dword ptr [eax + 0xc], ecx
// 00a05ae7  56                   push esi
// 00a05ae8  8bcd                 mov ecx, ebp
// 00a05aea  e8b1f5ffff           call 0xa050a0
// 00a05aef  8d4c2424             lea ecx, [esp + 0x24]
// 00a05af3  ff15d047b200         call dword ptr [0xb247d0]
// 00a05af9  8d8c2488000000       lea ecx, [esp + 0x88]
// 00a05b00  c78424a0000000ffffffff mov dword ptr [esp + 0xa0], 0xffffffff
// 00a05b0b  e8a0fafcff           call 0x9d55b0
// 00a05b10  8b8c2498000000       mov ecx, dword ptr [esp + 0x98]
// 00a05b17  64890d00000000       mov dword ptr fs:[0], ecx
// 00a05b1e  59                   pop ecx
// 00a05b1f  5f                   pop edi
// 00a05b20  5e                   pop esi
// 00a05b21  5d                   pop ebp
// 00a05b22  5b                   pop ebx
// 00a05b23  81c490000000         add esp, 0x90
// 00a05b29  c20c00               ret 0xc
// copied from an identical function in another client (function ?DrawRibbonFrameCaption@CXTPRibbonTheme@@UAEXPAVCDC@@PAVCXTPRibbonBar@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp