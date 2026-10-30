// roc 2009-12 00863d50  unit: CXTPToolTipContextToolTip  size: 299 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00863d50
//
// 00863d50  6aff                 push -1
// 00863d52  681cec9500           push 0x95ec1c
// 00863d57  64a100000000         mov eax, dword ptr fs:[0]
// 00863d5d  50                   push eax
// 00863d5e  51                   push ecx
// 00863d5f  56                   push esi
// 00863d60  a10052b600           mov eax, dword ptr [0xb65200]
// 00863d65  33c4                 xor eax, esp
// 00863d67  50                   push eax
// 00863d68  8d44240c             lea eax, [esp + 0xc]
// 00863d6c  64a300000000         mov dword ptr fs:[0], eax
// 00863d72  8bf1                 mov esi, ecx
// 00863d74  89742408             mov dword ptr [esp + 8], esi
// 00863d78  c70624e99f00         mov dword ptr [esi], 0x9fe924
// 00863d7e  c744241409000000     mov dword ptr [esp + 0x14], 9
// 00863d86  e855feffff           call 0x863be0
// 00863d8b  8d8e24010000         lea ecx, [esi + 0x124]
// 00863d91  c644241408           mov byte ptr [esp + 0x14], 8
// 00863d96  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863d9c  e88fb4baff           call 0x40f230
// 00863da1  8d8e1c010000         lea ecx, [esi + 0x11c]
// 00863da7  c644241407           mov byte ptr [esp + 0x14], 7
// 00863dac  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863db2  e879b4baff           call 0x40f230
// 00863db7  8d8e14010000         lea ecx, [esi + 0x114]
// 00863dbd  c644241406           mov byte ptr [esp + 0x14], 6
// 00863dc2  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863dc8  e863b4baff           call 0x40f230
// 00863dcd  8d8e0c010000         lea ecx, [esi + 0x10c]
// 00863dd3  c644241405           mov byte ptr [esp + 0x14], 5
// 00863dd8  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863dde  e84db4baff           call 0x40f230
// 00863de3  8d8e04010000         lea ecx, [esi + 0x104]
// 00863de9  c644241404           mov byte ptr [esp + 0x14], 4
// 00863dee  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863df4  e837b4baff           call 0x40f230
// 00863df9  8d8efc000000         lea ecx, [esi + 0xfc]
// 00863dff  c644241403           mov byte ptr [esp + 0x14], 3
// 00863e04  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863e0a  e821b4baff           call 0x40f230
// 00863e0f  8d8ef4000000         lea ecx, [esi + 0xf4]
// 00863e15  c644241402           mov byte ptr [esp + 0x14], 2
// 00863e1a  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863e20  e80bb4baff           call 0x40f230
// 00863e25  8d8eec000000         lea ecx, [esi + 0xec]
// 00863e2b  c644241401           mov byte ptr [esp + 0x14], 1
// 00863e30  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863e36  e8f5b3baff           call 0x40f230
// 00863e3b  8d8ee4000000         lea ecx, [esi + 0xe4]
// 00863e41  c644241400           mov byte ptr [esp + 0x14], 0
// 00863e46  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863e4c  e8dfb3baff           call 0x40f230
// 00863e51  8d8edc000000         lea ecx, [esi + 0xdc]
// 00863e57  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00863e5f  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 00863e65  e8c6b3baff           call 0x40f230
// 00863e6a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00863e6e  64890d00000000       mov dword ptr fs:[0], ecx
// 00863e75  59                   pop ecx
// 00863e76  5e                   pop esi
// 00863e77  83c410               add esp, 0x10
// 00863e7a  c3                   ret 
// copied from an identical function in another client (function ??1CXTAuxData@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTGlobal.cpp