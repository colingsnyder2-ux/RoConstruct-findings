// roc 2012-06 00405370  unit: VCApp::?$CComObject  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00405370
//
// 00405370  55                   push ebp
// 00405371  8bec                 mov ebp, esp
// 00405373  6aff                 push -1
// 00405375  6828a1a900           push 0xa9a128
// 0040537a  64a100000000         mov eax, dword ptr fs:[0]
// 00405380  50                   push eax
// 00405381  64892500000000       mov dword ptr fs:[0], esp
// 00405388  51                   push ecx
// 00405389  56                   push esi
// 0040538a  57                   push edi
// 0040538b  8b7d08               mov edi, dword ptr [ebp + 8]
// 0040538e  894df0               mov dword ptr [ebp - 0x10], ecx
// 00405391  85ff                 test edi, edi
// 00405393  7478                 je 0x40540d
// 00405395  c7450800000000       mov dword ptr [ebp + 8], 0
// 0040539c  57                   push edi
// 0040539d  c745fc00000000       mov dword ptr [ebp - 4], 0
// 004053a4  ff15c421b200         call dword ptr [0xb221c4]
// 004053aa  6a00                 push 0
// 004053ac  40                   inc eax
// 004053ad  99                   cdq 
// 004053ae  6a02                 push 2
// 004053b0  52                   push edx
// 004053b1  50                   push eax
// 004053b2  e889df5700           call 0x983340
// 004053b7  8bf0                 mov esi, eax
// 004053b9  0500000080           add eax, 0x80000000
// 004053be  83d200               adc edx, 0
// 004053c1  85d2                 test edx, edx
// 004053c3  7740                 ja 0x405405
// 004053c5  7205                 jb 0x4053cc
// 004053c7  83f8ff               cmp eax, -1
// 004053ca  7739                 ja 0x405405
// 004053cc  81fe00040000         cmp esi, 0x400
// 004053d2  7f18                 jg 0x4053ec
// 004053d4  56                   push esi
// 004053d5  e896f9ffff           call 0x404d70
// 004053da  83c404               add esp, 4
// 004053dd  84c0                 test al, al
// 004053df  740b                 je 0x4053ec
// 004053e1  8bc6                 mov eax, esi
// 004053e3  e828df5700           call 0x983310
// 004053e8  8bc4                 mov eax, esp
// 004053ea  eb09                 jmp 0x4053f5
// 004053ec  56                   push esi
// 004053ed  8d4d08               lea ecx, [ebp + 8]
// 004053f0  e82bfeffff           call 0x405220
// 004053f5  6a03                 push 3
// 004053f7  56                   push esi
// 004053f8  57                   push edi
// 004053f9  50                   push eax
// 004053fa  e841edffff           call 0x404140
// 004053ff  8bf0                 mov esi, eax
// 00405401  85f6                 test esi, esi
// 00405403  750c                 jne 0x405411
// 00405405  8d4d08               lea ecx, [ebp + 8]
// 00405408  e853f6ffff           call 0x404a60
// 0040540d  33c0                 xor eax, eax
// 0040540f  eb1d                 jmp 0x40542e
// 00405411  56                   push esi
// 00405412  ff15a821b200         call dword ptr [0xb221a8]
// 00405418  8b4df0               mov ecx, dword ptr [ebp - 0x10]
// 0040541b  50                   push eax
// 0040541c  56                   push esi
// 0040541d  e83ef1ffff           call 0x404560
// 00405422  8d4d08               lea ecx, [ebp + 8]
// 00405425  8bf0                 mov esi, eax
// 00405427  e834f6ffff           call 0x404a60
// 0040542c  8bc6                 mov eax, esi
// 0040542e  8d65e8               lea esp, [ebp - 0x18]
// 00405431  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00405434  64890d00000000       mov dword ptr fs:[0], ecx
// 0040543b  5f                   pop edi
// 0040543c  5e                   pop esi
// 0040543d  8be5                 mov esp, ebp
// 0040543f  5d                   pop ebp
// 00405440  c20400               ret 4
// copied from an identical function in another client (function ?AddString@CParseBuffer@CRegParser@ATL@@QAEHPB_W@Z)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-9.0-dll-rtm roc_atl_rtm_unwind_3caebe54ee562fd5.cpp