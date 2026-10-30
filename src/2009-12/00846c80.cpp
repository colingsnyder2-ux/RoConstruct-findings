// roc 2009-12 00846c80  unit: CXTPControls  size: 1504 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00846c80
//
// 00846c80  6aff                 push -1
// 00846c82  6872d19500           push 0x95d172
// 00846c87  64a100000000         mov eax, dword ptr fs:[0]
// 00846c8d  50                   push eax
// 00846c8e  83ec60               sub esp, 0x60
// 00846c91  53                   push ebx
// 00846c92  55                   push ebp
// 00846c93  56                   push esi
// 00846c94  57                   push edi
// 00846c95  a10052b600           mov eax, dword ptr [0xb65200]
// 00846c9a  33c4                 xor eax, esp
// 00846c9c  50                   push eax
// 00846c9d  8d442474             lea eax, [esp + 0x74]
// 00846ca1  64a300000000         mov dword ptr fs:[0], eax
// 00846ca7  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00846cab  8bb42484000000       mov esi, dword ptr [esp + 0x84]
// 00846cb2  8bac2488000000       mov ebp, dword ptr [esp + 0x88]
// 00846cb9  8b4604               mov eax, dword ptr [esi + 4]
// 00846cbc  55                   push ebp
// 00846cbd  50                   push eax
// 00846cbe  ff1548cc9800         call dword ptr [0x98cc48]
// 00846cc4  50                   push eax
// 00846cc5  e820d2faff           call 0x7f3eea
// 00846cca  8b4e04               mov ecx, dword ptr [esi + 4]
// 00846ccd  55                   push ebp
// 00846cce  51                   push ecx
// 00846ccf  8bd8                 mov ebx, eax
// 00846cd1  ff1544cc9800         call dword ptr [0x98cc44]
// 00846cd7  8b5604               mov edx, dword ptr [esi + 4]
// 00846cda  6a01                 push 1
// 00846cdc  6a01                 push 1
// 00846cde  52                   push edx
// 00846cdf  8bf8                 mov edi, eax
// 00846ce1  ff1558cb9800         call dword ptr [0x98cb58]
// 00846ce7  33c9                 xor ecx, ecx
// 00846ce9  3bc5                 cmp eax, ebp
// 00846ceb  0f94c1               sete cl
// 00846cee  894c2428             mov dword ptr [esp + 0x28], ecx
// 00846cf2  81ff00ff0000         cmp edi, 0xff00
// 00846cf8  0f8403040000         je 0x847101
// 00846cfe  8d8c2484000000       lea ecx, [esp + 0x84]
// 00846d05  ff1574de9800         call dword ptr [0x98de74]
// 00846d0b  6800040000           push 0x400
// 00846d10  8d942488000000       lea edx, [esp + 0x88]
// 00846d17  52                   push edx
// 00846d18  55                   push ebp
// 00846d19  56                   push esi
// 00846d1a  c784248c00000000000000 mov dword ptr [esp + 0x8c], 0
// 00846d25  e8767b0200           call 0x86e8a0
// 00846d2a  8bc8                 mov ecx, eax
// 00846d2c  e8af760200           call 0x86e3e0
// 00846d31  85db                 test ebx, ebx
// 00846d33  7467                 je 0x846d9c
// 00846d35  6a00                 push 0
// 00846d37  6a09                 push 9
// 00846d39  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00846d40  ff1580d69800         call dword ptr [0x98d680]
// 00846d46  89442424             mov dword ptr [esp + 0x24], eax
// 00846d4a  85c0                 test eax, eax
// 00846d4c  7e4e                 jle 0x846d9c
// 00846d4e  40                   inc eax
// 00846d4f  50                   push eax
// 00846d50  8d84248c000000       lea eax, [esp + 0x8c]
// 00846d57  50                   push eax
// 00846d58  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00846d5f  ff157cd69800         call dword ptr [0x98d67c]
// 00846d65  8bc8                 mov ecx, eax
// 00846d67  ff1580de9800         call dword ptr [0x98de80]
// 00846d6d  50                   push eax
// 00846d6e  ff1598b79800         call dword ptr [0x98b798]
// 00846d74  83c404               add esp, 4
// 00846d77  8d8c2488000000       lea ecx, [esp + 0x88]
// 00846d7e  8bf8                 mov edi, eax
// 00846d80  ff15c0de9800         call dword ptr [0x98dec0]
// 00846d86  85ff                 test edi, edi
// 00846d88  7612                 jbe 0x846d9c
// 00846d8a  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00846d8e  51                   push ecx
// 00846d8f  8d8c2488000000       lea ecx, [esp + 0x88]
// 00846d96  ff1560d29800         call dword ptr [0x98d260]
// 00846d9c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00846da0  8b4838               mov ecx, dword ptr [eax + 0x38]
// 00846da3  85c9                 test ecx, ecx
// 00846da5  740f                 je 0x846db6
// 00846da7  8b91a0000000         mov edx, dword ptr [ecx + 0xa0]
// 00846dad  89942488000000       mov dword ptr [esp + 0x88], edx
// 00846db4  eb24                 jmp 0x846dda
// 00846db6  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00846db9  85c9                 test ecx, ecx
// 00846dbb  7412                 je 0x846dcf
// 00846dbd  e82e03fcff           call 0x8070f0
// 00846dc2  89842488000000       mov dword ptr [esp + 0x88], eax
// 00846dc9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00846dcd  eb0b                 jmp 0x846dda
// 00846dcf  c784248800000000000000 mov dword ptr [esp + 0x88], 0
// 00846dda  8bc8                 mov ecx, eax
// 00846ddc  e80fe3ffff           call 0x8450f0
// 00846de1  89442424             mov dword ptr [esp + 0x24], eax
// 00846de5  33c0                 xor eax, eax
// 00846de7  85db                 test ebx, ebx
// 00846de9  0f95c0               setne al
// 00846dec  8d4c2468             lea ecx, [esp + 0x68]
// 00846df0  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00846df8  40                   inc eax
// 00846df9  89442418             mov dword ptr [esp + 0x18], eax
// 00846dfd  ff1574de9800         call dword ptr [0x98de74]
// 00846e03  33c0                 xor eax, eax
// 00846e05  c644247c01           mov byte ptr [esp + 0x7c], 1
// 00846e0a  39842488000000       cmp dword ptr [esp + 0x88], eax
// 00846e11  0f8494000000         je 0x846eab
// 00846e17  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00846e1b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00846e1e  89442454             mov dword ptr [esp + 0x54], eax
// 00846e22  89442458             mov dword ptr [esp + 0x58], eax
// 00846e26  8d842484000000       lea eax, [esp + 0x84]
// 00846e2d  50                   push eax
// 00846e2e  8d4c246c             lea ecx, [esp + 0x6c]
// 00846e32  897c2454             mov dword ptr [esp + 0x54], edi
// 00846e36  89542468             mov dword ptr [esp + 0x68], edx
// 00846e3a  89742464             mov dword ptr [esp + 0x64], esi
// 00846e3e  896c2460             mov dword ptr [esp + 0x60], ebp
// 00846e42  ff1538d59800         call dword ptr [0x98d538]
// 00846e48  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00846e4c  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 00846e53  8d542450             lea edx, [esp + 0x50]
// 00846e57  52                   push edx
// 00846e58  6a00                 push 0
// 00846e5a  894c2474             mov dword ptr [esp + 0x74], ecx
// 00846e5e  c744247800000000     mov dword ptr [esp + 0x78], 0
// 00846e66  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00846e69  685e280000           push 0x285e
// 00846e6e  51                   push ecx
// 00846e6f  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00846e75  85c0                 test eax, eax
// 00846e77  7432                 je 0x846eab
// 00846e79  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 00846e7d  8b742454             mov esi, dword ptr [esp + 0x54]
// 00846e81  8d442468             lea eax, [esp + 0x68]
// 00846e85  50                   push eax
// 00846e86  8d8c2488000000       lea ecx, [esp + 0x88]
// 00846e8d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00846e91  ff1538d59800         call dword ptr [0x98d538]
// 00846e97  8b4c2470             mov ecx, dword ptr [esp + 0x70]
// 00846e9b  8b7c2450             mov edi, dword ptr [esp + 0x50]
// 00846e9f  894c2420             mov dword ptr [esp + 0x20], ecx
// 00846ea3  85f6                 test esi, esi
// 00846ea5  0f8580020000         jne 0x84712b
// 00846eab  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00846eaf  8d41ff               lea eax, [ecx - 1]
// 00846eb2  83f80a               cmp eax, 0xa
// 00846eb5  0f872f020000         ja 0x8470ea
// 00846ebb  ff248534728400       jmp dword ptr [eax*4 + 0x847234]
// 00846ec2  81ffb8880000         cmp edi, 0x88b8
// 00846ec8  750c                 jne 0x846ed6
// 00846eca  e8811a0000           call 0x848950
// 00846ecf  8bf0                 mov esi, eax
// 00846ed1  e910020000           jmp 0x8470e6
// 00846ed6  81ffba880000         cmp edi, 0x88ba
// 00846edc  750c                 jne 0x846eea
// 00846ede  e81d2c0000           call 0x849b00
// 00846ee3  8bf0                 mov esi, eax
// 00846ee5  e9fc010000           jmp 0x8470e6
// 00846eea  81ff00e80000         cmp edi, 0xe800
// 00846ef0  750c                 jne 0x846efe
// 00846ef2  e8291e0000           call 0x848d20
// 00846ef7  8bf0                 mov esi, eax
// 00846ef9  e9e8010000           jmp 0x8470e6
// 00846efe  81ff10e20000         cmp edi, 0xe210
// 00846f04  7522                 jne 0x846f28
// 00846f06  68f4a69f00           push 0x9fa6f4
// 00846f0b  8d8c2488000000       lea ecx, [esp + 0x88]
// 00846f12  ff1584de9800         call dword ptr [0x98de84]
// 00846f18  85c0                 test eax, eax
// 00846f1a  7520                 jne 0x846f3c
// 00846f1c  e89f210000           call 0x8490c0
// 00846f21  8bf0                 mov esi, eax
// 00846f23  e9be010000           jmp 0x8470e6
// 00846f28  81ff10e10000         cmp edi, 0xe110
// 00846f2e  750c                 jne 0x846f3c
// 00846f30  e89b240000           call 0x8493d0
// 00846f35  8bf0                 mov esi, eax
// 00846f37  e9aa010000           jmp 0x8470e6
// 00846f3c  e80f930400           call 0x890250
// 00846f41  8bf0                 mov esi, eax
// 00846f43  e99e010000           jmp 0x8470e6
// 00846f48  e8734efbff           call 0x7fbdc0
// 00846f4d  8bf0                 mov esi, eax
// 00846f4f  e992010000           jmp 0x8470e6
// 00846f54  e827450400           call 0x88b480
// 00846f59  8bf0                 mov esi, eax
// 00846f5b  e986010000           jmp 0x8470e6
// 00846f60  e8ab2d0000           call 0x849d10
// 00846f65  8bf0                 mov esi, eax
// 00846f67  e97a010000           jmp 0x8470e6
// 00846f6c  e84f2e0000           call 0x849dc0
// 00846f71  8bf0                 mov esi, eax
// 00846f73  e96e010000           jmp 0x8470e6
// 00846f78  e8e32e0000           call 0x849e60
// 00846f7d  8bf0                 mov esi, eax
// 00846f7f  e962010000           jmp 0x8470e6
// 00846f84  e8b7330300           call 0x87a340
// 00846f89  8bf0                 mov esi, eax
// 00846f8b  e956010000           jmp 0x8470e6
// 00846f90  51                   push ecx
// 00846f91  e89a42ffff           call 0x83b230
// 00846f96  83c404               add esp, 4
// 00846f99  8d942484000000       lea edx, [esp + 0x84]
// 00846fa0  52                   push edx
// 00846fa1  8d4c2418             lea ecx, [esp + 0x18]
// 00846fa5  8bf0                 mov esi, eax
// 00846fa7  ff1594de9800         call dword ptr [0x98de94]
// 00846fad  8d442414             lea eax, [esp + 0x14]
// 00846fb1  50                   push eax
// 00846fb2  c684248000000002     mov byte ptr [esp + 0x80], 2
// 00846fba  e81169fbff           call 0x7fd8d0
// 00846fbf  8bac248c000000       mov ebp, dword ptr [esp + 0x8c]
// 00846fc6  83c404               add esp, 4
// 00846fc9  85ed                 test ebp, ebp
// 00846fcb  747a                 je 0x847047
// 00846fcd  33c0                 xor eax, eax
// 00846fcf  89442438             mov dword ptr [esp + 0x38], eax
// 00846fd3  8d4c2414             lea ecx, [esp + 0x14]
// 00846fd7  89442434             mov dword ptr [esp + 0x34], eax
// 00846fdb  8944243c             mov dword ptr [esp + 0x3c], eax
// 00846fdf  89442440             mov dword ptr [esp + 0x40], eax
// 00846fe3  89442444             mov dword ptr [esp + 0x44], eax
// 00846fe7  89442448             mov dword ptr [esp + 0x48], eax
// 00846feb  8944244c             mov dword ptr [esp + 0x4c], eax
// 00846fef  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00846ff7  ff1580de9800         call dword ptr [0x98de80]
// 00846ffd  8b5520               mov edx, dword ptr [ebp + 0x20]
// 00847000  8d4c2434             lea ecx, [esp + 0x34]
// 00847004  51                   push ecx
// 00847005  6a00                 push 0
// 00847007  6861280000           push 0x2861
// 0084700c  52                   push edx
// 0084700d  89442458             mov dword ptr [esp + 0x58], eax
// 00847011  897c245c             mov dword ptr [esp + 0x5c], edi
// 00847015  ff15c4cb9800         call dword ptr [0x98cbc4]
// 0084701b  85c0                 test eax, eax
// 0084701d  7428                 je 0x847047
// 0084701f  8b442434             mov eax, dword ptr [esp + 0x34]
// 00847023  50                   push eax
// 00847024  e857a9ffff           call 0x841980
// 00847029  50                   push eax
// 0084702a  e80fccfaff           call 0x7f3c3e
// 0084702f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00847033  83c408               add esp, 8
// 00847036  51                   push ecx
// 00847037  8d4c2418             lea ecx, [esp + 0x18]
// 0084703b  8be8                 mov ebp, eax
// 0084703d  ff155cde9800         call dword ptr [0x98de5c]
// 00847043  85ed                 test ebp, ebp
// 00847045  750f                 jne 0x847056
// 00847047  8b542424             mov edx, dword ptr [esp + 0x24]
// 0084704b  52                   push edx
// 0084704c  e83fa9ffff           call 0x841990
// 00847051  83c404               add esp, 4
// 00847054  8be8                 mov ebp, eax
// 00847056  8d4c2414             lea ecx, [esp + 0x14]
// 0084705a  ff1580de9800         call dword ptr [0x98de80]
// 00847060  50                   push eax
// 00847061  8bcd                 mov ecx, ebp
// 00847063  e808cefcff           call 0x813e70
// 00847068  c744242c64309a00     mov dword ptr [esp + 0x2c], 0x9a3064
// 00847070  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00847078  c644247c03           mov byte ptr [esp + 0x7c], 3
// 0084707d  85db                 test ebx, ebx
// 0084707f  752a                 jne 0x8470ab
// 00847081  85ff                 test edi, edi
// 00847083  7636                 jbe 0x8470bb
// 00847085  57                   push edi
// 00847086  8d4c2430             lea ecx, [esp + 0x30]
// 0084708a  e83160bdff           call 0x41d0c0
// 0084708f  85c0                 test eax, eax
// 00847091  7428                 je 0x8470bb
// 00847093  8b442430             mov eax, dword ptr [esp + 0x30]
// 00847097  53                   push ebx
// 00847098  50                   push eax
// 00847099  ff1548cc9800         call dword ptr [0x98cc48]
// 0084709f  50                   push eax
// 008470a0  e845cefaff           call 0x7f3eea
// 008470a5  8bd8                 mov ebx, eax
// 008470a7  85db                 test ebx, ebx
// 008470a9  7410                 je 0x8470bb
// 008470ab  8b5500               mov edx, dword ptr [ebp]
// 008470ae  8b824c010000         mov eax, dword ptr [edx + 0x14c]
// 008470b4  6a00                 push 0
// 008470b6  53                   push ebx
// 008470b7  8bcd                 mov ecx, ebp
// 008470b9  ffd0                 call eax
// 008470bb  89ae78010000         mov dword ptr [esi + 0x178], ebp
// 008470c1  8d4c242c             lea ecx, [esp + 0x2c]
// 008470c5  c644247c02           mov byte ptr [esp + 0x7c], 2
// 008470ca  c744242c64309a00     mov dword ptr [esp + 0x2c], 0x9a3064
// 008470d2  e8fbd0faff           call 0x7f41d2
// 008470d7  8d4c2414             lea ecx, [esp + 0x14]
// 008470db  c644247c01           mov byte ptr [esp + 0x7c], 1
// 008470e0  ff15c0de9800         call dword ptr [0x98dec0]
// 008470e6  85f6                 test esi, esi
// 008470e8  751e                 jne 0x847108
// 008470ea  8d4c2468             lea ecx, [esp + 0x68]
// 008470ee  ff15c0de9800         call dword ptr [0x98dec0]
// 008470f4  8d8c2484000000       lea ecx, [esp + 0x84]
// 008470fb  ff15c0de9800         call dword ptr [0x98dec0]
// 00847101  33c0                 xor eax, eax
// 00847103  e916010000           jmp 0x84721e
// 00847108  8b442420             mov eax, dword ptr [esp + 0x20]
// 0084710c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00847110  898efc000000         mov dword ptr [esi + 0xfc], ecx
// 00847116  398648010000         cmp dword ptr [esi + 0x148], eax
// 0084711c  740d                 je 0x84712b
// 0084711e  8bce                 mov ecx, esi
// 00847120  898648010000         mov dword ptr [esi + 0x148], eax
// 00847126  e895ebfaff           call 0x7f5cc0
// 0084712b  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0084712f  57                   push edi
// 00847130  8bcb                 mov ecx, ebx
// 00847132  e839cffcff           call 0x814070
// 00847137  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 0084713e  8be8                 mov ebp, eax
// 00847140  7571                 jne 0x8471b3
// 00847142  85ed                 test ebp, ebp
// 00847144  753e                 jne 0x847184
// 00847146  85db                 test ebx, ebx
// 00847148  7411                 je 0x84715b
// 0084714a  394368               cmp dword ptr [ebx + 0x68], eax
// 0084714d  740c                 je 0x84715b
// 0084714f  85ff                 test edi, edi
// 00847151  7608                 jbe 0x84715b
// 00847153  81ffffffff0f         cmp edi, 0xfffffff
// 00847159  721f                 jb 0x84717a
// 0084715b  57                   push edi
// 0084715c  8bce                 mov ecx, esi
// 0084715e  e88decfaff           call 0x7f5df0
// 00847163  8d8c2484000000       lea ecx, [esp + 0x84]
// 0084716a  ff1580de9800         call dword ptr [0x98de80]
// 00847170  50                   push eax
// 00847171  8bce                 mov ecx, esi
// 00847173  e8b8f5faff           call 0x7f6730
// 00847178  eb39                 jmp 0x8471b3
// 0084717a  57                   push edi
// 0084717b  8bcb                 mov ecx, ebx
// 0084717d  e8decefcff           call 0x814060
// 00847182  8be8                 mov ebp, eax
// 00847184  8b16                 mov edx, dword ptr [esi]
// 00847186  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0084718c  55                   push ebp
// 0084718d  8bce                 mov ecx, esi
// 0084718f  ffd0                 call eax
// 00847191  8d4d40               lea ecx, [ebp + 0x40]
// 00847194  ff15bcdd9800         call dword ptr [0x98ddbc]
// 0084719a  84c0                 test al, al
// 0084719c  7415                 je 0x8471b3
// 0084719e  8d8c2484000000       lea ecx, [esp + 0x84]
// 008471a5  ff1580de9800         call dword ptr [0x98de80]
// 008471ab  50                   push eax
// 008471ac  8bcd                 mov ecx, ebp
// 008471ae  e85d0bfbff           call 0x7f7d10
// 008471b3  8b442428             mov eax, dword ptr [esp + 0x28]
// 008471b7  85c0                 test eax, eax
// 008471b9  7408                 je 0x8471c3
// 008471bb  50                   push eax
// 008471bc  8bce                 mov ecx, esi
// 008471be  e87deefaff           call 0x7f6040
// 008471c3  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008471c7  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 008471ca  6a01                 push 1
// 008471cc  56                   push esi
// 008471cd  51                   push ecx
// 008471ce  8d4f24               lea ecx, [edi + 0x24]
// 008471d1  e86a690a00           call 0x8edb40
// 008471d6  8b17                 mov edx, dword ptr [edi]
// 008471d8  8b4268               mov eax, dword ptr [edx + 0x68]
// 008471db  56                   push esi
// 008471dc  8bcf                 mov ecx, edi
// 008471de  ffd0                 call eax
// 008471e0  8b842488000000       mov eax, dword ptr [esp + 0x88]
// 008471e7  85c0                 test eax, eax
// 008471e9  741a                 je 0x847205
// 008471eb  8d4c2450             lea ecx, [esp + 0x50]
// 008471ef  51                   push ecx
// 008471f0  6a00                 push 0
// 008471f2  8974245c             mov dword ptr [esp + 0x5c], esi
// 008471f6  8b5020               mov edx, dword ptr [eax + 0x20]
// 008471f9  685f280000           push 0x285f
// 008471fe  52                   push edx
// 008471ff  ff15c4cb9800         call dword ptr [0x98cbc4]
// 00847205  8d4c2468             lea ecx, [esp + 0x68]
// 00847209  ff15c0de9800         call dword ptr [0x98dec0]
// 0084720f  8d8c2484000000       lea ecx, [esp + 0x84]
// 00847216  ff15c0de9800         call dword ptr [0x98dec0]
// 0084721c  8bc6                 mov eax, esi
// 0084721e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00847222  64890d00000000       mov dword ptr fs:[0], ecx
// 00847229  59                   pop ecx
// 0084722a  5f                   pop edi
// 0084722b  5e                   pop esi
// 0084722c  5d                   pop ebp
// 0084722d  5b                   pop ebx
// 0084722e  83c46c               add esp, 0x6c
// 00847231  c20800               ret 8
// 00847234  c26e84               ret 0x846e
// 00847237  00906f840090         add byte ptr [eax - 0x6fff7b91], dl
// 0084723d  6f                   outsd dx, dword ptr [esi]
// 0084723e  8400                 test byte ptr [eax], al
// 00847240  90                   nop 
// 00847241  6f                   outsd dx, dword ptr [esi]
// 00847242  8400                 test byte ptr [eax], al
// 00847244  48                   dec eax
// 00847245  6f                   outsd dx, dword ptr [esi]
// 00847246  8400                 test byte ptr [eax], al
// 00847248  54                   push esp
// 00847249  6f                   outsd dx, dword ptr [esi]
// 0084724a  8400                 test byte ptr [eax], al
// 0084724c  ea708400606f84       ljmp 0x846f:0x60008470
// 00847253  006c6f84             add byte ptr [edi + ebp*2 - 0x7c], ch
// 00847257  00846f8400786f       add byte ptr [edi + ebp*2 + 0x6f780084], al
// 0084725e  8400                 test byte ptr [eax], al
// copied from an identical function in another client (function ?AddMenuItem@CXTPControls@@QAEPAVCXTPControl@@PAVCMenu@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPControls.cpp