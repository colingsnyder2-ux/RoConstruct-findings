// roc 2008-06 006c0b20  unit: CXTPImageManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c0b20
//
// 006c0b20  56                   push esi
// 006c0b21  8bf1                 mov esi, ecx
// 006c0b23  57                   push edi
// 006c0b24  8d7e54               lea edi, [esi + 0x54]
// 006c0b27  8bcf                 mov ecx, edi
// 006c0b29  e892a7ffff           call 0x6bb2c0
// 006c0b2e  85c0                 test eax, eax
// 006c0b30  7407                 je 0x6c0b39
// 006c0b32  8bce                 mov ecx, esi
// 006c0b34  e8e7ddffff           call 0x6be920
// 006c0b39  8bcf                 mov ecx, edi
// 006c0b3b  e880a7ffff           call 0x6bb2c0
// 006c0b40  85c0                 test eax, eax
// 006c0b42  8d4630               lea eax, [esi + 0x30]
// 006c0b45  7502                 jne 0x6c0b49
// 006c0b47  8bc7                 mov eax, edi
// 006c0b49  5f                   pop edi
// 006c0b4a  5e                   pop esi
// 006c0b4b  c3                   ret 
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?GetFadedIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
