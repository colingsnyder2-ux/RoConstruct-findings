// from server: 100% by auto
// roc 2007-08 00518970  unit: seg_00510000  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00518970
//
// 00518970  8b442404             mov eax, dword ptr [esp + 4]
// 00518974  8a5009               mov dl, byte ptr [eax + 9]
// 00518977  80fa08               cmp dl, 8
// 0051897a  7344                 jae 0x5189c0
// 0051897c  8b4804               mov ecx, dword ptr [eax + 4]
// 0051897f  8b442408             mov eax, dword ptr [esp + 8]
// 00518983  03c8                 add ecx, eax
// 00518985  80fa01               cmp dl, 1
// 00518988  56                   push esi
// 00518989  7507                 jne 0x518992
// 0051898b  be18848900           mov esi, 0x898418
// 00518990  eb16                 jmp 0x5189a8
// 00518992  80fa02               cmp dl, 2
// 00518995  7507                 jne 0x51899e
// 00518997  be18858900           mov esi, 0x898518
// 0051899c  eb0a                 jmp 0x5189a8
// 0051899e  80fa04               cmp dl, 4
// 005189a1  751c                 jne 0x5189bf
// 005189a3  be18868900           mov esi, 0x898618
// 005189a8  3bc1                 cmp eax, ecx
// 005189aa  7313                 jae 0x5189bf
// 005189ac  8d642400             lea esp, [esp]
// 005189b0  0fb610               movzx edx, byte ptr [eax]
// 005189b3  8a1432               mov dl, byte ptr [edx + esi]
// 005189b6  8810                 mov byte ptr [eax], dl
// 005189b8  83c001               add eax, 1
// 005189bb  3bc1                 cmp eax, ecx
// 005189bd  72f1                 jb 0x5189b0
// 005189bf  5e                   pop esi
// 005189c0  c3                   ret 
// library libpng-1.2.5/pngtrans.c (function _png_do_packswap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngtrans.c
