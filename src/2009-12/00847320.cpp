// roc 2009-12 00847320  unit: CXTPControls  size: 1229 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847320
//
// 00847320  83ec3c               sub esp, 0x3c
// 00847323  8b442450             mov eax, dword ptr [esp + 0x50]
// 00847327  8b00                 mov eax, dword ptr [eax]
// 00847329  53                   push ebx
// 0084732a  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 0084732e  55                   push ebp
// 0084732f  56                   push esi
// 00847330  8be9                 mov ebp, ecx
// 00847332  83e010               and eax, 0x10
// 00847335  57                   push edi
// 00847336  896c2410             mov dword ptr [esp + 0x10], ebp
// 0084733a  8944241c             mov dword ptr [esp + 0x1c], eax
// 0084733e  8bff                 mov edi, edi
// 00847340  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 00847343  8d41ff               lea eax, [ecx - 1]
// 00847346  33d2                 xor edx, edx
// 00847348  8bf8                 mov edi, eax
// 0084734a  83ff02               cmp edi, 2
// 0084734d  89542418             mov dword ptr [esp + 0x18], edx
// 00847351  894c2414             mov dword ptr [esp + 0x14], ecx
// 00847355  0f8c8c000000         jl 0x8473e7
// 0084735b  8bcf                 mov ecx, edi
// 0084735d  c1e106               shl ecx, 6
// 00847360  8d5c1934             lea ebx, [ecx + ebx + 0x34]
// 00847364  eb02                 jmp 0x847368
// 00847366  33d2                 xor edx, edx
// 00847368  3953f4               cmp dword ptr [ebx - 0xc], edx
// 0084736b  746d                 je 0x8473da
// 0084736d  3913                 cmp dword ptr [ebx], edx
// 0084736f  7569                 jne 0x8473da
// 00847371  3bfa                 cmp edi, edx
// 00847373  89542428             mov dword ptr [esp + 0x28], edx
// 00847377  8954242c             mov dword ptr [esp + 0x2c], edx
// 0084737b  89542430             mov dword ptr [esp + 0x30], edx
// 0084737f  8bc7                 mov eax, edi
// 00847381  7c57                 jl 0x8473da
// 00847383  8bf3                 mov esi, ebx
// 00847385  837ef400             cmp dword ptr [esi - 0xc], 0
// 00847389  743e                 je 0x8473c9
// 0084738b  83fa02               cmp edx, 2
// 0084738e  7405                 je 0x847395
// 00847390  833e00               cmp dword ptr [esi], 0
// 00847393  753c                 jne 0x8473d1
// 00847395  85c0                 test eax, eax
// 00847397  7c17                 jl 0x8473b0
// 00847399  3b442414             cmp eax, dword ptr [esp + 0x14]
// 0084739d  7d11                 jge 0x8473b0
// 0084739f  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 008473a2  0f8dcb030000         jge 0x847773
// 008473a8  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 008473ab  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 008473ae  eb02                 jmp 0x8473b2
// 008473b0  33c9                 xor ecx, ecx
// 008473b2  83b94801000004       cmp dword ptr [ecx + 0x148], 4
// 008473b9  7516                 jne 0x8473d1
// 008473bb  89449428             mov dword ptr [esp + edx*4 + 0x28], eax
// 008473bf  42                   inc edx
// 008473c0  83fa03               cmp edx, 3
// 008473c3  0f84bd000000         je 0x847486
// 008473c9  48                   dec eax
// 008473ca  83ee40               sub esi, 0x40
// 008473cd  85c0                 test eax, eax
// 008473cf  7db4                 jge 0x847385
// 008473d1  83fa03               cmp edx, 3
// 008473d4  0f84ac000000         je 0x847486
// 008473da  4f                   dec edi
// 008473db  83eb40               sub ebx, 0x40
// 008473de  83ff02               cmp edi, 2
// 008473e1  7d83                 jge 0x847366
// 008473e3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008473e7  8d41ff               lea eax, [ecx - 1]
// 008473ea  83f802               cmp eax, 2
// 008473ed  0f8c52010000         jl 0x847545
// 008473f3  8b542458             mov edx, dword ptr [esp + 0x58]
// 008473f7  8bc8                 mov ecx, eax
// 008473f9  c1e106               shl ecx, 6
// 008473fc  837c112800           cmp dword ptr [ecx + edx + 0x28], 0
// 00847401  8d3c11               lea edi, [ecx + edx]
// 00847404  0f8429010000         je 0x847533
// 0084740a  837f3400             cmp dword ptr [edi + 0x34], 0
// 0084740e  0f851f010000         jne 0x847533
// 00847414  33f6                 xor esi, esi
// 00847416  33db                 xor ebx, ebx
// 00847418  33ed                 xor ebp, ebp
// 0084741a  33d2                 xor edx, edx
// 0084741c  33c9                 xor ecx, ecx
// 0084741e  89742434             mov dword ptr [esp + 0x34], esi
// 00847422  895c2438             mov dword ptr [esp + 0x38], ebx
// 00847426  896c243c             mov dword ptr [esp + 0x3c], ebp
// 0084742a  85c0                 test eax, eax
// 0084742c  0f8cf8000000         jl 0x84752a
// 00847432  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00847436  8d7734               lea esi, [edi + 0x34]
// 00847439  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0084743d  8d6a04               lea ebp, [edx + 4]
// 00847440  837ef400             cmp dword ptr [esi - 0xc], 0
// 00847444  0f84c8000000         je 0x847512
// 0084744a  83fa02               cmp edx, 2
// 0084744d  7409                 je 0x847458
// 0084744f  833e00               cmp dword ptr [esi], 0
// 00847452  0f85c6000000         jne 0x84751e
// 00847458  89449434             mov dword ptr [esp + edx*4 + 0x34], eax
// 0084745c  42                   inc edx
// 0084745d  85c9                 test ecx, ecx
// 0084745f  0f85a3000000         jne 0x847508
// 00847465  85c0                 test eax, eax
// 00847467  0f8c8d000000         jl 0x8474fa
// 0084746d  3bc3                 cmp eax, ebx
// 0084746f  0f8d85000000         jge 0x8474fa
// 00847475  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 00847478  0f8df5020000         jge 0x847773
// 0084747e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00847481  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00847484  eb76                 jmp 0x8474fc
// 00847486  8b442428             mov eax, dword ptr [esp + 0x28]
// 0084748a  85c0                 test eax, eax
// 0084748c  7c17                 jl 0x8474a5
// 0084748e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00847492  7d11                 jge 0x8474a5
// 00847494  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 00847497  0f8dd6020000         jge 0x847773
// 0084749d  8b5528               mov edx, dword ptr [ebp + 0x28]
// 008474a0  8b0482               mov eax, dword ptr [edx + eax*4]
// 008474a3  eb02                 jmp 0x8474a7
// 008474a5  33c0                 xor eax, eax
// 008474a7  b903000000           mov ecx, 3
// 008474ac  898848010000         mov dword ptr [eax + 0x148], ecx
// 008474b2  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008474b6  85c0                 test eax, eax
// 008474b8  7c0d                 jl 0x8474c7
// 008474ba  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 008474bd  7d08                 jge 0x8474c7
// 008474bf  8b5528               mov edx, dword ptr [ebp + 0x28]
// 008474c2  8b0482               mov eax, dword ptr [edx + eax*4]
// 008474c5  eb02                 jmp 0x8474c9
// 008474c7  33c0                 xor eax, eax
// 008474c9  898848010000         mov dword ptr [eax + 0x148], ecx
// 008474cf  8b442430             mov eax, dword ptr [esp + 0x30]
// 008474d3  85c0                 test eax, eax
// 008474d5  7c16                 jl 0x8474ed
// 008474d7  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 008474da  7d11                 jge 0x8474ed
// 008474dc  8b5528               mov edx, dword ptr [ebp + 0x28]
// 008474df  8b0482               mov eax, dword ptr [edx + eax*4]
// 008474e2  898848010000         mov dword ptr [eax + 0x148], ecx
// 008474e8  e90a020000           jmp 0x8476f7
// 008474ed  33c0                 xor eax, eax
// 008474ef  898848010000         mov dword ptr [eax + 0x148], ecx
// 008474f5  e9fd010000           jmp 0x8476f7
// 008474fa  33c9                 xor ecx, ecx
// 008474fc  39a948010000         cmp dword ptr [ecx + 0x148], ebp
// 00847502  7404                 je 0x847508
// 00847504  33c9                 xor ecx, ecx
// 00847506  eb05                 jmp 0x84750d
// 00847508  b901000000           mov ecx, 1
// 0084750d  83fa03               cmp edx, 3
// 00847510  740c                 je 0x84751e
// 00847512  48                   dec eax
// 00847513  83ee40               sub esi, 0x40
// 00847516  85c0                 test eax, eax
// 00847518  0f8d22ffffff         jge 0x847440
// 0084751e  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00847522  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00847526  8b742434             mov esi, dword ptr [esp + 0x34]
// 0084752a  83fa03               cmp edx, 3
// 0084752d  7504                 jne 0x847533
// 0084752f  85c9                 test ecx, ecx
// 00847531  7572                 jne 0x8475a5
// 00847533  48                   dec eax
// 00847534  83f802               cmp eax, 2
// 00847537  0f8db6feffff         jge 0x8473f3
// 0084753d  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00847541  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00847545  8d41ff               lea eax, [ecx - 1]
// 00847548  8bd8                 mov ebx, eax
// 0084754a  83fb02               cmp ebx, 2
// 0084754d  0f8cac010000         jl 0x8476ff
// 00847553  8b542458             mov edx, dword ptr [esp + 0x58]
// 00847557  8bcb                 mov ecx, ebx
// 00847559  c1e106               shl ecx, 6
// 0084755c  8d6c1134             lea ebp, [ecx + edx + 0x34]
// 00847560  33c9                 xor ecx, ecx
// 00847562  394df4               cmp dword ptr [ebp - 0xc], ecx
// 00847565  0f8407010000         je 0x847672
// 0084756b  394d00               cmp dword ptr [ebp], ecx
// 0084756e  0f85fe000000         jne 0x847672
// 00847574  33d2                 xor edx, edx
// 00847576  3bd9                 cmp ebx, ecx
// 00847578  894c2440             mov dword ptr [esp + 0x40], ecx
// 0084757c  894c2444             mov dword ptr [esp + 0x44], ecx
// 00847580  894c2448             mov dword ptr [esp + 0x48], ecx
// 00847584  8bc3                 mov eax, ebx
// 00847586  0f8ce6000000         jl 0x847672
// 0084758c  8d7dd0               lea edi, [ebp - 0x30]
// 0084758f  90                   nop 
// 00847590  837f2400             cmp dword ptr [edi + 0x24], 0
// 00847594  0f84c7000000         je 0x847661
// 0084759a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0084759f  7474                 je 0x847615
// 008475a1  8b37                 mov esi, dword ptr [edi]
// 008475a3  eb73                 jmp 0x847618
// 008475a5  85f6                 test esi, esi
// 008475a7  7c1b                 jl 0x8475c4
// 008475a9  3b742414             cmp esi, dword ptr [esp + 0x14]
// 008475ad  7d15                 jge 0x8475c4
// 008475af  8b442410             mov eax, dword ptr [esp + 0x10]
// 008475b3  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 008475b6  0f8db7010000         jge 0x847773
// 008475bc  8b5028               mov edx, dword ptr [eax + 0x28]
// 008475bf  8b34b2               mov esi, dword ptr [edx + esi*4]
// 008475c2  eb06                 jmp 0x8475ca
// 008475c4  8b442410             mov eax, dword ptr [esp + 0x10]
// 008475c8  33f6                 xor esi, esi
// 008475ca  b903000000           mov ecx, 3
// 008475cf  898e48010000         mov dword ptr [esi + 0x148], ecx
// 008475d5  85db                 test ebx, ebx
// 008475d7  7c0d                 jl 0x8475e6
// 008475d9  3b582c               cmp ebx, dword ptr [eax + 0x2c]
// 008475dc  7d08                 jge 0x8475e6
// 008475de  8b5028               mov edx, dword ptr [eax + 0x28]
// 008475e1  8b1c9a               mov ebx, dword ptr [edx + ebx*4]
// 008475e4  eb02                 jmp 0x8475e8
// 008475e6  33db                 xor ebx, ebx
// 008475e8  898b48010000         mov dword ptr [ebx + 0x148], ecx
// 008475ee  85ed                 test ebp, ebp
// 008475f0  7c16                 jl 0x847608
// 008475f2  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 008475f5  7d11                 jge 0x847608
// 008475f7  8b4028               mov eax, dword ptr [eax + 0x28]
// 008475fa  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 008475fd  898848010000         mov dword ptr [eax + 0x148], ecx
// 00847603  e9eb000000           jmp 0x8476f3
// 00847608  33c0                 xor eax, eax
// 0084760a  898848010000         mov dword ptr [eax + 0x148], ecx
// 00847610  e9de000000           jmp 0x8476f3
// 00847615  8b77fc               mov esi, dword ptr [edi - 4]
// 00847618  85c9                 test ecx, ecx
// 0084761a  7404                 je 0x847620
// 0084761c  3bf2                 cmp esi, edx
// 0084761e  754d                 jne 0x84766d
// 00847620  83f902               cmp ecx, 2
// 00847623  7406                 je 0x84762b
// 00847625  837f3000             cmp dword ptr [edi + 0x30], 0
// 00847629  7542                 jne 0x84766d
// 0084762b  85c0                 test eax, eax
// 0084762d  7c1b                 jl 0x84764a
// 0084762f  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00847633  7d15                 jge 0x84764a
// 00847635  8b542410             mov edx, dword ptr [esp + 0x10]
// 00847639  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 0084763c  0f8d31010000         jge 0x847773
// 00847642  8b5228               mov edx, dword ptr [edx + 0x28]
// 00847645  8b1482               mov edx, dword ptr [edx + eax*4]
// 00847648  eb02                 jmp 0x84764c
// 0084764a  33d2                 xor edx, edx
// 0084764c  83ba4801000003       cmp dword ptr [edx + 0x148], 3
// 00847653  7518                 jne 0x84766d
// 00847655  89448c40             mov dword ptr [esp + ecx*4 + 0x40], eax
// 00847659  41                   inc ecx
// 0084765a  8bd6                 mov edx, esi
// 0084765c  83f903               cmp ecx, 3
// 0084765f  7424                 je 0x847685
// 00847661  48                   dec eax
// 00847662  83ef40               sub edi, 0x40
// 00847665  85c0                 test eax, eax
// 00847667  0f8d23ffffff         jge 0x847590
// 0084766d  83f903               cmp ecx, 3
// 00847670  7413                 je 0x847685
// 00847672  4b                   dec ebx
// 00847673  83ed40               sub ebp, 0x40
// 00847676  83fb02               cmp ebx, 2
// 00847679  0f8de1feffff         jge 0x847560
// 0084767f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00847683  eb7a                 jmp 0x8476ff
// 00847685  8b442440             mov eax, dword ptr [esp + 0x40]
// 00847689  85c0                 test eax, eax
// 0084768b  7c1b                 jl 0x8476a8
// 0084768d  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00847691  7d15                 jge 0x8476a8
// 00847693  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00847697  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0084769a  0f8dd3000000         jge 0x847773
// 008476a0  8b5128               mov edx, dword ptr [ecx + 0x28]
// 008476a3  8b0482               mov eax, dword ptr [edx + eax*4]
// 008476a6  eb06                 jmp 0x8476ae
// 008476a8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008476ac  33c0                 xor eax, eax
// 008476ae  ba02000000           mov edx, 2
// 008476b3  899048010000         mov dword ptr [eax + 0x148], edx
// 008476b9  8b442444             mov eax, dword ptr [esp + 0x44]
// 008476bd  85c0                 test eax, eax
// 008476bf  7c0d                 jl 0x8476ce
// 008476c1  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 008476c4  7d08                 jge 0x8476ce
// 008476c6  8b7128               mov esi, dword ptr [ecx + 0x28]
// 008476c9  8b0486               mov eax, dword ptr [esi + eax*4]
// 008476cc  eb02                 jmp 0x8476d0
// 008476ce  33c0                 xor eax, eax
// 008476d0  899048010000         mov dword ptr [eax + 0x148], edx
// 008476d6  8b442448             mov eax, dword ptr [esp + 0x48]
// 008476da  85c0                 test eax, eax
// 008476dc  7c0d                 jl 0x8476eb
// 008476de  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 008476e1  7d08                 jge 0x8476eb
// 008476e3  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 008476e6  8b0481               mov eax, dword ptr [ecx + eax*4]
// 008476e9  eb02                 jmp 0x8476ed
// 008476eb  33c0                 xor eax, eax
// 008476ed  899048010000         mov dword ptr [eax + 0x148], edx
// 008476f3  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008476f7  c744241801000000     mov dword ptr [esp + 0x18], 1
// 008476ff  8b742460             mov esi, dword ptr [esp + 0x60]
// 00847703  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00847707  8b542454             mov edx, dword ptr [esp + 0x54]
// 0084770b  56                   push esi
// 0084770c  53                   push ebx
// 0084770d  52                   push edx
// 0084770e  8d44242c             lea eax, [esp + 0x2c]
// 00847712  50                   push eax
// 00847713  8bcd                 mov ecx, ebp
// 00847715  e896ecffff           call 0x8463b0
// 0084771a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0084771f  8b5004               mov edx, dword ptr [eax + 4]
// 00847722  8b08                 mov ecx, dword ptr [eax]
// 00847724  8bc2                 mov eax, edx
// 00847726  7502                 jne 0x84772a
// 00847728  8bc1                 mov eax, ecx
// 0084772a  3b44245c             cmp eax, dword ptr [esp + 0x5c]
// 0084772e  0f8ca6000000         jl 0x8477da
// 00847734  837c241800           cmp dword ptr [esp + 0x18], 0
// 00847739  0f8501fcffff         jne 0x847340
// 0084773f  f60680               test byte ptr [esi], 0x80
// 00847742  0f8492000000         je 0x8477da
// 00847748  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 0084774b  bf01000000           mov edi, 1
// 00847750  33c0                 xor eax, eax
// 00847752  8bf7                 mov esi, edi
// 00847754  85c9                 test ecx, ecx
// 00847756  7e5b                 jle 0x8477b3
// 00847758  8bd3                 mov edx, ebx
// 0084775a  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0084775e  83c20c               add edx, 0xc
// 00847761  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 00847765  7440                 je 0x8477a7
// 00847767  85f6                 test esi, esi
// 00847769  753a                 jne 0x8477a5
// 0084776b  85db                 test ebx, ebx
// 0084776d  7409                 je 0x847778
// 0084776f  8b32                 mov esi, dword ptr [edx]
// 00847771  eb08                 jmp 0x84777b
// 00847773  e894c3faff           call 0x7f3b0c
// 00847778  8b72fc               mov esi, dword ptr [edx - 4]
// 0084777b  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 0084777f  7e24                 jle 0x8477a5
// 00847781  85c0                 test eax, eax
// 00847783  7c11                 jl 0x847796
// 00847785  3bc1                 cmp eax, ecx
// 00847787  7d0d                 jge 0x847796
// 00847789  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 0084778c  7de5                 jge 0x847773
// 0084778e  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00847791  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00847794  eb02                 jmp 0x847798
// 00847796  33c9                 xor ecx, ecx
// 00847798  c7814801000002000000 mov dword ptr [ecx + 0x148], 2
// 008477a2  897a24               mov dword ptr [edx + 0x24], edi
// 008477a5  33f6                 xor esi, esi
// 008477a7  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 008477aa  03c7                 add eax, edi
// 008477ac  83c240               add edx, 0x40
// 008477af  3bc1                 cmp eax, ecx
// 008477b1  7cae                 jl 0x847761
// 008477b3  8b542460             mov edx, dword ptr [esp + 0x60]
// 008477b7  8b442458             mov eax, dword ptr [esp + 0x58]
// 008477bb  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008477bf  8b742450             mov esi, dword ptr [esp + 0x50]
// 008477c3  52                   push edx
// 008477c4  50                   push eax
// 008477c5  51                   push ecx
// 008477c6  56                   push esi
// 008477c7  8bcd                 mov ecx, ebp
// 008477c9  e8e2ebffff           call 0x8463b0
// 008477ce  5f                   pop edi
// 008477cf  8bc6                 mov eax, esi
// 008477d1  5e                   pop esi
// 008477d2  5d                   pop ebp
// 008477d3  5b                   pop ebx
// 008477d4  83c43c               add esp, 0x3c
// 008477d7  c21400               ret 0x14
// 008477da  8b442450             mov eax, dword ptr [esp + 0x50]
// 008477de  5f                   pop edi
// 008477df  5e                   pop esi
// 008477e0  5d                   pop ebp
// 008477e1  895004               mov dword ptr [eax + 4], edx
// 008477e4  8908                 mov dword ptr [eax], ecx
// 008477e6  5b                   pop ebx
// 008477e7  83c43c               add esp, 0x3c
// 008477ea  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_ReduceSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
