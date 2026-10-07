// roc 2012-06 0099e610  unit: CXTPImageManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099e610
//
// 0099e610  56                   push esi
// 0099e611  8bf1                 mov esi, ecx
// 0099e613  57                   push edi
// 0099e614  8d7e54               lea edi, [esi + 0x54]
// 0099e617  8bcf                 mov ecx, edi
// 0099e619  e802abffff           call 0x999120
// 0099e61e  85c0                 test eax, eax
// 0099e620  7407                 je 0x99e629
// 0099e622  8bce                 mov ecx, esi
// 0099e624  e867deffff           call 0x99c490
// 0099e629  8bcf                 mov ecx, edi
// 0099e62b  e8f0aaffff           call 0x999120
// 0099e630  85c0                 test eax, eax
// 0099e632  8d4630               lea eax, [esi + 0x30]
// 0099e635  7502                 jne 0x99e639
// 0099e637  8bc7                 mov eax, edi
// 0099e639  5f                   pop edi
// 0099e63a  5e                   pop esi
// 0099e63b  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetFadedIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
