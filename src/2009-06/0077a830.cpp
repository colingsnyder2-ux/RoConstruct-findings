// roc 2009-06 0077a830  unit: CXTPTabClientWnd::CNavigateButtonActiveFiles  size: 170 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a830
//
// 0077a830  83ec28               sub esp, 0x28
// 0077a833  53                   push ebx
// 0077a834  55                   push ebp
// 0077a835  56                   push esi
// 0077a836  8bf1                 mov esi, ecx
// 0077a838  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077a83b  8b01                 mov eax, dword ptr [ecx]
// 0077a83d  8b502c               mov edx, dword ptr [eax + 0x2c]
// 0077a840  57                   push edi
// 0077a841  ffd2                 call edx
// 0077a843  8b88e0000000         mov ecx, dword ptr [eax + 0xe0]
// 0077a849  8b01                 mov eax, dword ptr [ecx]
// 0077a84b  8b4010               mov eax, dword ptr [eax + 0x10]
// 0077a84e  8d542428             lea edx, [esp + 0x28]
// 0077a852  52                   push edx
// 0077a853  ffd0                 call eax
// 0077a855  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0077a859  8b5704               mov edx, dword ptr [edi + 4]
// 0077a85c  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0077a85f  8b0f                 mov ecx, dword ptr [edi]
// 0077a861  8b470c               mov eax, dword ptr [edi + 0xc]
// 0077a864  8b6f08               mov ebp, dword ptr [edi + 8]
// 0077a867  8954241c             mov dword ptr [esp + 0x1c], edx
// 0077a86b  8b13                 mov edx, dword ptr [ebx]
// 0077a86d  894c2418             mov dword ptr [esp + 0x18], ecx
// 0077a871  89442424             mov dword ptr [esp + 0x24], eax
// 0077a875  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077a878  8bcb                 mov ecx, ebx
// 0077a87a  ffd0                 call eax
// 0077a87c  83f802               cmp eax, 2
// 0077a87f  740d                 je 0x77a88e
// 0077a881  8b13                 mov edx, dword ptr [ebx]
// 0077a883  8b4248               mov eax, dword ptr [edx + 0x48]
// 0077a886  8bcb                 mov ecx, ebx
// 0077a888  ffd0                 call eax
// 0077a88a  85c0                 test eax, eax
// 0077a88c  7508                 jne 0x77a896
// 0077a88e  2b6c2418             sub ebp, dword ptr [esp + 0x18]
// 0077a892  8bdd                 mov ebx, ebp
// 0077a894  eb08                 jmp 0x77a89e
// 0077a896  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0077a89a  2b5c241c             sub ebx, dword ptr [esp + 0x1c]
// 0077a89e  8b16                 mov edx, dword ptr [esi]
// 0077a8a0  8b5208               mov edx, dword ptr [edx + 8]
// 0077a8a3  8d442410             lea eax, [esp + 0x10]
// 0077a8a7  50                   push eax
// 0077a8a8  8bce                 mov ecx, esi
// 0077a8aa  ffd2                 call edx
// 0077a8ac  2b18                 sub ebx, dword ptr [eax]
// 0077a8ae  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0077a8b1  2b5c2430             sub ebx, dword ptr [esp + 0x30]
// 0077a8b5  2b5c2428             sub ebx, dword ptr [esp + 0x28]
// 0077a8b9  e8a29f0700           call 0x7f4860
// 0077a8be  33c9                 xor ecx, ecx
// 0077a8c0  3bc3                 cmp eax, ebx
// 0077a8c2  0f9fc1               setg cl
// 0077a8c5  57                   push edi
// 0077a8c6  894e30               mov dword ptr [esi + 0x30], ecx
// 0077a8c9  8bce                 mov ecx, esi
// 0077a8cb  e840940700           call 0x7f3d10
// 0077a8d0  5f                   pop edi
// 0077a8d1  5e                   pop esi
// 0077a8d2  5d                   pop ebp
// 0077a8d3  5b                   pop ebx
// 0077a8d4  83c428               add esp, 0x28
// 0077a8d7  c20400               ret 4
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?Reposition@CNavigateButtonActiveFiles@CXTPTabClientWnd@@UAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
