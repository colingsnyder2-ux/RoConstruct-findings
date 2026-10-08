// roc 2009-06 007e2800  unit: CXTPDockingPaneContext  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007e2800
//
// 007e2800  83ec14               sub esp, 0x14
// 007e2803  53                   push ebx
// 007e2804  55                   push ebp
// 007e2805  56                   push esi
// 007e2806  57                   push edi
// 007e2807  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007e280b  8d442414             lea eax, [esp + 0x14]
// 007e280f  8bf1                 mov esi, ecx
// 007e2811  57                   push edi
// 007e2812  50                   push eax
// 007e2813  89742418             mov dword ptr [esp + 0x18], esi
// 007e2817  e884f1f7ff           call 0x7619a0
// 007e281c  8bc8                 mov ecx, eax
// 007e281e  e8ddecf7ff           call 0x761500
// 007e2823  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 007e2829  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 007e282f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007e2833  2b4f04               sub ecx, dword ptr [edi + 4]
// 007e2836  8b2df8ed8900         mov ebp, dword ptr [0x89edf8]
// 007e283c  8bc1                 mov eax, ecx
// 007e283e  99                   cdq 
// 007e283f  33c2                 xor eax, edx
// 007e2841  2bc2                 sub eax, edx
// 007e2843  3bc6                 cmp eax, esi
// 007e2845  7d06                 jge 0x7e284d
// 007e2847  51                   push ecx
// 007e2848  6a00                 push 0
// 007e284a  57                   push edi
// 007e284b  ffd5                 call ebp
// 007e284d  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 007e2850  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007e2854  8bc3                 mov eax, ebx
// 007e2856  2bc1                 sub eax, ecx
// 007e2858  99                   cdq 
// 007e2859  33c2                 xor eax, edx
// 007e285b  2bc2                 sub eax, edx
// 007e285d  3bc6                 cmp eax, esi
// 007e285f  7d08                 jge 0x7e2869
// 007e2861  2bcb                 sub ecx, ebx
// 007e2863  51                   push ecx
// 007e2864  6a00                 push 0
// 007e2866  57                   push edi
// 007e2867  ffd5                 call ebp
// 007e2869  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007e286d  2b4f08               sub ecx, dword ptr [edi + 8]
// 007e2870  8bc1                 mov eax, ecx
// 007e2872  99                   cdq 
// 007e2873  33c2                 xor eax, edx
// 007e2875  2bc2                 sub eax, edx
// 007e2877  3bc6                 cmp eax, esi
// 007e2879  7d06                 jge 0x7e2881
// 007e287b  6a00                 push 0
// 007e287d  51                   push ecx
// 007e287e  57                   push edi
// 007e287f  ffd5                 call ebp
// 007e2881  8b1f                 mov ebx, dword ptr [edi]
// 007e2883  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007e2887  8bc3                 mov eax, ebx
// 007e2889  2bc1                 sub eax, ecx
// 007e288b  99                   cdq 
// 007e288c  33c2                 xor eax, edx
// 007e288e  2bc2                 sub eax, edx
// 007e2890  3bc6                 cmp eax, esi
// 007e2892  7d08                 jge 0x7e289c
// 007e2894  6a00                 push 0
// 007e2896  2bcb                 sub ecx, ebx
// 007e2898  51                   push ecx
// 007e2899  57                   push edi
// 007e289a  ffd5                 call ebp
// 007e289c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007e28a0  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 007e28a6  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 007e28ac  e82b960600           call 0x84bedc
// 007e28b1  a900000021           test eax, 0x21000000
// 007e28b6  7515                 jne 0x7e28cd
// 007e28b8  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 007e28be  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 007e28c4  51                   push ecx
// 007e28c5  57                   push edi
// 007e28c6  8bcd                 mov ecx, ebp
// 007e28c8  e8c3fdffff           call 0x7e2690
// 007e28cd  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 007e28d3  e828b0f7ff           call 0x75d900
// 007e28d8  8b5804               mov ebx, dword ptr [eax + 4]
// 007e28db  85db                 test ebx, ebx
// 007e28dd  7448                 je 0x7e2927
// 007e28df  90                   nop 
// 007e28e0  8bc3                 mov eax, ebx
// 007e28e2  8b4008               mov eax, dword ptr [eax + 8]
// 007e28e5  83781803             cmp dword ptr [eax + 0x18], 3
// 007e28e9  8b1b                 mov ebx, dword ptr [ebx]
// 007e28eb  7536                 jne 0x7e2923
// 007e28ed  8db008ffffff         lea esi, [eax - 0xf8]
// 007e28f3  85f6                 test esi, esi
// 007e28f5  742c                 je 0x7e2923
// 007e28f7  8b4620               mov eax, dword ptr [esi + 0x20]
// 007e28fa  85c0                 test eax, eax
// 007e28fc  7425                 je 0x7e2923
// 007e28fe  50                   push eax
// 007e28ff  ff15c8ed8900         call dword ptr [0x89edc8]
// 007e2905  85c0                 test eax, eax
// 007e2907  741a                 je 0x7e2923
// 007e2909  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 007e290f  8b11                 mov edx, dword ptr [ecx]
// 007e2911  8b4218               mov eax, dword ptr [edx + 0x18]
// 007e2914  ffd0                 call eax
// 007e2916  3bc6                 cmp eax, esi
// 007e2918  7409                 je 0x7e2923
// 007e291a  56                   push esi
// 007e291b  57                   push edi
// 007e291c  8bcd                 mov ecx, ebp
// 007e291e  e86dfdffff           call 0x7e2690
// 007e2923  85db                 test ebx, ebx
// 007e2925  75b9                 jne 0x7e28e0
// 007e2927  5f                   pop edi
// 007e2928  5e                   pop esi
// 007e2929  5d                   pop ebp
// 007e292a  5b                   pop ebx
// 007e292b  83c414               add esp, 0x14
// 007e292e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
