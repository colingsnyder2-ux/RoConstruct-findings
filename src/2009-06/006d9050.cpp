// roc 2009-06 006d9050  unit: RBX::CleanStage  size: 256 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d9050
//
// 006d9050  8b442404             mov eax, dword ptr [esp + 4]
// 006d9054  53                   push ebx
// 006d9055  55                   push ebp
// 006d9056  56                   push esi
// 006d9057  8bf1                 mov esi, ecx
// 006d9059  8b6e04               mov ebp, dword ptr [esi + 4]
// 006d905c  b901000000           mov ecx, 1
// 006d9061  894604               mov dword ptr [esi + 4], eax
// 006d9064  57                   push edi
// 006d9065  840d1000a500         test byte ptr [0xa50010], cl
// 006d906b  7513                 jne 0x6d9080
// 006d906d  090d1000a500         or dword ptr [0xa50010], ecx
// 006d9073  bb0a000000           mov ebx, 0xa
// 006d9078  891d0c00a500         mov dword ptr [0xa5000c], ebx
// 006d907e  eb06                 jmp 0x6d9086
// 006d9080  8b1d0c00a500         mov ebx, dword ptr [0xa5000c]
// 006d9086  8b4e08               mov ecx, dword ptr [esi + 8]
// 006d9089  8b7e04               mov edi, dword ptr [esi + 4]
// 006d908c  3bf9                 cmp edi, ecx
// 006d908e  0f8e8a000000         jle 0x6d911e
// 006d9094  85c9                 test ecx, ecx
// 006d9096  7512                 jne 0x6d90aa
// 006d9098  55                   push ebp
// 006d9099  8bce                 mov ecx, esi
// 006d909b  894608               mov dword ptr [esi + 8], eax
// 006d909e  e8fdccf9ff           call 0x675da0
// 006d90a3  5f                   pop edi
// 006d90a4  5e                   pop esi
// 006d90a5  5d                   pop ebp
// 006d90a6  5b                   pop ebx
// 006d90a7  c20800               ret 8
// 006d90aa  3bfb                 cmp edi, ebx
// 006d90ac  7d12                 jge 0x6d90c0
// 006d90ae  55                   push ebp
// 006d90af  8bce                 mov ecx, esi
// 006d90b1  895e08               mov dword ptr [esi + 8], ebx
// 006d90b4  e8e7ccf9ff           call 0x675da0
// 006d90b9  5f                   pop edi
// 006d90ba  5e                   pop esi
// 006d90bb  5d                   pop ebp
// 006d90bc  5b                   pop ebx
// 006d90bd  c20800               ret 8
// 006d90c0  d90548e88b00         fld dword ptr [0x8be848]
// 006d90c6  8bc1                 mov eax, ecx
// 006d90c8  03c0                 add eax, eax
// 006d90ca  03c0                 add eax, eax
// 006d90cc  3d801a0600           cmp eax, 0x61a80
// 006d90d1  760a                 jbe 0x6d90dd
// 006d90d3  ddd8                 fstp st(0)
// 006d90d5  d905a0ef8b00         fld dword ptr [0x8befa0]
// 006d90db  eb0f                 jmp 0x6d90ec
// 006d90dd  3d00fa0000           cmp eax, 0xfa00
// 006d90e2  7608                 jbe 0x6d90ec
// 006d90e4  ddd8                 fstp st(0)
// 006d90e6  d90544d08b00         fld dword ptr [0x8bd044]
// 006d90ec  8bd9                 mov ebx, ecx
// 006d90ee  895c2418             mov dword ptr [esp + 0x18], ebx
// 006d90f2  da4c2418             fimul dword ptr [esp + 0x18]
// 006d90f6  e8c50d0400           call 0x719ec0
// 006d90fb  2bc3                 sub eax, ebx
// 006d90fd  03c7                 add eax, edi
// 006d90ff  894608               mov dword ptr [esi + 8], eax
// 006d9102  8b0d0c00a500         mov ecx, dword ptr [0xa5000c]
// 006d9108  3bc1                 cmp eax, ecx
// 006d910a  7d03                 jge 0x6d910f
// 006d910c  894e08               mov dword ptr [esi + 8], ecx
// 006d910f  55                   push ebp
// 006d9110  8bce                 mov ecx, esi
// 006d9112  e889ccf9ff           call 0x675da0
// 006d9117  5f                   pop edi
// 006d9118  5e                   pop esi
// 006d9119  5d                   pop ebp
// 006d911a  5b                   pop ebx
// 006d911b  c20800               ret 8
// 006d911e  b856555555           mov eax, 0x55555556
// 006d9123  f7e9                 imul ecx
// 006d9125  8bc2                 mov eax, edx
// 006d9127  c1e81f               shr eax, 0x1f
// 006d912a  03c2                 add eax, edx
// 006d912c  3bf8                 cmp edi, eax
// 006d912e  7f19                 jg 0x6d9149
// 006d9130  807c241800           cmp byte ptr [esp + 0x18], 0
// 006d9135  7412                 je 0x6d9149
// 006d9137  3bfb                 cmp edi, ebx
// 006d9139  7e0e                 jle 0x6d9149
// 006d913b  3bfd                 cmp edi, ebp
// 006d913d  7c02                 jl 0x6d9141
// 006d913f  8bfd                 mov edi, ebp
// 006d9141  57                   push edi
// 006d9142  8bce                 mov ecx, esi
// 006d9144  e857ccf9ff           call 0x675da0
// 006d9149  5f                   pop edi
// 006d914a  5e                   pop esi
// 006d914b  5d                   pop ebp
// 006d914c  5b                   pop ebx
// 006d914d  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\BinaryInput.cpp (function ?resize@?$Array@I@G3D@@QAEXH_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/BinaryInput.cpp
