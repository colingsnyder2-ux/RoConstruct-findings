// from server: 100% by auto
// roc 2008-06 0052a760  unit: seg_00520000  size: 413 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0052a760
//
// 0052a760  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0052a766  83ec08               sub esp, 8
// 0052a769  53                   push ebx
// 0052a76a  bb01000000           mov ebx, 1
// 0052a76f  57                   push edi
// 0052a770  3bc3                 cmp eax, ebx
// 0052a772  7553                 jne 0x52a7c7
// 0052a774  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0052a77a  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0052a77d  898638010000         mov dword ptr [esi + 0x138], eax
// 0052a783  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0052a786  89963c010000         mov dword ptr [esi + 0x13c], edx
// 0052a78c  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0052a78f  8b790c               mov edi, dword ptr [ecx + 0xc]
// 0052a792  894140               mov dword ptr [ecx + 0x40], eax
// 0052a795  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0052a798  33d2                 xor edx, edx
// 0052a79a  f7f7                 div edi
// 0052a79c  895934               mov dword ptr [ecx + 0x34], ebx
// 0052a79f  895938               mov dword ptr [ecx + 0x38], ebx
// 0052a7a2  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0052a7a5  895944               mov dword ptr [ecx + 0x44], ebx
// 0052a7a8  85d2                 test edx, edx
// 0052a7aa  7502                 jne 0x52a7ae
// 0052a7ac  8bd7                 mov edx, edi
// 0052a7ae  895148               mov dword ptr [ecx + 0x48], edx
// 0052a7b1  5f                   pop edi
// 0052a7b2  899e40010000         mov dword ptr [esi + 0x140], ebx
// 0052a7b8  c7864401000000000000 mov dword ptr [esi + 0x144], 0
// 0052a7c2  5b                   pop ebx
// 0052a7c3  83c408               add esp, 8
// 0052a7c6  c3                   ret 
// 0052a7c7  33ff                 xor edi, edi
// 0052a7c9  3bc7                 cmp eax, edi
// 0052a7cb  7e05                 jle 0x52a7d2
// 0052a7cd  83f804               cmp eax, 4
// 0052a7d0  7e27                 jle 0x52a7f9
// 0052a7d2  8b0e                 mov ecx, dword ptr [esi]
// 0052a7d4  c741141a000000       mov dword ptr [ecx + 0x14], 0x1a
// 0052a7db  8b16                 mov edx, dword ptr [esi]
// 0052a7dd  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0052a7e3  894218               mov dword ptr [edx + 0x18], eax
// 0052a7e6  8b0e                 mov ecx, dword ptr [esi]
// 0052a7e8  c7411c04000000       mov dword ptr [ecx + 0x1c], 4
// 0052a7ef  8b16                 mov edx, dword ptr [esi]
// 0052a7f1  8b02                 mov eax, dword ptr [edx]
// 0052a7f3  56                   push esi
// 0052a7f4  ffd0                 call eax
// 0052a7f6  83c404               add esp, 4
// 0052a7f9  8b8e10010000         mov ecx, dword ptr [esi + 0x110]
// 0052a7ff  8b561c               mov edx, dword ptr [esi + 0x1c]
// 0052a802  03c9                 add ecx, ecx
// 0052a804  03c9                 add ecx, ecx
// 0052a806  03c9                 add ecx, ecx
// 0052a808  51                   push ecx
// 0052a809  52                   push edx
// 0052a80a  e8f1b2ffff           call 0x525b00
// 0052a80f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0052a812  898638010000         mov dword ptr [esi + 0x138], eax
// 0052a818  8b8614010000         mov eax, dword ptr [esi + 0x114]
// 0052a81e  03c0                 add eax, eax
// 0052a820  03c0                 add eax, eax
// 0052a822  03c0                 add eax, eax
// 0052a824  50                   push eax
// 0052a825  51                   push ecx
// 0052a826  e8d5b2ffff           call 0x525b00
// 0052a82b  83c410               add esp, 0x10
// 0052a82e  39be24010000         cmp dword ptr [esi + 0x124], edi
// 0052a834  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0052a83a  89be40010000         mov dword ptr [esi + 0x140], edi
// 0052a840  897c2408             mov dword ptr [esp + 8], edi
// 0052a844  0f8ead000000         jle 0x52a8f7
// 0052a84a  8d9628010000         lea edx, [esi + 0x128]
// 0052a850  8954240c             mov dword ptr [esp + 0xc], edx
// 0052a854  55                   push ebp
// 0052a855  8b442410             mov eax, dword ptr [esp + 0x10]
// 0052a859  8b08                 mov ecx, dword ptr [eax]
// 0052a85b  8b7908               mov edi, dword ptr [ecx + 8]
// 0052a85e  8b5124               mov edx, dword ptr [ecx + 0x24]
// 0052a861  8b411c               mov eax, dword ptr [ecx + 0x1c]
// 0052a864  0fafd7               imul edx, edi
// 0052a867  8b690c               mov ebp, dword ptr [ecx + 0xc]
// 0052a86a  895140               mov dword ptr [ecx + 0x40], edx
// 0052a86d  33d2                 xor edx, edx
// 0052a86f  f7f7                 div edi
// 0052a871  8bdd                 mov ebx, ebp
// 0052a873  0fafdf               imul ebx, edi
// 0052a876  897934               mov dword ptr [ecx + 0x34], edi
// 0052a879  896938               mov dword ptr [ecx + 0x38], ebp
// 0052a87c  89593c               mov dword ptr [ecx + 0x3c], ebx
// 0052a87f  85d2                 test edx, edx
// 0052a881  7502                 jne 0x52a885
// 0052a883  8bd7                 mov edx, edi
// 0052a885  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0052a888  895144               mov dword ptr [ecx + 0x44], edx
// 0052a88b  33d2                 xor edx, edx
// 0052a88d  f7f5                 div ebp
// 0052a88f  85d2                 test edx, edx
// 0052a891  7502                 jne 0x52a895
// 0052a893  8bd5                 mov edx, ebp
// 0052a895  895148               mov dword ptr [ecx + 0x48], edx
// 0052a898  8b8640010000         mov eax, dword ptr [esi + 0x140]
// 0052a89e  8bfb                 mov edi, ebx
// 0052a8a0  03c7                 add eax, edi
// 0052a8a2  83f80a               cmp eax, 0xa
// 0052a8a5  7e13                 jle 0x52a8ba
// 0052a8a7  8b0e                 mov ecx, dword ptr [esi]
// 0052a8a9  c741140d000000       mov dword ptr [ecx + 0x14], 0xd
// 0052a8b0  8b16                 mov edx, dword ptr [esi]
// 0052a8b2  8b02                 mov eax, dword ptr [edx]
// 0052a8b4  56                   push esi
// 0052a8b5  ffd0                 call eax
// 0052a8b7  83c404               add esp, 4
// 0052a8ba  85ff                 test edi, edi
// 0052a8bc  7e1e                 jle 0x52a8dc
// 0052a8be  8bff                 mov edi, edi
// 0052a8c0  8b8e40010000         mov ecx, dword ptr [esi + 0x140]
// 0052a8c6  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0052a8ca  4f                   dec edi
// 0052a8cb  89948e44010000       mov dword ptr [esi + ecx*4 + 0x144], edx
// 0052a8d2  ff8640010000         inc dword ptr [esi + 0x140]
// 0052a8d8  85ff                 test edi, edi
// 0052a8da  7fe4                 jg 0x52a8c0
// 0052a8dc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0052a8e0  8344241004           add dword ptr [esp + 0x10], 4
// 0052a8e5  40                   inc eax
// 0052a8e6  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0052a8ec  8944240c             mov dword ptr [esp + 0xc], eax
// 0052a8f0  0f8c5fffffff         jl 0x52a855
// 0052a8f6  5d                   pop ebp
// 0052a8f7  5f                   pop edi
// 0052a8f8  5b                   pop ebx
// 0052a8f9  83c408               add esp, 8
// 0052a8fc  c3                   ret 
// library jpeg-6b/jdinput.c (function _per_scan_setup)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdinput.c
