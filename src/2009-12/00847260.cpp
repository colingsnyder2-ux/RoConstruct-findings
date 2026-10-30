// roc 2009-12 00847260  unit: CXTPControls  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00847260
//
// 00847260  8b442408             mov eax, dword ptr [esp + 8]
// 00847264  56                   push esi
// 00847265  57                   push edi
// 00847266  8bf1                 mov esi, ecx
// 00847268  85c0                 test eax, eax
// 0084726a  7c05                 jl 0x847271
// 0084726c  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 0084726f  7c03                 jl 0x847274
// 00847271  8b462c               mov eax, dword ptr [esi + 0x2c]
// 00847274  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00847278  6a01                 push 1
// 0084727a  57                   push edi
// 0084727b  50                   push eax
// 0084727c  8d4e24               lea ecx, [esi + 0x24]
// 0084727f  e8bc680a00           call 0x8edb40
// 00847284  8b06                 mov eax, dword ptr [esi]
// 00847286  8b5068               mov edx, dword ptr [eax + 0x68]
// 00847289  57                   push edi
// 0084728a  8bce                 mov ecx, esi
// 0084728c  ffd2                 call edx
// 0084728e  8bc7                 mov eax, edi
// 00847290  5f                   pop edi
// 00847291  5e                   pop esi
// 00847292  c20800               ret 8
// copied from an identical function in another client (function ?InsertAt@CXTPControls@@QAEPAVCXTPControl@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp