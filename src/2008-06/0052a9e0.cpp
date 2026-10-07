// roc 2008-06 0052a9e0  unit: seg_00520000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a9e0
//
// 0052a9e0  56                   push esi
// 0052a9e1  8b742408             mov esi, dword ptr [esp + 8]
// 0052a9e5  57                   push edi
// 0052a9e6  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 0052a9ec  807f1100             cmp byte ptr [edi + 0x11], 0
// 0052a9f0  7408                 je 0x52a9fa
// 0052a9f2  5f                   pop edi
// 0052a9f3  b802000000           mov eax, 2
// 0052a9f8  5e                   pop esi
// 0052a9f9  c3                   ret 
// 0052a9fa  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 0052aa00  8b4804               mov ecx, dword ptr [eax + 4]
// 0052aa03  53                   push ebx
// 0052aa04  56                   push esi
// 0052aa05  ffd1                 call ecx
// 0052aa07  83c404               add esp, 4
// 0052aa0a  8bd8                 mov ebx, eax
// 0052aa0c  83e801               sub eax, 1
// 0052aa0f  7449                 je 0x52aa5a
// 0052aa11  83e801               sub eax, 1
// 0052aa14  757b                 jne 0x52aa91
// 0052aa16  c6471101             mov byte ptr [edi + 0x11], 1
// 0052aa1a  384714               cmp byte ptr [edi + 0x14], al
// 0052aa1d  7424                 je 0x52aa43
// 0052aa1f  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 0052aa25  38420d               cmp byte ptr [edx + 0xd], al
// 0052aa28  7467                 je 0x52aa91
// 0052aa2a  8b06                 mov eax, dword ptr [esi]
// 0052aa2c  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 0052aa33  8b0e                 mov ecx, dword ptr [esi]
// 0052aa35  8b11                 mov edx, dword ptr [ecx]
// 0052aa37  56                   push esi
// 0052aa38  ffd2                 call edx
// 0052aa3a  83c404               add esp, 4
// 0052aa3d  8bc3                 mov eax, ebx
// 0052aa3f  5b                   pop ebx
// 0052aa40  5f                   pop edi
// 0052aa41  5e                   pop esi
// 0052aa42  c3                   ret 
// 0052aa43  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0052aa46  398684000000         cmp dword ptr [esi + 0x84], eax
// 0052aa4c  7e43                 jle 0x52aa91
// 0052aa4e  898684000000         mov dword ptr [esi + 0x84], eax
// 0052aa54  8bc3                 mov eax, ebx
// 0052aa56  5b                   pop ebx
// 0052aa57  5f                   pop edi
// 0052aa58  5e                   pop esi
// 0052aa59  c3                   ret 
// 0052aa5a  807f1400             cmp byte ptr [edi + 0x14], 0
// 0052aa5e  740f                 je 0x52aa6f
// 0052aa60  e8fbfaffff           call 0x52a560
// 0052aa65  8bc3                 mov eax, ebx
// 0052aa67  5b                   pop ebx
// 0052aa68  c6471400             mov byte ptr [edi + 0x14], 0
// 0052aa6c  5f                   pop edi
// 0052aa6d  5e                   pop esi
// 0052aa6e  c3                   ret 
// 0052aa6f  807f1000             cmp byte ptr [edi + 0x10], 0
// 0052aa73  7513                 jne 0x52aa88
// 0052aa75  8b06                 mov eax, dword ptr [esi]
// 0052aa77  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 0052aa7e  8b0e                 mov ecx, dword ptr [esi]
// 0052aa80  8b11                 mov edx, dword ptr [ecx]
// 0052aa82  56                   push esi
// 0052aa83  ffd2                 call edx
// 0052aa85  83c404               add esp, 4
// 0052aa88  56                   push esi
// 0052aa89  e812ffffff           call 0x52a9a0
// 0052aa8e  83c404               add esp, 4
// 0052aa91  8bc3                 mov eax, ebx
// 0052aa93  5b                   pop ebx
// 0052aa94  5f                   pop edi
// 0052aa95  5e                   pop esi
// 0052aa96  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
