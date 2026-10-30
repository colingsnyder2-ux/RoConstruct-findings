// roc 2009-12 00894550  unit: CXTPMenuBar  size: 531 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00894550
//
// 00894550  53                   push ebx
// 00894551  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00894555  55                   push ebp
// 00894556  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0089455a  56                   push esi
// 0089455b  57                   push edi
// 0089455c  8bf9                 mov edi, ecx
// 0089455e  81fb12010000         cmp ebx, 0x112
// 00894564  0f87dc000000         ja 0x894646
// 0089456a  7433                 je 0x89459f
// 0089456c  83fb05               cmp ebx, 5
// 0089456f  7409                 je 0x89457a
// 00894571  83fb47               cmp ebx, 0x47
// 00894574  0f85ca010000         jne 0x894744
// 0089457a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089457e  3b8758010000         cmp eax, dword ptr [edi + 0x158]
// 00894584  0f85ba010000         jne 0x894744
// 0089458a  8b4fcc               mov ecx, dword ptr [edi - 0x34]
// 0089458d  6a00                 push 0
// 0089458f  68bf2f0000           push 0x2fbf
// 00894594  6813010000           push 0x113
// 00894599  51                   push ecx
// 0089459a  e99f010000           jmp 0x89473e
// 0089459f  8d77ac               lea esi, [edi - 0x54]
// 008945a2  8bce                 mov ecx, esi
// 008945a4  e887e9f7ff           call 0x812f30
// 008945a9  85c0                 test eax, eax
// 008945ab  0f8493010000         je 0x894744
// 008945b1  68b0647f00           push 0x7f64b0
// 008945b6  b9d0bab900           mov ecx, 0xb9bad0
// 008945bb  e87c1e0900           call 0x92643c
// 008945c0  85c0                 test eax, eax
// 008945c2  7505                 jne 0x8945c9
// 008945c4  e843f5f5ff           call 0x7f3b0c
// 008945c9  83780400             cmp dword ptr [eax + 4], 0
// 008945cd  0f8f71010000         jg 0x894744
// 008945d3  6a10                 push 0x10
// 008945d5  ff1530cc9800         call dword ptr [0x98cc30]
// 008945db  6685c0               test ax, ax
// 008945de  0f8c60010000         jl 0x894744
// 008945e4  8bce                 mov ecx, esi
// 008945e6  e815fff6ff           call 0x804500
// 008945eb  85c0                 test eax, eax
// 008945ed  0f8551010000         jne 0x894744
// 008945f3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008945f7  8b02                 mov eax, dword ptr [edx]
// 008945f9  25f0ff0000           and eax, 0xfff0
// 008945fe  3d00f10000           cmp eax, 0xf100
// 00894603  0f853b010000         jne 0x894744
// 00894609  837d0000             cmp dword ptr [ebp], 0
// 0089460d  0f8531010000         jne 0x894744
// 00894613  8b16                 mov edx, dword ptr [esi]
// 00894615  8b82f8010000         mov eax, dword ptr [edx + 0x1f8]
// 0089461b  6a12                 push 0x12
// 0089461d  8bce                 mov ecx, esi
// 0089461f  ffd0                 call eax
// 00894621  85c0                 test eax, eax
// 00894623  7515                 jne 0x89463a
// 00894625  8bce                 mov ecx, esi
// 00894627  e8a4fef6ff           call 0x8044d0
// 0089462c  85c0                 test eax, eax
// 0089462e  740a                 je 0x89463a
// 00894630  6a00                 push 0
// 00894632  56                   push esi
// 00894633  8bc8                 mov ecx, eax
// 00894635  e8d625f8ff           call 0x816c10
// 0089463a  5f                   pop edi
// 0089463b  5e                   pop esi
// 0089463c  5d                   pop ebp
// 0089463d  b801000000           mov eax, 1
// 00894642  5b                   pop ebx
// 00894643  c21400               ret 0x14
// 00894646  81fb20020000         cmp ebx, 0x220
// 0089464c  0f82f2000000         jb 0x894744
// 00894652  81fb22020000         cmp ebx, 0x222
// 00894658  0f86d0000000         jbe 0x89472e
// 0089465e  81fb30020000         cmp ebx, 0x230
// 00894664  0f85da000000         jne 0x894744
// 0089466a  8b57ac               mov edx, dword ptr [edi - 0x54]
// 0089466d  8b8268010000         mov eax, dword ptr [edx + 0x168]
// 00894673  8d77ac               lea esi, [edi - 0x54]
// 00894676  8bce                 mov ecx, esi
// 00894678  ffd0                 call eax
// 0089467a  8bce                 mov ecx, esi
// 0089467c  85c0                 test eax, eax
// 0089467e  0f8486000000         je 0x89470a
// 00894684  e877fef6ff           call 0x804500
// 00894689  85c0                 test eax, eax
// 0089468b  7428                 je 0x8946b5
// 0089468d  8bce                 mov ecx, esi
// 0089468f  e8fc29f7ff           call 0x807090
// 00894694  8b10                 mov edx, dword ptr [eax]
// 00894696  8bc8                 mov ecx, eax
// 00894698  8b4278               mov eax, dword ptr [edx + 0x78]
// 0089469b  6a00                 push 0
// 0089469d  ffd0                 call eax
// 0089469f  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008946a3  5f                   pop edi
// 008946a4  5e                   pop esi
// 008946a5  5d                   pop ebp
// 008946a6  c70100000000         mov dword ptr [ecx], 0
// 008946ac  b801000000           mov eax, 1
// 008946b1  5b                   pop ebx
// 008946b2  c21400               ret 0x14
// 008946b5  f7879800000000040000 test dword ptr [edi + 0x98], 0x400
// 008946bf  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008946c3  751a                 jne 0x8946df
// 008946c5  8b03                 mov eax, dword ptr [ebx]
// 008946c7  85c0                 test eax, eax
// 008946c9  750c                 jne 0x8946d7
// 008946cb  8bbf5c010000         mov edi, dword ptr [edi + 0x15c]
// 008946d1  85ff                 test edi, edi
// 008946d3  740a                 je 0x8946df
// 008946d5  8bc7                 mov eax, edi
// 008946d7  50                   push eax
// 008946d8  8bce                 mov ecx, esi
// 008946da  e811feffff           call 0x8944f0
// 008946df  8bce                 mov ecx, esi
// 008946e1  e8aa29f7ff           call 0x807090
// 008946e6  8b10                 mov edx, dword ptr [eax]
// 008946e8  8bc8                 mov ecx, eax
// 008946ea  8b4278               mov eax, dword ptr [edx + 0x78]
// 008946ed  6a00                 push 0
// 008946ef  ffd0                 call eax
// 008946f1  8bce                 mov ecx, esi
// 008946f3  e848edffff           call 0x893440
// 008946f8  5f                   pop edi
// 008946f9  5e                   pop esi
// 008946fa  5d                   pop ebp
// 008946fb  c70300000000         mov dword ptr [ebx], 0
// 00894701  b801000000           mov eax, 1
// 00894706  5b                   pop ebx
// 00894707  c21400               ret 0x14
// 0089470a  e88129f7ff           call 0x807090
// 0089470f  8b10                 mov edx, dword ptr [eax]
// 00894711  8bc8                 mov ecx, eax
// 00894713  8b4274               mov eax, dword ptr [edx + 0x74]
// 00894716  ffd0                 call eax
// 00894718  85c0                 test eax, eax
// 0089471a  7528                 jne 0x894744
// 0089471c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00894720  5f                   pop edi
// 00894721  5e                   pop esi
// 00894722  5d                   pop ebp
// 00894723  8901                 mov dword ptr [ecx], eax
// 00894725  b801000000           mov eax, 1
// 0089472a  5b                   pop ebx
// 0089472b  c21400               ret 0x14
// 0089472e  8b57cc               mov edx, dword ptr [edi - 0x34]
// 00894731  6a00                 push 0
// 00894733  68bf2f0000           push 0x2fbf
// 00894738  6813010000           push 0x113
// 0089473d  52                   push edx
// 0089473e  ff15b8cb9800         call dword ptr [0x98cbb8]
// 00894744  8b442424             mov eax, dword ptr [esp + 0x24]
// 00894748  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0089474c  8b542414             mov edx, dword ptr [esp + 0x14]
// 00894750  50                   push eax
// 00894751  55                   push ebp
// 00894752  51                   push ecx
// 00894753  53                   push ebx
// 00894754  52                   push edx
// 00894755  8bcf                 mov ecx, edi
// 00894757  e84426f7ff           call 0x806da0
// 0089475c  5f                   pop edi
// 0089475d  5e                   pop esi
// 0089475e  5d                   pop ebp
// 0089475f  5b                   pop ebx
// 00894760  c21400               ret 0x14
// copied from an identical function in another client (function ?OnHookMessage@CXTPMenuBar@@MAEHPAUHWND__@@IAAIAAJ2@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPMenuBar.cpp