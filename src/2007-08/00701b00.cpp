// from server: 100% by auto
// roc 2007-08 00701b00  unit: CXTPTabPaintManager  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00701b00
//
// 00701b00  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 00701b06  8b11                 mov edx, dword ptr [ecx]
// 00701b08  53                   push ebx
// 00701b09  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00701b0d  56                   push esi
// 00701b0e  8b742414             mov esi, dword ptr [esp + 0x14]
// 00701b12  57                   push edi
// 00701b13  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00701b17  57                   push edi
// 00701b18  83ec10               sub esp, 0x10
// 00701b1b  8bc4                 mov eax, esp
// 00701b1d  8930                 mov dword ptr [eax], esi
// 00701b1f  8b742430             mov esi, dword ptr [esp + 0x30]
// 00701b23  897004               mov dword ptr [eax + 4], esi
// 00701b26  8b742434             mov esi, dword ptr [esp + 0x34]
// 00701b2a  897008               mov dword ptr [eax + 8], esi
// 00701b2d  8b742438             mov esi, dword ptr [esp + 0x38]
// 00701b31  89700c               mov dword ptr [eax + 0xc], esi
// 00701b34  8b4208               mov eax, dword ptr [edx + 8]
// 00701b37  53                   push ebx
// 00701b38  ffd0                 call eax
// 00701b3a  8b17                 mov edx, dword ptr [edi]
// 00701b3c  8b4248               mov eax, dword ptr [edx + 0x48]
// 00701b3f  8bcf                 mov ecx, edi
// 00701b41  ffd0                 call eax
// 00701b43  83f802               cmp eax, 2
// 00701b46  740d                 je 0x701b55
// 00701b48  8b17                 mov edx, dword ptr [edi]
// 00701b4a  8b4248               mov eax, dword ptr [edx + 0x48]
// 00701b4d  8bcf                 mov ecx, edi
// 00701b4f  ffd0                 call eax
// 00701b51  85c0                 test eax, eax
// 00701b53  7506                 jne 0x701b5b
// 00701b55  834308ff             add dword ptr [ebx + 8], -1
// 00701b59  eb04                 jmp 0x701b5f
// 00701b5b  83430cff             add dword ptr [ebx + 0xc], -1
// 00701b5f  8b7770               mov esi, dword ptr [edi + 0x70]
// 00701b62  83ee01               sub esi, 1
// 00701b65  7820                 js 0x701b87
// 00701b67  85f6                 test esi, esi
// 00701b69  7c0d                 jl 0x701b78
// 00701b6b  3b7770               cmp esi, dword ptr [edi + 0x70]
// 00701b6e  7d08                 jge 0x701b78
// 00701b70  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00701b73  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00701b76  eb02                 jmp 0x701b7a
// 00701b78  33c9                 xor ecx, ecx
// 00701b7a  8b11                 mov edx, dword ptr [ecx]
// 00701b7c  8b4210               mov eax, dword ptr [edx + 0x10]
// 00701b7f  53                   push ebx
// 00701b80  ffd0                 call eax
// 00701b82  83ee01               sub esi, 1
// 00701b85  79e0                 jns 0x701b67
// 00701b87  5f                   pop edi
// 00701b88  5e                   pop esi
// 00701b89  8bc3                 mov eax, ebx
// 00701b8b  5b                   pop ebx
// 00701b8c  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionNavigateButtons@CXTPTabPaintManager@@QAE?AVCRect@@PAVCXTPTabManager@@V2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManager.cpp
