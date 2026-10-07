// roc 2008-06 006ddf30  unit: CRobloxTreeCtrl  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ddf30
//
// 006ddf30  56                   push esi
// 006ddf31  57                   push edi
// 006ddf32  8bf1                 mov esi, ecx
// 006ddf34  33ff                 xor edi, edi
// 006ddf36  e8d5eeffff           call 0x6dce10
// 006ddf3b  85c0                 test eax, eax
// 006ddf3d  740e                 je 0x6ddf4d
// 006ddf3f  90                   nop 
// 006ddf40  50                   push eax
// 006ddf41  8bce                 mov ecx, esi
// 006ddf43  47                   inc edi
// 006ddf44  e817efffff           call 0x6dce60
// 006ddf49  85c0                 test eax, eax
// 006ddf4b  75f3                 jne 0x6ddf40
// 006ddf4d  8bc7                 mov eax, edi
// 006ddf4f  5f                   pop edi
// 006ddf50  5e                   pop esi
// 006ddf51  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?GetSelectedCount@CXTTreeBase@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
