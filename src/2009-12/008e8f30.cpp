// roc 2009-12 008e8f30  unit: CXTPTabPaintManager::CColorSetWinXP  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e8f30
//
// 008e8f30  56                   push esi
// 008e8f31  8bf1                 mov esi, ecx
// 008e8f33  57                   push edi
// 008e8f34  8dbe14020000         lea edi, [esi + 0x214]
// 008e8f3a  8bcf                 mov ecx, edi
// 008e8f3c  e87f2cf8ff           call 0x86bbc0
// 008e8f41  85c0                 test eax, eax
// 008e8f43  751b                 jne 0x8e8f60
// 008e8f45  8b442414             mov eax, dword ptr [esp + 0x14]
// 008e8f49  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008e8f4d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 008e8f51  50                   push eax
// 008e8f52  51                   push ecx
// 008e8f53  52                   push edx
// 008e8f54  8bce                 mov ecx, esi
// 008e8f56  e885ebffff           call 0x8e7ae0
// 008e8f5b  5f                   pop edi
// 008e8f5c  5e                   pop esi
// 008e8f5d  c20c00               ret 0xc
// 008e8f60  8b442410             mov eax, dword ptr [esp + 0x10]
// 008e8f64  83782000             cmp dword ptr [eax + 0x20], 0
// 008e8f68  8b74240c             mov esi, dword ptr [esp + 0xc]
// 008e8f6c  7438                 je 0x8e8fa6
// 008e8f6e  83782400             cmp dword ptr [eax + 0x24], 0
// 008e8f72  7407                 je 0x8e8f7b
// 008e8f74  b903000000           mov ecx, 3
// 008e8f79  eb0e                 jmp 0x8e8f89
// 008e8f7b  8b480c               mov ecx, dword ptr [eax + 0xc]
// 008e8f7e  33d2                 xor edx, edx
// 008e8f80  394110               cmp dword ptr [ecx + 0x10], eax
// 008e8f83  0f94c2               sete dl
// 008e8f86  42                   inc edx
// 008e8f87  8bca                 mov ecx, edx
// 008e8f89  85f6                 test esi, esi
// 008e8f8b  7504                 jne 0x8e8f91
// 008e8f8d  33c0                 xor eax, eax
// 008e8f8f  eb03                 jmp 0x8e8f94
// 008e8f91  8b4604               mov eax, dword ptr [esi + 4]
// 008e8f94  8b542414             mov edx, dword ptr [esp + 0x14]
// 008e8f98  6a00                 push 0
// 008e8f9a  52                   push edx
// 008e8f9b  51                   push ecx
// 008e8f9c  6a01                 push 1
// 008e8f9e  50                   push eax
// 008e8f9f  8bcf                 mov ecx, edi
// 008e8fa1  e89a28f8ff           call 0x86b840
// 008e8fa6  e8256af4ff           call 0x82f9d0
// 008e8fab  6a12                 push 0x12
// 008e8fad  8bc8                 mov ecx, eax
// 008e8faf  e84c61f4ff           call 0x82f100
// 008e8fb4  8b16                 mov edx, dword ptr [esi]
// 008e8fb6  50                   push eax
// 008e8fb7  8b4238               mov eax, dword ptr [edx + 0x38]
// 008e8fba  8bce                 mov ecx, esi
// 008e8fbc  ffd0                 call eax
// 008e8fbe  5f                   pop edi
// 008e8fbf  5e                   pop esi
// 008e8fc0  c20c00               ret 0xc
// copied from an identical function in another client (function ?FillNavigateButton@CColorSetWinXP@CXTPTabPaintManager@@UAEXPAVCDC@@PAVCXTPTabManagerNavigateButton@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerColors.cpp