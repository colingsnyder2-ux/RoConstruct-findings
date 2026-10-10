// roc 2008-06 00725130  unit: CXTPRibbonBar  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00725130
//
// 00725130  56                   push esi
// 00725131  8bf1                 mov esi, ecx
// 00725133  8b06                 mov eax, dword ptr [esi]
// 00725135  8b9080010000         mov edx, dword ptr [eax + 0x180]
// 0072513b  ffd2                 call edx
// 0072513d  85c0                 test eax, eax
// 0072513f  741a                 je 0x72515b
// 00725141  8b442410             mov eax, dword ptr [esp + 0x10]
// 00725145  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00725149  8b542408             mov edx, dword ptr [esp + 8]
// 0072514d  50                   push eax
// 0072514e  51                   push ecx
// 0072514f  52                   push edx
// 00725150  8bce                 mov ecx, esi
// 00725152  e8f9ebfbff           call 0x6e3d50
// 00725157  5e                   pop esi
// 00725158  c20c00               ret 0xc
// 0072515b  57                   push edi
// 0072515c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00725160  56                   push esi
// 00725161  8bcf                 mov ecx, edi
// 00725163  e8d801f9ff           call 0x6b5340
// 00725168  85c0                 test eax, eax
// 0072516a  752a                 jne 0x725196
// 0072516c  8b07                 mov eax, dword ptr [edi]
// 0072516e  8b5058               mov edx, dword ptr [eax + 0x58]
// 00725171  56                   push esi
// 00725172  8bcf                 mov ecx, edi
// 00725174  ffd2                 call edx
// 00725176  8d4604               lea eax, [esi + 4]
// 00725179  50                   push eax
// 0072517a  ff15b0218000         call dword ptr [0x8021b0]
// 00725180  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00725184  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00725188  51                   push ecx
// 00725189  8b8e64020000         mov ecx, dword ptr [esi + 0x264]
// 0072518f  57                   push edi
// 00725190  52                   push edx
// 00725191  e85acefbff           call 0x6e1ff0
// 00725196  5f                   pop edi
// 00725197  5e                   pop esi
// 00725198  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\Ribbon\XTPRibbonBar.cpp (function ?GenerateCommandBarList@CXTPRibbonBar@@MAEXAAKPAVCXTPCommandBarList@@PAUXTP_COMMANDBARS_PROPEXCHANGE_PARAM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonBar.cpp
