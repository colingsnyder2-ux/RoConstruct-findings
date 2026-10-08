// roc 2012-06 009cfe90  unit: CXTPControls  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009cfe90
//
// 009cfe90  83ec1c               sub esp, 0x1c
// 009cfe93  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009cfe97  8bd1                 mov edx, ecx
// 009cfe99  83e010               and eax, 0x10
// 009cfe9c  891424               mov dword ptr [esp], edx
// 009cfe9f  89442404             mov dword ptr [esp + 4], eax
// 009cfea3  740a                 je 0x9cfeaf
// 009cfea5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 009cfea9  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 009cfead  eb08                 jmp 0x9cfeb7
// 009cfeaf  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009cfeb3  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 009cfeb7  8b422c               mov eax, dword ptr [edx + 0x2c]
// 009cfeba  53                   push ebx
// 009cfebb  55                   push ebp
// 009cfebc  56                   push esi
// 009cfebd  83e801               sub eax, 1
// 009cfec0  57                   push edi
// 009cfec1  8944241c             mov dword ptr [esp + 0x1c], eax
// 009cfec5  0f888c000000         js 0x9cff57
// 009cfecb  8bf0                 mov esi, eax
// 009cfecd  c1e606               shl esi, 6
// 009cfed0  03742430             add esi, dword ptr [esp + 0x30]
// 009cfed4  837e2800             cmp dword ptr [esi + 0x28], 0
// 009cfed8  746b                 je 0x9cff45
// 009cfeda  837e3000             cmp dword ptr [esi + 0x30], 0
// 009cfede  7565                 jne 0x9cff45
// 009cfee0  85c0                 test eax, eax
// 009cfee2  7c0d                 jl 0x9cfef1
// 009cfee4  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 009cfee7  7d08                 jge 0x9cfef1
// 009cfee9  8b7a28               mov edi, dword ptr [edx + 0x28]
// 009cfeec  8b0487               mov eax, dword ptr [edi + eax*4]
// 009cfeef  eb02                 jmp 0x9cfef3
// 009cfef1  33c0                 xor eax, eax
// 009cfef3  f680d400000001       test byte ptr [eax + 0xd4], 1
// 009cfefa  745b                 je 0x9cff57
// 009cfefc  837c241400           cmp dword ptr [esp + 0x14], 0
// 009cff01  8b06                 mov eax, dword ptr [esi]
// 009cff03  8b5604               mov edx, dword ptr [esi + 4]
// 009cff06  8b6e08               mov ebp, dword ptr [esi + 8]
// 009cff09  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 009cff0c  7511                 jne 0x9cff1f
// 009cff0e  2bc5                 sub eax, ebp
// 009cff10  8d3c08               lea edi, [eax + ecx]
// 009cff13  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 009cff17  7c3a                 jl 0x9cff53
// 009cff19  53                   push ebx
// 009cff1a  51                   push ecx
// 009cff1b  52                   push edx
// 009cff1c  57                   push edi
// 009cff1d  eb0f                 jmp 0x9cff2e
// 009cff1f  2bd3                 sub edx, ebx
// 009cff21  8d3c0a               lea edi, [edx + ecx]
// 009cff24  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 009cff28  7c29                 jl 0x9cff53
// 009cff2a  51                   push ecx
// 009cff2b  55                   push ebp
// 009cff2c  57                   push edi
// 009cff2d  50                   push eax
// 009cff2e  56                   push esi
// 009cff2f  ff156c3bb200         call dword ptr [0xb23b6c]
// 009cff35  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 009cff39  8b542410             mov edx, dword ptr [esp + 0x10]
// 009cff3d  8bcf                 mov ecx, edi
// 009cff3f  7516                 jne 0x9cff57
// 009cff41  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009cff45  48                   dec eax
// 009cff46  83ee40               sub esi, 0x40
// 009cff49  8944241c             mov dword ptr [esp + 0x1c], eax
// 009cff4d  85c0                 test eax, eax
// 009cff4f  7d83                 jge 0x9cfed4
// 009cff51  eb04                 jmp 0x9cff57
// 009cff53  8b542410             mov edx, dword ptr [esp + 0x10]
// 009cff57  33c9                 xor ecx, ecx
// 009cff59  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 009cff61  c744241800000000     mov dword ptr [esp + 0x18], 0
// 009cff69  394c2414             cmp dword ptr [esp + 0x14], ecx
// 009cff6d  740a                 je 0x9cff79
// 009cff6f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 009cff73  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 009cff77  eb08                 jmp 0x9cff81
// 009cff79  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009cff7d  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 009cff81  8b422c               mov eax, dword ptr [edx + 0x2c]
// 009cff84  48                   dec eax
// 009cff85  8bd0                 mov edx, eax
// 009cff87  89442420             mov dword ptr [esp + 0x20], eax
// 009cff8b  8954241c             mov dword ptr [esp + 0x1c], edx
// 009cff8f  85d2                 test edx, edx
// 009cff91  0f8cdb010000         jl 0x9d0172
// 009cff97  8b742430             mov esi, dword ptr [esp + 0x30]
// 009cff9b  8d42ff               lea eax, [edx - 1]
// 009cff9e  89442424             mov dword ptr [esp + 0x24], eax
// 009cffa2  8bc2                 mov eax, edx
// 009cffa4  c1e006               shl eax, 6
// 009cffa7  8d7c3028             lea edi, [eax + esi + 0x28]
// 009cffab  897c2428             mov dword ptr [esp + 0x28], edi
// 009cffaf  90                   nop 
// 009cffb0  833f00               cmp dword ptr [edi], 0
// 009cffb3  0f848e000000         je 0x9d0047
// 009cffb9  8b6f08               mov ebp, dword ptr [edi + 8]
// 009cffbc  85ed                 test ebp, ebp
// 009cffbe  0f8583000000         jne 0x9d0047
// 009cffc4  8b742410             mov esi, dword ptr [esp + 0x10]
// 009cffc8  85c9                 test ecx, ecx
// 009cffca  7529                 jne 0x9cfff5
// 009cffcc  85d2                 test edx, edx
// 009cffce  7c0d                 jl 0x9cffdd
// 009cffd0  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 009cffd3  7d08                 jge 0x9cffdd
// 009cffd5  8b4628               mov eax, dword ptr [esi + 0x28]
// 009cffd8  8b0490               mov eax, dword ptr [eax + edx*4]
// 009cffdb  eb02                 jmp 0x9cffdf
// 009cffdd  33c0                 xor eax, eax
// 009cffdf  f680d400000001       test byte ptr [eax + 0xd4], 1
// 009cffe6  740d                 je 0x9cfff5
// 009cffe8  8b442424             mov eax, dword ptr [esp + 0x24]
// 009cffec  8b5fd8               mov ebx, dword ptr [edi - 0x28]
// 009cffef  89442420             mov dword ptr [esp + 0x20], eax
// 009cfff3  eb25                 jmp 0x9d001a
// 009cfff5  85d2                 test edx, edx
// 009cfff7  7c0d                 jl 0x9d0006
// 009cfff9  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 009cfffc  7d08                 jge 0x9d0006
// 009cfffe  8b4628               mov eax, dword ptr [esi + 0x28]
// 009d0001  8b0490               mov eax, dword ptr [eax + edx*4]
// 009d0004  eb02                 jmp 0x9d0008
// 009d0006  33c0                 xor eax, eax
// 009d0008  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 009d000f  7409                 je 0x9d001a
// 009d0011  b901000000           mov ecx, 1
// 009d0016  014c2418             add dword ptr [esp + 0x18], ecx
// 009d001a  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 009d001f  751d                 jne 0x9d003e
// 009d0021  39542420             cmp dword ptr [esp + 0x20], edx
// 009d0025  7c17                 jl 0x9d003e
// 009d0027  837c241400           cmp dword ptr [esp + 0x14], 0
// 009d002c  7505                 jne 0x9d0033
// 009d002e  8b77e0               mov esi, dword ptr [edi - 0x20]
// 009d0031  eb03                 jmp 0x9d0036
// 009d0033  8b77e4               mov esi, dword ptr [edi - 0x1c]
// 009d0036  8bc3                 mov eax, ebx
// 009d0038  2bc6                 sub eax, esi
// 009d003a  8944244c             mov dword ptr [esp + 0x4c], eax
// 009d003e  85ed                 test ebp, ebp
// 009d0040  7505                 jne 0x9d0047
// 009d0042  396f04               cmp dword ptr [edi + 4], ebp
// 009d0045  7508                 jne 0x9d004f
// 009d0047  85d2                 test edx, edx
// 009d0049  0f850b010000         jne 0x9d015a
// 009d004f  837c241800           cmp dword ptr [esp + 0x18], 0
// 009d0054  0f8eca000000         jle 0x9d0124
// 009d005a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 009d005f  0f8ebf000000         jle 0x9d0124
// 009d0065  33ed                 xor ebp, ebp
// 009d0067  3b542420             cmp edx, dword ptr [esp + 0x20]
// 009d006b  89542430             mov dword ptr [esp + 0x30], edx
// 009d006f  0f8faf000000         jg 0x9d0124
// 009d0075  8d5fe0               lea ebx, [edi - 0x20]
// 009d0078  eb06                 jmp 0x9d0080
// 009d007a  8d9b00000000         lea ebx, [ebx]
// 009d0080  837b2000             cmp dword ptr [ebx + 0x20], 0
// 009d0084  0f8484000000         je 0x9d010e
// 009d008a  837b2800             cmp dword ptr [ebx + 0x28], 0
// 009d008e  757e                 jne 0x9d010e
// 009d0090  837c241400           cmp dword ptr [esp + 0x14], 0
// 009d0095  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 009d0098  8b53fc               mov edx, dword ptr [ebx - 4]
// 009d009b  8b33                 mov esi, dword ptr [ebx]
// 009d009d  8b7b04               mov edi, dword ptr [ebx + 4]
// 009d00a0  8d43f8               lea eax, [ebx - 8]
// 009d00a3  7506                 jne 0x9d00ab
// 009d00a5  03f5                 add esi, ebp
// 009d00a7  03cd                 add ecx, ebp
// 009d00a9  eb04                 jmp 0x9d00af
// 009d00ab  03fd                 add edi, ebp
// 009d00ad  03d5                 add edx, ebp
// 009d00af  57                   push edi
// 009d00b0  56                   push esi
// 009d00b1  52                   push edx
// 009d00b2  51                   push ecx
// 009d00b3  50                   push eax
// 009d00b4  ff156c3bb200         call dword ptr [0xb23b6c]
// 009d00ba  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 009d00be  85c9                 test ecx, ecx
// 009d00c0  7c11                 jl 0x9d00d3
// 009d00c2  8b442410             mov eax, dword ptr [esp + 0x10]
// 009d00c6  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 009d00c9  7d08                 jge 0x9d00d3
// 009d00cb  8b5028               mov edx, dword ptr [eax + 0x28]
// 009d00ce  8b048a               mov eax, dword ptr [edx + ecx*4]
// 009d00d1  eb02                 jmp 0x9d00d5
// 009d00d3  33c0                 xor eax, eax
// 009d00d5  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 009d00dc  7428                 je 0x9d0106
// 009d00de  8b742418             mov esi, dword ptr [esp + 0x18]
// 009d00e2  85f6                 test esi, esi
// 009d00e4  7e20                 jle 0x9d0106
// 009d00e6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 009d00ea  99                   cdq 
// 009d00eb  f7fe                 idiv esi
// 009d00ed  837c241400           cmp dword ptr [esp + 0x14], 0
// 009d00f2  7504                 jne 0x9d00f8
// 009d00f4  0103                 add dword ptr [ebx], eax
// 009d00f6  eb03                 jmp 0x9d00fb
// 009d00f8  014304               add dword ptr [ebx + 4], eax
// 009d00fb  2944244c             sub dword ptr [esp + 0x4c], eax
// 009d00ff  4e                   dec esi
// 009d0100  89742418             mov dword ptr [esp + 0x18], esi
// 009d0104  03e8                 add ebp, eax
// 009d0106  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 009d010a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009d010e  8b442430             mov eax, dword ptr [esp + 0x30]
// 009d0112  40                   inc eax
// 009d0113  83c340               add ebx, 0x40
// 009d0116  3b442420             cmp eax, dword ptr [esp + 0x20]
// 009d011a  89442430             mov dword ptr [esp + 0x30], eax
// 009d011e  0f8e5cffffff         jle 0x9d0080
// 009d0124  837c241400           cmp dword ptr [esp + 0x14], 0
// 009d0129  740a                 je 0x9d0135
// 009d012b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 009d012f  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 009d0133  eb08                 jmp 0x9d013d
// 009d0135  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 009d0139  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 009d013d  8b442424             mov eax, dword ptr [esp + 0x24]
// 009d0141  b901000000           mov ecx, 1
// 009d0146  89442420             mov dword ptr [esp + 0x20], eax
// 009d014a  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 009d0152  c744241800000000     mov dword ptr [esp + 0x18], 0
// 009d015a  ff4c2424             dec dword ptr [esp + 0x24]
// 009d015e  4a                   dec edx
// 009d015f  83ef40               sub edi, 0x40
// 009d0162  8954241c             mov dword ptr [esp + 0x1c], edx
// 009d0166  897c2428             mov dword ptr [esp + 0x28], edi
// 009d016a  85d2                 test edx, edx
// 009d016c  0f8d3efeffff         jge 0x9cffb0
// 009d0172  5f                   pop edi
// 009d0173  5e                   pop esi
// 009d0174  5d                   pop ebp
// 009d0175  5b                   pop ebx
// 009d0176  83c41c               add esp, 0x1c
// 009d0179  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
