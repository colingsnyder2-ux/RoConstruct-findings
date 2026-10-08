// from server: 100% by auto
// roc 2012-06 00a6c060  unit: CXTPScrollBase  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6c060
//
// 00a6c060  83ec2c               sub esp, 0x2c
// 00a6c063  56                   push esi
// 00a6c064  8bf1                 mov esi, ecx
// 00a6c066  8b06                 mov eax, dword ptr [esi]
// 00a6c068  8b5010               mov edx, dword ptr [eax + 0x10]
// 00a6c06b  8d4c2404             lea ecx, [esp + 4]
// 00a6c06f  51                   push ecx
// 00a6c070  8bce                 mov ecx, esi
// 00a6c072  ffd2                 call edx
// 00a6c074  8b06                 mov eax, dword ptr [esi]
// 00a6c076  8b5014               mov edx, dword ptr [eax + 0x14]
// 00a6c079  8d4c2414             lea ecx, [esp + 0x14]
// 00a6c07d  51                   push ecx
// 00a6c07e  8bce                 mov ecx, esi
// 00a6c080  ffd2                 call edx
// 00a6c082  8b06                 mov eax, dword ptr [esi]
// 00a6c084  8d4c2414             lea ecx, [esp + 0x14]
// 00a6c088  51                   push ecx
// 00a6c089  8d5604               lea edx, [esi + 4]
// 00a6c08c  52                   push edx
// 00a6c08d  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a6c090  8d4c240c             lea ecx, [esp + 0xc]
// 00a6c094  51                   push ecx
// 00a6c095  8bce                 mov ecx, esi
// 00a6c097  ffd2                 call edx
// 00a6c099  5e                   pop esi
// 00a6c09a  83c42c               add esp, 0x2c
// 00a6c09d  c3                   ret 
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?SetupScrollInfo@CXTPScrollBase@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
