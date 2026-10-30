// roc 2009-12 00814fc0  unit: MyXTPCommandBars  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814fc0
//
// 00814fc0  53                   push ebx
// 00814fc1  55                   push ebp
// 00814fc2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00814fc6  56                   push esi
// 00814fc7  57                   push edi
// 00814fc8  55                   push ebp
// 00814fc9  8bf9                 mov edi, ecx
// 00814fcb  e800f1ffff           call 0x8140d0
// 00814fd0  8bc8                 mov ecx, eax
// 00814fd2  e819920700           call 0x88e1f0
// 00814fd7  8b9f84000000         mov ebx, dword ptr [edi + 0x84]
// 00814fdd  33f6                 xor esi, esi
// 00814fdf  85db                 test ebx, ebx
// 00814fe1  7e15                 jle 0x814ff8
// 00814fe3  56                   push esi
// 00814fe4  8bcf                 mov ecx, edi
// 00814fe6  e8f5fcffff           call 0x814ce0
// 00814feb  55                   push ebp
// 00814fec  8bc8                 mov ecx, eax
// 00814fee  e88debffff           call 0x813b80
// 00814ff3  46                   inc esi
// 00814ff4  3bf3                 cmp esi, ebx
// 00814ff6  7ceb                 jl 0x814fe3
// 00814ff8  5f                   pop edi
// 00814ff9  5e                   pop esi
// 00814ffa  5d                   pop ebp
// 00814ffb  5b                   pop ebx
// 00814ffc  c20400               ret 4
// copied from an identical function in another client (function ?OnSetPreviewMode@CXTPCommandBars@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPCommandBars.cpp