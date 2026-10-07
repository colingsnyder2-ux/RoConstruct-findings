// roc 2011-06 0081ec10  unit: CXTPCommandBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081ec10
//
// 0081ec10  8b442404             mov eax, dword ptr [esp + 4]
// 0081ec14  668b5012             mov dx, word ptr [eax + 0x12]
// 0081ec18  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081ec1c  663b5112             cmp dx, word ptr [ecx + 0x12]
// 0081ec20  7405                 je 0x81ec27
// 0081ec22  33c0                 xor eax, eax
// 0081ec24  c20800               ret 8
// 0081ec27  668b5010             mov dx, word ptr [eax + 0x10]
// 0081ec2b  663b5110             cmp dx, word ptr [ecx + 0x10]
// 0081ec2f  75f1                 jne 0x81ec22
// 0081ec31  8b5004               mov edx, dword ptr [eax + 4]
// 0081ec34  3b5104               cmp edx, dword ptr [ecx + 4]
// 0081ec37  75e9                 jne 0x81ec22
// 0081ec39  8b4008               mov eax, dword ptr [eax + 8]
// 0081ec3c  33d2                 xor edx, edx
// 0081ec3e  3b4108               cmp eax, dword ptr [ecx + 8]
// 0081ec41  0f94c2               sete dl
// 0081ec44  8bc2                 mov eax, edx
// 0081ec46  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?BitmapsCompatible@CXTPImageManager@@ABEHPAUtagBITMAP@@0@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
