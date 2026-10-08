// from server: 100% by auto
// roc 2012-06 009e4c60  unit: CXTPDockingPane  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e4c60
//
// 009e4c60  56                   push esi
// 009e4c61  8bf1                 mov esi, ecx
// 009e4c63  837e1000             cmp dword ptr [esi + 0x10], 0
// 009e4c67  7538                 jne 0x9e4ca1
// 009e4c69  8b4618               mov eax, dword ptr [esi + 0x18]
// 009e4c6c  6a10                 push 0x10
// 009e4c6e  50                   push eax
// 009e4c6f  8d4e14               lea ecx, [esi + 0x14]
// 009e4c72  51                   push ecx
// 009e4c73  e8fadff9ff           call 0x982c72
// 009e4c78  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 009e4c7b  8bd1                 mov edx, ecx
// 009e4c7d  83c004               add eax, 4
// 009e4c80  c1e204               shl edx, 4
// 009e4c83  83c1ff               add ecx, -1
// 009e4c86  8d4410f0             lea eax, [eax + edx - 0x10]
// 009e4c8a  7815                 js 0x9e4ca1
// 009e4c8c  8d642400             lea esp, [esp]
// 009e4c90  8b5610               mov edx, dword ptr [esi + 0x10]
// 009e4c93  895008               mov dword ptr [eax + 8], edx
// 009e4c96  894610               mov dword ptr [esi + 0x10], eax
// 009e4c99  49                   dec ecx
// 009e4c9a  83e810               sub eax, 0x10
// 009e4c9d  85c9                 test ecx, ecx
// 009e4c9f  7def                 jge 0x9e4c90
// 009e4ca1  8b4610               mov eax, dword ptr [esi + 0x10]
// 009e4ca4  85c0                 test eax, eax
// 009e4ca6  7505                 jne 0x9e4cad
// 009e4ca8  e813d7f9ff           call 0x9823c0
// 009e4cad  8b5008               mov edx, dword ptr [eax + 8]
// 009e4cb0  33c9                 xor ecx, ecx
// 009e4cb2  8908                 mov dword ptr [eax], ecx
// 009e4cb4  894804               mov dword ptr [eax + 4], ecx
// 009e4cb7  89480c               mov dword ptr [eax + 0xc], ecx
// 009e4cba  895008               mov dword ptr [eax + 8], edx
// 009e4cbd  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 009e4cc0  8b5108               mov edx, dword ptr [ecx + 8]
// 009e4cc3  ff460c               inc dword ptr [esi + 0xc]
// 009e4cc6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 009e4cca  895610               mov dword ptr [esi + 0x10], edx
// 009e4ccd  8908                 mov dword ptr [eax], ecx
// 009e4ccf  5e                   pop esi
// 009e4cd0  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ?NewAssoc@?$CMap@JJII@@IAEPAVCAssoc@1@J@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
