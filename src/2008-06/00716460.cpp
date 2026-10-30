// from server: 100% by auto
// roc 2008-06 00716460  unit: CXTPPropertyGridView  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00716460
//
// 00716460  56                   push esi
// 00716461  57                   push edi
// 00716462  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00716466  8d44240c             lea eax, [esp + 0xc]
// 0071646a  50                   push eax
// 0071646b  8bf1                 mov esi, ecx
// 0071646d  c70700000000         mov dword ptr [edi], 0
// 00716473  e8281efdff           call 0x6e82a0
// 00716478  85c0                 test eax, eax
// 0071647a  7f0a                 jg 0x716486
// 0071647c  5f                   pop edi
// 0071647d  b857000780           mov eax, 0x80070057
// 00716482  5e                   pop esi
// 00716483  c21400               ret 0x14
// 00716486  48                   dec eax
// 00716487  50                   push eax
// 00716488  8d4eac               lea ecx, [esi - 0x54]
// 0071648b  e8c0edffff           call 0x715250
// 00716490  85c0                 test eax, eax
// 00716492  74e8                 je 0x71647c
// 00716494  6a01                 push 1
// 00716496  8bc8                 mov ecx, eax
// 00716498  e89d5b0a00           call 0x7bc03a
// 0071649d  8907                 mov dword ptr [edi], eax
// 0071649f  5f                   pop edi
// 007164a0  33c0                 xor eax, eax
// 007164a2  5e                   pop esi
// 007164a3  c21400               ret 0x14
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?GetAccessibleChild@CXTPPropertyGridView@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridView.cpp
