// roc 2008-06 006f2740  unit: CXTPControls  size: 376 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f2740
//
// 006f2740  51                   push ecx
// 006f2741  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f2745  53                   push ebx
// 006f2746  55                   push ebp
// 006f2747  56                   push esi
// 006f2748  8b742418             mov esi, dword ptr [esp + 0x18]
// 006f274c  8bd1                 mov edx, ecx
// 006f274e  57                   push edi
// 006f274f  89542410             mov dword ptr [esp + 0x10], edx
// 006f2753  a840                 test al, 0x40
// 006f2755  0f843b010000         je 0x6f2896
// 006f275b  83e010               and eax, 0x10
// 006f275e  33db                 xor ebx, ebx
// 006f2760  33c9                 xor ecx, ecx
// 006f2762  33ff                 xor edi, edi
// 006f2764  33ed                 xor ebp, ebp
// 006f2766  394a2c               cmp dword ptr [edx + 0x2c], ecx
// 006f2769  89442420             mov dword ptr [esp + 0x20], eax
// 006f276d  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006f2771  0f8edf000000         jle 0x6f2856
// 006f2777  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006f277b  83c330               add ebx, 0x30
// 006f277e  8bff                 mov edi, edi
// 006f2780  837bf800             cmp dword ptr [ebx - 8], 0
// 006f2784  0f84b3000000         je 0x6f283d
// 006f278a  833b00               cmp dword ptr [ebx], 0
// 006f278d  0f85aa000000         jne 0x6f283d
// 006f2793  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006f2797  8b542424             mov edx, dword ptr [esp + 0x24]
// 006f279b  51                   push ecx
// 006f279c  8d43d0               lea eax, [ebx - 0x30]
// 006f279f  52                   push edx
// 006f27a0  50                   push eax
// 006f27a1  ff15682d8000         call dword ptr [0x802d68]
// 006f27a7  837c242000           cmp dword ptr [esp + 0x20], 0
// 006f27ac  740f                 je 0x6f27bd
// 006f27ae  8b06                 mov eax, dword ptr [esi]
// 006f27b0  6a00                 push 0
// 006f27b2  50                   push eax
// 006f27b3  8d43d0               lea eax, [ebx - 0x30]
// 006f27b6  50                   push eax
// 006f27b7  ff15682d8000         call dword ptr [0x802d68]
// 006f27bd  837bfc00             cmp dword ptr [ebx - 4], 0
// 006f27c1  7447                 je 0x6f280a
// 006f27c3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f27c7  8b542428             mov edx, dword ptr [esp + 0x28]
// 006f27cb  83ec10               sub esp, 0x10
// 006f27ce  8bc4                 mov eax, esp
// 006f27d0  8908                 mov dword ptr [eax], ecx
// 006f27d2  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006f27d6  895004               mov dword ptr [eax + 4], edx
// 006f27d9  8b542440             mov edx, dword ptr [esp + 0x40]
// 006f27dd  894808               mov dword ptr [eax + 8], ecx
// 006f27e0  8b0e                 mov ecx, dword ptr [esi]
// 006f27e2  89500c               mov dword ptr [eax + 0xc], edx
// 006f27e5  8b4604               mov eax, dword ptr [esi + 4]
// 006f27e8  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f27ec  50                   push eax
// 006f27ed  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f27f1  51                   push ecx
// 006f27f2  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006f27f6  52                   push edx
// 006f27f7  57                   push edi
// 006f27f8  55                   push ebp
// 006f27f9  50                   push eax
// 006f27fa  51                   push ecx
// 006f27fb  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006f27ff  e84cfeffff           call 0x6f2650
// 006f2804  896c241c             mov dword ptr [esp + 0x1c], ebp
// 006f2808  33ff                 xor edi, edi
// 006f280a  837c242000           cmp dword ptr [esp + 0x20], 0
// 006f280f  740a                 je 0x6f281b
// 006f2811  8b43d8               mov eax, dword ptr [ebx - 0x28]
// 006f2814  8b0e                 mov ecx, dword ptr [esi]
// 006f2816  2b43d0               sub eax, dword ptr [ebx - 0x30]
// 006f2819  eb09                 jmp 0x6f2824
// 006f281b  8b43dc               mov eax, dword ptr [ebx - 0x24]
// 006f281e  8b4e04               mov ecx, dword ptr [esi + 4]
// 006f2821  2b43d4               sub eax, dword ptr [ebx - 0x2c]
// 006f2824  3bf8                 cmp edi, eax
// 006f2826  7f15                 jg 0x6f283d
// 006f2828  837c242000           cmp dword ptr [esp + 0x20], 0
// 006f282d  7408                 je 0x6f2837
// 006f282f  8b7bd8               mov edi, dword ptr [ebx - 0x28]
// 006f2832  2b7bd0               sub edi, dword ptr [ebx - 0x30]
// 006f2835  eb06                 jmp 0x6f283d
// 006f2837  8b7bdc               mov edi, dword ptr [ebx - 0x24]
// 006f283a  2b7bd4               sub edi, dword ptr [ebx - 0x2c]
// 006f283d  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f2841  45                   inc ebp
// 006f2842  83c340               add ebx, 0x40
// 006f2845  3b6a2c               cmp ebp, dword ptr [edx + 0x2c]
// 006f2848  0f8c32ffffff         jl 0x6f2780
// 006f284e  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006f2852  85db                 test ebx, ebx
// 006f2854  7502                 jne 0x6f2858
// 006f2856  8bf9                 mov edi, ecx
// 006f2858  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f285c  83ec10               sub esp, 0x10
// 006f285f  8bc4                 mov eax, esp
// 006f2861  8908                 mov dword ptr [eax], ecx
// 006f2863  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 006f2867  894804               mov dword ptr [eax + 4], ecx
// 006f286a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006f286e  894808               mov dword ptr [eax + 8], ecx
// 006f2871  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 006f2875  89480c               mov dword ptr [eax + 0xc], ecx
// 006f2878  8b4604               mov eax, dword ptr [esi + 4]
// 006f287b  8b0e                 mov ecx, dword ptr [esi]
// 006f287d  50                   push eax
// 006f287e  8b442434             mov eax, dword ptr [esp + 0x34]
// 006f2882  51                   push ecx
// 006f2883  8b4a2c               mov ecx, dword ptr [edx + 0x2c]
// 006f2886  50                   push eax
// 006f2887  8b442434             mov eax, dword ptr [esp + 0x34]
// 006f288b  57                   push edi
// 006f288c  51                   push ecx
// 006f288d  53                   push ebx
// 006f288e  50                   push eax
// 006f288f  8bca                 mov ecx, edx
// 006f2891  e8bafdffff           call 0x6f2650
// 006f2896  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f289a  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 006f289e  8d040a               lea eax, [edx + ecx]
// 006f28a1  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006f28a5  8b542430             mov edx, dword ptr [esp + 0x30]
// 006f28a9  0106                 add dword ptr [esi], eax
// 006f28ab  5f                   pop edi
// 006f28ac  03ca                 add ecx, edx
// 006f28ae  014e04               add dword ptr [esi + 4], ecx
// 006f28b1  5e                   pop esi
// 006f28b2  5d                   pop ebp
// 006f28b3  5b                   pop ebx
// 006f28b4  59                   pop ecx
// 006f28b5  c21c00               ret 0x1c
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_AdjustBorders@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@AAVCSize@@KVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
