// roc 2012-06 00a27920  unit: CXTPReportPaintManager  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a27920
//
// 00a27920  83ec10               sub esp, 0x10
// 00a27923  56                   push esi
// 00a27924  57                   push edi
// 00a27925  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00a27929  57                   push edi
// 00a2792a  8d4c240c             lea ecx, [esp + 0xc]
// 00a2792e  e86dd8faff           call 0x9d51a0
// 00a27933  e8285ff9ff           call 0x9bd860
// 00a27938  6a0f                 push 0xf
// 00a2793a  8bc8                 mov ecx, eax
// 00a2793c  e89f56f9ff           call 0x9bcfe0
// 00a27941  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00a27945  50                   push eax
// 00a27946  8d44240c             lea eax, [esp + 0xc]
// 00a2794a  50                   push eax
// 00a2794b  8bce                 mov ecx, esi
// 00a2794d  e85ab5f5ff           call 0x982eac
// 00a27952  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 00a27959  7422                 je 0xa2797d
// 00a2795b  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 00a27962  7419                 je 0xa2797d
// 00a27964  e8f75ef9ff           call 0x9bd860
// 00a27969  6a05                 push 5
// 00a2796b  8bc8                 mov ecx, eax
// 00a2796d  e86e56f9ff           call 0x9bcfe0
// 00a27972  8bf8                 mov edi, eax
// 00a27974  e8e75ef9ff           call 0x9bd860
// 00a27979  6a15                 push 0x15
// 00a2797b  eb52                 jmp 0xa279cf
// 00a2797d  e8de5ef9ff           call 0x9bd860
// 00a27982  6a15                 push 0x15
// 00a27984  8bc8                 mov ecx, eax
// 00a27986  e85556f9ff           call 0x9bcfe0
// 00a2798b  8bf8                 mov edi, eax
// 00a2798d  e8ce5ef9ff           call 0x9bd860
// 00a27992  6a0f                 push 0xf
// 00a27994  8bc8                 mov ecx, eax
// 00a27996  e84556f9ff           call 0x9bcfe0
// 00a2799b  57                   push edi
// 00a2799c  50                   push eax
// 00a2799d  8d542410             lea edx, [esp + 0x10]
// 00a279a1  52                   push edx
// 00a279a2  8bce                 mov ecx, esi
// 00a279a4  e8fdb4f5ff           call 0x982ea6
// 00a279a9  6aff                 push -1
// 00a279ab  6aff                 push -1
// 00a279ad  8d442410             lea eax, [esp + 0x10]
// 00a279b1  50                   push eax
// 00a279b2  ff154c3bb200         call dword ptr [0xb23b4c]
// 00a279b8  e8a35ef9ff           call 0x9bd860
// 00a279bd  6a10                 push 0x10
// 00a279bf  8bc8                 mov ecx, eax
// 00a279c1  e81a56f9ff           call 0x9bcfe0
// 00a279c6  8bf8                 mov edi, eax
// 00a279c8  e8935ef9ff           call 0x9bd860
// 00a279cd  6a05                 push 5
// 00a279cf  8bc8                 mov ecx, eax
// 00a279d1  e80a56f9ff           call 0x9bcfe0
// 00a279d6  57                   push edi
// 00a279d7  50                   push eax
// 00a279d8  8d4c2410             lea ecx, [esp + 0x10]
// 00a279dc  51                   push ecx
// 00a279dd  8bce                 mov ecx, esi
// 00a279df  e8c2b4f5ff           call 0x982ea6
// 00a279e4  5f                   pop edi
// 00a279e5  5e                   pop esi
// 00a279e6  83c410               add esp, 0x10
// 00a279e9  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawInplaceButtonFrame@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
