// roc 2009-06 00787da0  unit: CXTPToolTipContext  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00787da0
//
// 00787da0  6aff                 push -1
// 00787da2  6889a78700           push 0x87a789
// 00787da7  64a100000000         mov eax, dword ptr fs:[0]
// 00787dad  50                   push eax
// 00787dae  51                   push ecx
// 00787daf  53                   push ebx
// 00787db0  56                   push esi
// 00787db1  57                   push edi
// 00787db2  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00787db7  33c4                 xor eax, esp
// 00787db9  50                   push eax
// 00787dba  8d442414             lea eax, [esp + 0x14]
// 00787dbe  64a300000000         mov dword ptr fs:[0], eax
// 00787dc4  8bf1                 mov esi, ecx
// 00787dc6  89742410             mov dword ptr [esp + 0x10], esi
// 00787dca  c7067cdb8f00         mov dword ptr [esi], 0x8fdb7c
// 00787dd0  33ff                 xor edi, edi
// 00787dd2  397e5c               cmp dword ptr [esi + 0x5c], edi
// 00787dd5  c744241c05000000     mov dword ptr [esp + 0x1c], 5
// 00787ddd  7e36                 jle 0x787e15
// 00787ddf  90                   nop 
// 00787de0  85ff                 test edi, edi
// 00787de2  0f8c9f000000         jl 0x787e87
// 00787de8  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00787deb  0f8d96000000         jge 0x787e87
// 00787df1  8b4658               mov eax, dword ptr [esi + 0x58]
// 00787df4  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00787df7  8d04b8               lea eax, [eax + edi*4]
// 00787dfa  85db                 test ebx, ebx
// 00787dfc  7411                 je 0x787e0f
// 00787dfe  8bcb                 mov ecx, ebx
// 00787e00  ff1510fd8900         call dword ptr [0x89fd10]
// 00787e06  53                   push ebx
// 00787e07  e8260cf9ff           call 0x718a32
// 00787e0c  83c404               add esp, 4
// 00787e0f  47                   inc edi
// 00787e10  3b7e5c               cmp edi, dword ptr [esi + 0x5c]
// 00787e13  7ccb                 jl 0x787de0
// 00787e15  6aff                 push -1
// 00787e17  8d7e54               lea edi, [esi + 0x54]
// 00787e1a  6a00                 push 0
// 00787e1c  8bcf                 mov ecx, edi
// 00787e1e  e8eda6fcff           call 0x752510
// 00787e23  6a00                 push 0
// 00787e25  8bce                 mov ecx, esi
// 00787e27  e8d4feffff           call 0x787d00
// 00787e2c  8d8e28010000         lea ecx, [esi + 0x128]
// 00787e32  ff1510fd8900         call dword ptr [0x89fd10]
// 00787e38  8d8ee0000000         lea ecx, [esi + 0xe0]
// 00787e3e  ff1510fd8900         call dword ptr [0x89fd10]
// 00787e44  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00787e4a  ff1510fd8900         call dword ptr [0x89fd10]
// 00787e50  8d4e70               lea ecx, [esi + 0x70]
// 00787e53  ff1510fd8900         call dword ptr [0x89fd10]
// 00787e59  8bcf                 mov ecx, edi
// 00787e5b  c644241c00           mov byte ptr [esp + 0x1c], 0
// 00787e60  e83befffff           call 0x786da0
// 00787e65  8bce                 mov ecx, esi
// 00787e67  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00787e6f  e87416f9ff           call 0x7194e8
// 00787e74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00787e78  64890d00000000       mov dword ptr fs:[0], ecx
// 00787e7f  59                   pop ecx
// 00787e80  5f                   pop edi
// 00787e81  5e                   pop esi
// 00787e82  5b                   pop ebx
// 00787e83  83c410               add esp, 0x10
// 00787e86  c3                   ret 
// 00787e87  e8580ef9ff           call 0x718ce4
// copied from an identical function in another client (function ??1CXTPToolTipContextToolTip@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Common\XTPToolTipContext.cpp