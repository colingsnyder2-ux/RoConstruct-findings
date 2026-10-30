// roc 2009-12 008d28f0  unit: CXTPTabPaintManager  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d28f0
//
// 008d28f0  8b89e0000000         mov ecx, dword ptr [ecx + 0xe0]
// 008d28f6  8b11                 mov edx, dword ptr [ecx]
// 008d28f8  53                   push ebx
// 008d28f9  8b5c2408             mov ebx, dword ptr [esp + 8]
// 008d28fd  56                   push esi
// 008d28fe  8b742414             mov esi, dword ptr [esp + 0x14]
// 008d2902  57                   push edi
// 008d2903  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 008d2907  57                   push edi
// 008d2908  83ec10               sub esp, 0x10
// 008d290b  8bc4                 mov eax, esp
// 008d290d  8930                 mov dword ptr [eax], esi
// 008d290f  8b742430             mov esi, dword ptr [esp + 0x30]
// 008d2913  897004               mov dword ptr [eax + 4], esi
// 008d2916  8b742434             mov esi, dword ptr [esp + 0x34]
// 008d291a  897008               mov dword ptr [eax + 8], esi
// 008d291d  8b742438             mov esi, dword ptr [esp + 0x38]
// 008d2921  89700c               mov dword ptr [eax + 0xc], esi
// 008d2924  8b4208               mov eax, dword ptr [edx + 8]
// 008d2927  53                   push ebx
// 008d2928  ffd0                 call eax
// 008d292a  8b17                 mov edx, dword ptr [edi]
// 008d292c  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d292f  8bcf                 mov ecx, edi
// 008d2931  ffd0                 call eax
// 008d2933  83f802               cmp eax, 2
// 008d2936  740d                 je 0x8d2945
// 008d2938  8b17                 mov edx, dword ptr [edi]
// 008d293a  8b4248               mov eax, dword ptr [edx + 0x48]
// 008d293d  8bcf                 mov ecx, edi
// 008d293f  ffd0                 call eax
// 008d2941  85c0                 test eax, eax
// 008d2943  7505                 jne 0x8d294a
// 008d2945  ff4b08               dec dword ptr [ebx + 8]
// 008d2948  eb03                 jmp 0x8d294d
// 008d294a  ff4b0c               dec dword ptr [ebx + 0xc]
// 008d294d  8b7770               mov esi, dword ptr [edi + 0x70]
// 008d2950  83ee01               sub esi, 1
// 008d2953  7820                 js 0x8d2975
// 008d2955  85f6                 test esi, esi
// 008d2957  7c0d                 jl 0x8d2966
// 008d2959  3b7770               cmp esi, dword ptr [edi + 0x70]
// 008d295c  7d08                 jge 0x8d2966
// 008d295e  8b4f6c               mov ecx, dword ptr [edi + 0x6c]
// 008d2961  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008d2964  eb02                 jmp 0x8d2968
// 008d2966  33c9                 xor ecx, ecx
// 008d2968  8b11                 mov edx, dword ptr [ecx]
// 008d296a  8b4210               mov eax, dword ptr [edx + 0x10]
// 008d296d  53                   push ebx
// 008d296e  ffd0                 call eax
// 008d2970  83ee01               sub esi, 1
// 008d2973  79e0                 jns 0x8d2955
// 008d2975  5f                   pop edi
// 008d2976  5e                   pop esi
// 008d2977  8bc3                 mov eax, ebx
// 008d2979  5b                   pop ebx
// 008d297a  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManager.cpp (function ?RepositionNavigateButtons@CXTPTabPaintManager@@QAE?AVCRect@@PAVCXTPTabManager@@V2@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManager.cpp
