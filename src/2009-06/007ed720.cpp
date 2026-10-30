// roc 2009-06 007ed720  unit: VCEdit::?$CXTMaskEditT  size: 231 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ed720
//
// 007ed720  8b442404             mov eax, dword ptr [esp + 4]
// 007ed724  53                   push ebx
// 007ed725  55                   push ebp
// 007ed726  56                   push esi
// 007ed727  8bf1                 mov esi, ecx
// 007ed729  57                   push edi
// 007ed72a  8d7e70               lea edi, [esi + 0x70]
// 007ed72d  50                   push eax
// 007ed72e  8bcf                 mov ecx, edi
// 007ed730  ff15acfc8900         call dword ptr [0x89fcac]
// 007ed736  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 007ed73a  8dae84000000         lea ebp, [esi + 0x84]
// 007ed740  53                   push ebx
// 007ed741  8bcd                 mov ecx, ebp
// 007ed743  ff15acfc8900         call dword ptr [0x89fcac]
// 007ed749  8bcd                 mov ecx, ebp
// 007ed74b  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed751  8bcf                 mov ecx, edi
// 007ed753  89442414             mov dword ptr [esp + 0x14], eax
// 007ed757  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed75d  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ed761  3bc1                 cmp eax, ecx
// 007ed763  7409                 je 0x7ed76e
// 007ed765  5f                   pop edi
// 007ed766  5e                   pop esi
// 007ed767  5d                   pop ebp
// 007ed768  33c0                 xor eax, eax
// 007ed76a  5b                   pop ebx
// 007ed76b  c20c00               ret 0xc
// 007ed76e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007ed772  8dbe80000000         lea edi, [esi + 0x80]
// 007ed778  85c0                 test eax, eax
// 007ed77a  750f                 jne 0x7ed78b
// 007ed77c  53                   push ebx
// 007ed77d  8d4e74               lea ecx, [esi + 0x74]
// 007ed780  ff15acfc8900         call dword ptr [0x89fcac]
// 007ed786  50                   push eax
// 007ed787  8bcf                 mov ecx, edi
// 007ed789  eb48                 jmp 0x7ed7d3
// 007ed78b  8d5e74               lea ebx, [esi + 0x74]
// 007ed78e  50                   push eax
// 007ed78f  8bcb                 mov ecx, ebx
// 007ed791  ff15acfc8900         call dword ptr [0x89fcac]
// 007ed797  50                   push eax
// 007ed798  8bcf                 mov ecx, edi
// 007ed79a  ff1508fa8900         call dword ptr [0x89fa08]
// 007ed7a0  8bcb                 mov ecx, ebx
// 007ed7a2  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed7a8  8bcd                 mov ecx, ebp
// 007ed7aa  89442414             mov dword ptr [esp + 0x14], eax
// 007ed7ae  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed7b4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007ed7b8  3bc8                 cmp ecx, eax
// 007ed7ba  741d                 je 0x7ed7d9
// 007ed7bc  6a00                 push 0
// 007ed7be  6a00                 push 0
// 007ed7c0  8bcb                 mov ecx, ebx
// 007ed7c2  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ed7c8  50                   push eax
// 007ed7c9  8bce                 mov ecx, esi
// 007ed7cb  e870f8ffff           call 0x7ed040
// 007ed7d0  57                   push edi
// 007ed7d1  8bcb                 mov ecx, ebx
// 007ed7d3  ff1508fa8900         call dword ptr [0x89fa08]
// 007ed7d9  33c0                 xor eax, eax
// 007ed7db  8bcf                 mov ecx, edi
// 007ed7dd  894664               mov dword ptr [esi + 0x64], eax
// 007ed7e0  894668               mov dword ptr [esi + 0x68], eax
// 007ed7e3  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007ed7e9  50                   push eax
// 007ed7ea  8bce                 mov ecx, esi
// 007ed7ec  e8fbb5f2ff           call 0x718dec
// 007ed7f1  57                   push edi
// 007ed7f2  8d4e78               lea ecx, [esi + 0x78]
// 007ed7f5  ff1508fa8900         call dword ptr [0x89fa08]
// 007ed7fb  5f                   pop edi
// 007ed7fc  5e                   pop esi
// 007ed7fd  5d                   pop ebp
// 007ed7fe  b801000000           mov eax, 1
// 007ed803  5b                   pop ebx
// 007ed804  c20c00               ret 0xc
// copied from an identical function in another client (function ?SetEditMask@?$CXTMaskEditT@VCEdit@@@@UAEHPBD00@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp