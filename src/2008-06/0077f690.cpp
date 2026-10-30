// from server: 100% by auto
// roc 2008-06 0077f690  unit: CXTPTabPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0077f690
//
// 0077f690  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 0077f696  8b11                 mov edx, dword ptr [ecx]
// 0077f698  53                   push ebx
// 0077f699  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0077f69d  56                   push esi
// 0077f69e  8b742414             mov esi, dword ptr [esp + 0x14]
// 0077f6a2  57                   push edi
// 0077f6a3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0077f6a7  57                   push edi
// 0077f6a8  83ec10               sub esp, 0x10
// 0077f6ab  8bc4                 mov eax, esp
// 0077f6ad  8930                 mov dword ptr [eax], esi
// 0077f6af  8b742430             mov esi, dword ptr [esp + 0x30]
// 0077f6b3  897004               mov dword ptr [eax + 4], esi
// 0077f6b6  8b742434             mov esi, dword ptr [esp + 0x34]
// 0077f6ba  897008               mov dword ptr [eax + 8], esi
// 0077f6bd  8b742438             mov esi, dword ptr [esp + 0x38]
// 0077f6c1  89700c               mov dword ptr [eax + 0xc], esi
// 0077f6c4  8b4208               mov eax, dword ptr [edx + 8]
// 0077f6c7  53                   push ebx
// 0077f6c8  ffd0                 call eax
// 0077f6ca  8b17                 mov edx, dword ptr [edi]
// 0077f6cc  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077f6cf  8bcf                 mov ecx, edi
// 0077f6d1  ffd0                 call eax
// 0077f6d3  83f802               cmp eax, 2
// 0077f6d6  740d                 je 0x77f6e5
// 0077f6d8  8b17                 mov edx, dword ptr [edi]
// 0077f6da  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077f6dd  8bcf                 mov ecx, edi
// 0077f6df  ffd0                 call eax
// 0077f6e1  85c0                 test eax, eax
// 0077f6e3  7505                 jne 0x77f6ea
// 0077f6e5  ff4b08               dec dword ptr [ebx + 8]
// 0077f6e8  eb03                 jmp 0x77f6ed
// 0077f6ea  ff4b0c               dec dword ptr [ebx + 0xc]
// 0077f6ed  8b7770               mov esi, dword ptr [edi + 0x70]
// 0077f6f0  83ee01               sub esi, 1
// 0077f6f3  7820                 js 0x77f715
// 0077f6f5  85f6                 test esi, esi
// 0077f6f7  7c0d                 jl 0x77f706
// 0077f6f9  3b7770               cmp esi, dword ptr [edi + 0x70]
// 0077f6fc  7d08                 jge 0x77f706
// 0077f6fe  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 0077f701  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 0077f704  eb02                 jmp 0x77f708
// 0077f706  33c9                 xor ecx, ecx
// 0077f708  8b11                 mov edx, dword ptr [ecx]
// 0077f70a  8b4210               mov eax, dword ptr [edx + 0x10]
// 0077f70d  53                   push ebx
// 0077f70e  ffd0                 call eax
// 0077f710  83ee01               sub esi, 1
// 0077f713  79e0                 jns 0x77f6f5
// 0077f715  5f                   pop edi
// 0077f716  5e                   pop esi
// 0077f717  8bc3                 mov eax, ebx
// 0077f719  5b                   pop ebx
// 0077f71a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionNavigateButtons@CXTPTabPaintManager@@QAE?AVCRect@@PAVCXTPTabManager@@V2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
