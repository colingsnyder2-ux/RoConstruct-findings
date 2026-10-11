// roc 2007-08 005ac940  unit: RBX::World  size: 248 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ac940
//
// 005ac940  83ec10               sub esp, 0x10
// 005ac943  53                   push ebx
// 005ac944  55                   push ebp
// 005ac945  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005ac949  56                   push esi
// 005ac94a  57                   push edi
// 005ac94b  83c50c               add ebp, 0xc
// 005ac94e  8bff                 mov edi, edi
// 005ac950  8b4504               mov eax, dword ptr [ebp + 4]
// 005ac953  85c0                 test eax, eax
// 005ac955  0f84d5000000         je 0x5aca30
// 005ac95b  8b4d08               mov ecx, dword ptr [ebp + 8]
// 005ac95e  2bc8                 sub ecx, eax
// 005ac960  c1f902               sar ecx, 2
// 005ac963  0f84c7000000         je 0x5aca30
// 005ac969  8b7508               mov esi, dword ptr [ebp + 8]
// 005ac96c  3bc6                 cmp eax, esi
// 005ac96e  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005ac974  7602                 jbe 0x5ac978
// 005ac976  ffd3                 call ebx
// 005ac978  8d46fc               lea eax, [esi - 4]
// 005ac97b  3b4508               cmp eax, dword ptr [ebp + 8]
// 005ac97e  8bfd                 mov edi, ebp
// 005ac980  89742414             mov dword ptr [esp + 0x14], esi
// 005ac984  7705                 ja 0x5ac98b
// 005ac986  3b4504               cmp eax, dword ptr [ebp + 4]
// 005ac989  7302                 jae 0x5ac98d
// 005ac98b  ffd3                 call ebx
// 005ac98d  83c6fc               add esi, -4
// 005ac990  3b7708               cmp esi, dword ptr [edi + 8]
// 005ac993  7202                 jb 0x5ac997
// 005ac995  ffd3                 call ebx
// 005ac997  8b3e                 mov edi, dword ptr [esi]
// 005ac999  8b07                 mov eax, dword ptr [edi]
// 005ac99b  85c0                 test eax, eax
// 005ac99d  741b                 je 0x5ac9ba
// 005ac99f  8d542424             lea edx, [esp + 0x24]
// 005ac9a3  52                   push edx
// 005ac9a4  83c00c               add eax, 0xc
// 005ac9a7  50                   push eax
// 005ac9a8  897c242c             mov dword ptr [esp + 0x2c], edi
// 005ac9ac  e81ffeffff           call 0x5ac7d0
// 005ac9b1  83c408               add esp, 8
// 005ac9b4  c70700000000         mov dword ptr [edi], 0
// 005ac9ba  837c242800           cmp dword ptr [esp + 0x28], 0
// 005ac9bf  748f                 je 0x5ac950
// 005ac9c1  8b742428             mov esi, dword ptr [esp + 0x28]
// 005ac9c5  8b4610               mov eax, dword ptr [esi + 0x10]
// 005ac9c8  83c60c               add esi, 0xc
// 005ac9cb  85c0                 test eax, eax
// 005ac9cd  897c2424             mov dword ptr [esp + 0x24], edi
// 005ac9d1  7504                 jne 0x5ac9d7
// 005ac9d3  33d2                 xor edx, edx
// 005ac9d5  eb08                 jmp 0x5ac9df
// 005ac9d7  8b5608               mov edx, dword ptr [esi + 8]
// 005ac9da  2bd0                 sub edx, eax
// 005ac9dc  c1fa02               sar edx, 2
// 005ac9df  85c0                 test eax, eax
// 005ac9e1  7422                 je 0x5aca05
// 005ac9e3  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 005ac9e6  2bc8                 sub ecx, eax
// 005ac9e8  c1f902               sar ecx, 2
// 005ac9eb  3bd1                 cmp edx, ecx
// 005ac9ed  7316                 jae 0x5aca05
// 005ac9ef  8b4608               mov eax, dword ptr [esi + 8]
// 005ac9f2  8b542428             mov edx, dword ptr [esp + 0x28]
// 005ac9f6  8938                 mov dword ptr [eax], edi
// 005ac9f8  83c004               add eax, 4
// 005ac9fb  894608               mov dword ptr [esi + 8], eax
// 005ac9fe  8917                 mov dword ptr [edi], edx
// 005aca00  e94bffffff           jmp 0x5ac950
// 005aca05  8b5e08               mov ebx, dword ptr [esi + 8]
// 005aca08  3bc3                 cmp eax, ebx
// 005aca0a  7606                 jbe 0x5aca12
// 005aca0c  ff15d8e67700         call dword ptr [0x77e6d8]
// 005aca12  8d442424             lea eax, [esp + 0x24]
// 005aca16  50                   push eax
// 005aca17  53                   push ebx
// 005aca18  56                   push esi
// 005aca19  8d4c2424             lea ecx, [esp + 0x24]
// 005aca1d  51                   push ecx
// 005aca1e  8bce                 mov ecx, esi
// 005aca20  e85b150200           call 0x5cdf80
// 005aca25  8b542428             mov edx, dword ptr [esp + 0x28]
// 005aca29  8917                 mov dword ptr [edi], edx
// 005aca2b  e920ffffff           jmp 0x5ac950
// 005aca30  5f                   pop edi
// 005aca31  5e                   pop esi
// 005aca32  5d                   pop ebp
// 005aca33  5b                   pop ebx
// 005aca34  83c410               add esp, 0x10
// 005aca37  c3                   ret 
// library openrbx-client/App\v8world\Mechanism.cpp (function ?transferTrackers@MechanismTracker@RBX@@SAXPAVMechanism@2@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8world/Mechanism.cpp
