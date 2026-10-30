// roc 2009-06 007ecfb0  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007ecfb0
//
// 007ecfb0  56                   push esi
// 007ecfb1  8bf1                 mov esi, ecx
// 007ecfb3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 007ecfb7  57                   push edi
// 007ecfb8  7421                 je 0x7ecfdb
// 007ecfba  837e2000             cmp dword ptr [esi + 0x20], 0
// 007ecfbe  741b                 je 0x7ecfdb
// 007ecfc0  e817ef0500           call 0x84bedc
// 007ecfc5  a900080000           test eax, 0x800
// 007ecfca  750f                 jne 0x7ecfdb
// 007ecfcc  8d7e70               lea edi, [esi + 0x70]
// 007ecfcf  8bcf                 mov ecx, edi
// 007ecfd1  ff155cfb8900         call dword ptr [0x89fb5c]
// 007ecfd7  84c0                 test al, al
// 007ecfd9  7407                 je 0x7ecfe2
// 007ecfdb  5f                   pop edi
// 007ecfdc  33c0                 xor eax, eax
// 007ecfde  5e                   pop esi
// 007ecfdf  c20800               ret 8
// 007ecfe2  8b06                 mov eax, dword ptr [esi]
// 007ecfe4  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 007ecfea  53                   push ebx
// 007ecfeb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 007ecfef  0fb60b               movzx ecx, byte ptr [ebx]
// 007ecff2  51                   push ecx
// 007ecff3  8bce                 mov ecx, esi
// 007ecff5  ffd2                 call edx
// 007ecff7  85c0                 test eax, eax
// 007ecff9  750b                 jne 0x7ed006
// 007ecffb  5b                   pop ebx
// 007ecffc  5f                   pop edi
// 007ecffd  b801000000           mov eax, 1
// 007ed002  5e                   pop esi
// 007ed003  c20800               ret 8
// 007ed006  8bcf                 mov ecx, edi
// 007ed008  ff1554fb8900         call dword ptr [0x89fb54]
// 007ed00e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 007ed012  3bf8                 cmp edi, eax
// 007ed014  7d0c                 jge 0x7ed022
// 007ed016  57                   push edi
// 007ed017  8bce                 mov ecx, esi
// 007ed019  e822fcffff           call 0x7ecc40
// 007ed01e  85c0                 test eax, eax
// 007ed020  7508                 jne 0x7ed02a
// 007ed022  5b                   pop ebx
// 007ed023  5f                   pop edi
// 007ed024  33c0                 xor eax, eax
// 007ed026  5e                   pop esi
// 007ed027  c20800               ret 8
// 007ed02a  8b06                 mov eax, dword ptr [esi]
// 007ed02c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 007ed032  57                   push edi
// 007ed033  53                   push ebx
// 007ed034  8bce                 mov ecx, esi
// 007ed036  ffd2                 call edx
// 007ed038  5b                   pop ebx
// 007ed039  5f                   pop edi
// 007ed03a  5e                   pop esi
// 007ed03b  c20800               ret 8
// copied from an identical function in another client (function ?CheckChar@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp