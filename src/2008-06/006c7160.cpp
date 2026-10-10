// roc 2008-06 006c7160  unit: CInstanceRecord::CNameItem  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7160
//
// 006c7160  56                   push esi
// 006c7161  8bf1                 mov esi, ecx
// 006c7163  e8424e0f00           call 0x7bbfaa
// 006c7168  8d4e2c               lea ecx, [esi + 0x2c]
// 006c716b  c70634348500         mov dword ptr [esi], 0x853434
// 006c7171  ff15043f8000         call dword ptr [0x803f04]
// 006c7177  83c8ff               or eax, 0xffffffff
// 006c717a  33c9                 xor ecx, ecx
// 006c717c  894624               mov dword ptr [esi + 0x24], eax
// 006c717f  894628               mov dword ptr [esi + 0x28], eax
// 006c7182  894630               mov dword ptr [esi + 0x30], eax
// 006c7185  89463c               mov dword ptr [esi + 0x3c], eax
// 006c7188  894e20               mov dword ptr [esi + 0x20], ecx
// 006c718b  c7463408020000       mov dword ptr [esi + 0x34], 0x208
// 006c7192  894e38               mov dword ptr [esi + 0x38], ecx
// 006c7195  8bc6                 mov eax, esi
// 006c7197  5e                   pop esi
// 006c7198  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ??0XTP_REPORTRECORDITEM_METRICS@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
