// roc 2007-03 0051a7a0  unit: seg_00510000  size: 344 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051a7a0
//
// 0051a7a0  56                   push esi
// 0051a7a1  8b742408             mov esi, dword ptr [esp + 8]
// 0051a7a5  57                   push edi
// 0051a7a6  8bbe80010000         mov edi, dword ptr [esi + 0x180]
// 0051a7ac  807f0800             cmp byte ptr [edi + 8], 0
// 0051a7b0  7433                 je 0x51a7e5
// 0051a7b2  c6470800             mov byte ptr [edi + 8], 0
// 0051a7b6  8b86a8010000         mov eax, dword ptr [esi + 0x1a8]
// 0051a7bc  8b08                 mov ecx, dword ptr [eax]
// 0051a7be  6a00                 push 0
// 0051a7c0  56                   push esi
// 0051a7c1  ffd1                 call ecx
// 0051a7c3  8b968c010000         mov edx, dword ptr [esi + 0x18c]
// 0051a7c9  8b02                 mov eax, dword ptr [edx]
// 0051a7cb  6a02                 push 2
// 0051a7cd  56                   push esi
// 0051a7ce  ffd0                 call eax
// 0051a7d0  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0051a7d6  8b11                 mov edx, dword ptr [ecx]
// 0051a7d8  6a02                 push 2
// 0051a7da  56                   push esi
// 0051a7db  ffd2                 call edx
// 0051a7dd  83c418               add esp, 0x18
// 0051a7e0  e9cc000000           jmp 0x51a8b1
// 0051a7e5  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0051a7e9  7445                 je 0x51a830
// 0051a7eb  837e7400             cmp dword ptr [esi + 0x74], 0
// 0051a7ef  753f                 jne 0x51a830
// 0051a7f1  807e5000             cmp byte ptr [esi + 0x50], 0
// 0051a7f5  7415                 je 0x51a80c
// 0051a7f7  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 0051a7fb  740f                 je 0x51a80c
// 0051a7fd  8b4718               mov eax, dword ptr [edi + 0x18]
// 0051a800  8986a8010000         mov dword ptr [esi + 0x1a8], eax
// 0051a806  c6470801             mov byte ptr [edi + 8], 1
// 0051a80a  eb24                 jmp 0x51a830
// 0051a80c  807e5800             cmp byte ptr [esi + 0x58], 0
// 0051a810  740b                 je 0x51a81d
// 0051a812  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0051a815  898ea8010000         mov dword ptr [esi + 0x1a8], ecx
// 0051a81b  eb13                 jmp 0x51a830
// 0051a81d  8b16                 mov edx, dword ptr [esi]
// 0051a81f  c742142e000000       mov dword ptr [edx + 0x14], 0x2e
// 0051a826  8b06                 mov eax, dword ptr [esi]
// 0051a828  8b08                 mov ecx, dword ptr [eax]
// 0051a82a  56                   push esi
// 0051a82b  ffd1                 call ecx
// 0051a82d  83c404               add esp, 4
// 0051a830  8b969c010000         mov edx, dword ptr [esi + 0x19c]
// 0051a836  8b02                 mov eax, dword ptr [edx]
// 0051a838  56                   push esi
// 0051a839  ffd0                 call eax
// 0051a83b  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 0051a841  8b5108               mov edx, dword ptr [ecx + 8]
// 0051a844  56                   push esi
// 0051a845  ffd2                 call edx
// 0051a847  83c408               add esp, 8
// 0051a84a  807e4100             cmp byte ptr [esi + 0x41], 0
// 0051a84e  7561                 jne 0x51a8b1
// 0051a850  807f1000             cmp byte ptr [edi + 0x10], 0
// 0051a854  750e                 jne 0x51a864
// 0051a856  8b86a4010000         mov eax, dword ptr [esi + 0x1a4]
// 0051a85c  8b08                 mov ecx, dword ptr [eax]
// 0051a85e  56                   push esi
// 0051a85f  ffd1                 call ecx
// 0051a861  83c404               add esp, 4
// 0051a864  8b96a0010000         mov edx, dword ptr [esi + 0x1a0]
// 0051a86a  8b02                 mov eax, dword ptr [edx]
// 0051a86c  56                   push esi
// 0051a86d  ffd0                 call eax
// 0051a86f  83c404               add esp, 4
// 0051a872  807e4a00             cmp byte ptr [esi + 0x4a], 0
// 0051a876  7413                 je 0x51a88b
// 0051a878  0fb65708             movzx edx, byte ptr [edi + 8]
// 0051a87c  8b8ea8010000         mov ecx, dword ptr [esi + 0x1a8]
// 0051a882  8b01                 mov eax, dword ptr [ecx]
// 0051a884  52                   push edx
// 0051a885  56                   push esi
// 0051a886  ffd0                 call eax
// 0051a888  83c408               add esp, 8
// 0051a88b  8a5708               mov dl, byte ptr [edi + 8]
// 0051a88e  8b8e8c010000         mov ecx, dword ptr [esi + 0x18c]
// 0051a894  8b01                 mov eax, dword ptr [ecx]
// 0051a896  f6da                 neg dl
// 0051a898  1bd2                 sbb edx, edx
// 0051a89a  83e203               and edx, 3
// 0051a89d  52                   push edx
// 0051a89e  56                   push esi
// 0051a89f  ffd0                 call eax
// 0051a8a1  8b8e84010000         mov ecx, dword ptr [esi + 0x184]
// 0051a8a7  8b11                 mov edx, dword ptr [ecx]
// 0051a8a9  6a00                 push 0
// 0051a8ab  56                   push esi
// 0051a8ac  ffd2                 call edx
// 0051a8ae  83c410               add esp, 0x10
// 0051a8b1  8b4608               mov eax, dword ptr [esi + 8]
// 0051a8b4  85c0                 test eax, eax
// 0051a8b6  743d                 je 0x51a8f5
// 0051a8b8  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0051a8bb  33d2                 xor edx, edx
// 0051a8bd  89480c               mov dword ptr [eax + 0xc], ecx
// 0051a8c0  385708               cmp byte ptr [edi + 8], dl
// 0051a8c3  8b4608               mov eax, dword ptr [esi + 8]
// 0051a8c6  0f95c2               setne dl
// 0051a8c9  83c201               add edx, 1
// 0051a8cc  03570c               add edx, dword ptr [edi + 0xc]
// 0051a8cf  895010               mov dword ptr [eax + 0x10], edx
// 0051a8d2  807e4000             cmp byte ptr [esi + 0x40], 0
// 0051a8d6  741d                 je 0x51a8f5
// 0051a8d8  8b8e90010000         mov ecx, dword ptr [esi + 0x190]
// 0051a8de  80791100             cmp byte ptr [ecx + 0x11], 0
// 0051a8e2  7511                 jne 0x51a8f5
// 0051a8e4  8b4608               mov eax, dword ptr [esi + 8]
// 0051a8e7  33d2                 xor edx, edx
// 0051a8e9  38565a               cmp byte ptr [esi + 0x5a], dl
// 0051a8ec  0f95c2               setne dl
// 0051a8ef  83c201               add edx, 1
// 0051a8f2  015010               add dword ptr [eax + 0x10], edx
// 0051a8f5  5f                   pop edi
// 0051a8f6  5e                   pop esi
// 0051a8f7  c3                   ret 
// library jpeg-6b/jdmaster.c (function _prepare_for_output_pass)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmaster.c
