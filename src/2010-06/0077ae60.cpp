// from server: 100% by auto
// roc 2010-06 0077ae60  unit: RBX::PartDropTool  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0077ae60
//
// 0077ae60  53                   push ebx
// 0077ae61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0077ae65  56                   push esi
// 0077ae66  8b7310               mov esi, dword ptr [ebx + 0x10]
// 0077ae69  8b4654               mov eax, dword ptr [esi + 0x54]
// 0077ae6c  57                   push edi
// 0077ae6d  8d3c80               lea edi, [eax + eax*4]
// 0077ae70  03ff                 add edi, edi
// 0077ae72  7505                 jne 0x77ae79
// 0077ae74  bffeffff7f           mov edi, 0x7ffffffe
// 0077ae79  8b4644               mov eax, dword ptr [esi + 0x44]
// 0077ae7c  2b4640               sub eax, dword ptr [esi + 0x40]
// 0077ae7f  01464c               add dword ptr [esi + 0x4c], eax
// 0077ae82  8bc3                 mov eax, ebx
// 0077ae84  e8d7feffff           call 0x77ad60
// 0077ae89  2bf8                 sub edi, eax
// 0077ae8b  807e1500             cmp byte ptr [esi + 0x15], 0
// 0077ae8f  7436                 je 0x77aec7
// 0077ae91  85ff                 test edi, edi
// 0077ae93  7fed                 jg 0x77ae82
// 0077ae95  807e1500             cmp byte ptr [esi + 0x15], 0
// 0077ae99  742c                 je 0x77aec7
// 0077ae9b  8b464c               mov eax, dword ptr [esi + 0x4c]
// 0077ae9e  3d00040000           cmp eax, 0x400
// 0077aea3  7310                 jae 0x77aeb5
// 0077aea5  8b4e44               mov ecx, dword ptr [esi + 0x44]
// 0077aea8  81c100040000         add ecx, 0x400
// 0077aeae  5f                   pop edi
// 0077aeaf  894e40               mov dword ptr [esi + 0x40], ecx
// 0077aeb2  5e                   pop esi
// 0077aeb3  5b                   pop ebx
// 0077aeb4  c3                   ret 
// 0077aeb5  8b5644               mov edx, dword ptr [esi + 0x44]
// 0077aeb8  0500fcffff           add eax, 0xfffffc00
// 0077aebd  5f                   pop edi
// 0077aebe  89464c               mov dword ptr [esi + 0x4c], eax
// 0077aec1  895640               mov dword ptr [esi + 0x40], edx
// 0077aec4  5e                   pop esi
// 0077aec5  5b                   pop ebx
// 0077aec6  c3                   ret 
// 0077aec7  b81f85eb51           mov eax, 0x51eb851f
// 0077aecc  f76648               mul dword ptr [esi + 0x48]
// 0077aecf  c1ea05               shr edx, 5
// 0077aed2  0faf5650             imul edx, dword ptr [esi + 0x50]
// 0077aed6  5f                   pop edi
// 0077aed7  895640               mov dword ptr [esi + 0x40], edx
// 0077aeda  5e                   pop esi
// 0077aedb  5b                   pop ebx
// 0077aedc  c3                   ret 
// library lua-5.1.4/lgc.c (function _luaC_step)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
