// roc 2009-12 00821600  unit: CXTPReportControl  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821600
//
// 00821600  6aff                 push -1
// 00821602  6838b09500           push 0x95b038
// 00821607  64a100000000         mov eax, dword ptr fs:[0]
// 0082160d  50                   push eax
// 0082160e  83ec10               sub esp, 0x10
// 00821611  56                   push esi
// 00821612  57                   push edi
// 00821613  a10052b600           mov eax, dword ptr [0xb65200]
// 00821618  33c4                 xor eax, esp
// 0082161a  50                   push eax
// 0082161b  8d44241c             lea eax, [esp + 0x1c]
// 0082161f  64a300000000         mov dword ptr fs:[0], eax
// 00821625  e816cfffff           call 0x81e540
// 0082162a  85c0                 test eax, eax
// 0082162c  7414                 je 0x821642
// 0082162e  33c0                 xor eax, eax
// 00821630  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00821634  64890d00000000       mov dword ptr fs:[0], ecx
// 0082163b  59                   pop ecx
// 0082163c  5f                   pop edi
// 0082163d  5e                   pop esi
// 0082163e  83c41c               add esp, 0x1c
// 00821641  c3                   ret 
// 00821642  68504b9f00           push 0x9f4b50
// 00821647  ff1508cc9800         call dword ptr [0x98cc08]
// 0082164d  8d4c240c             lea ecx, [esp + 0xc]
// 00821651  0fb7f8               movzx edi, ax
// 00821654  33f6                 xor esi, esi
// 00821656  e85d501000           call 0x9266b8
// 0082165b  8d4c240c             lea ecx, [esp + 0xc]
// 0082165f  89742424             mov dword ptr [esp + 0x24], esi
// 00821663  e84a501000           call 0x9266b2
// 00821668  85c0                 test eax, eax
// 0082166a  7434                 je 0x8216a0
// 0082166c  56                   push esi
// 0082166d  6a01                 push 1
// 0082166f  8d4c2414             lea ecx, [esp + 0x14]
// 00821673  e87c30fdff           call 0x7f46f4
// 00821678  85c0                 test eax, eax
// 0082167a  751f                 jne 0x82169b
// 0082167c  56                   push esi
// 0082167d  6a0d                 push 0xd
// 0082167f  8d4c2414             lea ecx, [esp + 0x14]
// 00821683  e86c30fdff           call 0x7f46f4
// 00821688  85c0                 test eax, eax
// 0082168a  750f                 jne 0x82169b
// 0082168c  56                   push esi
// 0082168d  57                   push edi
// 0082168e  8d4c2414             lea ecx, [esp + 0x14]
// 00821692  e85d30fdff           call 0x7f46f4
// 00821697  85c0                 test eax, eax
// 00821699  7405                 je 0x8216a0
// 0082169b  be01000000           mov esi, 1
// 008216a0  8d4c240c             lea ecx, [esp + 0xc]
// 008216a4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008216ac  e8e94f1000           call 0x92669a
// 008216b1  8bc6                 mov eax, esi
// 008216b3  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008216b7  64890d00000000       mov dword ptr fs:[0], ecx
// 008216be  59                   pop ecx
// 008216bf  5f                   pop edi
// 008216c0  5e                   pop esi
// 008216c1  83c41c               add esp, 0x1c
// 008216c4  c3                   ret 
// copied from an identical function in another client (function ?CanPaste@CXTPReportControl@@UAEHXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportControl.cpp