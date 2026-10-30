// roc 2009-12 008586d0  unit: CXTPTabClientWnd  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008586d0
//
// 008586d0  57                   push edi
// 008586d1  8bf9                 mov edi, ecx
// 008586d3  83bfc000000000       cmp dword ptr [edi + 0xc0], 0
// 008586da  7506                 jne 0x8586e2
// 008586dc  33c0                 xor eax, eax
// 008586de  5f                   pop edi
// 008586df  c20800               ret 8
// 008586e2  56                   push esi
// 008586e3  33f6                 xor esi, esi
// 008586e5  e866dfffff           call 0x856650
// 008586ea  85c0                 test eax, eax
// 008586ec  7e2b                 jle 0x858719
// 008586ee  8bff                 mov edi, edi
// 008586f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 008586f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008586f8  50                   push eax
// 008586f9  51                   push ecx
// 008586fa  56                   push esi
// 008586fb  8bcf                 mov ecx, edi
// 008586fd  e83eeeffff           call 0x857540
// 00858702  8bc8                 mov ecx, eax
// 00858704  e8876f0700           call 0x8cf690
// 00858709  85c0                 test eax, eax
// 0085870b  750e                 jne 0x85871b
// 0085870d  8bcf                 mov ecx, edi
// 0085870f  46                   inc esi
// 00858710  e83bdfffff           call 0x856650
// 00858715  3bf0                 cmp esi, eax
// 00858717  7cd7                 jl 0x8586f0
// 00858719  33c0                 xor eax, eax
// 0085871b  5e                   pop esi
// 0085871c  5f                   pop edi
// 0085871d  c20800               ret 8
// copied from an identical function in another client (function ?HitTest@CXTPTabClientWnd@@QBEPAVCXTPTabManagerItem@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp