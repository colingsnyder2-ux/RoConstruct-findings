// roc 2007-08 004ef860  unit: RBX::Render::VChunk::?$WeakReferenceCountedPointer  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ef860
//
// 004ef860  51                   push ecx
// 004ef861  53                   push ebx
// 004ef862  55                   push ebp
// 004ef863  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 004ef867  56                   push esi
// 004ef868  57                   push edi
// 004ef869  8bf9                 mov edi, ecx
// 004ef86b  8b4f04               mov ecx, dword ptr [edi + 4]
// 004ef86e  3be9                 cmp ebp, ecx
// 004ef870  894c2410             mov dword ptr [esp + 0x10], ecx
// 004ef874  896f04               mov dword ptr [edi + 4], ebp
// 004ef877  7d63                 jge 0x4ef8dc
// 004ef879  8da42400000000       lea esp, [esp]
// 004ef880  8b07                 mov eax, dword ptr [edi]
// 004ef882  8d1ca8               lea ebx, [eax + ebp*4]
// 004ef885  8b03                 mov eax, dword ptr [ebx]
// 004ef887  85c0                 test eax, eax
// 004ef889  744a                 je 0x4ef8d5
// 004ef88b  83c004               add eax, 4
// 004ef88e  50                   push eax
// 004ef88f  ff15e8d27700         call dword ptr [0x77d2e8]
// 004ef895  85c0                 test eax, eax
// 004ef897  7532                 jne 0x4ef8cb
// 004ef899  8b0b                 mov ecx, dword ptr [ebx]
// 004ef89b  8b7108               mov esi, dword ptr [ecx + 8]
// 004ef89e  85f6                 test esi, esi
// 004ef8a0  741b                 je 0x4ef8bd
// 004ef8a2  8b0e                 mov ecx, dword ptr [esi]
// 004ef8a4  8b11                 mov edx, dword ptr [ecx]
// 004ef8a6  8b4204               mov eax, dword ptr [edx + 4]
// 004ef8a9  ffd0                 call eax
// 004ef8ab  8bc6                 mov eax, esi
// 004ef8ad  8b7604               mov esi, dword ptr [esi + 4]
// 004ef8b0  50                   push eax
// 004ef8b1  e8ac031400           call 0x62fc62
// 004ef8b6  83c404               add esp, 4
// 004ef8b9  85f6                 test esi, esi
// 004ef8bb  75e5                 jne 0x4ef8a2
// 004ef8bd  8b0b                 mov ecx, dword ptr [ebx]
// 004ef8bf  85c9                 test ecx, ecx
// 004ef8c1  7408                 je 0x4ef8cb
// 004ef8c3  8b11                 mov edx, dword ptr [ecx]
// 004ef8c5  8b02                 mov eax, dword ptr [edx]
// 004ef8c7  6a01                 push 1
// 004ef8c9  ffd0                 call eax
// 004ef8cb  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004ef8cf  c70300000000         mov dword ptr [ebx], 0
// 004ef8d5  83c501               add ebp, 1
// 004ef8d8  3be9                 cmp ebp, ecx
// 004ef8da  7ca4                 jl 0x4ef880
// 004ef8dc  f60588fa8b0001       test byte ptr [0x8bfa88], 1
// 004ef8e3  7514                 jne 0x4ef8f9
// 004ef8e5  830d88fa8b0001       or dword ptr [0x8bfa88], 1
// 004ef8ec  bb0a000000           mov ebx, 0xa
// 004ef8f1  891d84fa8b00         mov dword ptr [0x8bfa84], ebx
// 004ef8f7  eb06                 jmp 0x4ef8ff
// 004ef8f9  8b1d84fa8b00         mov ebx, dword ptr [0x8bfa84]
// 004ef8ff  8b7704               mov esi, dword ptr [edi + 4]
// 004ef902  8b4f08               mov ecx, dword ptr [edi + 8]
// 004ef905  3bf1                 cmp esi, ecx
// 004ef907  0f8e84000000         jle 0x4ef991
// 004ef90d  85c9                 test ecx, ecx
// 004ef90f  7511                 jne 0x4ef922
// 004ef911  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004ef915  8b542410             mov edx, dword ptr [esp + 0x10]
// 004ef919  894f08               mov dword ptr [edi + 8], ecx
// 004ef91c  52                   push edx
// 004ef91d  e997000000           jmp 0x4ef9b9
// 004ef922  3bf3                 cmp esi, ebx
// 004ef924  7d0d                 jge 0x4ef933
// 004ef926  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ef92a  895f08               mov dword ptr [edi + 8], ebx
// 004ef92d  50                   push eax
// 004ef92e  e986000000           jmp 0x4ef9b9
// 004ef933  d905387b7900         fld dword ptr [0x797b38]
// 004ef939  8bc1                 mov eax, ecx
// 004ef93b  03c0                 add eax, eax
// 004ef93d  d95c241c             fstp dword ptr [esp + 0x1c]
// 004ef941  03c0                 add eax, eax
// 004ef943  3d801a0600           cmp eax, 0x61a80
// 004ef948  7608                 jbe 0x4ef952
// 004ef94a  d905347b7900         fld dword ptr [0x797b34]
// 004ef950  eb0d                 jmp 0x4ef95f
// 004ef952  3d00fa0000           cmp eax, 0xfa00
// 004ef957  760a                 jbe 0x4ef963
// 004ef959  d90588797900         fld dword ptr [0x797988]
// 004ef95f  d95c241c             fstp dword ptr [esp + 0x1c]
// 004ef963  8bd9                 mov ebx, ecx
// 004ef965  895c2418             mov dword ptr [esp + 0x18], ebx
// 004ef969  db442418             fild dword ptr [esp + 0x18]
// 004ef96d  d84c241c             fmul dword ptr [esp + 0x1c]
// 004ef971  e8ea131400           call 0x630d60
// 004ef976  2bc3                 sub eax, ebx
// 004ef978  03c6                 add eax, esi
// 004ef97a  894708               mov dword ptr [edi + 8], eax
// 004ef97d  8b0d84fa8b00         mov ecx, dword ptr [0x8bfa84]
// 004ef983  3bc1                 cmp eax, ecx
// 004ef985  7d03                 jge 0x4ef98a
// 004ef987  894f08               mov dword ptr [edi + 8], ecx
// 004ef98a  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ef98e  50                   push eax
// 004ef98f  eb28                 jmp 0x4ef9b9
// 004ef991  b856555555           mov eax, 0x55555556
// 004ef996  f7e9                 imul ecx
// 004ef998  8bca                 mov ecx, edx
// 004ef99a  c1e91f               shr ecx, 0x1f
// 004ef99d  03ca                 add ecx, edx
// 004ef99f  3bf1                 cmp esi, ecx
// 004ef9a1  7f1d                 jg 0x4ef9c0
// 004ef9a3  807c241c00           cmp byte ptr [esp + 0x1c], 0
// 004ef9a8  7416                 je 0x4ef9c0
// 004ef9aa  3bf3                 cmp esi, ebx
// 004ef9ac  7e12                 jle 0x4ef9c0
// 004ef9ae  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ef9b2  3bf0                 cmp esi, eax
// 004ef9b4  7c02                 jl 0x4ef9b8
// 004ef9b6  8bf0                 mov esi, eax
// 004ef9b8  56                   push esi
// 004ef9b9  8bcf                 mov ecx, edi
// 004ef9bb  e840fbffff           call 0x4ef500
// 004ef9c0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004ef9c4  3b4704               cmp eax, dword ptr [edi + 4]
// 004ef9c7  7d1e                 jge 0x4ef9e7
// 004ef9c9  8da42400000000       lea esp, [esp]
// 004ef9d0  8b17                 mov edx, dword ptr [edi]
// 004ef9d2  8d0c82               lea ecx, [edx + eax*4]
// 004ef9d5  85c9                 test ecx, ecx
// 004ef9d7  7406                 je 0x4ef9df
// 004ef9d9  c70100000000         mov dword ptr [ecx], 0
// 004ef9df  83c001               add eax, 1
// 004ef9e2  3b4704               cmp eax, dword ptr [edi + 4]
// 004ef9e5  7ce9                 jl 0x4ef9d0
// 004ef9e7  5f                   pop edi
// 004ef9e8  5e                   pop esi
// 004ef9e9  5d                   pop ebp
// 004ef9ea  5b                   pop ebx
// 004ef9eb  59                   pop ecx
// 004ef9ec  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\GModule.cpp (function ?resize@?$Array@V?$ReferenceCountedPointer@VGModule@G3D@@@G3D@@@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GModule.cpp
