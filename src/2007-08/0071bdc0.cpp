// from server: 100% by tester
// roc 2008-06 0079cab0  unit: CXTPTabPaintManager::CColorSetVisualStudio  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079cab0
//
// 0079cab0  56                   push esi
// 0079cab1  8bf1                 mov esi, ecx
// 0079cab3  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079cab9  e80246f7ff           call 0x7110c0
// 0079cabe  83f807               cmp eax, 7
// 0079cac1  0f8495000000         je 0x79cb5c
// 0079cac7  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0079cacd  e8ee45f7ff           call 0x7110c0
// 0079cad2  83f804               cmp eax, 4
// 0079cad5  0f8481000000         je 0x79cb5c
// 0079cadb  57                   push edi
// 0079cadc  e85f32f4ff           call 0x6dfd40
// 0079cae1  6a12                 push 0x12
// 0079cae3  8bc8                 mov ecx, eax
// 0079cae5  e8362af4ff           call 0x6df520
// 0079caea  8bf0                 mov esi, eax
// 0079caec  e84f32f4ff           call 0x6dfd40
// 0079caf1  6a0f                 push 0xf
// 0079caf3  8bc8                 mov ecx, eax
// 0079caf5  e8262af4ff           call 0x6df520
// 0079cafa  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079cafe  83792000             cmp dword ptr [ecx + 0x20], 0
// 0079cb02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0079cb06  7437                 je 0x79cb3f
// 0079cb08  83792400             cmp dword ptr [ecx + 0x24], 0
// 0079cb0c  741b                 je 0x79cb29
// 0079cb0e  50                   push eax
// 0079cb0f  56                   push esi
// 0079cb10  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0079cb14  56                   push esi
// 0079cb15  8bcf                 mov ecx, edi
// 0079cb17  e83c48f0ff           call 0x6a1358
// 0079cb1c  6a01                 push 1
// 0079cb1e  6a01                 push 1
// 0079cb20  56                   push esi
// 0079cb21  ff15682d8000         call dword ptr [0x802d68]
// 0079cb27  eb16                 jmp 0x79cb3f
// 0079cb29  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0079cb2c  394a10               cmp dword ptr [edx + 0x10], ecx
// 0079cb2f  750e                 jne 0x79cb3f
// 0079cb31  56                   push esi
// 0079cb32  50                   push eax
// 0079cb33  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0079cb37  50                   push eax
// 0079cb38  8bcf                 mov ecx, edi
// 0079cb3a  e81948f0ff           call 0x6a1358
// 0079cb3f  e8fc31f4ff           call 0x6dfd40
// 0079cb44  6a31                 push 0x31
// 0079cb46  8bc8                 mov ecx, eax
// 0079cb48  e8d329f4ff           call 0x6df520
// 0079cb4d  8b17                 mov edx, dword ptr [edi]
// 0079cb4f  50                   push eax
// 0079cb50  8b4238               mov eax, dword ptr [edx + 0x38]
// 0079cb53  8bcf                 mov ecx, edi
// 0079cb55  ffd0                 call eax
// 0079cb57  5f                   pop edi
// 0079cb58  5e                   pop esi
// 0079cb59  c20c00               ret 0xc
// 0079cb5c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0079cb60  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0079cb64  8b442408             mov eax, dword ptr [esp + 8]
// 0079cb68  51                   push ecx
// 0079cb69  52                   push edx
// 0079cb6a  50                   push eax
// 0079cb6b  8bce                 mov ecx, esi
// 0079cb6d  e8eefdffff           call 0x79c960
// 0079cb72  5e                   pop esi
// 0079cb73  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillNavigateButton@CColorSetVisualStudio@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp
