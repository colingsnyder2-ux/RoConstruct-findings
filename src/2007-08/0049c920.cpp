// roc 2007-08 0049c920  unit: RBX::Network::Server::ClientProxy  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049c920
//
// 0049c920  53                   push ebx
// 0049c921  55                   push ebp
// 0049c922  56                   push esi
// 0049c923  8b742410             mov esi, dword ptr [esp + 0x10]
// 0049c927  57                   push edi
// 0049c928  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0049c92c  33db                 xor ebx, ebx
// 0049c92e  3bf7                 cmp esi, edi
// 0049c930  743a                 je 0x49c96c
// 0049c932  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0049c936  8b06                 mov eax, dword ptr [esi]
// 0049c938  83ec08               sub esp, 8
// 0049c93b  8bcc                 mov ecx, esp
// 0049c93d  8901                 mov dword ptr [ecx], eax
// 0049c93f  8b4604               mov eax, dword ptr [esi + 4]
// 0049c942  85c0                 test eax, eax
// 0049c944  8964241c             mov dword ptr [esp + 0x1c], esp
// 0049c948  894104               mov dword ptr [ecx + 4], eax
// 0049c94b  740c                 je 0x49c959
// 0049c94d  83c004               add eax, 4
// 0049c950  b901000000           mov ecx, 1
// 0049c955  f00fc108             lock xadd dword ptr [eax], ecx
// 0049c959  ffd5                 call ebp
// 0049c95b  83c408               add esp, 8
// 0049c95e  84c0                 test al, al
// 0049c960  7403                 je 0x49c965
// 0049c962  83c301               add ebx, 1
// 0049c965  83c608               add esi, 8
// 0049c968  3bf7                 cmp esi, edi
// 0049c96a  75ca                 jne 0x49c936
// 0049c96c  5f                   pop edi
// 0049c96d  5e                   pop esi
// 0049c96e  5d                   pop ebp
// 0049c96f  8bc3                 mov eax, ebx
// 0049c971  5b                   pop ebx
// 0049c972  c3                   ret 
// library rbxgs-net/Server.cpp (function ??$_Count_if@PBV?$shared_ptr@VInstance@RBX@@@boost@@P6A_NV12@@Z@std@@YAHPBV?$shared_ptr@VInstance@RBX@@@boost@@0P6A_NV12@@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Server.cpp
