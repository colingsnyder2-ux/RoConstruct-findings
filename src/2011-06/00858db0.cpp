// roc 2011-06 00858db0  unit: CXTPControls  size: 1229 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00858db0
//
// 00858db0  83ec3c               sub esp, 0x3c
// 00858db3  8b442450             mov eax, dword ptr [esp + 0x50]
// 00858db7  8b00                 mov eax, dword ptr [eax]
// 00858db9  53                   push ebx
// 00858dba  8b5c244c             mov ebx, dword ptr [esp + 0x4c]
// 00858dbe  55                   push ebp
// 00858dbf  56                   push esi
// 00858dc0  8be9                 mov ebp, ecx
// 00858dc2  83e010               and eax, 0x10
// 00858dc5  57                   push edi
// 00858dc6  896c2410             mov dword ptr [esp + 0x10], ebp
// 00858dca  8944241c             mov dword ptr [esp + 0x1c], eax
// 00858dce  8bff                 mov edi, edi
// 00858dd0  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 00858dd3  8d41ff               lea eax, [ecx - 1]
// 00858dd6  33d2                 xor edx, edx
// 00858dd8  8bf8                 mov edi, eax
// 00858dda  83ff02               cmp edi, 2
// 00858ddd  89542418             mov dword ptr [esp + 0x18], edx
// 00858de1  894c2414             mov dword ptr [esp + 0x14], ecx
// 00858de5  0f8c8c000000         jl 0x858e77
// 00858deb  8bcf                 mov ecx, edi
// 00858ded  c1e106               shl ecx, 6
// 00858df0  8d5c1934             lea ebx, [ecx + ebx + 0x34]
// 00858df4  eb02                 jmp 0x858df8
// 00858df6  33d2                 xor edx, edx
// 00858df8  3953f4               cmp dword ptr [ebx - 0xc], edx
// 00858dfb  746d                 je 0x858e6a
// 00858dfd  3913                 cmp dword ptr [ebx], edx
// 00858dff  7569                 jne 0x858e6a
// 00858e01  3bfa                 cmp edi, edx
// 00858e03  89542428             mov dword ptr [esp + 0x28], edx
// 00858e07  8954242c             mov dword ptr [esp + 0x2c], edx
// 00858e0b  89542430             mov dword ptr [esp + 0x30], edx
// 00858e0f  8bc7                 mov eax, edi
// 00858e11  7c57                 jl 0x858e6a
// 00858e13  8bf3                 mov esi, ebx
// 00858e15  837ef400             cmp dword ptr [esi - 0xc], 0
// 00858e19  743e                 je 0x858e59
// 00858e1b  83fa02               cmp edx, 2
// 00858e1e  7405                 je 0x858e25
// 00858e20  833e00               cmp dword ptr [esi], 0
// 00858e23  753c                 jne 0x858e61
// 00858e25  85c0                 test eax, eax
// 00858e27  7c17                 jl 0x858e40
// 00858e29  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00858e2d  7d11                 jge 0x858e40
// 00858e2f  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 00858e32  0f8dcb030000         jge 0x859203
// 00858e38  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00858e3b  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00858e3e  eb02                 jmp 0x858e42
// 00858e40  33c9                 xor ecx, ecx
// 00858e42  83b94801000004       cmp dword ptr [ecx + 0x148], 4
// 00858e49  7516                 jne 0x858e61
// 00858e4b  89449428             mov dword ptr [esp + edx*4 + 0x28], eax
// 00858e4f  42                   inc edx
// 00858e50  83fa03               cmp edx, 3
// 00858e53  0f84bd000000         je 0x858f16
// 00858e59  48                   dec eax
// 00858e5a  83ee40               sub esi, 0x40
// 00858e5d  85c0                 test eax, eax
// 00858e5f  7db4                 jge 0x858e15
// 00858e61  83fa03               cmp edx, 3
// 00858e64  0f84ac000000         je 0x858f16
// 00858e6a  4f                   dec edi
// 00858e6b  83eb40               sub ebx, 0x40
// 00858e6e  83ff02               cmp edi, 2
// 00858e71  7d83                 jge 0x858df6
// 00858e73  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00858e77  8d41ff               lea eax, [ecx - 1]
// 00858e7a  83f802               cmp eax, 2
// 00858e7d  0f8c52010000         jl 0x858fd5
// 00858e83  8b542458             mov edx, dword ptr [esp + 0x58]
// 00858e87  8bc8                 mov ecx, eax
// 00858e89  c1e106               shl ecx, 6
// 00858e8c  837c112800           cmp dword ptr [ecx + edx + 0x28], 0
// 00858e91  8d3c11               lea edi, [ecx + edx]
// 00858e94  0f8429010000         je 0x858fc3
// 00858e9a  837f3400             cmp dword ptr [edi + 0x34], 0
// 00858e9e  0f851f010000         jne 0x858fc3
// 00858ea4  33f6                 xor esi, esi
// 00858ea6  33db                 xor ebx, ebx
// 00858ea8  33ed                 xor ebp, ebp
// 00858eaa  33d2                 xor edx, edx
// 00858eac  33c9                 xor ecx, ecx
// 00858eae  89742434             mov dword ptr [esp + 0x34], esi
// 00858eb2  895c2438             mov dword ptr [esp + 0x38], ebx
// 00858eb6  896c243c             mov dword ptr [esp + 0x3c], ebp
// 00858eba  85c0                 test eax, eax
// 00858ebc  0f8cf8000000         jl 0x858fba
// 00858ec2  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00858ec6  8d7734               lea esi, [edi + 0x34]
// 00858ec9  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00858ecd  8d6a04               lea ebp, [edx + 4]
// 00858ed0  837ef400             cmp dword ptr [esi - 0xc], 0
// 00858ed4  0f84c8000000         je 0x858fa2
// 00858eda  83fa02               cmp edx, 2
// 00858edd  7409                 je 0x858ee8
// 00858edf  833e00               cmp dword ptr [esi], 0
// 00858ee2  0f85c6000000         jne 0x858fae
// 00858ee8  89449434             mov dword ptr [esp + edx*4 + 0x34], eax
// 00858eec  42                   inc edx
// 00858eed  85c9                 test ecx, ecx
// 00858eef  0f85a3000000         jne 0x858f98
// 00858ef5  85c0                 test eax, eax
// 00858ef7  0f8c8d000000         jl 0x858f8a
// 00858efd  3bc3                 cmp eax, ebx
// 00858eff  0f8d85000000         jge 0x858f8a
// 00858f05  3b472c               cmp eax, dword ptr [edi + 0x2c]
// 00858f08  0f8df5020000         jge 0x859203
// 00858f0e  8b4f28               mov ecx, dword ptr [edi + 0x28]
// 00858f11  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00858f14  eb76                 jmp 0x858f8c
// 00858f16  8b442428             mov eax, dword ptr [esp + 0x28]
// 00858f1a  85c0                 test eax, eax
// 00858f1c  7c17                 jl 0x858f35
// 00858f1e  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00858f22  7d11                 jge 0x858f35
// 00858f24  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 00858f27  0f8dd6020000         jge 0x859203
// 00858f2d  8b5528               mov edx, dword ptr [ebp + 0x28]
// 00858f30  8b0482               mov eax, dword ptr [edx + eax*4]
// 00858f33  eb02                 jmp 0x858f37
// 00858f35  33c0                 xor eax, eax
// 00858f37  b903000000           mov ecx, 3
// 00858f3c  898848010000         mov dword ptr [eax + 0x148], ecx
// 00858f42  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00858f46  85c0                 test eax, eax
// 00858f48  7c0d                 jl 0x858f57
// 00858f4a  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 00858f4d  7d08                 jge 0x858f57
// 00858f4f  8b5528               mov edx, dword ptr [ebp + 0x28]
// 00858f52  8b0482               mov eax, dword ptr [edx + eax*4]
// 00858f55  eb02                 jmp 0x858f59
// 00858f57  33c0                 xor eax, eax
// 00858f59  898848010000         mov dword ptr [eax + 0x148], ecx
// 00858f5f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00858f63  85c0                 test eax, eax
// 00858f65  7c16                 jl 0x858f7d
// 00858f67  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 00858f6a  7d11                 jge 0x858f7d
// 00858f6c  8b5528               mov edx, dword ptr [ebp + 0x28]
// 00858f6f  8b0482               mov eax, dword ptr [edx + eax*4]
// 00858f72  898848010000         mov dword ptr [eax + 0x148], ecx
// 00858f78  e90a020000           jmp 0x859187
// 00858f7d  33c0                 xor eax, eax
// 00858f7f  898848010000         mov dword ptr [eax + 0x148], ecx
// 00858f85  e9fd010000           jmp 0x859187
// 00858f8a  33c9                 xor ecx, ecx
// 00858f8c  39a948010000         cmp dword ptr [ecx + 0x148], ebp
// 00858f92  7404                 je 0x858f98
// 00858f94  33c9                 xor ecx, ecx
// 00858f96  eb05                 jmp 0x858f9d
// 00858f98  b901000000           mov ecx, 1
// 00858f9d  83fa03               cmp edx, 3
// 00858fa0  740c                 je 0x858fae
// 00858fa2  48                   dec eax
// 00858fa3  83ee40               sub esi, 0x40
// 00858fa6  85c0                 test eax, eax
// 00858fa8  0f8d22ffffff         jge 0x858ed0
// 00858fae  8b6c243c             mov ebp, dword ptr [esp + 0x3c]
// 00858fb2  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00858fb6  8b742434             mov esi, dword ptr [esp + 0x34]
// 00858fba  83fa03               cmp edx, 3
// 00858fbd  7504                 jne 0x858fc3
// 00858fbf  85c9                 test ecx, ecx
// 00858fc1  7572                 jne 0x859035
// 00858fc3  48                   dec eax
// 00858fc4  83f802               cmp eax, 2
// 00858fc7  0f8db6feffff         jge 0x858e83
// 00858fcd  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00858fd1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00858fd5  8d41ff               lea eax, [ecx - 1]
// 00858fd8  8bd8                 mov ebx, eax
// 00858fda  83fb02               cmp ebx, 2
// 00858fdd  0f8cac010000         jl 0x85918f
// 00858fe3  8b542458             mov edx, dword ptr [esp + 0x58]
// 00858fe7  8bcb                 mov ecx, ebx
// 00858fe9  c1e106               shl ecx, 6
// 00858fec  8d6c1134             lea ebp, [ecx + edx + 0x34]
// 00858ff0  33c9                 xor ecx, ecx
// 00858ff2  394df4               cmp dword ptr [ebp - 0xc], ecx
// 00858ff5  0f8407010000         je 0x859102
// 00858ffb  394d00               cmp dword ptr [ebp], ecx
// 00858ffe  0f85fe000000         jne 0x859102
// 00859004  33d2                 xor edx, edx
// 00859006  3bd9                 cmp ebx, ecx
// 00859008  894c2440             mov dword ptr [esp + 0x40], ecx
// 0085900c  894c2444             mov dword ptr [esp + 0x44], ecx
// 00859010  894c2448             mov dword ptr [esp + 0x48], ecx
// 00859014  8bc3                 mov eax, ebx
// 00859016  0f8ce6000000         jl 0x859102
// 0085901c  8d7dd0               lea edi, [ebp - 0x30]
// 0085901f  90                   nop 
// 00859020  837f2400             cmp dword ptr [edi + 0x24], 0
// 00859024  0f84c7000000         je 0x8590f1
// 0085902a  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 0085902f  7474                 je 0x8590a5
// 00859031  8b37                 mov esi, dword ptr [edi]
// 00859033  eb73                 jmp 0x8590a8
// 00859035  85f6                 test esi, esi
// 00859037  7c1b                 jl 0x859054
// 00859039  3b742414             cmp esi, dword ptr [esp + 0x14]
// 0085903d  7d15                 jge 0x859054
// 0085903f  8b442410             mov eax, dword ptr [esp + 0x10]
// 00859043  3b702c               cmp esi, dword ptr [eax + 0x2c]
// 00859046  0f8db7010000         jge 0x859203
// 0085904c  8b5028               mov edx, dword ptr [eax + 0x28]
// 0085904f  8b34b2               mov esi, dword ptr [edx + esi*4]
// 00859052  eb06                 jmp 0x85905a
// 00859054  8b442410             mov eax, dword ptr [esp + 0x10]
// 00859058  33f6                 xor esi, esi
// 0085905a  b903000000           mov ecx, 3
// 0085905f  898e48010000         mov dword ptr [esi + 0x148], ecx
// 00859065  85db                 test ebx, ebx
// 00859067  7c0d                 jl 0x859076
// 00859069  3b582c               cmp ebx, dword ptr [eax + 0x2c]
// 0085906c  7d08                 jge 0x859076
// 0085906e  8b5028               mov edx, dword ptr [eax + 0x28]
// 00859071  8b1c9a               mov ebx, dword ptr [edx + ebx*4]
// 00859074  eb02                 jmp 0x859078
// 00859076  33db                 xor ebx, ebx
// 00859078  898b48010000         mov dword ptr [ebx + 0x148], ecx
// 0085907e  85ed                 test ebp, ebp
// 00859080  7c16                 jl 0x859098
// 00859082  3b682c               cmp ebp, dword ptr [eax + 0x2c]
// 00859085  7d11                 jge 0x859098
// 00859087  8b4028               mov eax, dword ptr [eax + 0x28]
// 0085908a  8b04a8               mov eax, dword ptr [eax + ebp*4]
// 0085908d  898848010000         mov dword ptr [eax + 0x148], ecx
// 00859093  e9eb000000           jmp 0x859183
// 00859098  33c0                 xor eax, eax
// 0085909a  898848010000         mov dword ptr [eax + 0x148], ecx
// 008590a0  e9de000000           jmp 0x859183
// 008590a5  8b77fc               mov esi, dword ptr [edi - 4]
// 008590a8  85c9                 test ecx, ecx
// 008590aa  7404                 je 0x8590b0
// 008590ac  3bf2                 cmp esi, edx
// 008590ae  754d                 jne 0x8590fd
// 008590b0  83f902               cmp ecx, 2
// 008590b3  7406                 je 0x8590bb
// 008590b5  837f3000             cmp dword ptr [edi + 0x30], 0
// 008590b9  7542                 jne 0x8590fd
// 008590bb  85c0                 test eax, eax
// 008590bd  7c1b                 jl 0x8590da
// 008590bf  3b442414             cmp eax, dword ptr [esp + 0x14]
// 008590c3  7d15                 jge 0x8590da
// 008590c5  8b542410             mov edx, dword ptr [esp + 0x10]
// 008590c9  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 008590cc  0f8d31010000         jge 0x859203
// 008590d2  8b5228               mov edx, dword ptr [edx + 0x28]
// 008590d5  8b1482               mov edx, dword ptr [edx + eax*4]
// 008590d8  eb02                 jmp 0x8590dc
// 008590da  33d2                 xor edx, edx
// 008590dc  83ba4801000003       cmp dword ptr [edx + 0x148], 3
// 008590e3  7518                 jne 0x8590fd
// 008590e5  89448c40             mov dword ptr [esp + ecx*4 + 0x40], eax
// 008590e9  41                   inc ecx
// 008590ea  8bd6                 mov edx, esi
// 008590ec  83f903               cmp ecx, 3
// 008590ef  7424                 je 0x859115
// 008590f1  48                   dec eax
// 008590f2  83ef40               sub edi, 0x40
// 008590f5  85c0                 test eax, eax
// 008590f7  0f8d23ffffff         jge 0x859020
// 008590fd  83f903               cmp ecx, 3
// 00859100  7413                 je 0x859115
// 00859102  4b                   dec ebx
// 00859103  83ed40               sub ebp, 0x40
// 00859106  83fb02               cmp ebx, 2
// 00859109  0f8de1feffff         jge 0x858ff0
// 0085910f  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00859113  eb7a                 jmp 0x85918f
// 00859115  8b442440             mov eax, dword ptr [esp + 0x40]
// 00859119  85c0                 test eax, eax
// 0085911b  7c1b                 jl 0x859138
// 0085911d  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00859121  7d15                 jge 0x859138
// 00859123  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00859127  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 0085912a  0f8dd3000000         jge 0x859203
// 00859130  8b5128               mov edx, dword ptr [ecx + 0x28]
// 00859133  8b0482               mov eax, dword ptr [edx + eax*4]
// 00859136  eb06                 jmp 0x85913e
// 00859138  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0085913c  33c0                 xor eax, eax
// 0085913e  ba02000000           mov edx, 2
// 00859143  899048010000         mov dword ptr [eax + 0x148], edx
// 00859149  8b442444             mov eax, dword ptr [esp + 0x44]
// 0085914d  85c0                 test eax, eax
// 0085914f  7c0d                 jl 0x85915e
// 00859151  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00859154  7d08                 jge 0x85915e
// 00859156  8b7128               mov esi, dword ptr [ecx + 0x28]
// 00859159  8b0486               mov eax, dword ptr [esi + eax*4]
// 0085915c  eb02                 jmp 0x859160
// 0085915e  33c0                 xor eax, eax
// 00859160  899048010000         mov dword ptr [eax + 0x148], edx
// 00859166  8b442448             mov eax, dword ptr [esp + 0x48]
// 0085916a  85c0                 test eax, eax
// 0085916c  7c0d                 jl 0x85917b
// 0085916e  3b412c               cmp eax, dword ptr [ecx + 0x2c]
// 00859171  7d08                 jge 0x85917b
// 00859173  8b4928               mov ecx, dword ptr [ecx + 0x28]
// 00859176  8b0481               mov eax, dword ptr [ecx + eax*4]
// 00859179  eb02                 jmp 0x85917d
// 0085917b  33c0                 xor eax, eax
// 0085917d  899048010000         mov dword ptr [eax + 0x148], edx
// 00859183  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00859187  c744241801000000     mov dword ptr [esp + 0x18], 1
// 0085918f  8b742460             mov esi, dword ptr [esp + 0x60]
// 00859193  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 00859197  8b542454             mov edx, dword ptr [esp + 0x54]
// 0085919b  56                   push esi
// 0085919c  53                   push ebx
// 0085919d  52                   push edx
// 0085919e  8d44242c             lea eax, [esp + 0x2c]
// 008591a2  50                   push eax
// 008591a3  8bcd                 mov ecx, ebp
// 008591a5  e8e6ebffff           call 0x857d90
// 008591aa  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008591af  8b5004               mov edx, dword ptr [eax + 4]
// 008591b2  8b08                 mov ecx, dword ptr [eax]
// 008591b4  8bc2                 mov eax, edx
// 008591b6  7502                 jne 0x8591ba
// 008591b8  8bc1                 mov eax, ecx
// 008591ba  3b44245c             cmp eax, dword ptr [esp + 0x5c]
// 008591be  0f8ca6000000         jl 0x85926a
// 008591c4  837c241800           cmp dword ptr [esp + 0x18], 0
// 008591c9  0f8501fcffff         jne 0x858dd0
// 008591cf  f60680               test byte ptr [esi], 0x80
// 008591d2  0f8492000000         je 0x85926a
// 008591d8  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 008591db  bf01000000           mov edi, 1
// 008591e0  33c0                 xor eax, eax
// 008591e2  8bf7                 mov esi, edi
// 008591e4  85c9                 test ecx, ecx
// 008591e6  7e5b                 jle 0x859243
// 008591e8  8bd3                 mov edx, ebx
// 008591ea  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008591ee  83c20c               add edx, 0xc
// 008591f1  837a1c00             cmp dword ptr [edx + 0x1c], 0
// 008591f5  7440                 je 0x859237
// 008591f7  85f6                 test esi, esi
// 008591f9  753a                 jne 0x859235
// 008591fb  85db                 test ebx, ebx
// 008591fd  7409                 je 0x859208
// 008591ff  8b32                 mov esi, dword ptr [edx]
// 00859201  eb08                 jmp 0x85920b
// 00859203  e80211fbff           call 0x80a30a
// 00859208  8b72fc               mov esi, dword ptr [edx - 4]
// 0085920b  3b74245c             cmp esi, dword ptr [esp + 0x5c]
// 0085920f  7e24                 jle 0x859235
// 00859211  85c0                 test eax, eax
// 00859213  7c11                 jl 0x859226
// 00859215  3bc1                 cmp eax, ecx
// 00859217  7d0d                 jge 0x859226
// 00859219  3b452c               cmp eax, dword ptr [ebp + 0x2c]
// 0085921c  7de5                 jge 0x859203
// 0085921e  8b4d28               mov ecx, dword ptr [ebp + 0x28]
// 00859221  8b0c81               mov ecx, dword ptr [ecx + eax*4]
// 00859224  eb02                 jmp 0x859228
// 00859226  33c9                 xor ecx, ecx
// 00859228  c7814801000002000000 mov dword ptr [ecx + 0x148], 2
// 00859232  897a24               mov dword ptr [edx + 0x24], edi
// 00859235  33f6                 xor esi, esi
// 00859237  8b4d2c               mov ecx, dword ptr [ebp + 0x2c]
// 0085923a  03c7                 add eax, edi
// 0085923c  83c240               add edx, 0x40
// 0085923f  3bc1                 cmp eax, ecx
// 00859241  7cae                 jl 0x8591f1
// 00859243  8b542460             mov edx, dword ptr [esp + 0x60]
// 00859247  8b442458             mov eax, dword ptr [esp + 0x58]
// 0085924b  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0085924f  8b742450             mov esi, dword ptr [esp + 0x50]
// 00859253  52                   push edx
// 00859254  50                   push eax
// 00859255  51                   push ecx
// 00859256  56                   push esi
// 00859257  8bcd                 mov ecx, ebp
// 00859259  e832ebffff           call 0x857d90
// 0085925e  5f                   pop edi
// 0085925f  8bc6                 mov eax, esi
// 00859261  5e                   pop esi
// 00859262  5d                   pop ebp
// 00859263  5b                   pop ebx
// 00859264  83c43c               add esp, 0x3c
// 00859267  c21400               ret 0x14
// 0085926a  8b442450             mov eax, dword ptr [esp + 0x50]
// 0085926e  5f                   pop edi
// 0085926f  5e                   pop esi
// 00859270  5d                   pop ebp
// 00859271  895004               mov dword ptr [eax + 4], edx
// 00859274  8908                 mov dword ptr [eax], ecx
// 00859276  5b                   pop ebx
// 00859277  83c43c               add esp, 0x3c
// 0085927a  c21400               ret 0x14
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_ReduceSmartLayoutToolBar@CXTPControls@@IAE?AVCSize@@PAVCDC@@PAUXTPBUTTONINFO@1@HAAK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
