// roc 2007-03 006d5cc0  unit: seg_006d0000  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d5cc0
//
// 006d5cc0  83ec14               sub esp, 0x14
// 006d5cc3  53                   push ebx
// 006d5cc4  55                   push ebp
// 006d5cc5  56                   push esi
// 006d5cc6  57                   push edi
// 006d5cc7  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006d5ccb  8d442414             lea eax, [esp + 0x14]
// 006d5ccf  8bf1                 mov esi, ecx
// 006d5cd1  57                   push edi
// 006d5cd2  50                   push eax
// 006d5cd3  89742418             mov dword ptr [esp + 0x18], esi
// 006d5cd7  e81410fbff           call 0x686cf0
// 006d5cdc  8bc8                 mov ecx, eax
// 006d5cde  e86d0bfbff           call 0x686850
// 006d5ce3  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 006d5ce9  8bb1c8000000         mov esi, dword ptr [ecx + 0xc8]
// 006d5cef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d5cf3  2b4f04               sub ecx, dword ptr [edi + 4]
// 006d5cf6  8b2d58ed7700         mov ebp, dword ptr [0x77ed58]
// 006d5cfc  8bc1                 mov eax, ecx
// 006d5cfe  99                   cdq 
// 006d5cff  33c2                 xor eax, edx
// 006d5d01  2bc2                 sub eax, edx
// 006d5d03  3bc6                 cmp eax, esi
// 006d5d05  7d06                 jge 0x6d5d0d
// 006d5d07  51                   push ecx
// 006d5d08  6a00                 push 0
// 006d5d0a  57                   push edi
// 006d5d0b  ffd5                 call ebp
// 006d5d0d  8b5f0c               mov ebx, dword ptr [edi + 0xc]
// 006d5d10  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006d5d14  8bc3                 mov eax, ebx
// 006d5d16  2bc1                 sub eax, ecx
// 006d5d18  99                   cdq 
// 006d5d19  33c2                 xor eax, edx
// 006d5d1b  2bc2                 sub eax, edx
// 006d5d1d  3bc6                 cmp eax, esi
// 006d5d1f  7d08                 jge 0x6d5d29
// 006d5d21  2bcb                 sub ecx, ebx
// 006d5d23  51                   push ecx
// 006d5d24  6a00                 push 0
// 006d5d26  57                   push edi
// 006d5d27  ffd5                 call ebp
// 006d5d29  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006d5d2d  2b4f08               sub ecx, dword ptr [edi + 8]
// 006d5d30  8bc1                 mov eax, ecx
// 006d5d32  99                   cdq 
// 006d5d33  33c2                 xor eax, edx
// 006d5d35  2bc2                 sub eax, edx
// 006d5d37  3bc6                 cmp eax, esi
// 006d5d39  7d06                 jge 0x6d5d41
// 006d5d3b  6a00                 push 0
// 006d5d3d  51                   push ecx
// 006d5d3e  57                   push edi
// 006d5d3f  ffd5                 call ebp
// 006d5d41  8b1f                 mov ebx, dword ptr [edi]
// 006d5d43  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d5d47  8bc3                 mov eax, ebx
// 006d5d49  2bc1                 sub eax, ecx
// 006d5d4b  99                   cdq 
// 006d5d4c  33c2                 xor eax, edx
// 006d5d4e  2bc2                 sub eax, edx
// 006d5d50  3bc6                 cmp eax, esi
// 006d5d52  7d08                 jge 0x6d5d5c
// 006d5d54  6a00                 push 0
// 006d5d56  2bcb                 sub ecx, ebx
// 006d5d58  51                   push ecx
// 006d5d59  57                   push edi
// 006d5d5a  ffd5                 call ebp
// 006d5d5c  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 006d5d60  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 006d5d66  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 006d5d6c  e8534e0600           call 0x73abc4
// 006d5d71  a900000021           test eax, 0x21000000
// 006d5d76  7515                 jne 0x6d5d8d
// 006d5d78  8b851c010000         mov eax, dword ptr [ebp + 0x11c]
// 006d5d7e  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 006d5d84  51                   push ecx
// 006d5d85  57                   push edi
// 006d5d86  8bcd                 mov ecx, ebp
// 006d5d88  e8c3fdffff           call 0x6d5b50
// 006d5d8d  8b8d1c010000         mov ecx, dword ptr [ebp + 0x11c]
// 006d5d93  e87843f8ff           call 0x65a110
// 006d5d98  8b5804               mov ebx, dword ptr [eax + 4]
// 006d5d9b  85db                 test ebx, ebx
// 006d5d9d  7448                 je 0x6d5de7
// 006d5d9f  90                   nop 
// 006d5da0  8bc3                 mov eax, ebx
// 006d5da2  8b4008               mov eax, dword ptr [eax + 8]
// 006d5da5  83781803             cmp dword ptr [eax + 0x18], 3
// 006d5da9  8b1b                 mov ebx, dword ptr [ebx]
// 006d5dab  7536                 jne 0x6d5de3
// 006d5dad  8db01cffffff         lea esi, [eax - 0xe4]
// 006d5db3  85f6                 test esi, esi
// 006d5db5  742c                 je 0x6d5de3
// 006d5db7  8b4620               mov eax, dword ptr [esi + 0x20]
// 006d5dba  85c0                 test eax, eax
// 006d5dbc  7425                 je 0x6d5de3
// 006d5dbe  50                   push eax
// 006d5dbf  ff158ced7700         call dword ptr [0x77ed8c]
// 006d5dc5  85c0                 test eax, eax
// 006d5dc7  741a                 je 0x6d5de3
// 006d5dc9  8b8d20010000         mov ecx, dword ptr [ebp + 0x120]
// 006d5dcf  8b11                 mov edx, dword ptr [ecx]
// 006d5dd1  8b4218               mov eax, dword ptr [edx + 0x18]
// 006d5dd4  ffd0                 call eax
// 006d5dd6  3bc6                 cmp eax, esi
// 006d5dd8  7409                 je 0x6d5de3
// 006d5dda  56                   push esi
// 006d5ddb  57                   push edi
// 006d5ddc  8bcd                 mov ecx, ebp
// 006d5dde  e86dfdffff           call 0x6d5b50
// 006d5de3  85db                 test ebx, ebx
// 006d5de5  75b9                 jne 0x6d5da0
// 006d5de7  5f                   pop edi
// 006d5de8  5e                   pop esi
// 006d5de9  5d                   pop ebp
// 006d5dea  5b                   pop ebx
// 006d5deb  83c414               add esp, 0x14
// 006d5dee  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneContext.cpp (function ?UpdateStickyFrame@CXTPDockingPaneContext@@MAEXAAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneContext.cpp
