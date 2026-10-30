// roc 2009-06 00752660  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00752660
//
// 00752660  8b542404             mov edx, dword ptr [esp + 4]
// 00752664  53                   push ebx
// 00752665  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00752669  56                   push esi
// 0075266a  8bf1                 mov esi, ecx
// 0075266c  8d0c1a               lea ecx, [edx + ebx]
// 0075266f  85d2                 test edx, edx
// 00752671  7c46                 jl 0x7526b9
// 00752673  85db                 test ebx, ebx
// 00752675  7c42                 jl 0x7526b9
// 00752677  8b4608               mov eax, dword ptr [esi + 8]
// 0075267a  3bc8                 cmp ecx, eax
// 0075267c  7f3b                 jg 0x7526b9
// 0075267e  3bca                 cmp ecx, edx
// 00752680  7c37                 jl 0x7526b9
// 00752682  3bcb                 cmp ecx, ebx
// 00752684  7c33                 jl 0x7526b9
// 00752686  2bc1                 sub eax, ecx
// 00752688  57                   push edi
// 00752689  8bf8                 mov edi, eax
// 0075268b  7423                 je 0x7526b0
// 0075268d  8b4604               mov eax, dword ptr [esi + 4]
// 00752690  8d0c88               lea ecx, [eax + ecx*4]
// 00752693  8d1490               lea edx, [eax + edx*4]
// 00752696  8d04bd00000000       lea eax, [edi*4]
// 0075269d  50                   push eax
// 0075269e  51                   push ecx
// 0075269f  50                   push eax
// 007526a0  52                   push edx
// 007526a1  ff155ce98900         call dword ptr [0x89e95c]
// 007526a7  50                   push eax
// 007526a8  e87306cbff           call 0x402d20
// 007526ad  83c414               add esp, 0x14
// 007526b0  295e08               sub dword ptr [esi + 8], ebx
// 007526b3  5f                   pop edi
// 007526b4  5e                   pop esi
// 007526b5  5b                   pop ebx
// 007526b6  c20800               ret 8
// 007526b9  e82666fcff           call 0x718ce4
// copied from an identical function in another client (function ?RemoveAt@?$CArray@PAVCXTPPropertyGridItem@@PAV1@@@QAEXHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\PropertyGrid\XTPPropertyGridItem.cpp