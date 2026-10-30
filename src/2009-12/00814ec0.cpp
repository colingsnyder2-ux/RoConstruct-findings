// roc 2009-12 00814ec0  unit: CXTPCommandBarKeyboardTip  size: 137 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814ec0
//
// 00814ec0  56                   push esi
// 00814ec1  8b742408             mov esi, dword ptr [esp + 8]
// 00814ec5  8b06                 mov eax, dword ptr [esi]
// 00814ec7  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00814ecd  8bce                 mov ecx, esi
// 00814ecf  ffd2                 call edx
// 00814ed1  8b4028               mov eax, dword ptr [eax + 0x28]
// 00814ed4  50                   push eax
// 00814ed5  e80c171100           call 0x9265e6
// 00814eda  50                   push eax
// 00814edb  e85eedfdff           call 0x7f3c3e
// 00814ee0  83c408               add esp, 8
// 00814ee3  85c0                 test eax, eax
// 00814ee5  745c                 je 0x814f43
// 00814ee7  8bb6e8000000         mov esi, dword ptr [esi + 0xe8]
// 00814eed  85f6                 test esi, esi
// 00814eef  7454                 je 0x814f45
// 00814ef1  397068               cmp dword ptr [eax + 0x68], esi
// 00814ef4  744f                 je 0x814f45
// 00814ef6  e823ecfdff           call 0x7f3b1e
// 00814efb  8b4804               mov ecx, dword ptr [eax + 4]
// 00814efe  e8dd161100           call 0x9265e0
// 00814f03  89442408             mov dword ptr [esp + 8], eax
// 00814f07  85c0                 test eax, eax
// 00814f09  7438                 je 0x814f43
// 00814f0b  eb03                 jmp 0x814f10
// 00814f0d  8d4900               lea ecx, [ecx]
// 00814f10  e809ecfdff           call 0x7f3b1e
// 00814f15  8b4004               mov eax, dword ptr [eax + 4]
// 00814f18  8d4c2408             lea ecx, [esp + 8]
// 00814f1c  51                   push ecx
// 00814f1d  8bc8                 mov ecx, eax
// 00814f1f  e8b6161100           call 0x9265da
// 00814f24  50                   push eax
// 00814f25  e8bc161100           call 0x9265e6
// 00814f2a  50                   push eax
// 00814f2b  e80eedfdff           call 0x7f3c3e
// 00814f30  83c408               add esp, 8
// 00814f33  85c0                 test eax, eax
// 00814f35  7405                 je 0x814f3c
// 00814f37  397068               cmp dword ptr [eax + 0x68], esi
// 00814f3a  7409                 je 0x814f45
// 00814f3c  837c240800           cmp dword ptr [esp + 8], 0
// 00814f41  75cd                 jne 0x814f10
// 00814f43  33c0                 xor eax, eax
// 00814f45  5e                   pop esi
// 00814f46  c20400               ret 4
// copied from an identical function in another client (function ?FindDocTemplate@CXTPCommandBars@@IAEPAVCDocTemplate@@PAVCMDIChildWnd@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPCommandBars.cpp