// roc 2007-03 00455d80  unit: seg_00450000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00455d80
//
// 00455d80  d9ee                 fldz 
// 00455d82  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00455d86  d911                 fst dword ptr [ecx]
// 00455d88  d95104               fst dword ptr [ecx + 4]
// 00455d8b  d95108               fst dword ptr [ecx + 8]
// 00455d8e  d9590c               fstp dword ptr [ecx + 0xc]
// 00455d91  d9442410             fld dword ptr [esp + 0x10]
// 00455d95  d9442408             fld dword ptr [esp + 8]
// 00455d99  d8d1                 fcom st(1)
// 00455d9b  dfe0                 fnstsw ax
// 00455d9d  f6c441               test ah, 0x41
// 00455da0  8d442410             lea eax, [esp + 0x10]
// 00455da4  7404                 je 0x455daa
// 00455da6  8d442408             lea eax, [esp + 8]
// 00455daa  d900                 fld dword ptr [eax]
// 00455dac  d919                 fstp dword ptr [ecx]
// 00455dae  d9442414             fld dword ptr [esp + 0x14]
// 00455db2  d944240c             fld dword ptr [esp + 0xc]
// 00455db6  d8d1                 fcom st(1)
// 00455db8  dfe0                 fnstsw ax
// 00455dba  f6c441               test ah, 0x41
// 00455dbd  8d442414             lea eax, [esp + 0x14]
// 00455dc1  7404                 je 0x455dc7
// 00455dc3  8d44240c             lea eax, [esp + 0xc]
// 00455dc7  d900                 fld dword ptr [eax]
// 00455dc9  d95904               fstp dword ptr [ecx + 4]
// 00455dcc  d9ca                 fxch st(2)
// 00455dce  d8db                 fcomp st(3)
// 00455dd0  dfe0                 fnstsw ax
// 00455dd2  ddda                 fstp st(2)
// 00455dd4  f6c405               test ah, 5
// 00455dd7  8d442410             lea eax, [esp + 0x10]
// 00455ddb  7b04                 jnp 0x455de1
// 00455ddd  8d442408             lea eax, [esp + 8]
// 00455de1  d900                 fld dword ptr [eax]
// 00455de3  d95908               fstp dword ptr [ecx + 8]
// 00455de6  ded9                 fcompp 
// 00455de8  dfe0                 fnstsw ax
// 00455dea  f6c405               test ah, 5
// 00455ded  8d442414             lea eax, [esp + 0x14]
// 00455df1  7b04                 jnp 0x455df7
// 00455df3  8d44240c             lea eax, [esp + 0xc]
// 00455df7  d900                 fld dword ptr [eax]
// 00455df9  8bc1                 mov eax, ecx
// 00455dfb  d9590c               fstp dword ptr [ecx + 0xc]
// 00455dfe  c3                   ret 
// library rbxgs/tool\ToolsArrow.cpp (function ?xyxy@Rect2D@G3D@@SA?AV12@MMMM@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/ToolsArrow.cpp
