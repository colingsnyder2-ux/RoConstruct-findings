// roc 2011-06 008ce8e0  unit: CXTPDockingPaneContext  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ce8e0
//
// 008ce8e0  83ec14               sub esp, 0x14
// 008ce8e3  53                   push ebx
// 008ce8e4  55                   push ebp
// 008ce8e5  56                   push esi
// 008ce8e6  57                   push edi
// 008ce8e7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008ce8eb  8d442414             lea eax, [esp + 0x14]
// 008ce8ef  8bf1                 mov esi, ecx
// 008ce8f1  57                   push edi
// 008ce8f2  50                   push eax
// 008ce8f3  89742418             mov dword ptr [esp + 0x18], esi
// 008ce8f7  e81438f8ff           call 0x852110
// 008ce8fc  8bc8                 mov ecx, eax
// 008ce8fe  e86d33f8ff           call 0x851c70
// 008ce903  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 008ce909  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 008ce90f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ce913  2b4f04               sub ecx, dword ptr [edi + 4]
// 008ce916  8b2d601ca400         mov ebp, dword ptr [0xa41c60]
// 008ce91c  8bc1                 mov eax, ecx
// 008ce91e  99                   cdq 
// 008ce91f  33c2                 xor eax, edx
// 008ce921  2bc2                 sub eax, edx
// 008ce923  3bc6                 cmp eax, esi
// 008ce925  7d06                 jge 0x8ce92d
// 008ce927  51                   push ecx
// 008ce928  6a00                 push 0
// 008ce92a  57                   push edi
// 008ce92b  ffd5                 call ebp
// 008ce92d  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 008ce930  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008ce934  8bc3                 mov eax, ebx
// 008ce936  2bc1                 sub eax, ecx
// 008ce938  99                   cdq 
// 008ce939  33c2                 xor eax, edx
// 008ce93b  2bc2                 sub eax, edx
// 008ce93d  3bc6                 cmp eax, esi
// 008ce93f  7d08                 jge 0x8ce949
// 008ce941  2bcb                 sub ecx, ebx
// 008ce943  51                   push ecx
// 008ce944  6a00                 push 0
// 008ce946  57                   push edi
// 008ce947  ffd5                 call ebp
// 008ce949  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008ce94d  2b4f08               sub ecx, dword ptr [edi + 8]
// 008ce950  8bc1                 mov eax, ecx
// 008ce952  99                   cdq 
// 008ce953  33c2                 xor eax, edx
// 008ce955  2bc2                 sub eax, edx
// 008ce957  3bc6                 cmp eax, esi
// 008ce959  7d06                 jge 0x8ce961
// 008ce95b  6a00                 push 0
// 008ce95d  51                   push ecx
// 008ce95e  57                   push edi
// 008ce95f  ffd5                 call ebp
// 008ce961  8b1f                 mov ebx, dword ptr [edi]
// 008ce963  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ce967  8bc3                 mov eax, ebx
// 008ce969  2bc1                 sub eax, ecx
// 008ce96b  99                   cdq 
// 008ce96c  33c2                 xor eax, edx
// 008ce96e  2bc2                 sub eax, edx
// 008ce970  3bc6                 cmp eax, esi
// 008ce972  7d08                 jge 0x8ce97c
// 008ce974  6a00                 push 0
// 008ce976  2bcb                 sub ecx, ebx
// 008ce978  51                   push ecx
// 008ce979  57                   push edi
// 008ce97a  ffd5                 call ebp
// 008ce97c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008ce980  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 008ce986  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 008ce98c  e887dc0f00           call 0x9cc618
// 008ce991  a900000021           test eax, 0x21000000
// 008ce996  7515                 jne 0x8ce9ad
// 008ce998  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 008ce99e  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008ce9a4  51                   push ecx
// 008ce9a5  57                   push edi
// 008ce9a6  8bcd                 mov ecx, ebp
// 008ce9a8  e8c3fdffff           call 0x8ce770
// 008ce9ad  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 008ce9b3  e8f8f6f7ff           call 0x84e0b0
// 008ce9b8  8b5804               mov ebx, dword ptr [eax + 4]
// 008ce9bb  85db                 test ebx, ebx
// 008ce9bd  7448                 je 0x8cea07
// 008ce9bf  90                   nop 
// 008ce9c0  8bc3                 mov eax, ebx
// 008ce9c2  8b4008               mov eax, dword ptr [eax + 8]
// 008ce9c5  83781803             cmp dword ptr [eax + 0x18], 3
// 008ce9c9  8b1b                 mov ebx, dword ptr [ebx]
// 008ce9cb  7536                 jne 0x8cea03
// 008ce9cd  8db008ffffff         lea esi, [eax - 0xf8]
// 008ce9d3  85f6                 test esi, esi
// 008ce9d5  742c                 je 0x8cea03
// 008ce9d7  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ce9da  85c0                 test eax, eax
// 008ce9dc  7425                 je 0x8cea03
// 008ce9de  50                   push eax
// 008ce9df  ff15201ca400         call dword ptr [0xa41c20]
// 008ce9e5  85c0                 test eax, eax
// 008ce9e7  741a                 je 0x8cea03
// 008ce9e9  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 008ce9ef  8b11                 mov edx, dword ptr [ecx]
// 008ce9f1  8b4218               mov eax, dword ptr [edx + 0x18]
// 008ce9f4  ffd0                 call eax
// 008ce9f6  3bc6                 cmp eax, esi
// 008ce9f8  7409                 je 0x8cea03
// 008ce9fa  56                   push esi
// 008ce9fb  57                   push edi
// 008ce9fc  8bcd                 mov ecx, ebp
// 008ce9fe  e86dfdffff           call 0x8ce770
// 008cea03  85db                 test ebx, ebx
// 008cea05  75b9                 jne 0x8ce9c0
// 008cea07  5f                   pop edi
// 008cea08  5e                   pop esi
// 008cea09  5d                   pop ebp
// 008cea0a  5b                   pop ebx
// 008cea0b  83c414               add esp, 0x14
// 008cea0e  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
