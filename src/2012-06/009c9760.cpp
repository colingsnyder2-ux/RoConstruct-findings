// roc 2012-06 009c9760  unit: CXTPToolBar::CControlButtonExpand  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9760
//
// 009c9760  56                   push esi
// 009c9761  8bf1                 mov esi, ecx
// 009c9763  837e0800             cmp dword ptr [esi + 8], 0
// 009c9767  7506                 jne 0x9c976f
// 009c9769  33c0                 xor eax, eax
// 009c976b  5e                   pop esi
// 009c976c  c20c00               ret 0xc
// 009c976f  57                   push edi
// 009c9770  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 009c9774  85ff                 test edi, edi
// 009c9776  742c                 je 0x9c97a4
// 009c9778  e8c3ffffff           call 0x9c9740
// 009c977d  8bc8                 mov ecx, eax
// 009c977f  8bd7                 mov edx, edi
// 009c9781  c1e910               shr ecx, 0x10
// 009c9784  c1ea10               shr edx, 0x10
// 009c9787  663bd1               cmp dx, cx
// 009c978a  7707                 ja 0x9c9793
// 009c978c  7516                 jne 0x9c97a4
// 009c978e  663bf8               cmp di, ax
// 009c9791  7611                 jbe 0x9c97a4
// 009c9793  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c9797  5f                   pop edi
// 009c9798  c70000000000         mov dword ptr [eax], 0
// 009c979e  33c0                 xor eax, eax
// 009c97a0  5e                   pop esi
// 009c97a1  c20c00               ret 0xc
// 009c97a4  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009c97a8  8b5608               mov edx, dword ptr [esi + 8]
// 009c97ab  51                   push ecx
// 009c97ac  52                   push edx
// 009c97ad  ff15b021b200         call dword ptr [0xb221b0]
// 009c97b3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009c97b7  33d2                 xor edx, edx
// 009c97b9  85c0                 test eax, eax
// 009c97bb  0f95c2               setne dl
// 009c97be  5f                   pop edi
// 009c97bf  8901                 mov dword ptr [ecx], eax
// 009c97c1  5e                   pop esi
// 009c97c2  8bc2                 mov eax, edx
// 009c97c4  c20c00               ret 0xc
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetProcAddress@CXTPModuleHandle@@QAEHPAP6GHXZPBDK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
