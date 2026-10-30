// roc 2010-06 00816d80  unit: CXTPToolTipContext  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00816d80
//
// 00816d80  6aff                 push -1
// 00816d82  6849499b00           push 0x9b4949
// 00816d87  64a100000000         mov eax, dword ptr fs:[0]
// 00816d8d  50                   push eax
// 00816d8e  51                   push ecx
// 00816d8f  53                   push ebx
// 00816d90  56                   push esi
// 00816d91  57                   push edi
// 00816d92  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00816d97  33c4                 xor eax, esp
// 00816d99  50                   push eax
// 00816d9a  8d442414             lea eax, [esp + 0x14]
// 00816d9e  64a300000000         mov dword ptr fs:[0], eax
// 00816da4  8bf1                 mov esi, ecx
// 00816da6  89742410             mov dword ptr [esp + 0x10], esi
// 00816daa  c706e422a600         mov dword ptr [esi], 0xa622e4
// 00816db0  33ff                 xor edi, edi
// 00816db2  397e5c               cmp dword ptr [esi + 0x5c], edi
// 00816db5  c744241c05000000     mov dword ptr [esp + 0x1c], 5
// 00816dbd  7e36                 jle 0x816df5
// 00816dbf  90                   nop 
// 00816dc0  85ff                 test edi, edi
// 00816dc2  0f8c9f000000         jl 0x816e67
// 00816dc8  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00816dcb  0f8d96000000         jge 0x816e67
// 00816dd1  8b4658               mov eax, dword ptr [esi + 0x58]
// 00816dd4  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00816dd7  8d04b8               lea eax, [eax + edi*4]
// 00816dda  85db                 test ebx, ebx
// 00816ddc  7411                 je 0x816def
// 00816dde  8bcb                 mov ecx, ebx
// 00816de0  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00816de6  53                   push ebx
// 00816de7  e8ae0bf9ff           call 0x7a799a
// 00816dec  83c404               add esp, 4
// 00816def  47                   inc edi
// 00816df0  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00816df3  7ccb                 jl 0x816dc0
// 00816df5  6aff                 push -1
// 00816df7  8d7e54               lea edi, [esi + 0x54]
// 00816dfa  6a00                 push 0
// 00816dfc  8bcf                 mov ecx, edi
// 00816dfe  e8fda4fcff           call 0x7e1300
// 00816e03  6a00                 push 0
// 00816e05  8bce                 mov ecx, esi
// 00816e07  e8d4feffff           call 0x816ce0
// 00816e0c  8d8e28010000         lea ecx, [esi + 0x128]
// 00816e12  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00816e18  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00816e1e  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00816e24  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00816e2a  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00816e30  8d4e70               lea ecx, [esi + 0x70]
// 00816e33  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00816e39  8bcf                 mov ecx, edi
// 00816e3b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00816e40  e84befffff           call 0x815d90
// 00816e45  8bce                 mov ecx, esi
// 00816e47  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00816e4f  e80216f9ff           call 0x7a8456
// 00816e54  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00816e58  64890d00000000       mov dword ptr fs:[0], ecx
// 00816e5f  59                   pop ecx
// 00816e60  5f                   pop edi
// 00816e61  5e                   pop esi
// 00816e62  5b                   pop ebx
// 00816e63  83c410               add esp, 0x10
// 00816e66  c3                   ret 
// 00816e67  e8e00df9ff           call 0x7a7c4c
// copied from an identical function in another client (function ??1CXTPToolTipContextToolTip@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPToolTipContext.cpp