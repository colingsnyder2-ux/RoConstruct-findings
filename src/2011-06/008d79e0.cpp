// roc 2011-06 008d79e0  unit: CXTPTabPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d79e0
//
// 008d79e0  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008d79e6  8b11                 mov edx, dword ptr [ecx]
// 008d79e8  53                   push ebx
// 008d79e9  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008d79ed  56                   push esi
// 008d79ee  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d79f2  57                   push edi
// 008d79f3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d79f7  57                   push edi
// 008d79f8  83ec10               sub esp, 0x10
// 008d79fb  8bc4                 mov eax, esp
// 008d79fd  8930                 mov dword ptr [eax], esi
// 008d79ff  8b742430             mov esi, dword ptr [esp + 0x30]
// 008d7a03  897004               mov dword ptr [eax + 4], esi
// 008d7a06  8b742434             mov esi, dword ptr [esp + 0x34]
// 008d7a0a  897008               mov dword ptr [eax + 8], esi
// 008d7a0d  8b742438             mov esi, dword ptr [esp + 0x38]
// 008d7a11  89700c               mov dword ptr [eax + 0xc], esi
// 008d7a14  8b4208               mov eax, dword ptr [edx + 8]
// 008d7a17  53                   push ebx
// 008d7a18  ffd0                 call eax
// 008d7a1a  8b17                 mov edx, dword ptr [edi]
// 008d7a1c  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7a1f  8bcf                 mov ecx, edi
// 008d7a21  ffd0                 call eax
// 008d7a23  83f802               cmp eax, 2
// 008d7a26  740d                 je 0x8d7a35
// 008d7a28  8b17                 mov edx, dword ptr [edi]
// 008d7a2a  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d7a2d  8bcf                 mov ecx, edi
// 008d7a2f  ffd0                 call eax
// 008d7a31  85c0                 test eax, eax
// 008d7a33  7505                 jne 0x8d7a3a
// 008d7a35  ff4b08               dec dword ptr [ebx + 8]
// 008d7a38  eb03                 jmp 0x8d7a3d
// 008d7a3a  ff4b0c               dec dword ptr [ebx + 0xc]
// 008d7a3d  8b7770               mov esi, dword ptr [edi + 0x70]
// 008d7a40  83ee01               sub esi, 1
// 008d7a43  7820                 js 0x8d7a65
// 008d7a45  85f6                 test esi, esi
// 008d7a47  7c0d                 jl 0x8d7a56
// 008d7a49  3b7770               cmp esi, dword ptr [edi + 0x70]
// 008d7a4c  7d08                 jge 0x8d7a56
// 008d7a4e  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008d7a51  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008d7a54  eb02                 jmp 0x8d7a58
// 008d7a56  33c9                 xor ecx, ecx
// 008d7a58  8b11                 mov edx, dword ptr [ecx]
// 008d7a5a  8b4210               mov eax, dword ptr [edx + 0x10]
// 008d7a5d  53                   push ebx
// 008d7a5e  ffd0                 call eax
// 008d7a60  83ee01               sub esi, 1
// 008d7a63  79e0                 jns 0x8d7a45
// 008d7a65  5f                   pop edi
// 008d7a66  5e                   pop esi
// 008d7a67  8bc3                 mov eax, ebx
// 008d7a69  5b                   pop ebx
// 008d7a6a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionNavigateButtons@CXTPTabPaintManager@@QAE?AVCRect@@PAVCXTPTabManager@@V2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
