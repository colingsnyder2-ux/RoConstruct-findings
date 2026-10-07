// roc 2007-08 0071b800  unit: CXTPTabPaintManager::CColorSetDefault  size: 169 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b800
//
// 0071b800  51                   push ecx
// 0071b801  53                   push ebx
// 0071b802  8b5910               mov ebx, dword ptr [ecx + 0x10]
// 0071b805  83fbff               cmp ebx, -1
// 0071b808  55                   push ebp
// 0071b809  56                   push esi
// 0071b80a  57                   push edi
// 0071b80b  894c2410             mov dword ptr [esp + 0x10], ecx
// 0071b80f  7503                 jne 0x71b814
// 0071b811  8b590c               mov ebx, dword ptr [ecx + 0xc]
// 0071b814  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 0071b817  83ffff               cmp edi, -1
// 0071b81a  7503                 jne 0x71b81f
// 0071b81c  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0071b81f  3bdf                 cmp ebx, edi
// 0071b821  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0071b825  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 0071b829  7540                 jne 0x71b86b
// 0071b82b  e840d7f4ff           call 0x668f70
// 0071b830  6a0f                 push 0xf
// 0071b832  8bc8                 mov ecx, eax
// 0071b834  e837cff4ff           call 0x668770
// 0071b839  3bd8                 cmp ebx, eax
// 0071b83b  752e                 jne 0x71b86b
// 0071b83d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071b841  8b16                 mov edx, dword ptr [esi]
// 0071b843  8b5258               mov edx, dword ptr [edx + 0x58]
// 0071b846  83ec10               sub esp, 0x10
// 0071b849  8bc4                 mov eax, esp
// 0071b84b  8908                 mov dword ptr [eax], ecx
// 0071b84d  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0071b851  894804               mov dword ptr [eax + 4], ecx
// 0071b854  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0071b858  894808               mov dword ptr [eax + 8], ecx
// 0071b85b  89680c               mov dword ptr [eax + 0xc], ebp
// 0071b85e  8b442428             mov eax, dword ptr [esp + 0x28]
// 0071b862  50                   push eax
// 0071b863  8bce                 mov ecx, esi
// 0071b865  ffd2                 call edx
// 0071b867  85c0                 test eax, eax
// 0071b869  7536                 jne 0x71b8a1
// 0071b86b  8b06                 mov eax, dword ptr [esi]
// 0071b86d  8b5048               mov edx, dword ptr [eax + 0x48]
// 0071b870  8bce                 mov ecx, esi
// 0071b872  ffd2                 call edx
// 0071b874  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0071b878  8b542420             mov edx, dword ptr [esp + 0x20]
// 0071b87c  50                   push eax
// 0071b87d  57                   push edi
// 0071b87e  53                   push ebx
// 0071b87f  83ec10               sub esp, 0x10
// 0071b882  8bc4                 mov eax, esp
// 0071b884  8908                 mov dword ptr [eax], ecx
// 0071b886  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0071b88a  895004               mov dword ptr [eax + 4], edx
// 0071b88d  8b542434             mov edx, dword ptr [esp + 0x34]
// 0071b891  894808               mov dword ptr [eax + 8], ecx
// 0071b894  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0071b898  52                   push edx
// 0071b899  89680c               mov dword ptr [eax + 0xc], ebp
// 0071b89c  e86ffdffff           call 0x71b610
// 0071b8a1  5f                   pop edi
// 0071b8a2  5e                   pop esi
// 0071b8a3  5d                   pop ebp
// 0071b8a4  5b                   pop ebx
// 0071b8a5  59                   pop ecx
// 0071b8a6  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillHeader@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
