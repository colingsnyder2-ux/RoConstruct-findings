// roc 2009-06 0076bea0  unit: CXTPControls  size: 1504 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076bea0
//
// 0076bea0  6aff                 push -1
// 0076bea2  68528e8700           push 0x878e52
// 0076bea7  64a100000000         mov eax, dword ptr fs:[0]
// 0076bead  50                   push eax
// 0076beae  83ec60               sub esp, 0x60
// 0076beb1  53                   push ebx
// 0076beb2  55                   push ebp
// 0076beb3  56                   push esi
// 0076beb4  57                   push edi
// 0076beb5  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0076beba  33c4                 xor eax, esp
// 0076bebc  50                   push eax
// 0076bebd  8d442474             lea eax, [esp + 0x74]
// 0076bec1  64a300000000         mov dword ptr fs:[0], eax
// 0076bec7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 0076becb  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 0076bed2  8bac2488000000       mov ebp, dword ptr [esp + 0x88]
// 0076bed9  8b4604               mov eax, dword ptr [esi + 4]
// 0076bedc  55                   push ebp
// 0076bedd  50                   push eax
// 0076bede  ff151cee8900         call dword ptr [0x89ee1c]
// 0076bee4  50                   push eax
// 0076bee5  e8d8d1faff           call 0x7190c2
// 0076beea  8b4e04               mov ecx, dword ptr [esi + 4]
// 0076beed  55                   push ebp
// 0076beee  51                   push ecx
// 0076beef  8bd8                 mov ebx, eax
// 0076bef1  ff1520ee8900         call dword ptr [0x89ee20]
// 0076bef7  8b5604               mov edx, dword ptr [esi + 4]
// 0076befa  6a01                 push 1
// 0076befc  6a01                 push 1
// 0076befe  52                   push edx
// 0076beff  8bf8                 mov edi, eax
// 0076bf01  ff1580ec8900         call dword ptr [0x89ec80]
// 0076bf07  33c9                 xor ecx, ecx
// 0076bf09  3bc5                 cmp eax, ebp
// 0076bf0b  0f94c1               sete cl
// 0076bf0e  894c2428             mov dword ptr [esp + 0x28], ecx
// 0076bf12  81ff00ff0000         cmp edi, 0xff00
// 0076bf18  0f8403040000         je 0x76c321
// 0076bf1e  8d8c2484000000       lea ecx, [esp + 0x84]
// 0076bf25  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0076bf2b  6800040000           push 0x400
// 0076bf30  8d942488000000       lea edx, [esp + 0x88]
// 0076bf37  52                   push edx
// 0076bf38  55                   push ebp
// 0076bf39  56                   push esi
// 0076bf3a  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 0076bf45  e8f6f10200           call 0x79b140
// 0076bf4a  8bc8                 mov ecx, eax
// 0076bf4c  e82fed0200           call 0x79ac80
// 0076bf51  85db                 test ebx, ebx
// 0076bf53  7467                 je 0x76bfbc
// 0076bf55  6a00                 push 0
// 0076bf57  6a09                 push 9
// 0076bf59  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0076bf60  ff1500008a00         call dword ptr [0x8a0000]
// 0076bf66  89442424             mov dword ptr [esp + 0x24], eax
// 0076bf6a  85c0                 test eax, eax
// 0076bf6c  7e4e                 jle 0x76bfbc
// 0076bf6e  40                   inc eax
// 0076bf6f  50                   push eax
// 0076bf70  8d84248c000000       lea eax, [esp + 0x8c]
// 0076bf77  50                   push eax
// 0076bf78  8d8c248c000000       lea ecx, [esp + 0x8c]
// 0076bf7f  ff1504008a00         call dword ptr [0x8a0004]
// 0076bf85  8bc8                 mov ecx, eax
// 0076bf87  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0076bf8d  50                   push eax
// 0076bf8e  ff1574e98900         call dword ptr [0x89e974]
// 0076bf94  83c404               add esp, 4
// 0076bf97  8d8c2488000000       lea ecx, [esp + 0x88]
// 0076bf9e  8bf8                 mov edi, eax
// 0076bfa0  ff1510fd8900         call dword ptr [0x89fd10]
// 0076bfa6  85ff                 test edi, edi
// 0076bfa8  7612                 jbe 0x76bfbc
// 0076bfaa  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076bfae  51                   push ecx
// 0076bfaf  8d8c2488000000       lea ecx, [esp + 0x88]
// 0076bfb6  ff1504f18900         call dword ptr [0x89f104]
// 0076bfbc  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0076bfc0  8b4838               mov ecx, dword ptr [eax + 0x38]
// 0076bfc3  85c9                 test ecx, ecx
// 0076bfc5  740f                 je 0x76bfd6
// 0076bfc7  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 0076bfcd  89942488000000       mov dword ptr [esp + 0x88], edx
// 0076bfd4  eb24                 jmp 0x76bffa
// 0076bfd6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0076bfd9  85c9                 test ecx, ecx
// 0076bfdb  7412                 je 0x76bfef
// 0076bfdd  e8ae3ffcff           call 0x72ff90
// 0076bfe2  89842488000000       mov dword ptr [esp + 0x88], eax
// 0076bfe9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0076bfed  eb0b                 jmp 0x76bffa
// 0076bfef  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 0076bffa  8bc8                 mov ecx, eax
// 0076bffc  e81fe3ffff           call 0x76a320
// 0076c001  89442424             mov dword ptr [esp + 0x24], eax
// 0076c005  33c0                 xor eax, eax
// 0076c007  85db                 test ebx, ebx
// 0076c009  0f95c0               setne al
// 0076c00c  8d4c2468             lea ecx, [esp + 0x68]
// 0076c010  c744242000000000     mov dword ptr [esp + 0x20], 0
// 0076c018  40                   inc eax
// 0076c019  89442418             mov dword ptr [esp + 0x18], eax
// 0076c01d  ff15bcfc8900         call dword ptr [0x89fcbc]
// 0076c023  33c0                 xor eax, eax
// 0076c025  c644247c01           mov byte ptr [esp + 0x7c], 1
// 0076c02a  39842488000000       cmp dword ptr [esp + 0x88], eax
// 0076c031  0f8494000000         je 0x76c0cb
// 0076c037  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0076c03b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0076c03e  89442454             mov dword ptr [esp + 0x54], eax
// 0076c042  89442458             mov dword ptr [esp + 0x58], eax
// 0076c046  8d842484000000       lea eax, [esp + 0x84]
// 0076c04d  50                   push eax
// 0076c04e  8d4c246c             lea ecx, [esp + 0x6c]
// 0076c052  897c2454             mov dword ptr [esp + 0x54], edi
// 0076c056  89542468             mov dword ptr [esp + 0x68], edx
// 0076c05a  89742464             mov dword ptr [esp + 0x64], esi
// 0076c05e  896c2460             mov dword ptr [esp + 0x60], ebp
// 0076c062  ff1508fa8900         call dword ptr [0x89fa08]
// 0076c068  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076c06c  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0076c073  8d542450             lea edx, [esp + 0x50]
// 0076c077  52                   push edx
// 0076c078  6a00                 push 0
// 0076c07a  894c2474             mov dword ptr [esp + 0x74], ecx
// 0076c07e  c744247800000000     mov dword ptr [esp + 0x78], 0
// 0076c086  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0076c089  685e280000           push 0x285e
// 0076c08e  51                   push ecx
// 0076c08f  ff1590ee8900         call dword ptr [0x89ee90]
// 0076c095  85c0                 test eax, eax
// 0076c097  7432                 je 0x76c0cb
// 0076c099  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 0076c09d  8b742454             mov esi, dword ptr [esp + 0x54]
// 0076c0a1  8d442468             lea eax, [esp + 0x68]
// 0076c0a5  50                   push eax
// 0076c0a6  8d8c2488000000       lea ecx, [esp + 0x88]
// 0076c0ad  8954241c             mov dword ptr [esp + 0x1c], edx
// 0076c0b1  ff1508fa8900         call dword ptr [0x89fa08]
// 0076c0b7  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 0076c0bb  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 0076c0bf  894c2420             mov dword ptr [esp + 0x20], ecx
// 0076c0c3  85f6                 test esi, esi
// 0076c0c5  0f8580020000         jne 0x76c34b
// 0076c0cb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076c0cf  8d41ff               lea eax, [ecx - 1]
// 0076c0d2  83f80a               cmp eax, 0xa
// 0076c0d5  0f872f020000         ja 0x76c30a
// 0076c0db  ff248554c47600       jmp dword ptr [eax*4 + 0x76c454]
// 0076c0e2  81ffb8880000         cmp edi, 0x88b8
// 0076c0e8  750c                 jne 0x76c0f6
// 0076c0ea  e8b11a0000           call 0x76dba0
// 0076c0ef  8bf0                 mov esi, eax
// 0076c0f1  e910020000           jmp 0x76c306
// 0076c0f6  81ffba880000         cmp edi, 0x88ba
// 0076c0fc  750c                 jne 0x76c10a
// 0076c0fe  e86d2c0000           call 0x76ed70
// 0076c103  8bf0                 mov esi, eax
// 0076c105  e9fc010000           jmp 0x76c306
// 0076c10a  81ff00e80000         cmp edi, 0xe800
// 0076c110  750c                 jne 0x76c11e
// 0076c112  e8591e0000           call 0x76df70
// 0076c117  8bf0                 mov esi, eax
// 0076c119  e9e8010000           jmp 0x76c306
// 0076c11e  81ff10e20000         cmp edi, 0xe210
// 0076c124  7522                 jne 0x76c148
// 0076c126  684ca28f00           push 0x8fa24c
// 0076c12b  8d8c2488000000       lea ecx, [esp + 0x88]
// 0076c132  ff15d4fc8900         call dword ptr [0x89fcd4]
// 0076c138  85c0                 test eax, eax
// 0076c13a  7520                 jne 0x76c15c
// 0076c13c  e8cf210000           call 0x76e310
// 0076c141  8bf0                 mov esi, eax
// 0076c143  e9be010000           jmp 0x76c306
// 0076c148  81ff10e10000         cmp edi, 0xe110
// 0076c14e  750c                 jne 0x76c15c
// 0076c150  e8cb240000           call 0x76e620
// 0076c155  8bf0                 mov esi, eax
// 0076c157  e9aa010000           jmp 0x76c306
// 0076c15c  e82f290500           call 0x7bea90
// 0076c161  8bf0                 mov esi, eax
// 0076c163  e99e010000           jmp 0x76c306
// 0076c168  e8131bfbff           call 0x71dc80
// 0076c16d  8bf0                 mov esi, eax
// 0076c16f  e992010000           jmp 0x76c306
// 0076c174  e887440400           call 0x7b0600
// 0076c179  8bf0                 mov esi, eax
// 0076c17b  e986010000           jmp 0x76c306
// 0076c180  e8fb2d0000           call 0x76ef80
// 0076c185  8bf0                 mov esi, eax
// 0076c187  e97a010000           jmp 0x76c306
// 0076c18c  e89f2e0000           call 0x76f030
// 0076c191  8bf0                 mov esi, eax
// 0076c193  e96e010000           jmp 0x76c306
// 0076c198  e8332f0000           call 0x76f0d0
// 0076c19d  8bf0                 mov esi, eax
// 0076c19f  e962010000           jmp 0x76c306
// 0076c1a4  e857320300           call 0x79f400
// 0076c1a9  8bf0                 mov esi, eax
// 0076c1ab  e956010000           jmp 0x76c306
// 0076c1b0  51                   push ecx
// 0076c1b1  e8aa42ffff           call 0x760460
// 0076c1b6  83c404               add esp, 4
// 0076c1b9  8d942484000000       lea edx, [esp + 0x84]
// 0076c1c0  52                   push edx
// 0076c1c1  8d4c2418             lea ecx, [esp + 0x18]
// 0076c1c5  8bf0                 mov esi, eax
// 0076c1c7  ff15e4fc8900         call dword ptr [0x89fce4]
// 0076c1cd  8d442414             lea eax, [esp + 0x14]
// 0076c1d1  50                   push eax
// 0076c1d2  c684248000000002     mov byte ptr [esp + 0x80], 2
// 0076c1da  e83168fbff           call 0x722a10
// 0076c1df  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 0076c1e6  83c404               add esp, 4
// 0076c1e9  85ed                 test ebp, ebp
// 0076c1eb  747a                 je 0x76c267
// 0076c1ed  33c0                 xor eax, eax
// 0076c1ef  89442438             mov dword ptr [esp + 0x38], eax
// 0076c1f3  8d4c2414             lea ecx, [esp + 0x14]
// 0076c1f7  89442434             mov dword ptr [esp + 0x34], eax
// 0076c1fb  8944243c             mov dword ptr [esp + 0x3c], eax
// 0076c1ff  89442440             mov dword ptr [esp + 0x40], eax
// 0076c203  89442444             mov dword ptr [esp + 0x44], eax
// 0076c207  89442448             mov dword ptr [esp + 0x48], eax
// 0076c20b  8944244c             mov dword ptr [esp + 0x4c], eax
// 0076c20f  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0076c217  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0076c21d  8b5520               mov edx, dword ptr [ebp + 0x20]
// 0076c220  8d4c2434             lea ecx, [esp + 0x34]
// 0076c224  51                   push ecx
// 0076c225  6a00                 push 0
// 0076c227  6861280000           push 0x2861
// 0076c22c  52                   push edx
// 0076c22d  89442458             mov dword ptr [esp + 0x58], eax
// 0076c231  897c245c             mov dword ptr [esp + 0x5c], edi
// 0076c235  ff1590ee8900         call dword ptr [0x89ee90]
// 0076c23b  85c0                 test eax, eax
// 0076c23d  7428                 je 0x76c267
// 0076c23f  8b442434             mov eax, dword ptr [esp + 0x34]
// 0076c243  50                   push eax
// 0076c244  e857a9ffff           call 0x766ba0
// 0076c249  50                   push eax
// 0076c24a  e877cdfaff           call 0x718fc6
// 0076c24f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0076c253  83c408               add esp, 8
// 0076c256  51                   push ecx
// 0076c257  8d4c2418             lea ecx, [esp + 0x18]
// 0076c25b  8be8                 mov ebp, eax
// 0076c25d  ff15acfc8900         call dword ptr [0x89fcac]
// 0076c263  85ed                 test ebp, ebp
// 0076c265  750f                 jne 0x76c276
// 0076c267  8b542424             mov edx, dword ptr [esp + 0x24]
// 0076c26b  52                   push edx
// 0076c26c  e83fa9ffff           call 0x766bb0
// 0076c271  83c404               add esp, 4
// 0076c274  8be8                 mov ebp, eax
// 0076c276  8d4c2414             lea ecx, [esp + 0x14]
// 0076c27a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0076c280  50                   push eax
// 0076c281  8bcd                 mov ecx, ebp
// 0076c283  e808cffbff           call 0x729190
// 0076c288  c744242c94038b00     mov dword ptr [esp + 0x2c], 0x8b0394
// 0076c290  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0076c298  c644247c03           mov byte ptr [esp + 0x7c], 3
// 0076c29d  85db                 test ebx, ebx
// 0076c29f  752a                 jne 0x76c2cb
// 0076c2a1  85ff                 test edi, edi
// 0076c2a3  7636                 jbe 0x76c2db
// 0076c2a5  57                   push edi
// 0076c2a6  8d4c2430             lea ecx, [esp + 0x30]
// 0076c2aa  e8a107cbff           call 0x41ca50
// 0076c2af  85c0                 test eax, eax
// 0076c2b1  7428                 je 0x76c2db
// 0076c2b3  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076c2b7  53                   push ebx
// 0076c2b8  50                   push eax
// 0076c2b9  ff151cee8900         call dword ptr [0x89ee1c]
// 0076c2bf  50                   push eax
// 0076c2c0  e8fdcdfaff           call 0x7190c2
// 0076c2c5  8bd8                 mov ebx, eax
// 0076c2c7  85db                 test ebx, ebx
// 0076c2c9  7410                 je 0x76c2db
// 0076c2cb  8b5500               mov edx, dword ptr [ebp]
// 0076c2ce  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 0076c2d4  6a00                 push 0
// 0076c2d6  53                   push ebx
// 0076c2d7  8bcd                 mov ecx, ebp
// 0076c2d9  ffd0                 call eax
// 0076c2db  89ae78010000         mov dword ptr [esi + 0x178], ebp
// 0076c2e1  8d4c242c             lea ecx, [esp + 0x2c]
// 0076c2e5  c644247c02           mov byte ptr [esp + 0x7c], 2
// 0076c2ea  c744242c94038b00     mov dword ptr [esp + 0x2c], 0x8b0394
// 0076c2f2  e8b3d0faff           call 0x7193aa
// 0076c2f7  8d4c2414             lea ecx, [esp + 0x14]
// 0076c2fb  c644247c01           mov byte ptr [esp + 0x7c], 1
// 0076c300  ff1510fd8900         call dword ptr [0x89fd10]
// 0076c306  85f6                 test esi, esi
// 0076c308  751e                 jne 0x76c328
// 0076c30a  8d4c2468             lea ecx, [esp + 0x68]
// 0076c30e  ff1510fd8900         call dword ptr [0x89fd10]
// 0076c314  8d8c2484000000       lea ecx, [esp + 0x84]
// 0076c31b  ff1510fd8900         call dword ptr [0x89fd10]
// 0076c321  33c0                 xor eax, eax
// 0076c323  e916010000           jmp 0x76c43e
// 0076c328  8b442420             mov eax, dword ptr [esp + 0x20]
// 0076c32c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076c330  898efc000000         mov dword ptr [esi + 0xfc], ecx
// 0076c336  398648010000         cmp dword ptr [esi + 0x148], eax
// 0076c33c  740d                 je 0x76c34b
// 0076c33e  8bce                 mov ecx, esi
// 0076c340  898648010000         mov dword ptr [esi + 0x148], eax
// 0076c346  e85533fbff           call 0x71f6a0
// 0076c34b  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0076c34f  57                   push edi
// 0076c350  8bcb                 mov ecx, ebx
// 0076c352  e839d0fbff           call 0x729390
// 0076c357  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 0076c35e  8be8                 mov ebp, eax
// 0076c360  7571                 jne 0x76c3d3
// 0076c362  85ed                 test ebp, ebp
// 0076c364  753e                 jne 0x76c3a4
// 0076c366  85db                 test ebx, ebx
// 0076c368  7411                 je 0x76c37b
// 0076c36a  394368               cmp dword ptr [ebx + 0x68], eax
// 0076c36d  740c                 je 0x76c37b
// 0076c36f  85ff                 test edi, edi
// 0076c371  7608                 jbe 0x76c37b
// 0076c373  81ffffffff0f         cmp edi, 0xfffffff
// 0076c379  721f                 jb 0x76c39a
// 0076c37b  57                   push edi
// 0076c37c  8bce                 mov ecx, esi
// 0076c37e  e84d34fbff           call 0x71f7d0
// 0076c383  8d8c2484000000       lea ecx, [esp + 0x84]
// 0076c38a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0076c390  50                   push eax
// 0076c391  8bce                 mov ecx, esi
// 0076c393  e8883cfbff           call 0x720020
// 0076c398  eb39                 jmp 0x76c3d3
// 0076c39a  57                   push edi
// 0076c39b  8bcb                 mov ecx, ebx
// 0076c39d  e8decffbff           call 0x729380
// 0076c3a2  8be8                 mov ebp, eax
// 0076c3a4  8b16                 mov edx, dword ptr [esi]
// 0076c3a6  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0076c3ac  55                   push ebp
// 0076c3ad  8bce                 mov ecx, esi
// 0076c3af  ffd0                 call eax
// 0076c3b1  8d4d40               lea ecx, [ebp + 0x40]
// 0076c3b4  ff155cfb8900         call dword ptr [0x89fb5c]
// 0076c3ba  84c0                 test al, al
// 0076c3bc  7415                 je 0x76c3d3
// 0076c3be  8d8c2484000000       lea ecx, [esp + 0x84]
// 0076c3c5  ff15d0fc8900         call dword ptr [0x89fcd0]
// 0076c3cb  50                   push eax
// 0076c3cc  8bcd                 mov ecx, ebp
// 0076c3ce  e8ed51fbff           call 0x7215c0
// 0076c3d3  8b442428             mov eax, dword ptr [esp + 0x28]
// 0076c3d7  85c0                 test eax, eax
// 0076c3d9  7408                 je 0x76c3e3
// 0076c3db  50                   push eax
// 0076c3dc  8bce                 mov ecx, esi
// 0076c3de  e83d36fbff           call 0x71fa20
// 0076c3e3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0076c3e7  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0076c3ea  6a01                 push 1
// 0076c3ec  56                   push esi
// 0076c3ed  51                   push ecx
// 0076c3ee  8d4f24               lea ecx, [edi + 0x24]
// 0076c3f1  e8fa5b0a00           call 0x811ff0
// 0076c3f6  8b17                 mov edx, dword ptr [edi]
// 0076c3f8  8b4268               mov eax, dword ptr [edx + 0x68]
// 0076c3fb  56                   push esi
// 0076c3fc  8bcf                 mov ecx, edi
// 0076c3fe  ffd0                 call eax
// 0076c400  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 0076c407  85c0                 test eax, eax
// 0076c409  741a                 je 0x76c425
// 0076c40b  8d4c2450             lea ecx, [esp + 0x50]
// 0076c40f  51                   push ecx
// 0076c410  6a00                 push 0
// 0076c412  8974245c             mov dword ptr [esp + 0x5c], esi
// 0076c416  8b5020               mov edx, dword ptr [eax + 0x20]
// 0076c419  685f280000           push 0x285f
// 0076c41e  52                   push edx
// 0076c41f  ff1590ee8900         call dword ptr [0x89ee90]
// 0076c425  8d4c2468             lea ecx, [esp + 0x68]
// 0076c429  ff1510fd8900         call dword ptr [0x89fd10]
// 0076c42f  8d8c2484000000       lea ecx, [esp + 0x84]
// 0076c436  ff1510fd8900         call dword ptr [0x89fd10]
// 0076c43c  8bc6                 mov eax, esi
// 0076c43e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0076c442  64890d00000000       mov dword ptr fs:[0], ecx
// 0076c449  59                   pop ecx
// 0076c44a  5f                   pop edi
// 0076c44b  5e                   pop esi
// 0076c44c  5d                   pop ebp
// 0076c44d  5b                   pop ebx
// 0076c44e  83c46c               add esp, 0x6c
// 0076c451  c20800               ret 8
// 0076c454  e2c0                 loop 0x76c416
// 0076c456  7600                 jbe 0x76c458
// 0076c458  b0c1                 mov al, 0xc1
// 0076c45a  7600                 jbe 0x76c45c
// 0076c45c  b0c1                 mov al, 0xc1
// 0076c45e  7600                 jbe 0x76c460
// 0076c460  b0c1                 mov al, 0xc1
// 0076c462  7600                 jbe 0x76c464
// 0076c464  68c1760074           push 0x740076c1
// 0076c469  c176000a             sal dword ptr [esi], 0xa
// 0076c46d  c3                   ret 
// 0076c46e  7600                 jbe 0x76c470
// 0076c470  80c176               add cl, 0x76
// 0076c473  008cc17600a4c1       add byte ptr [ecx + eax*8 - 0x3e5bff8a], cl
// 0076c47a  7600                 jbe 0x76c47c
// 0076c47c  98                   cwde 
// copied from an identical function in another client (function ?AddMenuItem@CXTPControls@@QAEPAVCXTPControl@@PAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp