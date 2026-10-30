// roc 2009-12 008008a0  unit: CXTPPaintManager  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008008a0
//
// 008008a0  83ec10               sub esp, 0x10
// 008008a3  56                   push esi
// 008008a4  8bf1                 mov esi, ecx
// 008008a6  837e6800             cmp dword ptr [esi + 0x68], 0
// 008008aa  57                   push edi
// 008008ab  7455                 je 0x800902
// 008008ad  8dbe2c010000         lea edi, [esi + 0x12c]
// 008008b3  8bcf                 mov ecx, edi
// 008008b5  e806b30600           call 0x86bbc0
// 008008ba  85c0                 test eax, eax
// 008008bc  7444                 je 0x800902
// 008008be  8b442420             mov eax, dword ptr [esp + 0x20]
// 008008c2  50                   push eax
// 008008c3  8d4c240c             lea ecx, [esp + 0xc]
// 008008c7  e804aa0400           call 0x84b2d0
// 008008cc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008008d0  85c9                 test ecx, ecx
// 008008d2  7514                 jne 0x8008e8
// 008008d4  51                   push ecx
// 008008d5  50                   push eax
// 008008d6  51                   push ecx
// 008008d7  51                   push ecx
// 008008d8  51                   push ecx
// 008008d9  8bcf                 mov ecx, edi
// 008008db  e860af0600           call 0x86b840
// 008008e0  5f                   pop edi
// 008008e1  5e                   pop esi
// 008008e2  83c410               add esp, 0x10
// 008008e5  c20800               ret 8
// 008008e8  8b4904               mov ecx, dword ptr [ecx + 4]
// 008008eb  6a00                 push 0
// 008008ed  50                   push eax
// 008008ee  6a00                 push 0
// 008008f0  6a00                 push 0
// 008008f2  51                   push ecx
// 008008f3  8bcf                 mov ecx, edi
// 008008f5  e846af0600           call 0x86b840
// 008008fa  5f                   pop edi
// 008008fb  5e                   pop esi
// 008008fc  83c410               add esp, 0x10
// 008008ff  c20800               ret 8
// 00800902  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00800906  51                   push ecx
// 00800907  8d4c240c             lea ecx, [esp + 0xc]
// 0080090b  e8c0a90400           call 0x84b2d0
// 00800910  6a0f                 push 0xf
// 00800912  8bce                 mov ecx, esi
// 00800914  8bd0                 mov edx, eax
// 00800916  e825cdffff           call 0x7fd640
// 0080091b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0080091f  50                   push eax
// 00800920  52                   push edx
// 00800921  e8d83cffff           call 0x7f45fe
// 00800926  5f                   pop edi
// 00800927  5e                   pop esi
// 00800928  83c410               add esp, 0x10
// 0080092b  c20800               ret 8
// copied from an identical function in another client (function ?FillStatusBar@CXTPPaintManager@@UAEXPAVCDC@@PAVCXTPStatusBar@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPPaintManager.cpp