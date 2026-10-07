// roc 2012-06 00653c30  unit: seg_00650000  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00653c30
//
// 00653c30  56                   push esi
// 00653c31  8b742408             mov esi, dword ptr [esp + 8]
// 00653c35  57                   push edi
// 00653c36  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 00653c3c  807f1100             cmp byte ptr [edi + 0x11], 0
// 00653c40  7408                 je 0x653c4a
// 00653c42  5f                   pop edi
// 00653c43  b802000000           mov eax, 2
// 00653c48  5e                   pop esi
// 00653c49  c3                   ret 
// 00653c4a  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00653c50  8b4804               mov ecx, dword ptr [eax + 4]
// 00653c53  53                   push ebx
// 00653c54  56                   push esi
// 00653c55  ffd1                 call ecx
// 00653c57  83c404               add esp, 4
// 00653c5a  8bd8                 mov ebx, eax
// 00653c5c  83e801               sub eax, 1
// 00653c5f  7449                 je 0x653caa
// 00653c61  83e801               sub eax, 1
// 00653c64  757b                 jne 0x653ce1
// 00653c66  c6471101             mov byte ptr [edi + 0x11], 1
// 00653c6a  384714               cmp byte ptr [edi + 0x14], al
// 00653c6d  7424                 je 0x653c93
// 00653c6f  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00653c75  38420d               cmp byte ptr [edx + 0xd], al
// 00653c78  7467                 je 0x653ce1
// 00653c7a  8b06                 mov eax, dword ptr [esi]
// 00653c7c  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 00653c83  8b0e                 mov ecx, dword ptr [esi]
// 00653c85  8b11                 mov edx, dword ptr [ecx]
// 00653c87  56                   push esi
// 00653c88  ffd2                 call edx
// 00653c8a  83c404               add esp, 4
// 00653c8d  8bc3                 mov eax, ebx
// 00653c8f  5b                   pop ebx
// 00653c90  5f                   pop edi
// 00653c91  5e                   pop esi
// 00653c92  c3                   ret 
// 00653c93  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00653c96  398684000000         cmp dword ptr [esi + 0x84], eax
// 00653c9c  7e43                 jle 0x653ce1
// 00653c9e  898684000000         mov dword ptr [esi + 0x84], eax
// 00653ca4  8bc3                 mov eax, ebx
// 00653ca6  5b                   pop ebx
// 00653ca7  5f                   pop edi
// 00653ca8  5e                   pop esi
// 00653ca9  c3                   ret 
// 00653caa  807f1400             cmp byte ptr [edi + 0x14], 0
// 00653cae  740f                 je 0x653cbf
// 00653cb0  e8fbfaffff           call 0x6537b0
// 00653cb5  8bc3                 mov eax, ebx
// 00653cb7  5b                   pop ebx
// 00653cb8  c6471400             mov byte ptr [edi + 0x14], 0
// 00653cbc  5f                   pop edi
// 00653cbd  5e                   pop esi
// 00653cbe  c3                   ret 
// 00653cbf  807f1000             cmp byte ptr [edi + 0x10], 0
// 00653cc3  7513                 jne 0x653cd8
// 00653cc5  8b06                 mov eax, dword ptr [esi]
// 00653cc7  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 00653cce  8b0e                 mov ecx, dword ptr [esi]
// 00653cd0  8b11                 mov edx, dword ptr [ecx]
// 00653cd2  56                   push esi
// 00653cd3  ffd2                 call edx
// 00653cd5  83c404               add esp, 4
// 00653cd8  56                   push esi
// 00653cd9  e812ffffff           call 0x653bf0
// 00653cde  83c404               add esp, 4
// 00653ce1  8bc3                 mov eax, ebx
// 00653ce3  5b                   pop ebx
// 00653ce4  5f                   pop edi
// 00653ce5  5e                   pop esi
// 00653ce6  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
