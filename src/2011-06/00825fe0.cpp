// from server: 100% by auto
// roc 2011-06 00825fe0  unit: CXTPImageManager  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00825fe0
//
// 00825fe0  56                   push esi
// 00825fe1  8bf1                 mov esi, ecx
// 00825fe3  57                   push edi
// 00825fe4  8d7e54               lea edi, [esi + 0x54]
// 00825fe7  8bcf                 mov ecx, edi
// 00825fe9  e8e2aaffff           call 0x820ad0
// 00825fee  85c0                 test eax, eax
// 00825ff0  7407                 je 0x825ff9
// 00825ff2  8bce                 mov ecx, esi
// 00825ff4  e827dfffff           call 0x823f20
// 00825ff9  8bcf                 mov ecx, edi
// 00825ffb  e8d0aaffff           call 0x820ad0
// 00826000  85c0                 test eax, eax
// 00826002  8d4630               lea eax, [esi + 0x30]
// 00826005  7502                 jne 0x826009
// 00826007  8bc7                 mov eax, edi
// 00826009  5f                   pop edi
// 0082600a  5e                   pop esi
// 0082600b  c3                   ret 
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?GetFadedIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
