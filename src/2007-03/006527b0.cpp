// roc 2007-03 006527b0  unit: seg_00650000  size: 167 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006527b0
//
// 006527b0  51                   push ecx
// 006527b1  53                   push ebx
// 006527b2  55                   push ebp
// 006527b3  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006527b7  56                   push esi
// 006527b8  57                   push edi
// 006527b9  8bf9                 mov edi, ecx
// 006527bb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006527bf  8b07                 mov eax, dword ptr [edi]
// 006527c1  8b5004               mov edx, dword ptr [eax + 4]
// 006527c4  f7dd                 neg ebp
// 006527c6  1bed                 sbb ebp, ebp
// 006527c8  6a04                 push 4
// 006527ca  51                   push ecx
// 006527cb  33db                 xor ebx, ebx
// 006527cd  8bcf                 mov ecx, edi
// 006527cf  83e502               and ebp, 2
// 006527d2  895c2418             mov dword ptr [esp + 0x18], ebx
// 006527d6  ffd2                 call edx
// 006527d8  8bf0                 mov esi, eax
// 006527da  85f6                 test esi, esi
// 006527dc  746f                 je 0x65284d
// 006527de  8bff                 mov edi, edi
// 006527e0  6a23                 push 0x23
// 006527e2  56                   push esi
// 006527e3  8bcf                 mov ecx, edi
// 006527e5  e8e6f7ffff           call 0x651fd0
// 006527ea  8bd8                 mov ebx, eax
// 006527ec  83e002               and eax, 2
// 006527ef  3bc5                 cmp eax, ebp
// 006527f1  740b                 je 0x6527fe
// 006527f3  6a02                 push 2
// 006527f5  55                   push ebp
// 006527f6  56                   push esi
// 006527f7  8bcf                 mov ecx, edi
// 006527f9  e802f5ffff           call 0x651d00
// 006527fe  8b442420             mov eax, dword ptr [esp + 0x20]
// 00652802  8bcb                 mov ecx, ebx
// 00652804  83e101               and ecx, 1
// 00652807  094c2410             or dword ptr [esp + 0x10], ecx
// 0065280b  85c0                 test eax, eax
// 0065280d  7417                 je 0x652826
// 0065280f  f6c320               test bl, 0x20
// 00652812  7412                 je 0x652826
// 00652814  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00652818  50                   push eax
// 00652819  52                   push edx
// 0065281a  56                   push esi
// 0065281b  8bcf                 mov ecx, edi
// 0065281d  e88effffff           call 0x6527b0
// 00652822  09442410             or dword ptr [esp + 0x10], eax
// 00652826  8b4734               mov eax, dword ptr [edi + 0x34]
// 00652829  8b4020               mov eax, dword ptr [eax + 0x20]
// 0065282c  56                   push esi
// 0065282d  6a01                 push 1
// 0065282f  680a110000           push 0x110a
// 00652834  50                   push eax
// 00652835  ff1550ee7700         call dword ptr [0x77ee50]
// 0065283b  8bf0                 mov esi, eax
// 0065283d  85f6                 test esi, esi
// 0065283f  759f                 jne 0x6527e0
// 00652841  8b442410             mov eax, dword ptr [esp + 0x10]
// 00652845  5f                   pop edi
// 00652846  5e                   pop esi
// 00652847  5d                   pop ebp
// 00652848  5b                   pop ebx
// 00652849  59                   pop ecx
// 0065284a  c20c00               ret 0xc
// 0065284d  5f                   pop edi
// 0065284e  5e                   pop esi
// 0065284f  5d                   pop ebp
// 00652850  8bc3                 mov eax, ebx
// 00652852  5b                   pop ebx
// 00652853  59                   pop ecx
// 00652854  c20c00               ret 0xc
// copied from an identical function in another client (function ?SelectChildren@CXTTreeBase@@QAEHPAU_TREEITEM@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp