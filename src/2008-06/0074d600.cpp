// roc 2008-06 0074d600  unit: CXTPReportInplaceEdit  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0074d600
//
// 0074d600  6aff                 push -1
// 0074d602  68fb857e00           push 0x7e85fb
// 0074d607  64a100000000         mov eax, dword ptr fs:[0]
// 0074d60d  50                   push eax
// 0074d60e  51                   push ecx
// 0074d60f  56                   push esi
// 0074d610  57                   push edi
// 0074d611  a1c05c9600           mov eax, dword ptr [0x965cc0]
// 0074d616  33c4                 xor eax, esp
// 0074d618  50                   push eax
// 0074d619  8d442410             lea eax, [esp + 0x10]
// 0074d61d  64a300000000         mov dword ptr fs:[0], eax
// 0074d623  8bf1                 mov esi, ecx
// 0074d625  8974240c             mov dword ptr [esp + 0xc], esi
// 0074d629  8d7e54               lea edi, [esi + 0x54]
// 0074d62c  c706443e8600         mov dword ptr [esi], 0x863e44
// 0074d632  c707343e8600         mov dword ptr [edi], 0x863e34
// 0074d638  8d8e80000000         lea ecx, [esi + 0x80]
// 0074d63e  c744241803000000     mov dword ptr [esp + 0x18], 3
// 0074d646  c70128b28100         mov dword ptr [ecx], 0x81b228
// 0074d64c  e84f3bccff           call 0x4111a0
// 0074d651  8d4e7c               lea ecx, [esi + 0x7c]
// 0074d654  ff15143f8000         call dword ptr [0x803f14]
// 0074d65a  8d4e78               lea ecx, [esi + 0x78]
// 0074d65d  ff15143f8000         call dword ptr [0x803f14]
// 0074d663  8bcf                 mov ecx, edi
// 0074d665  c644241800           mov byte ptr [esp + 0x18], 0
// 0074d66a  e881feffff           call 0x74d4f0
// 0074d66f  8bce                 mov ecx, esi
// 0074d671  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0074d679  e86ee90600           call 0x7bbfec
// 0074d67e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0074d682  64890d00000000       mov dword ptr fs:[0], ecx
// 0074d689  59                   pop ecx
// 0074d68a  5f                   pop edi
// 0074d68b  5e                   pop esi
// 0074d68c  83c410               add esp, 0x10
// 0074d68f  c3                   ret 
// library xtp-11.2.2-lib-strlen/Source\ReportControl\XTPReportInplaceControls.cpp (function ??1CXTPReportInplaceEdit@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportInplaceControls.cpp
