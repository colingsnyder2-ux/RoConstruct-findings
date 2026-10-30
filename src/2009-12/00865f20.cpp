// roc 2009-12 00865f20  unit: PAVCXTPPropertyGridItemConstraint::?$CArray  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865f20
//
// 00865f20  8b442404             mov eax, dword ptr [esp + 4]
// 00865f24  56                   push esi
// 00865f25  57                   push edi
// 00865f26  8bf9                 mov edi, ecx
// 00865f28  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00865f2e  33f6                 xor esi, esi
// 00865f30  898784000000         mov dword ptr [edi + 0x84], eax
// 00865f36  397128               cmp dword ptr [ecx + 0x28], esi
// 00865f39  7e26                 jle 0x865f61
// 00865f3b  53                   push ebx
// 00865f3c  8d5801               lea ebx, [eax + 1]
// 00865f3f  90                   nop 
// 00865f40  8b8fc0000000         mov ecx, dword ptr [edi + 0xc0]
// 00865f46  53                   push ebx
// 00865f47  56                   push esi
// 00865f48  e8d3fcffff           call 0x865c20
// 00865f4d  8bc8                 mov ecx, eax
// 00865f4f  e8ccffffff           call 0x865f20
// 00865f54  8b97c0000000         mov edx, dword ptr [edi + 0xc0]
// 00865f5a  46                   inc esi
// 00865f5b  3b7228               cmp esi, dword ptr [edx + 0x28]
// 00865f5e  7ce0                 jl 0x865f40
// 00865f60  5b                   pop ebx
// 00865f61  5f                   pop edi
// 00865f62  5e                   pop esi
// 00865f63  c20400               ret 4
// copied from an identical function in another client (function ?SetIndent@CXTPPropertyGridItem@@AAEXH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp