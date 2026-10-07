// roc 2012-06 0059fa10  unit: seg_00590000  size: 469 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059fa10
//
// 0059fa10  6aff                 push -1
// 0059fa12  681a18ab00           push 0xab181a
// 0059fa17  64a100000000         mov eax, dword ptr fs:[0]
// 0059fa1d  50                   push eax
// 0059fa1e  64892500000000       mov dword ptr fs:[0], esp
// 0059fa25  51                   push ecx
// 0059fa26  53                   push ebx
// 0059fa27  33db                 xor ebx, ebx
// 0059fa29  56                   push esi
// 0059fa2a  8bf1                 mov esi, ecx
// 0059fa2c  89742408             mov dword ptr [esp + 8], esi
// 0059fa30  895e0c               mov dword ptr [esi + 0xc], ebx
// 0059fa33  891e                 mov dword ptr [esi], ebx
// 0059fa35  895e04               mov dword ptr [esi + 4], ebx
// 0059fa38  895e08               mov dword ptr [esi + 8], ebx
// 0059fa3b  895c2414             mov dword ptr [esp + 0x14], ebx
// 0059fa3f  895e2c               mov dword ptr [esi + 0x2c], ebx
// 0059fa42  895e20               mov dword ptr [esi + 0x20], ebx
// 0059fa45  895e24               mov dword ptr [esi + 0x24], ebx
// 0059fa48  895e28               mov dword ptr [esi + 0x28], ebx
// 0059fa4b  895e38               mov dword ptr [esi + 0x38], ebx
// 0059fa4e  895e3c               mov dword ptr [esi + 0x3c], ebx
// 0059fa51  c7464000400000       mov dword ptr [esi + 0x40], 0x4000
// 0059fa58  895e4c               mov dword ptr [esi + 0x4c], ebx
// 0059fa5b  895e44               mov dword ptr [esi + 0x44], ebx
// 0059fa5e  895e48               mov dword ptr [esi + 0x48], ebx
// 0059fa61  895e5c               mov dword ptr [esi + 0x5c], ebx
// 0059fa64  895e60               mov dword ptr [esi + 0x60], ebx
// 0059fa67  c7466400400000       mov dword ptr [esi + 0x64], 0x4000
// 0059fa6e  899e7c080000         mov dword ptr [esi + 0x87c], ebx
// 0059fa74  899e74080000         mov dword ptr [esi + 0x874], ebx
// 0059fa7a  899e78080000         mov dword ptr [esi + 0x878], ebx
// 0059fa80  889e80080000         mov byte ptr [esi + 0x880], bl
// 0059fa86  899eb0080000         mov dword ptr [esi + 0x8b0], ebx
// 0059fa8c  899ea8080000         mov dword ptr [esi + 0x8a8], ebx
// 0059fa92  899eac080000         mov dword ptr [esi + 0x8ac], ebx
// 0059fa98  68a0c45b00           push 0x5bc4a0
// 0059fa9d  68e0c25900           push 0x59c2e0
// 0059faa2  6a20                 push 0x20
// 0059faa4  6a10                 push 0x10
// 0059faa6  8d86a80b0000         lea eax, [esi + 0xba8]
// 0059faac  50                   push eax
// 0059faad  c644242806           mov byte ptr [esp + 0x28], 6
// 0059fab2  e8c3383e00           call 0x98337a
// 0059fab7  899e340e0000         mov dword ptr [esi + 0xe34], ebx
// 0059fabd  899e280e0000         mov dword ptr [esi + 0xe28], ebx
// 0059fac3  899e2c0e0000         mov dword ptr [esi + 0xe2c], ebx
// 0059fac9  899e300e0000         mov dword ptr [esi + 0xe30], ebx
// 0059facf  8d8ea00e0000         lea ecx, [esi + 0xea0]
// 0059fad5  c644241408           mov byte ptr [esp + 0x14], 8
// 0059fada  e821624500           call 0x9f5d00
// 0059fadf  899eec0e0000         mov dword ptr [esi + 0xeec], ebx
// 0059fae5  899ee40e0000         mov dword ptr [esi + 0xee4], ebx
// 0059faeb  899ee80e0000         mov dword ptr [esi + 0xee8], ebx
// 0059faf1  899ef80e0000         mov dword ptr [esi + 0xef8], ebx
// 0059faf7  899ef00e0000         mov dword ptr [esi + 0xef0], ebx
// 0059fafd  899ef40e0000         mov dword ptr [esi + 0xef4], ebx
// 0059fb03  899e040f0000         mov dword ptr [esi + 0xf04], ebx
// 0059fb09  899efc0e0000         mov dword ptr [esi + 0xefc], ebx
// 0059fb0f  899e000f0000         mov dword ptr [esi + 0xf00], ebx
// 0059fb15  899e100f0000         mov dword ptr [esi + 0xf10], ebx
// 0059fb1b  899e080f0000         mov dword ptr [esi + 0xf08], ebx
// 0059fb21  899e0c0f0000         mov dword ptr [esi + 0xf0c], ebx
// 0059fb27  899e1c0f0000         mov dword ptr [esi + 0xf1c], ebx
// 0059fb2d  899e140f0000         mov dword ptr [esi + 0xf14], ebx
// 0059fb33  899e180f0000         mov dword ptr [esi + 0xf18], ebx
// 0059fb39  899e480f0000         mov dword ptr [esi + 0xf48], ebx
// 0059fb3f  899e400f0000         mov dword ptr [esi + 0xf40], ebx
// 0059fb45  899e440f0000         mov dword ptr [esi + 0xf44], ebx
// 0059fb4b  899e580f0000         mov dword ptr [esi + 0xf58], ebx
// 0059fb51  899e500f0000         mov dword ptr [esi + 0xf50], ebx
// 0059fb57  899e540f0000         mov dword ptr [esi + 0xf54], ebx
// 0059fb5d  899e640f0000         mov dword ptr [esi + 0xf64], ebx
// 0059fb63  899e5c0f0000         mov dword ptr [esi + 0xf5c], ebx
// 0059fb69  899e600f0000         mov dword ptr [esi + 0xf60], ebx
// 0059fb6f  899e740f0000         mov dword ptr [esi + 0xf74], ebx
// 0059fb75  899e780f0000         mov dword ptr [esi + 0xf78], ebx
// 0059fb7b  c7867c0f000000400000 mov dword ptr [esi + 0xf7c], 0x4000
// 0059fb85  6890ca5900           push 0x59ca90
// 0059fb8a  6800dc5900           push 0x59dc00
// 0059fb8f  6a07                 push 7
// 0059fb91  6a20                 push 0x20
// 0059fb93  8d8e800f0000         lea ecx, [esi + 0xf80]
// 0059fb99  51                   push ecx
// 0059fb9a  c644242812           mov byte ptr [esp + 0x28], 0x12
// 0059fb9f  e8d6373e00           call 0x98337a
// 0059fba4  8bce                 mov ecx, esi
// 0059fba6  c644241413           mov byte ptr [esp + 0x14], 0x13
// 0059fbab  c786c008000010270000 mov dword ptr [esi + 0x8c0], 0x2710
// 0059fbb5  e806cfffff           call 0x59cac0
// 0059fbba  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0059fbbe  c7464000040000       mov dword ptr [esi + 0x40], 0x400
// 0059fbc5  c7466400070000       mov dword ptr [esi + 0x64], 0x700
// 0059fbcc  c7867c0f000000010000 mov dword ptr [esi + 0xf7c], 0x100
// 0059fbd6  8bc6                 mov eax, esi
// 0059fbd8  5e                   pop esi
// 0059fbd9  5b                   pop ebx
// 0059fbda  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fbe1  83c410               add esp, 0x10
// 0059fbe4  c3                   ret 
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??0ReliabilityLayer@RakNet@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
