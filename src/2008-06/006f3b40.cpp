// roc 2008-06 006f3b40  unit: CXTPControls  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f3b40
//
// 006f3b40  8b442408             mov eax, dword ptr [esp + 8]
// 006f3b44  56                   push esi
// 006f3b45  57                   push edi
// 006f3b46  8bf1                 mov esi, ecx
// 006f3b48  85c0                 test eax, eax
// 006f3b4a  7c05                 jl 0x6f3b51
// 006f3b4c  3b462c               cmp eax, dword ptr [esi + 0x2c]
// 006f3b4f  7c03                 jl 0x6f3b54
// 006f3b51  8b462c               mov eax, dword ptr [esi + 0x2c]
// 006f3b54  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f3b58  6a01                 push 1
// 006f3b5a  57                   push edi
// 006f3b5b  50                   push eax
// 006f3b5c  8d4e24               lea ecx, [esi + 0x24]
// 006f3b5f  e89c800800           call 0x77bc00
// 006f3b64  8b06                 mov eax, dword ptr [esi]
// 006f3b66  8b5068               mov edx, dword ptr [eax + 0x68]
// 006f3b69  57                   push edi
// 006f3b6a  8bce                 mov ecx, esi
// 006f3b6c  ffd2                 call edx
// 006f3b6e  8bc7                 mov eax, edi
// 006f3b70  5f                   pop edi
// 006f3b71  5e                   pop esi
// 006f3b72  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControls.cpp (function ?InsertAt@CXTPControls@@QAEPAVCXTPControl@@PAV2@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControls.cpp
