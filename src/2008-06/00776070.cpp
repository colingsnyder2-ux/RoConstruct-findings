// roc 2008-06 00776070  unit: VCEdit::?$CXTMaskEditT  size: 160 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00776070
//
// 00776070  8b542404             mov edx, dword ptr [esp + 4]
// 00776074  0fb7c2               movzx eax, dx
// 00776077  05e01effff           add eax, 0xffff1ee0
// 0077607c  83f80b               cmp eax, 0xb
// 0077607f  7755                 ja 0x7760d6
// 00776081  ff2485e0607700       jmp dword ptr [eax*4 + 0x7760e0]
// 00776088  e803faffff           call 0x775a90
// 0077608d  b801000000           mov eax, 1
// 00776092  c20800               ret 8
// 00776095  e866eeffff           call 0x774f00
// 0077609a  b801000000           mov eax, 1
// 0077609f  c20800               ret 8
// 007760a2  e849faffff           call 0x775af0
// 007760a7  b801000000           mov eax, 1
// 007760ac  c20800               ret 8
// 007760af  e85cf4ffff           call 0x775510
// 007760b4  b801000000           mov eax, 1
// 007760b9  c20800               ret 8
// 007760bc  e8dfe6ffff           call 0x7747a0
// 007760c1  b801000000           mov eax, 1
// 007760c6  c20800               ret 8
// 007760c9  e802f1ffff           call 0x7751d0
// 007760ce  b801000000           mov eax, 1
// 007760d3  c20800               ret 8
// 007760d6  89542404             mov dword ptr [esp + 4], edx
// 007760da  e9fda6f2ff           jmp 0x6a07dc
// 007760df  90                   nop 
// 007760e0  af                   scasd eax, dword ptr es:[edi]
// 007760e1  60                   pushal 
// 007760e2  7700                 ja 0x7760e4
// 007760e4  d6                   salc 
// 007760e5  60                   pushal 
// 007760e6  7700                 ja 0x7760e8
// 007760e8  95                   xchg ebp, eax
// 007760e9  60                   pushal 
// 007760ea  7700                 ja 0x7760ec
// 007760ec  886077               mov byte ptr [eax + 0x77], ah
// 007760ef  00d6                 add dh, dl
// 007760f1  60                   pushal 
// 007760f2  7700                 ja 0x7760f4
// 007760f4  a2607700d6           mov byte ptr [0xd6007760], al
// 007760f9  60                   pushal 
// 007760fa  7700                 ja 0x7760fc
// 007760fc  d6                   salc 
// 007760fd  60                   pushal 
// 007760fe  7700                 ja 0x776100
// 00776100  d6                   salc 
// 00776101  60                   pushal 
// 00776102  7700                 ja 0x776104
// 00776104  d6                   salc 
// 00776105  60                   pushal 
// 00776106  7700                 ja 0x776108
// 00776108  c9                   leave 
// 00776109  60                   pushal 
// 0077610a  7700                 ja 0x77610c
// library xtp-11.2.2-lib-strlen/Source\Controls\XTMaskEdit.cpp (function ?OnCommand@?$CXTMaskEditT@VCEdit@@@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp
