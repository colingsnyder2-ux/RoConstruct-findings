// roc 2012-06 00a72db0  unit: PAVCXTPRibbonGroup::?$CArray  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a72db0
//
// 00a72db0  55                   push ebp
// 00a72db1  57                   push edi
// 00a72db2  8be9                 mov ebp, ecx
// 00a72db4  e847ffffff           call 0xa72d00
// 00a72db9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a72dbd  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a72dc0  33ff                 xor edi, edi
// 00a72dc2  85c0                 test eax, eax
// 00a72dc4  7e4e                 jle 0xa72e14
// 00a72dc6  53                   push ebx
// 00a72dc7  56                   push esi
// 00a72dc8  85ff                 test edi, edi
// 00a72dca  7c11                 jl 0xa72ddd
// 00a72dcc  3bf8                 cmp edi, eax
// 00a72dce  7d0d                 jge 0xa72ddd
// 00a72dd0  3b7928               cmp edi, dword ptr [ecx + 0x28]
// 00a72dd3  7d44                 jge 0xa72e19
// 00a72dd5  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a72dd8  8b1cb8               mov ebx, dword ptr [eax + edi*4]
// 00a72ddb  eb02                 jmp 0xa72ddf
// 00a72ddd  33db                 xor ebx, ebx
// 00a72ddf  8b13                 mov edx, dword ptr [ebx]
// 00a72de1  8b02                 mov eax, dword ptr [edx]
// 00a72de3  8bcb                 mov ecx, ebx
// 00a72de5  ffd0                 call eax
// 00a72de7  8bc8                 mov ecx, eax
// 00a72de9  e8fefcf0ff           call 0x982aec
// 00a72dee  8bf0                 mov esi, eax
// 00a72df0  56                   push esi
// 00a72df1  57                   push edi
// 00a72df2  8bcd                 mov ecx, ebp
// 00a72df4  e867ffffff           call 0xa72d60
// 00a72df9  8b16                 mov edx, dword ptr [esi]
// 00a72dfb  8b425c               mov eax, dword ptr [edx + 0x5c]
// 00a72dfe  53                   push ebx
// 00a72dff  8bce                 mov ecx, esi
// 00a72e01  ffd0                 call eax
// 00a72e03  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a72e07  896e30               mov dword ptr [esi + 0x30], ebp
// 00a72e0a  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a72e0d  47                   inc edi
// 00a72e0e  3bf8                 cmp edi, eax
// 00a72e10  7cb6                 jl 0xa72dc8
// 00a72e12  5e                   pop esi
// 00a72e13  5b                   pop ebx
// 00a72e14  5f                   pop edi
// 00a72e15  5d                   pop ebp
// 00a72e16  c20400               ret 4
// 00a72e19  e8a2f5f0ff           call 0x9823c0
// copied from an identical function in another client (function ?Copy@CXTPRibbonGroups@@QAEXPAV1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonGroups.cpp