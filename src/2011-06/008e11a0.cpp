// roc 2011-06 008e11a0  unit: VCEdit::?$CXTMaskEditT  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008e11a0
//
// 008e11a0  8b542404             mov edx, dword ptr [esp + 4]
// 008e11a4  0fb7c2               movzx eax, dx
// 008e11a7  05e01effff           add eax, 0xffff1ee0
// 008e11ac  83f80b               cmp eax, 0xb
// 008e11af  7755                 ja 0x8e1206
// 008e11b1  ff248510128e00       jmp dword ptr [eax*4 + 0x8e1210]
// 008e11b8  e803faffff           call 0x8e0bc0
// 008e11bd  b801000000           mov eax, 1
// 008e11c2  c20800               ret 8
// 008e11c5  e866eeffff           call 0x8e0030
// 008e11ca  b801000000           mov eax, 1
// 008e11cf  c20800               ret 8
// 008e11d2  e849faffff           call 0x8e0c20
// 008e11d7  b801000000           mov eax, 1
// 008e11dc  c20800               ret 8
// 008e11df  e85cf4ffff           call 0x8e0640
// 008e11e4  b801000000           mov eax, 1
// 008e11e9  c20800               ret 8
// 008e11ec  e8dfe6ffff           call 0x8df8d0
// 008e11f1  b801000000           mov eax, 1
// 008e11f6  c20800               ret 8
// 008e11f9  e802f1ffff           call 0x8e0300
// 008e11fe  b801000000           mov eax, 1
// 008e1203  c20800               ret 8
// 008e1206  89542404             mov dword ptr [esp + 4], edx
// 008e120a  e9a58ff2ff           jmp 0x80a1b4
// 008e120f  90                   nop 
// 008e1210  df11                 fist word ptr [ecx]
// 008e1212  8e00                 mov es, word ptr [eax]
// 008e1214  06                   push es
// 008e1215  128e00c5118e         adc cl, byte ptr [esi - 0x71ee3b00]
// 008e121b  00b8118e0006         add byte ptr [eax + 0x6008e11], bh
// 008e1221  128e00d2118e         adc cl, byte ptr [esi - 0x71ee2e00]
// 008e1227  0006                 add byte ptr [esi], al
// 008e1229  128e0006128e         adc cl, byte ptr [esi - 0x71edfa00]
// 008e122f  0006                 add byte ptr [esi], al
// 008e1231  128e0006128e         adc cl, byte ptr [esi - 0x71edfa00]
// 008e1237  00f9                 add cl, bh
// 008e1239  118e00ec118e         adc dword ptr [esi - 0x71ee1400], ecx
// copied from an identical function in another client (function ?OnCommand@?$CXTPMaskEditT@VCEdit@@@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTOutBarCtrl.cpp