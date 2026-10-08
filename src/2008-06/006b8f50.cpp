// from server: 100% by auto
// roc 2008-06 006b8f50  unit: CXTPCommandBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b8f50
//
// 006b8f50  8b442404             mov eax, dword ptr [esp + 4]
// 006b8f54  668b5012             mov dx, word ptr [eax + 0x12]
// 006b8f58  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006b8f5c  663b5112             cmp dx, word ptr [ecx + 0x12]
// 006b8f60  7405                 je 0x6b8f67
// 006b8f62  33c0                 xor eax, eax
// 006b8f64  c20800               ret 8
// 006b8f67  668b5010             mov dx, word ptr [eax + 0x10]
// 006b8f6b  663b5110             cmp dx, word ptr [ecx + 0x10]
// 006b8f6f  75f1                 jne 0x6b8f62
// 006b8f71  8b5004               mov edx, dword ptr [eax + 4]
// 006b8f74  3b5104               cmp edx, dword ptr [ecx + 4]
// 006b8f77  75e9                 jne 0x6b8f62
// 006b8f79  8b4008               mov eax, dword ptr [eax + 8]
// 006b8f7c  33d2                 xor edx, edx
// 006b8f7e  3b4108               cmp eax, dword ptr [ecx + 8]
// 006b8f81  0f94c2               sete dl
// 006b8f84  8bc2                 mov eax, edx
// 006b8f86  c20800               ret 8
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?BitmapsCompatible@CXTPImageManager@@ABEHPAUtagBITMAP@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
