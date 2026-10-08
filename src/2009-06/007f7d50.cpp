// roc 2009-06 007f7d50  unit: CXTPTabPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f7d50
//
// 007f7d50  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 007f7d56  8b11                 mov edx, dword ptr [ecx]
// 007f7d58  53                   push ebx
// 007f7d59  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007f7d5d  56                   push esi
// 007f7d5e  8b742414             mov esi, dword ptr [esp + 0x14]
// 007f7d62  57                   push edi
// 007f7d63  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007f7d67  57                   push edi
// 007f7d68  83ec10               sub esp, 0x10
// 007f7d6b  8bc4                 mov eax, esp
// 007f7d6d  8930                 mov dword ptr [eax], esi
// 007f7d6f  8b742430             mov esi, dword ptr [esp + 0x30]
// 007f7d73  897004               mov dword ptr [eax + 4], esi
// 007f7d76  8b742434             mov esi, dword ptr [esp + 0x34]
// 007f7d7a  897008               mov dword ptr [eax + 8], esi
// 007f7d7d  8b742438             mov esi, dword ptr [esp + 0x38]
// 007f7d81  89700c               mov dword ptr [eax + 0xc], esi
// 007f7d84  8b4208               mov eax, dword ptr [edx + 8]
// 007f7d87  53                   push ebx
// 007f7d88  ffd0                 call eax
// 007f7d8a  8b17                 mov edx, dword ptr [edi]
// 007f7d8c  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f7d8f  8bcf                 mov ecx, edi
// 007f7d91  ffd0                 call eax
// 007f7d93  83f802               cmp eax, 2
// 007f7d96  740d                 je 0x7f7da5
// 007f7d98  8b17                 mov edx, dword ptr [edi]
// 007f7d9a  8b4248               mov eax, dword ptr [edx + 0x48]
// 007f7d9d  8bcf                 mov ecx, edi
// 007f7d9f  ffd0                 call eax
// 007f7da1  85c0                 test eax, eax
// 007f7da3  7505                 jne 0x7f7daa
// 007f7da5  ff4b08               dec dword ptr [ebx + 8]
// 007f7da8  eb03                 jmp 0x7f7dad
// 007f7daa  ff4b0c               dec dword ptr [ebx + 0xc]
// 007f7dad  8b7770               mov esi, dword ptr [edi + 0x70]
// 007f7db0  83ee01               sub esi, 1
// 007f7db3  7820                 js 0x7f7dd5
// 007f7db5  85f6                 test esi, esi
// 007f7db7  7c0d                 jl 0x7f7dc6
// 007f7db9  3b7770               cmp esi, dword ptr [edi + 0x70]
// 007f7dbc  7d08                 jge 0x7f7dc6
// 007f7dbe  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 007f7dc1  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 007f7dc4  eb02                 jmp 0x7f7dc8
// 007f7dc6  33c9                 xor ecx, ecx
// 007f7dc8  8b11                 mov edx, dword ptr [ecx]
// 007f7dca  8b4210               mov eax, dword ptr [edx + 0x10]
// 007f7dcd  53                   push ebx
// 007f7dce  ffd0                 call eax
// 007f7dd0  83ee01               sub esi, 1
// 007f7dd3  79e0                 jns 0x7f7db5
// 007f7dd5  5f                   pop edi
// 007f7dd6  5e                   pop esi
// 007f7dd7  8bc3                 mov eax, ebx
// 007f7dd9  5b                   pop ebx
// 007f7dda  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionNavigateButtons@CXTPTabPaintManager@@QAE?AVCRect@@PAVCXTPTabManager@@V2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
