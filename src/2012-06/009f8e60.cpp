// roc 2012-06 009f8e60  unit: PAUHWND__::?$CArray  size: 191 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f8e60
//
// 009f8e60  56                   push esi
// 009f8e61  8b742408             mov esi, dword ptr [esp + 8]
// 009f8e65  85f6                 test esi, esi
// 009f8e67  747c                 je 0x9f8ee5
// 009f8e69  8b5620               mov edx, dword ptr [esi + 0x20]
// 009f8e6c  85d2                 test edx, edx
// 009f8e6e  7475                 je 0x9f8ee5
// 009f8e70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009f8e74  3d00020000           cmp eax, 0x200
// 009f8e79  7747                 ja 0x9f8ec2
// 009f8e7b  7411                 je 0x9f8e8e
// 009f8e7d  0560ffffff           add eax, 0xffffff60
// 009f8e82  83f807               cmp eax, 7
// 009f8e85  775e                 ja 0x9f8ee5
// 009f8e87  ff2485ec8e9f00       jmp dword ptr [eax*4 + 0x9f8eec]
// 009f8e8e  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 009f8e95  7f4e                 jg 0x9f8ee5
// 009f8e97  8d442410             lea eax, [esp + 0x10]
// 009f8e9b  50                   push eax
// 009f8e9c  52                   push edx
// 009f8e9d  ff15883ab200         call dword ptr [0xb23a88]
// 009f8ea3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009f8ea7  8b542414             mov edx, dword ptr [esp + 0x14]
// 009f8eab  83ec08               sub esp, 8
// 009f8eae  8bc4                 mov eax, esp
// 009f8eb0  8908                 mov dword ptr [eax], ecx
// 009f8eb2  6a00                 push 0
// 009f8eb4  8bce                 mov ecx, esi
// 009f8eb6  895004               mov dword ptr [eax + 4], edx
// 009f8eb9  e8c2a7f9ff           call 0x993680
// 009f8ebe  5e                   pop esi
// 009f8ebf  c21000               ret 0x10
// 009f8ec2  05fffdffff           add eax, 0xfffffdff
// 009f8ec7  83f806               cmp eax, 6
// 009f8eca  7719                 ja 0x9f8ee5
// 009f8ecc  0fb690188f9f00       movzx edx, byte ptr [eax + 0x9f8f18]
// 009f8ed3  ff24950c8f9f00       jmp dword ptr [edx*4 + 0x9f8f0c]
// 009f8eda  83790400             cmp dword ptr [ecx + 4], 0
// 009f8ede  7f05                 jg 0x9f8ee5
// 009f8ee0  e88bfeffff           call 0x9f8d70
// 009f8ee5  5e                   pop esi
// 009f8ee6  c21000               ret 0x10
// 009f8ee9  8d4900               lea ecx, [ecx]
// 009f8eec  8e8e9f00e08e         mov cs, word ptr [esi - 0x711fff61]
// 009f8ef2  9f                   lahf 
// 009f8ef3  00da                 add dl, bl
// 009f8ef5  8e9f00e58e9f         mov ds, word ptr [edi - 0x60711b00]
// 009f8efb  00e0                 add al, ah
// 009f8efd  8e9f00e58e9f         mov ds, word ptr [edi - 0x60711b00]
// 009f8f03  00e5                 add ch, ah
// 009f8f05  8e9f00e08e9f         mov ds, word ptr [edi - 0x60712000]
// 009f8f0b  00e0                 add al, ah
// 009f8f0d  8e9f00da8e9f         mov ds, word ptr [edi - 0x60712600]
// 009f8f13  00e5                 add ch, ah
// 009f8f15  8e9f00000102         mov ds, word ptr [edi + 0x2010000]
// 009f8f1b  0002                 add byte ptr [edx], al
// 009f8f1d  0200                 add al, byte ptr [eax]
// library xtp-11.2.2/Source\CommandBars\XTPMouseManager.cpp (function ?DeliverMessage@CXTPMouseManager@@AAEXPAVCXTPCommandBar@@IUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPMouseManager.cpp
