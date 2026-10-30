// roc 2009-12 00865f70  unit: PAVCXTPPropertyGridItemConstraint::?$CArray  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865f70
//
// 00865f70  56                   push esi
// 00865f71  57                   push edi
// 00865f72  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00865f76  8bf1                 mov esi, ecx
// 00865f78  85ff                 test edi, edi
// 00865f7a  7507                 jne 0x865f83
// 00865f7c  5f                   pop edi
// 00865f7d  33c0                 xor eax, eax
// 00865f7f  5e                   pop esi
// 00865f80  c20800               ret 8
// 00865f83  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 00865f8a  0f84ae000000         je 0x86603e
// 00865f90  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00865f94  85c9                 test ecx, ecx
// 00865f96  7c0b                 jl 0x865fa3
// 00865f98  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00865f9e  3b4828               cmp ecx, dword ptr [eax + 0x28]
// 00865fa1  7e09                 jle 0x865fac
// 00865fa3  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 00865fa9  8b4828               mov ecx, dword ptr [eax + 0x28]
// 00865fac  6a01                 push 1
// 00865fae  57                   push edi
// 00865faf  51                   push ecx
// 00865fb0  8d4820               lea ecx, [eax + 0x20]
// 00865fb3  e8887b0800           call 0x8edb40
// 00865fb8  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 00865fbe  8987bc000000         mov dword ptr [edi + 0xbc], eax
// 00865fc4  89b7b8000000         mov dword ptr [edi + 0xb8], esi
// 00865fca  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 00865fd0  41                   inc ecx
// 00865fd1  51                   push ecx
// 00865fd2  8bcf                 mov ecx, edi
// 00865fd4  e847ffffff           call 0x865f20
// 00865fd9  8b17                 mov edx, dword ptr [edi]
// 00865fdb  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00865fe1  8bcf                 mov ecx, edi
// 00865fe3  ffd0                 call eax
// 00865fe5  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 00865fec  7450                 je 0x86603e
// 00865fee  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00865ff5  741d                 je 0x866014
// 00865ff7  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 00865ffd  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 00866003  6a01                 push 1
// 00866005  6a01                 push 1
// 00866007  52                   push edx
// 00866008  e883430000           call 0x86a390
// 0086600d  8bc7                 mov eax, edi
// 0086600f  5f                   pop edi
// 00866010  5e                   pop esi
// 00866011  c20800               ret 8
// 00866014  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0086601a  85c0                 test eax, eax
// 0086601c  7420                 je 0x86603e
// 0086601e  83782000             cmp dword ptr [eax + 0x20], 0
// 00866022  741a                 je 0x86603e
// 00866024  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0086602a  83792801             cmp dword ptr [ecx + 0x28], 1
// 0086602e  750e                 jne 0x86603e
// 00866030  8b5020               mov edx, dword ptr [eax + 0x20]
// 00866033  6a00                 push 0
// 00866035  6a00                 push 0
// 00866037  52                   push edx
// 00866038  ff15e8cb9800         call dword ptr [0x98cbe8]
// 0086603e  8bc7                 mov eax, edi
// 00866040  5f                   pop edi
// 00866041  5e                   pop esi
// 00866042  c20800               ret 8
// copied from an identical function in another client (function ?InsertChildItem@CXTPPropertyGridItem@@QAEPAV1@HPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp