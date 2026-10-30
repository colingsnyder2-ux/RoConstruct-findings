// roc 2011-06 008af4a0  unit: CXTPReportPaintManager  size: 204 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008af4a0
//
// 008af4a0  83ec10               sub esp, 0x10
// 008af4a3  56                   push esi
// 008af4a4  57                   push edi
// 008af4a5  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 008af4a9  57                   push edi
// 008af4aa  8d4c240c             lea ecx, [esp + 0xc]
// 008af4ae  e8ddd8faff           call 0x85cd90
// 008af4b3  e8285ff9ff           call 0x8453e0
// 008af4b8  6a0f                 push 0xf
// 008af4ba  8bc8                 mov ecx, eax
// 008af4bc  e8ef56f9ff           call 0x844bb0
// 008af4c1  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 008af4c5  50                   push eax
// 008af4c6  8d44240c             lea eax, [esp + 0xc]
// 008af4ca  50                   push eax
// 008af4cb  8bce                 mov ecx, esi
// 008af4cd  e84eb9f5ff           call 0x80ae20
// 008af4d2  83bf8800000000       cmp dword ptr [edi + 0x88], 0
// 008af4d9  7422                 je 0x8af4fd
// 008af4db  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 008af4e2  7419                 je 0x8af4fd
// 008af4e4  e8f75ef9ff           call 0x8453e0
// 008af4e9  6a05                 push 5
// 008af4eb  8bc8                 mov ecx, eax
// 008af4ed  e8be56f9ff           call 0x844bb0
// 008af4f2  8bf8                 mov edi, eax
// 008af4f4  e8e75ef9ff           call 0x8453e0
// 008af4f9  6a15                 push 0x15
// 008af4fb  eb52                 jmp 0x8af54f
// 008af4fd  e8de5ef9ff           call 0x8453e0
// 008af502  6a15                 push 0x15
// 008af504  8bc8                 mov ecx, eax
// 008af506  e8a556f9ff           call 0x844bb0
// 008af50b  8bf8                 mov edi, eax
// 008af50d  e8ce5ef9ff           call 0x8453e0
// 008af512  6a0f                 push 0xf
// 008af514  8bc8                 mov ecx, eax
// 008af516  e89556f9ff           call 0x844bb0
// 008af51b  57                   push edi
// 008af51c  50                   push eax
// 008af51d  8d542410             lea edx, [esp + 0x10]
// 008af521  52                   push edx
// 008af522  8bce                 mov ecx, esi
// 008af524  e8f1b8f5ff           call 0x80ae1a
// 008af529  6aff                 push -1
// 008af52b  6aff                 push -1
// 008af52d  8d442410             lea eax, [esp + 0x10]
// 008af531  50                   push eax
// 008af532  ff15e41ba400         call dword ptr [0xa41be4]
// 008af538  e8a35ef9ff           call 0x8453e0
// 008af53d  6a10                 push 0x10
// 008af53f  8bc8                 mov ecx, eax
// 008af541  e86a56f9ff           call 0x844bb0
// 008af546  8bf8                 mov edi, eax
// 008af548  e8935ef9ff           call 0x8453e0
// 008af54d  6a05                 push 5
// 008af54f  8bc8                 mov ecx, eax
// 008af551  e85a56f9ff           call 0x844bb0
// 008af556  57                   push edi
// 008af557  50                   push eax
// 008af558  8d4c2410             lea ecx, [esp + 0x10]
// 008af55c  51                   push ecx
// 008af55d  8bce                 mov ecx, esi
// 008af55f  e8b6b8f5ff           call 0x80ae1a
// 008af564  5f                   pop edi
// 008af565  5e                   pop esi
// 008af566  83c410               add esp, 0x10
// 008af569  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportPaintManager.cpp (function ?DrawInplaceButtonFrame@CXTPReportPaintManager@@MAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportPaintManager.cpp
