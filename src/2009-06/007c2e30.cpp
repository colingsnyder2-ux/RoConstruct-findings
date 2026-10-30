// roc 2009-06 007c2e30  unit: CXTPReportPaintManager  size: 432 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c2e30
//
// 007c2e30  6aff                 push -1
// 007c2e32  6821dc8700           push 0x87dc21
// 007c2e37  64a100000000         mov eax, dword ptr fs:[0]
// 007c2e3d  50                   push eax
// 007c2e3e  83ec2c               sub esp, 0x2c
// 007c2e41  53                   push ebx
// 007c2e42  55                   push ebp
// 007c2e43  56                   push esi
// 007c2e44  57                   push edi
// 007c2e45  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c2e4a  33c4                 xor eax, esp
// 007c2e4c  50                   push eax
// 007c2e4d  8d442440             lea eax, [esp + 0x40]
// 007c2e51  64a300000000         mov dword ptr fs:[0], eax
// 007c2e57  894c2414             mov dword ptr [esp + 0x14], ecx
// 007c2e5b  8b442450             mov eax, dword ptr [esp + 0x50]
// 007c2e5f  33db                 xor ebx, ebx
// 007c2e61  3bc3                 cmp eax, ebx
// 007c2e63  0f845b010000         je 0x7c2fc4
// 007c2e69  8b6c2454             mov ebp, dword ptr [esp + 0x54]
// 007c2e6d  3beb                 cmp ebp, ebx
// 007c2e6f  0f844f010000         je 0x7c2fc4
// 007c2e75  8bb8ec000000         mov edi, dword ptr [eax + 0xec]
// 007c2e7b  8b7730               mov esi, dword ptr [edi + 0x30]
// 007c2e7e  53                   push ebx
// 007c2e7f  55                   push ebp
// 007c2e80  8d4c2438             lea ecx, [esp + 0x38]
// 007c2e84  897c2420             mov dword ptr [esp + 0x20], edi
// 007c2e88  89742424             mov dword ptr [esp + 0x24], esi
// 007c2e8c  c744245c16000000     mov dword ptr [esp + 0x5c], 0x16
// 007c2e94  e8c7d9faff           call 0x770860
// 007c2e99  895c2448             mov dword ptr [esp + 0x48], ebx
// 007c2e9d  85f6                 test esi, esi
// 007c2e9f  0f8e08010000         jle 0x7c2fad
// 007c2ea5  85db                 test ebx, ebx
// 007c2ea7  0f8cf5000000         jl 0x7c2fa2
// 007c2ead  3b5f30               cmp ebx, dword ptr [edi + 0x30]
// 007c2eb0  0f8dec000000         jge 0x7c2fa2
// 007c2eb6  8b472c               mov eax, dword ptr [edi + 0x2c]
// 007c2eb9  8b3498               mov esi, dword ptr [eax + ebx*4]
// 007c2ebc  8d0498               lea eax, [eax + ebx*4]
// 007c2ebf  85f6                 test esi, esi
// 007c2ec1  0f84db000000         je 0x7c2fa2
// 007c2ec7  8bce                 mov ecx, esi
// 007c2ec9  e8829ef8ff           call 0x74cd50
// 007c2ece  85c0                 test eax, eax
// 007c2ed0  0f84cc000000         je 0x7c2fa2
// 007c2ed6  8d4c2450             lea ecx, [esp + 0x50]
// 007c2eda  51                   push ecx
// 007c2edb  8bce                 mov ecx, esi
// 007c2edd  e8eec7fbff           call 0x77f6d0
// 007c2ee2  837d0c00             cmp dword ptr [ebp + 0xc], 0
// 007c2ee6  c644244801           mov byte ptr [esp + 0x48], 1
// 007c2eeb  8bce                 mov ecx, esi
// 007c2eed  740c                 je 0x7c2efb
// 007c2eef  8b542458             mov edx, dword ptr [esp + 0x58]
// 007c2ef3  52                   push edx
// 007c2ef4  e8f7a4f8ff           call 0x74d3f0
// 007c2ef9  eb05                 jmp 0x7c2f00
// 007c2efb  e8c0a4f8ff           call 0x74d3c0
// 007c2f00  83c0fd               add eax, -3
// 007c2f03  89442428             mov dword ptr [esp + 0x28], eax
// 007c2f07  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c2f0b  83b8a802000000       cmp dword ptr [eax + 0x2a8], 0
// 007c2f12  c744242400000000     mov dword ptr [esp + 0x24], 0
// 007c2f1a  c744242c16000000     mov dword ptr [esp + 0x2c], 0x16
// 007c2f22  c744242003000000     mov dword ptr [esp + 0x20], 3
// 007c2f2a  7510                 jne 0x7c2f3c
// 007c2f2c  8bce                 mov ecx, esi
// 007c2f2e  e86d9df8ff           call 0x74cca0
// 007c2f33  bf148c0000           mov edi, 0x8c14
// 007c2f38  a810                 test al, 0x10
// 007c2f3a  7505                 jne 0x7c2f41
// 007c2f3c  bf248c0000           mov edi, 0x8c24
// 007c2f41  8bce                 mov ecx, esi
// 007c2f43  e8b89cf8ff           call 0x74cc00
// 007c2f48  50                   push eax
// 007c2f49  8d4c2434             lea ecx, [esp + 0x34]
// 007c2f4d  e89ec4faff           call 0x76f3f0
// 007c2f52  8b7500               mov esi, dword ptr [ebp]
// 007c2f55  57                   push edi
// 007c2f56  8d4c2424             lea ecx, [esp + 0x24]
// 007c2f5a  51                   push ecx
// 007c2f5b  8d4c2458             lea ecx, [esp + 0x58]
// 007c2f5f  83c670               add esi, 0x70
// 007c2f62  ff1554fb8900         call dword ptr [0x89fb54]
// 007c2f68  50                   push eax
// 007c2f69  8d4c245c             lea ecx, [esp + 0x5c]
// 007c2f6d  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c2f73  8b16                 mov edx, dword ptr [esi]
// 007c2f75  50                   push eax
// 007c2f76  8bcd                 mov ecx, ebp
// 007c2f78  ffd2                 call edx
// 007c2f7a  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 007c2f7e  2b442424             sub eax, dword ptr [esp + 0x24]
// 007c2f82  83c008               add eax, 8
// 007c2f85  39442454             cmp dword ptr [esp + 0x54], eax
// 007c2f89  7f04                 jg 0x7c2f8f
// 007c2f8b  89442454             mov dword ptr [esp + 0x54], eax
// 007c2f8f  8d4c2450             lea ecx, [esp + 0x50]
// 007c2f93  c644244800           mov byte ptr [esp + 0x48], 0
// 007c2f98  ff1510fd8900         call dword ptr [0x89fd10]
// 007c2f9e  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 007c2fa2  43                   inc ebx
// 007c2fa3  3b5c241c             cmp ebx, dword ptr [esp + 0x1c]
// 007c2fa7  0f8cf8feffff         jl 0x7c2ea5
// 007c2fad  8d4c2430             lea ecx, [esp + 0x30]
// 007c2fb1  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 007c2fb9  e822d9faff           call 0x7708e0
// 007c2fbe  8b442454             mov eax, dword ptr [esp + 0x54]
// 007c2fc2  eb06                 jmp 0x7c2fca
// 007c2fc4  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 007c2fca  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 007c2fce  64890d00000000       mov dword ptr fs:[0], ecx
// 007c2fd5  59                   pop ecx
// 007c2fd6  5f                   pop edi
// 007c2fd7  5e                   pop esi
// 007c2fd8  5d                   pop ebp
// 007c2fd9  5b                   pop ebx
// 007c2fda  83c438               add esp, 0x38
// 007c2fdd  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetFooterHeight@CXTPReportPaintManager@@UAEHPAVCXTPReportControl@@PAVCDC@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp