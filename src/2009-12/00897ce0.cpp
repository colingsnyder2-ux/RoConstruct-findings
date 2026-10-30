// roc 2009-12 00897ce0  unit: CXTPRibbonBar  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897ce0
//
// 00897ce0  56                   push esi
// 00897ce1  8bf1                 mov esi, ecx
// 00897ce3  8b06                 mov eax, dword ptr [esi]
// 00897ce5  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 00897ceb  ffd2                 call edx
// 00897ced  85c0                 test eax, eax
// 00897cef  741a                 je 0x897d0b
// 00897cf1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00897cf5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00897cf9  8b542408             mov edx, dword ptr [esp + 8]
// 00897cfd  50                   push eax
// 00897cfe  51                   push ecx
// 00897cff  52                   push edx
// 00897d00  8bce                 mov ecx, esi
// 00897d02  e899f6f9ff           call 0x8373a0
// 00897d07  5e                   pop esi
// 00897d08  c20c00               ret 0xc
// 00897d0b  57                   push edi
// 00897d0c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00897d10  56                   push esi
// 00897d11  8bcf                 mov ecx, edi
// 00897d13  e8d8ccf6ff           call 0x8049f0
// 00897d18  85c0                 test eax, eax
// 00897d1a  752a                 jne 0x897d46
// 00897d1c  8b07                 mov eax, dword ptr [edi]
// 00897d1e  8b5058               mov edx, dword ptr [eax + 0x58]
// 00897d21  56                   push esi
// 00897d22  8bcf                 mov ecx, edi
// 00897d24  ffd2                 call edx
// 00897d26  8d4604               lea eax, [esi + 4]
// 00897d29  50                   push eax
// 00897d2a  ff150cb29800         call dword ptr [0x98b20c]
// 00897d30  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00897d34  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00897d38  51                   push ecx
// 00897d39  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 00897d3f  57                   push edi
// 00897d40  52                   push edx
// 00897d41  e85ad9f9ff           call 0x8356a0
// 00897d46  5f                   pop edi
// 00897d47  5e                   pop esi
// 00897d48  c20c00               ret 0xc
// copied from an identical function in another client (function ?GenerateCommandBarList@CXTPRibbonBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp