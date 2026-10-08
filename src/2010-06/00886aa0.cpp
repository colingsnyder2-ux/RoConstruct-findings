// roc 2010-06 00886aa0  unit: CXTPTabPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00886aa0
//
// 00886aa0  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 00886aa6  8b11                 mov edx, dword ptr [ecx]
// 00886aa8  53                   push ebx
// 00886aa9  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00886aad  56                   push esi
// 00886aae  8b742414             mov esi, dword ptr [esp + 0x14]
// 00886ab2  57                   push edi
// 00886ab3  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00886ab7  57                   push edi
// 00886ab8  83ec10               sub esp, 0x10
// 00886abb  8bc4                 mov eax, esp
// 00886abd  8930                 mov dword ptr [eax], esi
// 00886abf  8b742430             mov esi, dword ptr [esp + 0x30]
// 00886ac3  897004               mov dword ptr [eax + 4], esi
// 00886ac6  8b742434             mov esi, dword ptr [esp + 0x34]
// 00886aca  897008               mov dword ptr [eax + 8], esi
// 00886acd  8b742438             mov esi, dword ptr [esp + 0x38]
// 00886ad1  89700c               mov dword ptr [eax + 0xc], esi
// 00886ad4  8b4208               mov eax, dword ptr [edx + 8]
// 00886ad7  53                   push ebx
// 00886ad8  ffd0                 call eax
// 00886ada  8b17                 mov edx, dword ptr [edi]
// 00886adc  8b4248               mov eax, dword ptr [edx + 0x48]
// 00886adf  8bcf                 mov ecx, edi
// 00886ae1  ffd0                 call eax
// 00886ae3  83f802               cmp eax, 2
// 00886ae6  740d                 je 0x886af5
// 00886ae8  8b17                 mov edx, dword ptr [edi]
// 00886aea  8b4248               mov eax, dword ptr [edx + 0x48]
// 00886aed  8bcf                 mov ecx, edi
// 00886aef  ffd0                 call eax
// 00886af1  85c0                 test eax, eax
// 00886af3  7505                 jne 0x886afa
// 00886af5  ff4b08               dec dword ptr [ebx + 8]
// 00886af8  eb03                 jmp 0x886afd
// 00886afa  ff4b0c               dec dword ptr [ebx + 0xc]
// 00886afd  8b7770               mov esi, dword ptr [edi + 0x70]
// 00886b00  83ee01               sub esi, 1
// 00886b03  7820                 js 0x886b25
// 00886b05  85f6                 test esi, esi
// 00886b07  7c0d                 jl 0x886b16
// 00886b09  3b7770               cmp esi, dword ptr [edi + 0x70]
// 00886b0c  7d08                 jge 0x886b16
// 00886b0e  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 00886b11  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 00886b14  eb02                 jmp 0x886b18
// 00886b16  33c9                 xor ecx, ecx
// 00886b18  8b11                 mov edx, dword ptr [ecx]
// 00886b1a  8b4210               mov eax, dword ptr [edx + 0x10]
// 00886b1d  53                   push ebx
// 00886b1e  ffd0                 call eax
// 00886b20  83ee01               sub esi, 1
// 00886b23  79e0                 jns 0x886b05
// 00886b25  5f                   pop edi
// 00886b26  5e                   pop esi
// 00886b27  8bc3                 mov eax, ebx
// 00886b29  5b                   pop ebx
// 00886b2a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionNavigateButtons@CXTPTabPaintManager@@QAE?AVCRect@@PAVCXTPTabManager@@V2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
