// roc 2007-03 0051e750  unit: seg_00510000  size: 241 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051e750
//
// 0051e750  51                   push ecx
// 0051e751  53                   push ebx
// 0051e752  56                   push esi
// 0051e753  8b742410             mov esi, dword ptr [esp + 0x10]
// 0051e757  8b4644               mov eax, dword ptr [esi + 0x44]
// 0051e75a  33db                 xor ebx, ebx
// 0051e75c  57                   push edi
// 0051e75d  33ff                 xor edi, edi
// 0051e75f  395e3c               cmp dword ptr [esi + 0x3c], ebx
// 0051e762  895c240c             mov dword ptr [esp + 0xc], ebx
// 0051e766  7e24                 jle 0x51e78c
// 0051e768  55                   push ebp
// 0051e769  8d6810               lea ebp, [eax + 0x10]
// 0051e76c  8d642400             lea esp, [esp]
// 0051e770  8b4500               mov eax, dword ptr [ebp]
// 0051e773  8bce                 mov ecx, esi
// 0051e775  e856faffff           call 0x51e1d0
// 0051e77a  83c701               add edi, 1
// 0051e77d  03d8                 add ebx, eax
// 0051e77f  83c554               add ebp, 0x54
// 0051e782  3b7e3c               cmp edi, dword ptr [esi + 0x3c]
// 0051e785  7ce9                 jl 0x51e770
// 0051e787  895c2410             mov dword ptr [esp + 0x10], ebx
// 0051e78b  5d                   pop ebp
// 0051e78c  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0051e793  7558                 jne 0x51e7ed
// 0051e795  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0051e79c  754f                 jne 0x51e7ed
// 0051e79e  837e3808             cmp dword ptr [esi + 0x38], 8
// 0051e7a2  7549                 jne 0x51e7ed
// 0051e7a4  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 0051e7a7  85c9                 test ecx, ecx
// 0051e7a9  8b4644               mov eax, dword ptr [esi + 0x44]
// 0051e7ac  b301                 mov bl, 1
// 0051e7ae  7e18                 jle 0x51e7c8
// 0051e7b0  83c018               add eax, 0x18
// 0051e7b3  8378fc01             cmp dword ptr [eax - 4], 1
// 0051e7b7  7f05                 jg 0x51e7be
// 0051e7b9  833801               cmp dword ptr [eax], 1
// 0051e7bc  7e02                 jle 0x51e7c0
// 0051e7be  32db                 xor bl, bl
// 0051e7c0  83c054               add eax, 0x54
// 0051e7c3  83e901               sub ecx, 1
// 0051e7c6  75eb                 jne 0x51e7b3
// 0051e7c8  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0051e7cd  7420                 je 0x51e7ef
// 0051e7cf  84db                 test bl, bl
// 0051e7d1  741c                 je 0x51e7ef
// 0051e7d3  8b06                 mov eax, dword ptr [esi]
// 0051e7d5  c740144b000000       mov dword ptr [eax + 0x14], 0x4b
// 0051e7dc  8b0e                 mov ecx, dword ptr [esi]
// 0051e7de  8b5104               mov edx, dword ptr [ecx + 4]
// 0051e7e1  6a00                 push 0
// 0051e7e3  56                   push esi
// 0051e7e4  32db                 xor bl, bl
// 0051e7e6  ffd2                 call edx
// 0051e7e8  83c408               add esp, 8
// 0051e7eb  eb02                 jmp 0x51e7ef
// 0051e7ed  32db                 xor bl, bl
// 0051e7ef  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0051e7f6  8bce                 mov ecx, esi
// 0051e7f8  5f                   pop edi
// 0051e7f9  740f                 je 0x51e80a
// 0051e7fb  5e                   pop esi
// 0051e7fc  b8c9000000           mov eax, 0xc9
// 0051e801  5b                   pop ebx
// 0051e802  83c404               add esp, 4
// 0051e805  e9e6fbffff           jmp 0x51e3f0
// 0051e80a  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0051e811  5e                   pop esi
// 0051e812  740e                 je 0x51e822
// 0051e814  b8c2000000           mov eax, 0xc2
// 0051e819  5b                   pop ebx
// 0051e81a  83c404               add esp, 4
// 0051e81d  e9cefbffff           jmp 0x51e3f0
// 0051e822  84db                 test bl, bl
// 0051e824  5b                   pop ebx
// 0051e825  740d                 je 0x51e834
// 0051e827  b8c0000000           mov eax, 0xc0
// 0051e82c  83c404               add esp, 4
// 0051e82f  e9bcfbffff           jmp 0x51e3f0
// 0051e834  b8c1000000           mov eax, 0xc1
// 0051e839  83c404               add esp, 4
// 0051e83c  e9affbffff           jmp 0x51e3f0
// library jpeg-6b/jcmarker.c (function _write_frame_header)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
