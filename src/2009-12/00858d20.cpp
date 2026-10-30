// roc 2009-12 00858d20  unit: CXTPTabClientWnd::CSingleWorkspace  size: 263 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00858d20
//
// 00858d20  6aff                 push -1
// 00858d22  688ee19500           push 0x95e18e
// 00858d27  64a100000000         mov eax, dword ptr fs:[0]
// 00858d2d  50                   push eax
// 00858d2e  51                   push ecx
// 00858d2f  53                   push ebx
// 00858d30  56                   push esi
// 00858d31  57                   push edi
// 00858d32  a10052b600           mov eax, dword ptr [0xb65200]
// 00858d37  33c4                 xor eax, esp
// 00858d39  50                   push eax
// 00858d3a  8d442414             lea eax, [esp + 0x14]
// 00858d3e  64a300000000         mov dword ptr fs:[0], eax
// 00858d44  8bf1                 mov esi, ecx
// 00858d46  89742410             mov dword ptr [esp + 0x10], esi
// 00858d4a  c706a4cd9f00         mov dword ptr [esi], 0x9fcda4
// 00858d50  c7465490cd9f00       mov dword ptr [esi + 0x54], 0x9fcd90
// 00858d57  8b8e8c000000         mov ecx, dword ptr [esi + 0x8c]
// 00858d5d  33db                 xor ebx, ebx
// 00858d5f  c744241c02000000     mov dword ptr [esp + 0x1c], 2
// 00858d67  3bcb                 cmp ecx, ebx
// 00858d69  740b                 je 0x858d76
// 00858d6b  e86cb0f9ff           call 0x7f3ddc
// 00858d70  899e8c000000         mov dword ptr [esi + 0x8c], ebx
// 00858d76  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00858d79  3bc3                 cmp eax, ebx
// 00858d7b  7410                 je 0x858d8d
// 00858d7d  899890000000         mov dword ptr [eax + 0x90], ebx
// 00858d83  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00858d86  e8e5660700           call 0x8cf470
// 00858d8b  eb36                 jmp 0x858dc3
// 00858d8d  8bce                 mov ecx, esi
// 00858d8f  33ff                 xor edi, edi
// 00858d91  e8bad8ffff           call 0x856650
// 00858d96  85c0                 test eax, eax
// 00858d98  7e29                 jle 0x858dc3
// 00858d9a  8d9b00000000         lea ebx, [ebx]
// 00858da0  57                   push edi
// 00858da1  8bce                 mov ecx, esi
// 00858da3  e898e7ffff           call 0x857540
// 00858da8  3bc3                 cmp eax, ebx
// 00858daa  740b                 je 0x858db7
// 00858dac  8b10                 mov edx, dword ptr [eax]
// 00858dae  8bc8                 mov ecx, eax
// 00858db0  8b4208               mov eax, dword ptr [edx + 8]
// 00858db3  6a01                 push 1
// 00858db5  ffd0                 call eax
// 00858db7  8bce                 mov ecx, esi
// 00858db9  47                   inc edi
// 00858dba  e891d8ffff           call 0x856650
// 00858dbf  3bf8                 cmp edi, eax
// 00858dc1  7cdd                 jl 0x858da0
// 00858dc3  8b8eec000000         mov ecx, dword ptr [esi + 0xec]
// 00858dc9  3bcb                 cmp ecx, ebx
// 00858dcb  740f                 je 0x858ddc
// 00858dcd  8b11                 mov edx, dword ptr [ecx]
// 00858dcf  8b4204               mov eax, dword ptr [edx + 4]
// 00858dd2  6a01                 push 1
// 00858dd4  ffd0                 call eax
// 00858dd6  899eec000000         mov dword ptr [esi + 0xec], ebx
// 00858ddc  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00858de2  3bcb                 cmp ecx, ebx
// 00858de4  740b                 je 0x858df1
// 00858de6  e8f1aff9ff           call 0x7f3ddc
// 00858deb  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 00858df1  8d4e68               lea ecx, [esi + 0x68]
// 00858df4  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00858df9  e812dfffff           call 0x856d10
// 00858dfe  8bce                 mov ecx, esi
// 00858e00  c74654c0c69f00       mov dword ptr [esi + 0x54], 0x9fc6c0
// 00858e07  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00858e0f  e802b5f9ff           call 0x7f4316
// 00858e14  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00858e18  64890d00000000       mov dword ptr fs:[0], ecx
// 00858e1f  59                   pop ecx
// 00858e20  5f                   pop edi
// 00858e21  5e                   pop esi
// 00858e22  5b                   pop ebx
// 00858e23  83c410               add esp, 0x10
// 00858e26  c3                   ret 
// copied from an identical function in another client (function ??1CXTPTabClientWnd@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp