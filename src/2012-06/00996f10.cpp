// from server: 100% by auto
// roc 2012-06 00996f10  unit: CXTPCommandBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00996f10
//
// 00996f10  8b442404             mov eax, dword ptr [esp + 4]
// 00996f14  668b5012             mov dx, word ptr [eax + 0x12]
// 00996f18  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00996f1c  663b5112             cmp dx, word ptr [ecx + 0x12]
// 00996f20  7405                 je 0x996f27
// 00996f22  33c0                 xor eax, eax
// 00996f24  c20800               ret 8
// 00996f27  668b5010             mov dx, word ptr [eax + 0x10]
// 00996f2b  663b5110             cmp dx, word ptr [ecx + 0x10]
// 00996f2f  75f1                 jne 0x996f22
// 00996f31  8b5004               mov edx, dword ptr [eax + 4]
// 00996f34  3b5104               cmp edx, dword ptr [ecx + 4]
// 00996f37  75e9                 jne 0x996f22
// 00996f39  8b4008               mov eax, dword ptr [eax + 8]
// 00996f3c  33d2                 xor edx, edx
// 00996f3e  3b4108               cmp eax, dword ptr [ecx + 8]
// 00996f41  0f94c2               sete dl
// 00996f44  8bc2                 mov eax, edx
// 00996f46  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?BitmapsCompatible@CXTPImageManager@@ABEHPAUtagBITMAP@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
