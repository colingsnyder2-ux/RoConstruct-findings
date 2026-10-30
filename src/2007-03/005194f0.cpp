// roc 2007-03 005194f0  unit: seg_00510000  size: 185 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005194f0
//
// 005194f0  56                   push esi
// 005194f1  8b742408             mov esi, dword ptr [esp + 8]
// 005194f5  57                   push edi
// 005194f6  8bbe90010000         mov edi, dword ptr [esi + 0x190]
// 005194fc  807f1100             cmp byte ptr [edi + 0x11], 0
// 00519500  7408                 je 0x51950a
// 00519502  5f                   pop edi
// 00519503  b802000000           mov eax, 2
// 00519508  5e                   pop esi
// 00519509  c3                   ret 
// 0051950a  8b8694010000         mov eax, dword ptr [esi + 0x194]
// 00519510  8b4804               mov ecx, dword ptr [eax + 4]
// 00519513  53                   push ebx
// 00519514  56                   push esi
// 00519515  ffd1                 call ecx
// 00519517  83c404               add esp, 4
// 0051951a  8bd8                 mov ebx, eax
// 0051951c  83e801               sub eax, 1
// 0051951f  744b                 je 0x51956c
// 00519521  83e801               sub eax, 1
// 00519524  757d                 jne 0x5195a3
// 00519526  807f1400             cmp byte ptr [edi + 0x14], 0
// 0051952a  c6471101             mov byte ptr [edi + 0x11], 1
// 0051952e  7425                 je 0x519555
// 00519530  8b9694010000         mov edx, dword ptr [esi + 0x194]
// 00519536  807a0d00             cmp byte ptr [edx + 0xd], 0
// 0051953a  7467                 je 0x5195a3
// 0051953c  8b06                 mov eax, dword ptr [esi]
// 0051953e  c740143b000000       mov dword ptr [eax + 0x14], 0x3b
// 00519545  8b0e                 mov ecx, dword ptr [esi]
// 00519547  8b11                 mov edx, dword ptr [ecx]
// 00519549  56                   push esi
// 0051954a  ffd2                 call edx
// 0051954c  83c404               add esp, 4
// 0051954f  8bc3                 mov eax, ebx
// 00519551  5b                   pop ebx
// 00519552  5f                   pop edi
// 00519553  5e                   pop esi
// 00519554  c3                   ret 
// 00519555  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00519558  398684000000         cmp dword ptr [esi + 0x84], eax
// 0051955e  7e43                 jle 0x5195a3
// 00519560  898684000000         mov dword ptr [esi + 0x84], eax
// 00519566  8bc3                 mov eax, ebx
// 00519568  5b                   pop ebx
// 00519569  5f                   pop edi
// 0051956a  5e                   pop esi
// 0051956b  c3                   ret 
// 0051956c  807f1400             cmp byte ptr [edi + 0x14], 0
// 00519570  740f                 je 0x519581
// 00519572  e8d9faffff           call 0x519050
// 00519577  8bc3                 mov eax, ebx
// 00519579  5b                   pop ebx
// 0051957a  c6471400             mov byte ptr [edi + 0x14], 0
// 0051957e  5f                   pop edi
// 0051957f  5e                   pop esi
// 00519580  c3                   ret 
// 00519581  807f1000             cmp byte ptr [edi + 0x10], 0
// 00519585  7513                 jne 0x51959a
// 00519587  8b06                 mov eax, dword ptr [esi]
// 00519589  c7401423000000       mov dword ptr [eax + 0x14], 0x23
// 00519590  8b0e                 mov ecx, dword ptr [esi]
// 00519592  8b11                 mov edx, dword ptr [ecx]
// 00519594  56                   push esi
// 00519595  ffd2                 call edx
// 00519597  83c404               add esp, 4
// 0051959a  56                   push esi
// 0051959b  e810ffffff           call 0x5194b0
// 005195a0  83c404               add esp, 4
// 005195a3  8bc3                 mov eax, ebx
// 005195a5  5b                   pop ebx
// 005195a6  5f                   pop edi
// 005195a7  5e                   pop esi
// 005195a8  c3                   ret 
// library jpeg-6b/jdinput.c (function _consume_markers)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
