// roc 2007-03 006f5700  unit: seg_006f0000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006f5700
//
// 006f5700  8b542408             mov edx, dword ptr [esp + 8]
// 006f5704  56                   push esi
// 006f5705  8b742408             mov esi, dword ptr [esp + 8]
// 006f5709  57                   push edi
// 006f570a  8d9b00000000         lea ebx, [ebx]
// 006f5710  0fb606               movzx eax, byte ptr [esi]
// 006f5713  8d48bf               lea ecx, [eax - 0x41]
// 006f5716  83c601               add esi, 1
// 006f5719  83f919               cmp ecx, 0x19
// 006f571c  7703                 ja 0x6f5721
// 006f571e  83c020               add eax, 0x20
// 006f5721  0fb60a               movzx ecx, byte ptr [edx]
// 006f5724  8d79bf               lea edi, [ecx - 0x41]
// 006f5727  83c201               add edx, 1
// 006f572a  83ff19               cmp edi, 0x19
// 006f572d  7703                 ja 0x6f5732
// 006f572f  83c120               add ecx, 0x20
// 006f5732  85c0                 test eax, eax
// 006f5734  7404                 je 0x6f573a
// 006f5736  3bc1                 cmp eax, ecx
// 006f5738  74d6                 je 0x6f5710
// 006f573a  5f                   pop edi
// 006f573b  2bc1                 sub eax, ecx
// 006f573d  5e                   pop esi
// 006f573e  c3                   ret 
// library xtp-11.2.2-vc8/Source\SkinFramework\XTPSkinManagerApiHook.cpp (function ?XTPCompareStringNoCase@@YAHPBD0@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/SkinFramework/XTPSkinManagerApiHook.cpp
