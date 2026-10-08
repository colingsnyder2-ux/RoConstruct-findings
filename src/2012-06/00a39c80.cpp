// roc 2012-06 00a39c80  unit: CXTPDockingPaneMiniWnd  size: 210 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a39c80
//
// 00a39c80  83ec10               sub esp, 0x10
// 00a39c83  56                   push esi
// 00a39c84  8bf1                 mov esi, ecx
// 00a39c86  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a39c8a  0f84bd000000         je 0xa39d4d
// 00a39c90  57                   push edi
// 00a39c91  8bbe48010000         mov edi, dword ptr [esi + 0x148]
// 00a39c97  8bc7                 mov eax, edi
// 00a39c99  f7d8                 neg eax
// 00a39c9b  1bc0                 sbb eax, eax
// 00a39c9d  83e0f6               and eax, 0xfffffff6
// 00a39ca0  83c012               add eax, 0x12
// 00a39ca3  50                   push eax
// 00a39ca4  e887f6ffff           call 0xa39330
// 00a39ca9  85c0                 test eax, eax
// 00a39cab  0f859b000000         jne 0xa39d4c
// 00a39cb1  398648010000         cmp dword ptr [esi + 0x148], eax
// 00a39cb7  750b                 jne 0xa39cc4
// 00a39cb9  6a01                 push 1
// 00a39cbb  8bce                 mov ecx, esi
// 00a39cbd  e8aefdffff           call 0xa39a70
// 00a39cc2  eb63                 jmp 0xa39d27
// 00a39cc4  8b8e3c010000         mov ecx, dword ptr [esi + 0x13c]
// 00a39cca  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 00a39cd0  7429                 je 0xa39cfb
// 00a39cd2  56                   push esi
// 00a39cd3  8d4c240c             lea ecx, [esp + 0xc]
// 00a39cd7  e864b4f9ff           call 0x9d5140
// 00a39cdc  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a39ce0  8b9638010000         mov edx, dword ptr [esi + 0x138]
// 00a39ce6  2b442408             sub eax, dword ptr [esp + 8]
// 00a39cea  6a06                 push 6
// 00a39cec  52                   push edx
// 00a39ced  50                   push eax
// 00a39cee  6a00                 push 0
// 00a39cf0  6a00                 push 0
// 00a39cf2  6a00                 push 0
// 00a39cf4  8bce                 mov ecx, esi
// 00a39cf6  e8d987f4ff           call 0x9824d4
// 00a39cfb  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a39cfe  53                   push ebx
// 00a39cff  8b1d083cb200         mov ebx, dword ptr [0xb23c08]
// 00a39d05  6a01                 push 1
// 00a39d07  51                   push ecx
// 00a39d08  c7864801000000000000 mov dword ptr [esi + 0x148], 0
// 00a39d12  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 00a39d1c  ffd3                 call ebx
// 00a39d1e  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a39d21  6a03                 push 3
// 00a39d23  52                   push edx
// 00a39d24  ffd3                 call ebx
// 00a39d26  5b                   pop ebx
// 00a39d27  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a39d2a  6a00                 push 0
// 00a39d2c  6a00                 push 0
// 00a39d2e  6885000000           push 0x85
// 00a39d33  50                   push eax
// 00a39d34  ff15043cb200         call dword ptr [0xb23c04]
// 00a39d3a  f7df                 neg edi
// 00a39d3c  1bff                 sbb edi, edi
// 00a39d3e  83e7f6               and edi, 0xfffffff6
// 00a39d41  83c713               add edi, 0x13
// 00a39d44  57                   push edi
// 00a39d45  8bce                 mov ecx, esi
// 00a39d47  e8e4f5ffff           call 0xa39330
// 00a39d4c  5f                   pop edi
// 00a39d4d  5e                   pop esi
// 00a39d4e  83c410               add esp, 0x10
// 00a39d51  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?OnPinButtonClick@CXTPDockingPaneMiniWnd@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
