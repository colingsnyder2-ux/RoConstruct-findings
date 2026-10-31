// roc 2011-06 00404f60  unit: VCApp::?$CComObject  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00404f60
//
// 00404f60  55                   push ebp
// 00404f61  8bec                 mov ebp, esp
// 00404f63  6aff                 push -1
// 00404f65  6878d19c00           push 0x9cd178
// 00404f6a  64a100000000         mov eax, dword ptr fs:[0]
// 00404f70  50                   push eax
// 00404f71  64892500000000       mov dword ptr fs:[0], esp
// 00404f78  51                   push ecx
// 00404f79  56                   push esi
// 00404f7a  57                   push edi
// 00404f7b  8b7d08               mov edi, dword ptr [ebp + 8]
// 00404f7e  894df0               mov dword ptr [ebp - 0x10], ecx
// 00404f81  85ff                 test edi, edi
// 00404f83  7478                 je 0x404ffd
// 00404f85  c7450800000000       mov dword ptr [ebp + 8], 0
// 00404f8c  57                   push edi
// 00404f8d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00404f94  ff155803a400         call dword ptr [0xa40358]
// 00404f9a  6a00                 push 0
// 00404f9c  40                   inc eax
// 00404f9d  99                   cdq 
// 00404f9e  6a02                 push 2
// 00404fa0  52                   push edx
// 00404fa1  50                   push eax
// 00404fa2  e809634000           call 0x80b2b0
// 00404fa7  8bf0                 mov esi, eax
// 00404fa9  0500000080           add eax, 0x80000000
// 00404fae  83d200               adc edx, 0
// 00404fb1  85d2                 test edx, edx
// 00404fb3  7740                 ja 0x404ff5
// 00404fb5  7205                 jb 0x404fbc
// 00404fb7  83f8ff               cmp eax, -1
// 00404fba  7739                 ja 0x404ff5
// 00404fbc  81fe00040000         cmp esi, 0x400
// 00404fc2  7f18                 jg 0x404fdc
// 00404fc4  56                   push esi
// 00404fc5  e856f6ffff           call 0x404620
// 00404fca  83c404               add esp, 4
// 00404fcd  84c0                 test al, al
// 00404fcf  740b                 je 0x404fdc
// 00404fd1  8bc6                 mov eax, esi
// 00404fd3  e8a8624000           call 0x80b280
// 00404fd8  8bc4                 mov eax, esp
// 00404fda  eb09                 jmp 0x404fe5
// 00404fdc  56                   push esi
// 00404fdd  8d4d08               lea ecx, [ebp + 8]
// 00404fe0  e8ebfbffff           call 0x404bd0
// 00404fe5  6a03                 push 3
// 00404fe7  56                   push esi
// 00404fe8  57                   push edi
// 00404fe9  50                   push eax
// 00404fea  e841e5ffff           call 0x403530
// 00404fef  8bf0                 mov esi, eax
// 00404ff1  85f6                 test esi, esi
// 00404ff3  750c                 jne 0x405001
// 00404ff5  8d4d08               lea ecx, [ebp + 8]
// 00404ff8  e8c3f2ffff           call 0x4042c0
// 00404ffd  33c0                 xor eax, eax
// 00404fff  eb1d                 jmp 0x40501e
// 00405001  56                   push esi
// 00405002  ff156403a400         call dword ptr [0xa40364]
// 00405008  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0040500b  50                   push eax
// 0040500c  56                   push esi
// 0040500d  e8fee9ffff           call 0x403a10
// 00405012  8d4d08               lea ecx, [ebp + 8]
// 00405015  8bf0                 mov esi, eax
// 00405017  e8a4f2ffff           call 0x4042c0
// 0040501c  8bc6                 mov eax, esi
// 0040501e  8d65e8               lea esp, [ebp - 0x18]
// 00405021  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405024  64890d00000000       mov dword ptr fs:[0], ecx
// 0040502b  5f                   pop edi
// 0040502c  5e                   pop esi
// 0040502d  8be5                 mov esp, ebp
// 0040502f  5d                   pop ebp
// 00405030  c20400               ret 4
// copied from an identical function in another client (function ?AddString@CParseBuffer@CRegParser@ATL@@QAEHPB_W@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp