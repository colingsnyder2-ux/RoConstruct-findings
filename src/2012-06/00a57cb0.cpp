// roc 2012-06 00a57cb0  unit: VCEdit::?$CXTMaskEditT  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a57cb0
//
// 00a57cb0  56                   push esi
// 00a57cb1  8bf1                 mov esi, ecx
// 00a57cb3  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 00a57cb7  57                   push edi
// 00a57cb8  7421                 je 0xa57cdb
// 00a57cba  837e2000             cmp dword ptr [esi + 0x20], 0
// 00a57cbe  741b                 je 0xa57cdb
// 00a57cc0  e80d190400           call 0xa995d2
// 00a57cc5  a900080000           test eax, 0x800
// 00a57cca  750f                 jne 0xa57cdb
// 00a57ccc  8d7e70               lea edi, [esi + 0x70]
// 00a57ccf  8bcf                 mov ecx, edi
// 00a57cd1  ff156046b200         call dword ptr [0xb24660]
// 00a57cd7  84c0                 test al, al
// 00a57cd9  7407                 je 0xa57ce2
// 00a57cdb  5f                   pop edi
// 00a57cdc  33c0                 xor eax, eax
// 00a57cde  5e                   pop esi
// 00a57cdf  c20800               ret 8
// 00a57ce2  8b06                 mov eax, dword ptr [esi]
// 00a57ce4  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00a57cea  53                   push ebx
// 00a57ceb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00a57cef  0fb60b               movzx ecx, byte ptr [ebx]
// 00a57cf2  51                   push ecx
// 00a57cf3  8bce                 mov ecx, esi
// 00a57cf5  ffd2                 call edx
// 00a57cf7  85c0                 test eax, eax
// 00a57cf9  750b                 jne 0xa57d06
// 00a57cfb  5b                   pop ebx
// 00a57cfc  5f                   pop edi
// 00a57cfd  b801000000           mov eax, 1
// 00a57d02  5e                   pop esi
// 00a57d03  c20800               ret 8
// 00a57d06  8bcf                 mov ecx, edi
// 00a57d08  ff155846b200         call dword ptr [0xb24658]
// 00a57d0e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00a57d12  3bf8                 cmp edi, eax
// 00a57d14  7d0c                 jge 0xa57d22
// 00a57d16  57                   push edi
// 00a57d17  8bce                 mov ecx, esi
// 00a57d19  e822fcffff           call 0xa57940
// 00a57d1e  85c0                 test eax, eax
// 00a57d20  7508                 jne 0xa57d2a
// 00a57d22  5b                   pop ebx
// 00a57d23  5f                   pop edi
// 00a57d24  33c0                 xor eax, eax
// 00a57d26  5e                   pop esi
// 00a57d27  c20800               ret 8
// 00a57d2a  8b06                 mov eax, dword ptr [esi]
// 00a57d2c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 00a57d32  57                   push edi
// 00a57d33  53                   push ebx
// 00a57d34  8bce                 mov ecx, esi
// 00a57d36  ffd2                 call edx
// 00a57d38  5b                   pop ebx
// 00a57d39  5f                   pop edi
// 00a57d3a  5e                   pop esi
// 00a57d3b  c20800               ret 8
// copied from an identical function in another client (function ?CheckChar@?$CXTMaskEditT@VCEdit@@@@UAEHAADH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp