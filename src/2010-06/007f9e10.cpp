// roc 2010-06 007f9e10  unit: CXTPControls  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007f9e10
//
// 007f9e10  83ec14               sub esp, 0x14
// 007f9e13  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f9e17  890c24               mov dword ptr [esp], ecx
// 007f9e1a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007f9e1e  3bc8                 cmp ecx, eax
// 007f9e20  0f8dd0000000         jge 0x7f9ef6
// 007f9e26  53                   push ebx
// 007f9e27  55                   push ebp
// 007f9e28  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 007f9e2c  56                   push esi
// 007f9e2d  8bf1                 mov esi, ecx
// 007f9e2f  c1e606               shl esi, 6
// 007f9e32  03742424             add esi, dword ptr [esp + 0x24]
// 007f9e36  2bc1                 sub eax, ecx
// 007f9e38  57                   push edi
// 007f9e39  8944242c             mov dword ptr [esp + 0x2c], eax
// 007f9e3d  8d4900               lea ecx, [ecx]
// 007f9e40  837c243800           cmp dword ptr [esp + 0x38], 0
// 007f9e45  8b06                 mov eax, dword ptr [esi]
// 007f9e47  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 007f9e4a  8b7e04               mov edi, dword ptr [esi + 4]
// 007f9e4d  8b5e08               mov ebx, dword ptr [esi + 8]
// 007f9e50  89442414             mov dword ptr [esp + 0x14], eax
// 007f9e54  894c2420             mov dword ptr [esp + 0x20], ecx
// 007f9e58  7444                 je 0x7f9e9e
// 007f9e5a  8b442448             mov eax, dword ptr [esp + 0x48]
// 007f9e5e  8b542440             mov edx, dword ptr [esp + 0x40]
// 007f9e62  8d0c10               lea ecx, [eax + edx]
// 007f9e65  51                   push ecx
// 007f9e66  53                   push ebx
// 007f9e67  50                   push eax
// 007f9e68  8bd3                 mov edx, ebx
// 007f9e6a  2bd5                 sub edx, ebp
// 007f9e6c  52                   push edx
// 007f9e6d  8d4610               lea eax, [esi + 0x10]
// 007f9e70  50                   push eax
// 007f9e71  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007f9e77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9e7b  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007f9e7e  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 007f9e88  755a                 jne 0x7f9ee4
// 007f9e8a  8b442414             mov eax, dword ptr [esp + 0x14]
// 007f9e8e  2bc3                 sub eax, ebx
// 007f9e90  03c5                 add eax, ebp
// 007f9e92  99                   cdq 
// 007f9e93  2bc2                 sub eax, edx
// 007f9e95  d1f8                 sar eax, 1
// 007f9e97  6a00                 push 0
// 007f9e99  f7d8                 neg eax
// 007f9e9b  50                   push eax
// 007f9e9c  eb3f                 jmp 0x7f9edd
// 007f9e9e  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 007f9ea2  8d042f               lea eax, [edi + ebp]
// 007f9ea5  50                   push eax
// 007f9ea6  8b442448             mov eax, dword ptr [esp + 0x48]
// 007f9eaa  8d1408               lea edx, [eax + ecx]
// 007f9ead  52                   push edx
// 007f9eae  57                   push edi
// 007f9eaf  50                   push eax
// 007f9eb0  8d4610               lea eax, [esi + 0x10]
// 007f9eb3  50                   push eax
// 007f9eb4  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007f9eba  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007f9ebe  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007f9ec1  f782ec00000000002000 test dword ptr [edx + 0xec], 0x200000
// 007f9ecb  7517                 jne 0x7f9ee4
// 007f9ecd  8bc7                 mov eax, edi
// 007f9ecf  2b442420             sub eax, dword ptr [esp + 0x20]
// 007f9ed3  03c5                 add eax, ebp
// 007f9ed5  99                   cdq 
// 007f9ed6  2bc2                 sub eax, edx
// 007f9ed8  d1f8                 sar eax, 1
// 007f9eda  50                   push eax
// 007f9edb  6a00                 push 0
// 007f9edd  56                   push esi
// 007f9ede  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007f9ee4  83c640               add esi, 0x40
// 007f9ee7  836c242c01           sub dword ptr [esp + 0x2c], 1
// 007f9eec  0f854effffff         jne 0x7f9e40
// 007f9ef2  5f                   pop edi
// 007f9ef3  5e                   pop esi
// 007f9ef4  5d                   pop ebp
// 007f9ef5  5b                   pop ebx
// 007f9ef6  83c414               add esp, 0x14
// 007f9ef9  c22c00               ret 0x2c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_CenterControlsInRow@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@HHHHVCSize@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
