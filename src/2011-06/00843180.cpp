// roc 2011-06 00843180  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 141 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00843180
//
// 00843180  53                   push ebx
// 00843181  56                   push esi
// 00843182  57                   push edi
// 00843183  8bf9                 mov edi, ecx
// 00843185  33f6                 xor esi, esi
// 00843187  397728               cmp dword ptr [edi + 0x28], esi
// 0084318a  7e63                 jle 0x8431ef
// 0084318c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00843190  85f6                 test esi, esi
// 00843192  7c74                 jl 0x843208
// 00843194  3b7728               cmp esi, dword ptr [edi + 0x28]
// 00843197  7d6f                 jge 0x843208
// 00843199  8b4724               mov eax, dword ptr [edi + 0x24]
// 0084319c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0084319f  8b11                 mov edx, dword ptr [ecx]
// 008431a1  8b4260               mov eax, dword ptr [edx + 0x60]
// 008431a4  ffd0                 call eax
// 008431a6  3bc3                 cmp eax, ebx
// 008431a8  744d                 je 0x8431f7
// 008431aa  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008431ad  7d59                 jge 0x843208
// 008431af  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008431b2  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008431b5  8b11                 mov edx, dword ptr [ecx]
// 008431b7  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 008431bd  ffd0                 call eax
// 008431bf  85c0                 test eax, eax
// 008431c1  7426                 je 0x8431e9
// 008431c3  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008431c6  7d40                 jge 0x843208
// 008431c8  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008431cb  8b0cb1               mov ecx, dword ptr [ecx + esi*4]
// 008431ce  8b11                 mov edx, dword ptr [ecx]
// 008431d0  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 008431d6  ffd0                 call eax
// 008431d8  8b10                 mov edx, dword ptr [eax]
// 008431da  8bc8                 mov ecx, eax
// 008431dc  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 008431e2  53                   push ebx
// 008431e3  ffd0                 call eax
// 008431e5  85c0                 test eax, eax
// 008431e7  7508                 jne 0x8431f1
// 008431e9  46                   inc esi
// 008431ea  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008431ed  7ca1                 jl 0x843190
// 008431ef  33c0                 xor eax, eax
// 008431f1  5f                   pop edi
// 008431f2  5e                   pop esi
// 008431f3  5b                   pop ebx
// 008431f4  c20400               ret 4
// 008431f7  3b7728               cmp esi, dword ptr [edi + 0x28]
// 008431fa  7d0c                 jge 0x843208
// 008431fc  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 008431ff  8b04b1               mov eax, dword ptr [ecx + esi*4]
// 00843202  5f                   pop edi
// 00843203  5e                   pop esi
// 00843204  5b                   pop ebx
// 00843205  c20400               ret 4
// 00843208  e8fd70fcff           call 0x80a30a
// copied from an identical function in another client (function ?FindInTree@CXTPReportRows@@UAEPAVCXTPReportRow@@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp