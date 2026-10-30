// roc 2009-12 00847ff0  unit: CXTPControls  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847ff0
//
// 00847ff0  55                   push ebp
// 00847ff1  56                   push esi
// 00847ff2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00847ff6  8be9                 mov ebp, ecx
// 00847ff8  85f6                 test esi, esi
// 00847ffa  7507                 jne 0x848003
// 00847ffc  5e                   pop esi
// 00847ffd  33c0                 xor eax, eax
// 00847fff  5d                   pop ebp
// 00848000  c21400               ret 0x14
// 00848003  8b442414             mov eax, dword ptr [esp + 0x14]
// 00848007  53                   push ebx
// 00848008  57                   push edi
// 00848009  50                   push eax
// 0084800a  8d8ef0000000         lea ecx, [esi + 0xf0]
// 00848010  ff155cde9800         call dword ptr [0x98de5c]
// 00848016  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0084801a  898eac000000         mov dword ptr [esi + 0xac], ecx
// 00848020  8bcd                 mov ecx, ebp
// 00848022  e8c9d0ffff           call 0x8450f0
// 00848027  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0084802b  8bf8                 mov edi, eax
// 0084802d  53                   push ebx
// 0084802e  8bcf                 mov ecx, edi
// 00848030  e83bc0fcff           call 0x814070
// 00848035  83be5c01000000       cmp dword ptr [esi + 0x15c], 0
// 0084803c  7564                 jne 0x8480a2
// 0084803e  85c0                 test eax, eax
// 00848040  7537                 jne 0x848079
// 00848042  85ff                 test edi, edi
// 00848044  7454                 je 0x84809a
// 00848046  394768               cmp dword ptr [edi + 0x68], eax
// 00848049  744f                 je 0x84809a
// 0084804b  8d4bff               lea ecx, [ebx - 1]
// 0084804e  81f9fdffff0f         cmp ecx, 0xffffffd
// 00848054  7744                 ja 0x84809a
// 00848056  81fb8c230000         cmp ebx, 0x238c
// 0084805c  7c08                 jl 0x848066
// 0084805e  81fb53240000         cmp ebx, 0x2453
// 00848064  7e34                 jle 0x84809a
// 00848066  8d934877ffff         lea edx, [ebx - 0x88b8]
// 0084806c  83fa03               cmp edx, 3
// 0084806f  7629                 jbe 0x84809a
// 00848071  53                   push ebx
// 00848072  8bcf                 mov ecx, edi
// 00848074  e8e7bffcff           call 0x814060
// 00848079  8b16                 mov edx, dword ptr [esi]
// 0084807b  50                   push eax
// 0084807c  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 00848082  8bce                 mov ecx, esi
// 00848084  ffd0                 call eax
// 00848086  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0084808a  51                   push ecx
// 0084808b  56                   push esi
// 0084808c  8bcd                 mov ecx, ebp
// 0084808e  e8cdf1ffff           call 0x847260
// 00848093  5f                   pop edi
// 00848094  5b                   pop ebx
// 00848095  5e                   pop esi
// 00848096  5d                   pop ebp
// 00848097  c21400               ret 0x14
// 0084809a  53                   push ebx
// 0084809b  8bce                 mov ecx, esi
// 0084809d  e84eddfaff           call 0x7f5df0
// 008480a2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008480a6  51                   push ecx
// 008480a7  56                   push esi
// 008480a8  8bcd                 mov ecx, ebp
// 008480aa  e8b1f1ffff           call 0x847260
// 008480af  5f                   pop edi
// 008480b0  5b                   pop ebx
// 008480b1  5e                   pop esi
// 008480b2  5d                   pop ebp
// 008480b3  c21400               ret 0x14
// copied from an identical function in another client (function ?Add@CXTPControls@@QAEPAVCXTPControl@@PAV2@HPBDHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPControls.cpp