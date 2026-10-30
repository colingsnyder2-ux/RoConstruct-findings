// roc 2009-12 0082ae10  unit: PAVCXTPReportRecordItem::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082ae10
//
// 0082ae10  56                   push esi
// 0082ae11  57                   push edi
// 0082ae12  8bf9                 mov edi, ecx
// 0082ae14  8b7728               mov esi, dword ptr [edi + 0x28]
// 0082ae17  83ee01               sub esi, 1
// 0082ae1a  781d                 js 0x82ae39
// 0082ae1c  8d642400             lea esp, [esp]
// 0082ae20  85f6                 test esi, esi
// 0082ae22  7c37                 jl 0x82ae5b
// 0082ae24  3b7728               cmp esi, dword ptr [edi + 0x28]
// 0082ae27  7d32                 jge 0x82ae5b
// 0082ae29  8b4724               mov eax, dword ptr [edi + 0x24]
// 0082ae2c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0082ae2f  e8a88ffcff           call 0x7f3ddc
// 0082ae34  83ee01               sub esi, 1
// 0082ae37  79e7                 jns 0x82ae20
// 0082ae39  6aff                 push -1
// 0082ae3b  6a00                 push 0
// 0082ae3d  8d4f20               lea ecx, [edi + 0x20]
// 0082ae40  e85ba50200           call 0x8553a0
// 0082ae45  8b4f3c               mov ecx, dword ptr [edi + 0x3c]
// 0082ae48  85c9                 test ecx, ecx
// 0082ae4a  740c                 je 0x82ae58
// 0082ae4c  e88b8ffcff           call 0x7f3ddc
// 0082ae51  c7473c00000000       mov dword ptr [edi + 0x3c], 0
// 0082ae58  5f                   pop edi
// 0082ae59  5e                   pop esi
// 0082ae5a  c3                   ret 
// 0082ae5b  e8ac8cfcff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveAll@CXTPReportRecord@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp