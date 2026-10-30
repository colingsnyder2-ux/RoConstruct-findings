// roc 2009-12 0089e1e0  unit: CXTPReportPaintManager  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089e1e0
//
// 0089e1e0  83ec10               sub esp, 0x10
// 0089e1e3  56                   push esi
// 0089e1e4  57                   push edi
// 0089e1e5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0089e1e9  57                   push edi
// 0089e1ea  8d4c240c             lea ecx, [esp + 0xc]
// 0089e1ee  e8ddd0faff           call 0x84b2d0
// 0089e1f3  e8d817f9ff           call 0x82f9d0
// 0089e1f8  6a0f                 push 0xf
// 0089e1fa  8bc8                 mov ecx, eax
// 0089e1fc  e8ff0ef9ff           call 0x82f100
// 0089e201  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0089e205  50                   push eax
// 0089e206  8d44240c             lea eax, [esp + 0xc]
// 0089e20a  50                   push eax
// 0089e20b  8bce                 mov ecx, esi
// 0089e20d  e8ec63f5ff           call 0x7f45fe
// 0089e212  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 0089e219  7422                 je 0x89e23d
// 0089e21b  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0089e222  7419                 je 0x89e23d
// 0089e224  e8a717f9ff           call 0x82f9d0
// 0089e229  6a05                 push 5
// 0089e22b  8bc8                 mov ecx, eax
// 0089e22d  e8ce0ef9ff           call 0x82f100
// 0089e232  8bf8                 mov edi, eax
// 0089e234  e89717f9ff           call 0x82f9d0
// 0089e239  6a15                 push 0x15
// 0089e23b  eb52                 jmp 0x89e28f
// 0089e23d  e88e17f9ff           call 0x82f9d0
// 0089e242  6a15                 push 0x15
// 0089e244  8bc8                 mov ecx, eax
// 0089e246  e8b50ef9ff           call 0x82f100
// 0089e24b  8bf8                 mov edi, eax
// 0089e24d  e87e17f9ff           call 0x82f9d0
// 0089e252  6a0f                 push 0xf
// 0089e254  8bc8                 mov ecx, eax
// 0089e256  e8a50ef9ff           call 0x82f100
// 0089e25b  57                   push edi
// 0089e25c  50                   push eax
// 0089e25d  8d542410             lea edx, [esp + 0x10]
// 0089e261  52                   push edx
// 0089e262  8bce                 mov ecx, esi
// 0089e264  e88f63f5ff           call 0x7f45f8
// 0089e269  6aff                 push -1
// 0089e26b  6aff                 push -1
// 0089e26d  8d442410             lea eax, [esp + 0x10]
// 0089e271  50                   push eax
// 0089e272  ff1558ca9800         call dword ptr [0x98ca58]
// 0089e278  e85317f9ff           call 0x82f9d0
// 0089e27d  6a10                 push 0x10
// 0089e27f  8bc8                 mov ecx, eax
// 0089e281  e87a0ef9ff           call 0x82f100
// 0089e286  8bf8                 mov edi, eax
// 0089e288  e84317f9ff           call 0x82f9d0
// 0089e28d  6a05                 push 5
// 0089e28f  8bc8                 mov ecx, eax
// 0089e291  e86a0ef9ff           call 0x82f100
// 0089e296  57                   push edi
// 0089e297  50                   push eax
// 0089e298  8d4c2410             lea ecx, [esp + 0x10]
// 0089e29c  51                   push ecx
// 0089e29d  8bce                 mov ecx, esi
// 0089e29f  e85463f5ff           call 0x7f45f8
// 0089e2a4  5f                   pop edi
// 0089e2a5  5e                   pop esi
// 0089e2a6  83c410               add esp, 0x10
// 0089e2a9  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawInplaceButtonFrame@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
