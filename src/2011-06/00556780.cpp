// roc 2011-06 00556780  unit: G3D::LineSegment  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00556780
//
// 00556780  53                   push ebx
// 00556781  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00556785  55                   push ebp
// 00556786  8b6b18               mov ebp, dword ptr [ebx + 0x18]
// 00556789  56                   push esi
// 0055678a  8b7500               mov esi, dword ptr [ebp]
// 0055678d  57                   push edi
// 0055678e  8b7d04               mov edi, dword ptr [ebp + 4]
// 00556791  85ff                 test edi, edi
// 00556793  7517                 jne 0x5567ac
// 00556795  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00556798  53                   push ebx
// 00556799  ffd0                 call eax
// 0055679b  83c404               add esp, 4
// 0055679e  84c0                 test al, al
// 005567a0  0f8497000000         je 0x55683d
// 005567a6  8b7500               mov esi, dword ptr [ebp]
// 005567a9  8b7d04               mov edi, dword ptr [ebp + 4]
// 005567ac  0fb606               movzx eax, byte ptr [esi]
// 005567af  4f                   dec edi
// 005567b0  46                   inc esi
// 005567b1  3dff000000           cmp eax, 0xff
// 005567b6  7440                 je 0x5567f8
// 005567b8  eb06                 jmp 0x5567c0
// 005567ba  8d9b00000000         lea ebx, [ebx]
// 005567c0  8b8394010000         mov eax, dword ptr [ebx + 0x194]
// 005567c6  ff4014               inc dword ptr [eax + 0x14]
// 005567c9  897500               mov dword ptr [ebp], esi
// 005567cc  897d04               mov dword ptr [ebp + 4], edi
// 005567cf  85ff                 test edi, edi
// 005567d1  7513                 jne 0x5567e6
// 005567d3  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005567d6  53                   push ebx
// 005567d7  ffd1                 call ecx
// 005567d9  83c404               add esp, 4
// 005567dc  84c0                 test al, al
// 005567de  745d                 je 0x55683d
// 005567e0  8b7500               mov esi, dword ptr [ebp]
// 005567e3  8b7d04               mov edi, dword ptr [ebp + 4]
// 005567e6  0fb606               movzx eax, byte ptr [esi]
// 005567e9  4f                   dec edi
// 005567ea  46                   inc esi
// 005567eb  3dff000000           cmp eax, 0xff
// 005567f0  75ce                 jne 0x5567c0
// 005567f2  eb04                 jmp 0x5567f8
// 005567f4  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 005567f8  85ff                 test edi, edi
// 005567fa  7513                 jne 0x55680f
// 005567fc  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005567ff  53                   push ebx
// 00556800  ffd2                 call edx
// 00556802  83c404               add esp, 4
// 00556805  84c0                 test al, al
// 00556807  7434                 je 0x55683d
// 00556809  8b7500               mov esi, dword ptr [ebp]
// 0055680c  8b7d04               mov edi, dword ptr [ebp + 4]
// 0055680f  0fb61e               movzx ebx, byte ptr [esi]
// 00556812  4f                   dec edi
// 00556813  46                   inc esi
// 00556814  81fbff000000         cmp ebx, 0xff
// 0055681a  74d8                 je 0x5567f4
// 0055681c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00556820  85db                 test ebx, ebx
// 00556822  7520                 jne 0x556844
// 00556824  8b8094010000         mov eax, dword ptr [eax + 0x194]
// 0055682a  83401402             add dword ptr [eax + 0x14], 2
// 0055682e  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00556832  897500               mov dword ptr [ebp], esi
// 00556835  897d04               mov dword ptr [ebp + 4], edi
// 00556838  e954ffffff           jmp 0x556791
// 0055683d  5f                   pop edi
// 0055683e  5e                   pop esi
// 0055683f  5d                   pop ebp
// 00556840  32c0                 xor al, al
// 00556842  5b                   pop ebx
// 00556843  c3                   ret 
// 00556844  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0055684a  83791400             cmp dword ptr [ecx + 0x14], 0
// 0055684e  743a                 je 0x55688a
// 00556850  8b10                 mov edx, dword ptr [eax]
// 00556852  c7421474000000       mov dword ptr [edx + 0x14], 0x74
// 00556859  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 0055685f  8b10                 mov edx, dword ptr [eax]
// 00556861  8b4914               mov ecx, dword ptr [ecx + 0x14]
// 00556864  894a18               mov dword ptr [edx + 0x18], ecx
// 00556867  8b10                 mov edx, dword ptr [eax]
// 00556869  895a1c               mov dword ptr [edx + 0x1c], ebx
// 0055686c  8b08                 mov ecx, dword ptr [eax]
// 0055686e  8b5104               mov edx, dword ptr [ecx + 4]
// 00556871  6aff                 push -1
// 00556873  50                   push eax
// 00556874  ffd2                 call edx
// 00556876  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0055687a  8b8894010000         mov ecx, dword ptr [eax + 0x194]
// 00556880  83c408               add esp, 8
// 00556883  c7411400000000       mov dword ptr [ecx + 0x14], 0
// 0055688a  89987c010000         mov dword ptr [eax + 0x17c], ebx
// 00556890  897d04               mov dword ptr [ebp + 4], edi
// 00556893  5f                   pop edi
// 00556894  897500               mov dword ptr [ebp], esi
// 00556897  5e                   pop esi
// 00556898  5d                   pop ebp
// 00556899  b001                 mov al, 1
// 0055689b  5b                   pop ebx
// 0055689c  c3                   ret 
// library jpeg-6b/jdmarker.c (function _next_marker)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmarker.c
