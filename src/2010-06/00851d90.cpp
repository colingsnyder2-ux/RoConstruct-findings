// roc 2010-06 00851d90  unit: CXTPReportPaintManager  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00851d90
//
// 00851d90  6aff                 push -1
// 00851d92  68417d9b00           push 0x9b7d41
// 00851d97  64a100000000         mov eax, dword ptr fs:[0]
// 00851d9d  50                   push eax
// 00851d9e  83ec2c               sub esp, 0x2c
// 00851da1  53                   push ebx
// 00851da2  55                   push ebp
// 00851da3  56                   push esi
// 00851da4  57                   push edi
// 00851da5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00851daa  33c4                 xor eax, esp
// 00851dac  50                   push eax
// 00851dad  8d442440             lea eax, [esp + 0x40]
// 00851db1  64a300000000         mov dword ptr fs:[0], eax
// 00851db7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00851dbb  8b442450             mov eax, dword ptr [esp + 0x50]
// 00851dbf  33db                 xor ebx, ebx
// 00851dc1  3bc3                 cmp eax, ebx
// 00851dc3  0f845b010000         je 0x851f24
// 00851dc9  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 00851dcd  3beb                 cmp ebp, ebx
// 00851dcf  0f844f010000         je 0x851f24
// 00851dd5  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 00851ddb  8b7730               mov esi, dword ptr [edi + 0x30]
// 00851dde  53                   push ebx
// 00851ddf  55                   push ebp
// 00851de0  8d4c2438             lea ecx, [esp + 0x38]
// 00851de4  897c2420             mov dword ptr [esp + 0x20], edi
// 00851de8  89742424             mov dword ptr [esp + 0x24], esi
// 00851dec  c744245c16000000     mov dword ptr [esp + 0x5c], 0x16
// 00851df4  e8a7d8faff           call 0x7ff6a0
// 00851df9  895c2448             mov dword ptr [esp + 0x48], ebx
// 00851dfd  85f6                 test esi, esi
// 00851dff  0f8e08010000         jle 0x851f0d
// 00851e05  85db                 test ebx, ebx
// 00851e07  0f8cf5000000         jl 0x851f02
// 00851e0d  3b5f30               cmp ebx, dword ptr [edi + 0x30]
// 00851e10  0f8dec000000         jge 0x851f02
// 00851e16  8b472c               mov eax, dword ptr [edi + 0x2c]
// 00851e19  8b3498               mov esi, dword ptr [eax + ebx*4]
// 00851e1c  8d0498               lea eax, [eax + ebx*4]
// 00851e1f  85f6                 test esi, esi
// 00851e21  0f84db000000         je 0x851f02
// 00851e27  8bce                 mov ecx, esi
// 00851e29  e8729df8ff           call 0x7dbba0
// 00851e2e  85c0                 test eax, eax
// 00851e30  0f84cc000000         je 0x851f02
// 00851e36  8d4c2450             lea ecx, [esp + 0x50]
// 00851e3a  51                   push ecx
// 00851e3b  8bce                 mov ecx, esi
// 00851e3d  e86e26fdff           call 0x8244b0
// 00851e42  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 00851e46  c644244801           mov byte ptr [esp + 0x48], 1
// 00851e4b  8bce                 mov ecx, esi
// 00851e4d  740c                 je 0x851e5b
// 00851e4f  8b542458             mov edx, dword ptr [esp + 0x58]
// 00851e53  52                   push edx
// 00851e54  e8d7a3f8ff           call 0x7dc230
// 00851e59  eb05                 jmp 0x851e60
// 00851e5b  e8a0a3f8ff           call 0x7dc200
// 00851e60  83c0fd               add eax, -3
// 00851e63  89442428             mov dword ptr [esp + 0x28], eax
// 00851e67  8b442414             mov eax, dword ptr [esp + 0x14]
// 00851e6b  83b8a802000000       cmp dword ptr [eax + 0x2a8], 0
// 00851e72  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00851e7a  c744242c16000000     mov dword ptr [esp + 0x2c], 0x16
// 00851e82  c744242003000000     mov dword ptr [esp + 0x20], 3
// 00851e8a  7510                 jne 0x851e9c
// 00851e8c  8bce                 mov ecx, esi
// 00851e8e  e86d9cf8ff           call 0x7dbb00
// 00851e93  bf148c0000           mov edi, 0x8c14
// 00851e98  a810                 test al, 0x10
// 00851e9a  7505                 jne 0x851ea1
// 00851e9c  bf248c0000           mov edi, 0x8c24
// 00851ea1  8bce                 mov ecx, esi
// 00851ea3  e8b89bf8ff           call 0x7dba60
// 00851ea8  50                   push eax
// 00851ea9  8d4c2434             lea ecx, [esp + 0x34]
// 00851ead  e86ec3faff           call 0x7fe220
// 00851eb2  8b7500               mov esi, dword ptr [ebp]
// 00851eb5  57                   push edi
// 00851eb6  8d4c2424             lea ecx, [esp + 0x24]
// 00851eba  51                   push ecx
// 00851ebb  8d4c2458             lea ecx, [esp + 0x58]
// 00851ebf  83c670               add esi, 0x70
// 00851ec2  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00851ec8  50                   push eax
// 00851ec9  8d4c245c             lea ecx, [esp + 0x5c]
// 00851ecd  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00851ed3  8b16                 mov edx, dword ptr [esi]
// 00851ed5  50                   push eax
// 00851ed6  8bcd                 mov ecx, ebp
// 00851ed8  ffd2                 call edx
// 00851eda  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00851ede  2b442424             sub eax, dword ptr [esp + 0x24]
// 00851ee2  83c008               add eax, 8
// 00851ee5  39442454             cmp dword ptr [esp + 0x54], eax
// 00851ee9  7f04                 jg 0x851eef
// 00851eeb  89442454             mov dword ptr [esp + 0x54], eax
// 00851eef  8d4c2450             lea ecx, [esp + 0x50]
// 00851ef3  c644244800           mov byte ptr [esp + 0x48], 0
// 00851ef8  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00851efe  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00851f02  43                   inc ebx
// 00851f03  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 00851f07  0f8cf8feffff         jl 0x851e05
// 00851f0d  8d4c2430             lea ecx, [esp + 0x30]
// 00851f11  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 00851f19  e802d8faff           call 0x7ff720
// 00851f1e  8b442454             mov eax, dword ptr [esp + 0x54]
// 00851f22  eb06                 jmp 0x851f2a
// 00851f24  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 00851f2a  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00851f2e  64890d00000000       mov dword ptr fs:[0], ecx
// 00851f35  59                   pop ecx
// 00851f36  5f                   pop edi
// 00851f37  5e                   pop esi
// 00851f38  5d                   pop ebp
// 00851f39  5b                   pop ebx
// 00851f3a  83c438               add esp, 0x38
// 00851f3d  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetFooterHeight@CXTPReportPaintManager@@UAEHPAVCXTPReportControl@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp