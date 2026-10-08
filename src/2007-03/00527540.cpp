// roc 2007-03 00527540  unit: seg_00520000  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00527540
//
// 00527540  80790c00             cmp byte ptr [ecx + 0xc], 0
// 00527544  740c                 je 0x527552
// 00527546  8b44815c             mov eax, dword ptr [ecx + eax*4 + 0x5c]
// 0052754a  8304b001             add dword ptr [eax + esi*4], 1
// 0052754e  8d04b0               lea eax, [eax + esi*4]
// 00527551  c3                   ret 
// 00527552  8b54814c             mov edx, dword ptr [ecx + eax*4 + 0x4c]
// 00527556  0fbe843200040000     movsx eax, byte ptr [edx + esi + 0x400]
// 0052755e  8b14b2               mov edx, dword ptr [edx + esi*4]
// 00527561  52                   push edx
// 00527562  e8f9feffff           call 0x527460
// 00527567  59                   pop ecx
// 00527568  c3                   ret 
// library jpeg-6b/jcphuff.c (function _emit_symbol)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
