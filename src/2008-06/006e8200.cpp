// roc 2008-06 006e8200  unit: CXTPToolBar::CControlButtonExpand  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e8200
//
// 006e8200  56                   push esi
// 006e8201  8bf1                 mov esi, ecx
// 006e8203  837e0800             cmp dword ptr [esi + 8], 0
// 006e8207  7506                 jne 0x6e820f
// 006e8209  33c0                 xor eax, eax
// 006e820b  5e                   pop esi
// 006e820c  c20c00               ret 0xc
// 006e820f  57                   push edi
// 006e8210  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006e8214  85ff                 test edi, edi
// 006e8216  742c                 je 0x6e8244
// 006e8218  e8c3ffffff           call 0x6e81e0
// 006e821d  8bc8                 mov ecx, eax
// 006e821f  8bd7                 mov edx, edi
// 006e8221  c1e910               shr ecx, 0x10
// 006e8224  c1ea10               shr edx, 0x10
// 006e8227  663bd1               cmp dx, cx
// 006e822a  7707                 ja 0x6e8233
// 006e822c  7516                 jne 0x6e8244
// 006e822e  663bf8               cmp di, ax
// 006e8231  7611                 jbe 0x6e8244
// 006e8233  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e8237  5f                   pop edi
// 006e8238  c70000000000         mov dword ptr [eax], 0
// 006e823e  33c0                 xor eax, eax
// 006e8240  5e                   pop esi
// 006e8241  c20c00               ret 0xc
// 006e8244  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e8248  8b5608               mov edx, dword ptr [esi + 8]
// 006e824b  51                   push ecx
// 006e824c  52                   push edx
// 006e824d  ff15c0218000         call dword ptr [0x8021c0]
// 006e8253  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e8257  33d2                 xor edx, edx
// 006e8259  85c0                 test eax, eax
// 006e825b  0f95c2               setne dl
// 006e825e  5f                   pop edi
// 006e825f  8901                 mov dword ptr [ecx], eax
// 006e8261  5e                   pop esi
// 006e8262  8bc2                 mov eax, edx
// 006e8264  c20c00               ret 0xc
// library xtp-11.2.2/Source\Common\XTPSystemHelpers.cpp (function ?GetProcAddress@CXTPModuleHandle@@QAEHPAP6GHXZPBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPSystemHelpers.cpp
