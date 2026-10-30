// roc 2011-06 00822270  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822270
//
// 00822270  6aff                 push -1
// 00822272  68c830a000           push 0xa030c8
// 00822277  64a100000000         mov eax, dword ptr fs:[0]
// 0082227d  50                   push eax
// 0082227e  51                   push ecx
// 0082227f  53                   push ebx
// 00822280  56                   push esi
// 00822281  57                   push edi
// 00822282  a12058c900           mov eax, dword ptr [0xc95820]
// 00822287  33c4                 xor eax, esp
// 00822289  50                   push eax
// 0082228a  8d442414             lea eax, [esp + 0x14]
// 0082228e  64a300000000         mov dword ptr fs:[0], eax
// 00822294  8bf1                 mov esi, ecx
// 00822296  8d4658               lea eax, [esi + 0x58]
// 00822299  50                   push eax
// 0082229a  8d4c2414             lea ecx, [esp + 0x14]
// 0082229e  e80dfb0200           call 0x851db0
// 008222a3  8b5e38               mov ebx, dword ptr [esi + 0x38]
// 008222a6  33c0                 xor eax, eax
// 008222a8  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 008222b0  85db                 test ebx, ebx
// 008222b2  7e25                 jle 0x8222d9
// 008222b4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008222b8  8d4e30               lea ecx, [esi + 0x30]
// 008222bb  eb03                 jmp 0x8222c0
// 008222bd  8d4900               lea ecx, [ecx]
// 008222c0  85c0                 test eax, eax
// 008222c2  7c67                 jl 0x82232b
// 008222c4  3b4108               cmp eax, dword ptr [ecx + 8]
// 008222c7  7d62                 jge 0x82232b
// 008222c9  8b5104               mov edx, dword ptr [ecx + 4]
// 008222cc  393c82               cmp dword ptr [edx + eax*4], edi
// 008222cf  8d1482               lea edx, [edx + eax*4]
// 008222d2  742b                 je 0x8222ff
// 008222d4  40                   inc eax
// 008222d5  3bc3                 cmp eax, ebx
// 008222d7  7ce7                 jl 0x8222c0
// 008222d9  8d4c2410             lea ecx, [esp + 0x10]
// 008222dd  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 008222e5  e8e6fa0200           call 0x851dd0
// 008222ea  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008222ee  64890d00000000       mov dword ptr fs:[0], ecx
// 008222f5  59                   pop ecx
// 008222f6  5f                   pop edi
// 008222f7  5e                   pop esi
// 008222f8  5b                   pop ebx
// 008222f9  83c410               add esp, 0x10
// 008222fc  c20400               ret 4
// 008222ff  6a01                 push 1
// 00822301  50                   push eax
// 00822302  e8797f0000           call 0x82a280
// 00822307  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0082230a  8d4e44               lea ecx, [esi + 0x44]
// 0082230d  57                   push edi
// 0082230e  50                   push eax
// 0082230f  e87cc90100           call 0x83ec90
// 00822314  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00822317  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 0082231a  0fafc8               imul ecx, eax
// 0082231d  3b4e2c               cmp ecx, dword ptr [esi + 0x2c]
// 00822320  75b7                 jne 0x8222d9
// 00822322  8bce                 mov ecx, esi
// 00822324  e867fcffff           call 0x821f90
// 00822329  ebae                 jmp 0x8222d9
// 0082232b  e8da7ffeff           call 0x80a30a
// copied from an identical function in another client (function ?Clear@CXTPImageManagerResource@@QAEXPAUXTP_IMAGERESOURCE_INFO@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp