// roc 2008-06 00712790  unit: PAVCXTPPropertyGridItemConstraint::?$CArray  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00712790
//
// 00712790  56                   push esi
// 00712791  57                   push edi
// 00712792  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00712796  8bf1                 mov esi, ecx
// 00712798  85ff                 test edi, edi
// 0071279a  7507                 jne 0x7127a3
// 0071279c  5f                   pop edi
// 0071279d  33c0                 xor eax, eax
// 0071279f  5e                   pop esi
// 007127a0  c20800               ret 8
// 007127a3  83bebc00000000       cmp dword ptr [esi + 0xbc], 0
// 007127aa  0f84ae000000         je 0x71285e
// 007127b0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007127b4  85c9                 test ecx, ecx
// 007127b6  7c0b                 jl 0x7127c3
// 007127b8  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 007127be  3b4828               cmp ecx, dword ptr [eax + 0x28]
// 007127c1  7e09                 jle 0x7127cc
// 007127c3  8b86c0000000         mov eax, dword ptr [esi + 0xc0]
// 007127c9  8b4828               mov ecx, dword ptr [eax + 0x28]
// 007127cc  6a01                 push 1
// 007127ce  57                   push edi
// 007127cf  51                   push ecx
// 007127d0  8d4820               lea ecx, [eax + 0x20]
// 007127d3  e828940600           call 0x77bc00
// 007127d8  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 007127de  8987bc000000         mov dword ptr [edi + 0xbc], eax
// 007127e4  89b7b8000000         mov dword ptr [edi + 0xb8], esi
// 007127ea  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 007127f0  41                   inc ecx
// 007127f1  51                   push ecx
// 007127f2  8bcf                 mov ecx, edi
// 007127f4  e847ffffff           call 0x712740
// 007127f9  8b17                 mov edx, dword ptr [edi]
// 007127fb  8b82cc000000         mov eax, dword ptr [edx + 0xcc]
// 00712801  8bcf                 mov ecx, edi
// 00712803  ffd0                 call eax
// 00712805  83be9400000000       cmp dword ptr [esi + 0x94], 0
// 0071280c  7450                 je 0x71285e
// 0071280e  83bea000000000       cmp dword ptr [esi + 0xa0], 0
// 00712815  741d                 je 0x712834
// 00712817  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0071281d  8b91dc000000         mov edx, dword ptr [ecx + 0xdc]
// 00712823  6a01                 push 1
// 00712825  6a01                 push 1
// 00712827  52                   push edx
// 00712828  e8a3430000           call 0x716bd0
// 0071282d  8bc7                 mov eax, edi
// 0071282f  5f                   pop edi
// 00712830  5e                   pop esi
// 00712831  c20800               ret 8
// 00712834  8b86bc000000         mov eax, dword ptr [esi + 0xbc]
// 0071283a  85c0                 test eax, eax
// 0071283c  7420                 je 0x71285e
// 0071283e  83782000             cmp dword ptr [eax + 0x20], 0
// 00712842  741a                 je 0x71285e
// 00712844  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 0071284a  83792801             cmp dword ptr [ecx + 0x28], 1
// 0071284e  750e                 jne 0x71285e
// 00712850  8b5020               mov edx, dword ptr [eax + 0x20]
// 00712853  6a00                 push 0
// 00712855  6a00                 push 0
// 00712857  52                   push edx
// 00712858  ff15182e8000         call dword ptr [0x802e18]
// 0071285e  8bc7                 mov eax, edi
// 00712860  5f                   pop edi
// 00712861  5e                   pop esi
// 00712862  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\PropertyGrid\XTPPropertyGridItem.cpp (function ?InsertChildItem@CXTPPropertyGridItem@@QAEPAV1@HPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/PropertyGrid/XTPPropertyGridItem.cpp
