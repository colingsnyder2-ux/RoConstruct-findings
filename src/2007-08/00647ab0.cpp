// roc 2007-08 00647ab0  unit: CXTPCommandBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00647ab0
//
// 00647ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00647ab4  668b5012             mov dx, word ptr [eax + 0x12]
// 00647ab8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00647abc  663b5112             cmp dx, word ptr [ecx + 0x12]
// 00647ac0  7405                 je 0x647ac7
// 00647ac2  33c0                 xor eax, eax
// 00647ac4  c20800               ret 8
// 00647ac7  668b5010             mov dx, word ptr [eax + 0x10]
// 00647acb  663b5110             cmp dx, word ptr [ecx + 0x10]
// 00647acf  75f1                 jne 0x647ac2
// 00647ad1  8b5004               mov edx, dword ptr [eax + 4]
// 00647ad4  3b5104               cmp edx, dword ptr [ecx + 4]
// 00647ad7  75e9                 jne 0x647ac2
// 00647ad9  8b4008               mov eax, dword ptr [eax + 8]
// 00647adc  33d2                 xor edx, edx
// 00647ade  3b4108               cmp eax, dword ptr [ecx + 8]
// 00647ae1  0f94c2               sete dl
// 00647ae4  8bc2                 mov eax, edx
// 00647ae6  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Common\XTPImageManager.cpp (function ?BitmapsCompatible@CXTPImageManager@@ABEHPAUtagBITMAP@@0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Common/XTPImageManager.cpp
