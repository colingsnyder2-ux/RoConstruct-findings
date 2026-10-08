// roc 2012-06 00a4fcf0  unit: CXTPTabPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4fcf0
//
// 00a4fcf0  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 00a4fcf6  8b11                 mov edx, dword ptr [ecx]
// 00a4fcf8  53                   push ebx
// 00a4fcf9  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00a4fcfd  56                   push esi
// 00a4fcfe  8b742414             mov esi, dword ptr [esp + 0x14]
// 00a4fd02  57                   push edi
// 00a4fd03  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a4fd07  57                   push edi
// 00a4fd08  83ec10               sub esp, 0x10
// 00a4fd0b  8bc4                 mov eax, esp
// 00a4fd0d  8930                 mov dword ptr [eax], esi
// 00a4fd0f  8b742430             mov esi, dword ptr [esp + 0x30]
// 00a4fd13  897004               mov dword ptr [eax + 4], esi
// 00a4fd16  8b742434             mov esi, dword ptr [esp + 0x34]
// 00a4fd1a  897008               mov dword ptr [eax + 8], esi
// 00a4fd1d  8b742438             mov esi, dword ptr [esp + 0x38]
// 00a4fd21  89700c               mov dword ptr [eax + 0xc], esi
// 00a4fd24  8b4208               mov eax, dword ptr [edx + 8]
// 00a4fd27  53                   push ebx
// 00a4fd28  ffd0                 call eax
// 00a4fd2a  8b17                 mov edx, dword ptr [edi]
// 00a4fd2c  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a4fd2f  8bcf                 mov ecx, edi
// 00a4fd31  ffd0                 call eax
// 00a4fd33  83f802               cmp eax, 2
// 00a4fd36  740d                 je 0xa4fd45
// 00a4fd38  8b17                 mov edx, dword ptr [edi]
// 00a4fd3a  8b4248               mov eax, dword ptr [edx + 0x48]
// 00a4fd3d  8bcf                 mov ecx, edi
// 00a4fd3f  ffd0                 call eax
// 00a4fd41  85c0                 test eax, eax
// 00a4fd43  7505                 jne 0xa4fd4a
// 00a4fd45  ff4b08               dec dword ptr [ebx + 8]
// 00a4fd48  eb03                 jmp 0xa4fd4d
// 00a4fd4a  ff4b0c               dec dword ptr [ebx + 0xc]
// 00a4fd4d  8b7770               mov esi, dword ptr [edi + 0x70]
// 00a4fd50  83ee01               sub esi, 1
// 00a4fd53  7820                 js 0xa4fd75
// 00a4fd55  85f6                 test esi, esi
// 00a4fd57  7c0d                 jl 0xa4fd66
// 00a4fd59  3b7770               cmp esi, dword ptr [edi + 0x70]
// 00a4fd5c  7d08                 jge 0xa4fd66
// 00a4fd5e  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00a4fd61  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00a4fd64  eb02                 jmp 0xa4fd68
// 00a4fd66  33c9                 xor ecx, ecx
// 00a4fd68  8b11                 mov edx, dword ptr [ecx]
// 00a4fd6a  8b4210               mov eax, dword ptr [edx + 0x10]
// 00a4fd6d  53                   push ebx
// 00a4fd6e  ffd0                 call eax
// 00a4fd70  83ee01               sub esi, 1
// 00a4fd73  79e0                 jns 0xa4fd55
// 00a4fd75  5f                   pop edi
// 00a4fd76  5e                   pop esi
// 00a4fd77  8bc3                 mov eax, ebx
// 00a4fd79  5b                   pop ebx
// 00a4fd7a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionNavigateButtons@CXTPTabPaintManager@@QAE?AVCRect@@PAVCXTPTabManager@@V2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
