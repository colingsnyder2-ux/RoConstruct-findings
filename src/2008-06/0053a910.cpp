// roc 2008-06 0053a910  unit: seg_00530000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a910
//
// 0053a910  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0053a914  53                   push ebx
// 0053a915  56                   push esi
// 0053a916  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053a91a  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0053a91d  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0053a923  57                   push edi
// 0053a924  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0053a928  50                   push eax
// 0053a929  51                   push ecx
// 0053a92a  6a00                 push 0
// 0053a92c  57                   push edi
// 0053a92d  6a00                 push 0
// 0053a92f  52                   push edx
// 0053a930  e8fbb1feff           call 0x525b30
// 0053a935  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053a939  8b401c               mov eax, dword ptr [eax + 0x1c]
// 0053a93c  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 0053a942  8b5e1c               mov ebx, dword ptr [esi + 0x1c]
// 0053a945  03c0                 add eax, eax
// 0053a947  03c0                 add eax, eax
// 0053a949  51                   push ecx
// 0053a94a  03c0                 add eax, eax
// 0053a94c  57                   push edi
// 0053a94d  e86efdffff           call 0x53a6c0
// 0053a952  83c420               add esp, 0x20
// 0053a955  5f                   pop edi
// 0053a956  5e                   pop esi
// 0053a957  5b                   pop ebx
// 0053a958  c3                   ret 
// library jpeg-6b/jcsample.c (function _fullsize_downsample)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcsample.c
