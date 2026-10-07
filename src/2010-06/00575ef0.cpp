// roc 2010-06 00575ef0  unit: seg_00570000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00575ef0
//
// 00575ef0  56                   push esi
// 00575ef1  8b742408             mov esi, dword ptr [esp + 8]
// 00575ef5  57                   push edi
// 00575ef6  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 00575efc  807f1100             cmp byte ptr [edi + 0x11], 0
// 00575f00  7408                 je 0x575f0a
// 00575f02  5f                   pop edi
// 00575f03  b802000000           mov eax, 2
// 00575f08  5e                   pop esi
// 00575f09  c3                   ret 
// 00575f0a  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00575f10  8b4804               mov ecx, dword ptr [eax + 4]
// 00575f13  53                   push ebx
// 00575f14  56                   push esi
// 00575f15  ffd1                 call ecx
// 00575f17  83c404               add esp, 4
// 00575f1a  8bd8                 mov ebx, eax
// 00575f1c  83e801               sub eax, 1
// 00575f1f  7449                 je 0x575f6a
// 00575f21  83e801               sub eax, 1
// 00575f24  757b                 jne 0x575fa1
// 00575f26  c6471101             mov byte ptr [edi + 0x11], 1
// 00575f2a  384714               cmp byte ptr [edi + 0x14], al
// 00575f2d  7424                 je 0x575f53
// 00575f2f  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00575f35  38420d               cmp byte ptr [edx + 0xd], al
// 00575f38  7467                 je 0x575fa1
// 00575f3a  8b06                 mov eax, dword ptr [esi]
// 00575f3c  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 00575f43  8b0e                 mov ecx, dword ptr [esi]
// 00575f45  8b11                 mov edx, dword ptr [ecx]
// 00575f47  56                   push esi
// 00575f48  ffd2                 call edx
// 00575f4a  83c404               add esp, 4
// 00575f4d  8bc3                 mov eax, ebx
// 00575f4f  5b                   pop ebx
// 00575f50  5f                   pop edi
// 00575f51  5e                   pop esi
// 00575f52  c3                   ret 
// 00575f53  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00575f56  398684000000         cmp dword ptr [esi + 0x84], eax
// 00575f5c  7e43                 jle 0x575fa1
// 00575f5e  898684000000         mov dword ptr [esi + 0x84], eax
// 00575f64  8bc3                 mov eax, ebx
// 00575f66  5b                   pop ebx
// 00575f67  5f                   pop edi
// 00575f68  5e                   pop esi
// 00575f69  c3                   ret 
// 00575f6a  807f1400             cmp byte ptr [edi + 0x14], 0
// 00575f6e  740f                 je 0x575f7f
// 00575f70  e8fbfaffff           call 0x575a70
// 00575f75  8bc3                 mov eax, ebx
// 00575f77  5b                   pop ebx
// 00575f78  c6471400             mov byte ptr [edi + 0x14], 0
// 00575f7c  5f                   pop edi
// 00575f7d  5e                   pop esi
// 00575f7e  c3                   ret 
// 00575f7f  807f1000             cmp byte ptr [edi + 0x10], 0
// 00575f83  7513                 jne 0x575f98
// 00575f85  8b06                 mov eax, dword ptr [esi]
// 00575f87  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 00575f8e  8b0e                 mov ecx, dword ptr [esi]
// 00575f90  8b11                 mov edx, dword ptr [ecx]
// 00575f92  56                   push esi
// 00575f93  ffd2                 call edx
// 00575f95  83c404               add esp, 4
// 00575f98  56                   push esi
// 00575f99  e812ffffff           call 0x575eb0
// 00575f9e  83c404               add esp, 4
// 00575fa1  8bc3                 mov eax, ebx
// 00575fa3  5b                   pop ebx
// 00575fa4  5f                   pop edi
// 00575fa5  5e                   pop esi
// 00575fa6  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
