// roc 2009-12 0083dfc0  unit: CXTPCustomizeSheet  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0083dfc0
//
// 0083dfc0  8b81b8000000         mov eax, dword ptr [ecx + 0xb8]
// 0083dfc6  53                   push ebx
// 0083dfc7  8b5858               mov ebx, dword ptr [eax + 0x58]
// 0083dfca  53                   push ebx
// 0083dfcb  e890feffff           call 0x83de60
// 0083dfd0  85c0                 test eax, eax
// 0083dfd2  742d                 je 0x83e001
// 0083dfd4  56                   push esi
// 0083dfd5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0083dfd9  8b16                 mov edx, dword ptr [esi]
// 0083dfdb  8b02                 mov eax, dword ptr [edx]
// 0083dfdd  57                   push edi
// 0083dfde  6a01                 push 1
// 0083dfe0  8bce                 mov ecx, esi
// 0083dfe2  ffd0                 call eax
// 0083dfe4  8b3e                 mov edi, dword ptr [esi]
// 0083dfe6  8bcb                 mov ecx, ebx
// 0083dfe8  e8a37cfbff           call 0x7f5c90
// 0083dfed  8b5704               mov edx, dword ptr [edi + 4]
// 0083dff0  48                   dec eax
// 0083dff1  f7d8                 neg eax
// 0083dff3  1bc0                 sbb eax, eax
// 0083dff5  40                   inc eax
// 0083dff6  50                   push eax
// 0083dff7  8bce                 mov ecx, esi
// 0083dff9  ffd2                 call edx
// 0083dffb  5f                   pop edi
// 0083dffc  5e                   pop esi
// 0083dffd  5b                   pop ebx
// 0083dffe  c20400               ret 4
// 0083e001  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0083e005  8b01                 mov eax, dword ptr [ecx]
// 0083e007  8b10                 mov edx, dword ptr [eax]
// 0083e009  5b                   pop ebx
// 0083e00a  c744240400000000     mov dword ptr [esp + 4], 0
// 0083e012  ffe2                 jmp edx
// copied from an identical function in another client (function ?OnUpdateCustomizeTextOnly@CXTPCustomizeSheet@@IAEXPAVCCmdUI@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCustomizeSheet.cpp