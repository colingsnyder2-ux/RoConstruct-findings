// from server: 100% by auto
// roc 2007-08 0060f7c0  unit: RBX::Ball  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0060f7c0
//
// 0060f7c0  0fb65004             movzx edx, byte ptr [eax + 4]
// 0060f7c4  83c2fc               add edx, -4
// 0060f7c7  83fa06               cmp edx, 6
// 0060f7ca  776c                 ja 0x60f838
// 0060f7cc  ff24953cf86000       jmp dword ptr [edx*4 + 0x60f83c]
// 0060f7d3  50                   push eax
// 0060f7d4  51                   push ecx
// 0060f7d5  e8e6390000           call 0x6131c0
// 0060f7da  83c408               add esp, 8
// 0060f7dd  c3                   ret 
// 0060f7de  50                   push eax
// 0060f7df  51                   push ecx
// 0060f7e0  e87b3a0000           call 0x613260
// 0060f7e5  83c408               add esp, 8
// 0060f7e8  c3                   ret 
// 0060f7e9  50                   push eax
// 0060f7ea  51                   push ecx
// 0060f7eb  e890380000           call 0x613080
// 0060f7f0  83c408               add esp, 8
// 0060f7f3  c3                   ret 
// 0060f7f4  50                   push eax
// 0060f7f5  51                   push ecx
// 0060f7f6  e8e52b0000           call 0x6123e0
// 0060f7fb  83c408               add esp, 8
// 0060f7fe  c3                   ret 
// 0060f7ff  50                   push eax
// 0060f800  51                   push ecx
// 0060f801  e8ba8ffbff           call 0x5c87c0
// 0060f806  83c408               add esp, 8
// 0060f809  c3                   ret 
// 0060f80a  8b5110               mov edx, dword ptr [ecx + 0x10]
// 0060f80d  834204ff             add dword ptr [edx + 4], -1
// 0060f811  8b500c               mov edx, dword ptr [eax + 0xc]
// 0060f814  6a00                 push 0
// 0060f816  83c211               add edx, 0x11
// 0060f819  52                   push edx
// 0060f81a  50                   push eax
// 0060f81b  51                   push ecx
// 0060f81c  e8cf410000           call 0x6139f0
// 0060f821  83c410               add esp, 0x10
// 0060f824  c3                   ret 
// 0060f825  8b5010               mov edx, dword ptr [eax + 0x10]
// 0060f828  6a00                 push 0
// 0060f82a  83c218               add edx, 0x18
// 0060f82d  52                   push edx
// 0060f82e  50                   push eax
// 0060f82f  51                   push ecx
// 0060f830  e8bb410000           call 0x6139f0
// 0060f835  83c410               add esp, 0x10
// 0060f838  c3                   ret 
// 0060f839  8d4900               lea ecx, [ecx]
// 0060f83c  0af8                 or bh, al
// 0060f83e  60                   pushal 
// 0060f83f  00f4                 add ah, dh
// 0060f841  f76000               mul dword ptr [eax]
// 0060f844  def7                 fdivrp st(7)
// 0060f846  60                   pushal 
// 0060f847  0025f86000ff         add byte ptr [0xff0060f8], ah
// 0060f84d  f76000               mul dword ptr [eax]
// 0060f850  d3f7                 sal edi, cl
// 0060f852  60                   pushal 
// 0060f853  00e9                 add cl, ch
// 0060f855  f76000               mul dword ptr [eax]
// library lua-5.1.4/lgc.c (function _freeobj)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lgc.c
