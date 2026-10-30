// roc 2009-12 00895f10  unit: CXTPRibbonBar  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00895f10
//
// 00895f10  55                   push ebp
// 00895f11  8be9                 mov ebp, ecx
// 00895f13  33d2                 xor edx, edx
// 00895f15  57                   push edi
// 00895f16  8995c8010000         mov dword ptr [ebp + 0x1c8], edx
// 00895f1c  e8bff2ffff           call 0x8951e0
// 00895f21  85c0                 test eax, eax
// 00895f23  7404                 je 0x895f29
// 00895f25  8954240c             mov dword ptr [esp + 0xc], edx
// 00895f29  e822f3f6ff           call 0x805250
// 00895f2e  8bf8                 mov edi, eax
// 00895f30  83ef01               sub edi, 1
// 00895f33  7877                 js 0x895fac
// 00895f35  53                   push ebx
// 00895f36  56                   push esi
// 00895f37  eb07                 jmp 0x895f40
// 00895f39  8da42400000000       lea esp, [esp]
// 00895f40  8b85fc000000         mov eax, dword ptr [ebp + 0xfc]
// 00895f46  85ff                 test edi, edi
// 00895f48  7c0d                 jl 0x895f57
// 00895f4a  3b782c               cmp edi, dword ptr [eax + 0x2c]
// 00895f4d  7d08                 jge 0x895f57
// 00895f4f  8b4028               mov eax, dword ptr [eax + 0x28]
// 00895f52  8b34b8               mov esi, dword ptr [eax + edi*4]
// 00895f55  eb02                 jmp 0x895f59
// 00895f57  33f6                 xor esi, esi
// 00895f59  8b9e58010000         mov ebx, dword ptr [esi + 0x158]
// 00895f5f  85db                 test ebx, ebx
// 00895f61  7429                 je 0x895f8c
// 00895f63  8bcb                 mov ecx, ebx
// 00895f65  e896350500           call 0x8e9500
// 00895f6a  3b442414             cmp eax, dword ptr [esp + 0x14]
// 00895f6e  7506                 jne 0x895f76
// 00895f70  837b7800             cmp dword ptr [ebx + 0x78], 0
// 00895f74  7516                 jne 0x895f8c
// 00895f76  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00895f7c  8b16                 mov edx, dword ptr [esi]
// 00895f7e  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 00895f84  0d80000000           or eax, 0x80
// 00895f89  50                   push eax
// 00895f8a  eb15                 jmp 0x895fa1
// 00895f8c  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00895f92  8b06                 mov eax, dword ptr [esi]
// 00895f94  8b9094000000         mov edx, dword ptr [eax + 0x94]
// 00895f9a  81e17fffffff         and ecx, 0xffffff7f
// 00895fa0  51                   push ecx
// 00895fa1  8bce                 mov ecx, esi
// 00895fa3  ffd2                 call edx
// 00895fa5  83ef01               sub edi, 1
// 00895fa8  7996                 jns 0x895f40
// 00895faa  5e                   pop esi
// 00895fab  5b                   pop ebx
// 00895fac  5f                   pop edi
// 00895fad  5d                   pop ebp
// 00895fae  c20400               ret 4
// copied from an identical function in another client (function ?RebuildControls@CXTPRibbonBar@@QAEXPAVCXTPRibbonTab@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp