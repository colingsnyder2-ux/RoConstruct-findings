// roc 2009-12 008c7600  unit: VCEdit::?$CXTMaskEditT  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7600
//
// 008c7600  6aff                 push -1
// 008c7602  6819ba9500           push 0x95ba19
// 008c7607  64a100000000         mov eax, dword ptr fs:[0]
// 008c760d  50                   push eax
// 008c760e  51                   push ecx
// 008c760f  53                   push ebx
// 008c7610  56                   push esi
// 008c7611  a10052b600           mov eax, dword ptr [0xb65200]
// 008c7616  33c4                 xor eax, esp
// 008c7618  50                   push eax
// 008c7619  8d442410             lea eax, [esp + 0x10]
// 008c761d  64a300000000         mov dword ptr fs:[0], eax
// 008c7623  8bf1                 mov esi, ecx
// 008c7625  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008c7629  0fbec3               movsx eax, bl
// 008c762c  50                   push eax
// 008c762d  ff1510b79800         call dword ptr [0x98b710]
// 008c7633  83c404               add esp, 4
// 008c7636  85c0                 test eax, eax
// 008c7638  7419                 je 0x8c7653
// 008c763a  b801000000           mov eax, 1
// 008c763f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c7643  64890d00000000       mov dword ptr fs:[0], ecx
// 008c764a  59                   pop ecx
// 008c764b  5e                   pop esi
// 008c764c  5b                   pop ebx
// 008c764d  83c410               add esp, 0x10
// 008c7650  c20400               ret 4
// 008c7653  6a01                 push 1
// 008c7655  53                   push ebx
// 008c7656  8d4c2414             lea ecx, [esp + 0x14]
// 008c765a  ff15f0da9800         call dword ptr [0x98daf0]
// 008c7660  8d4c240c             lea ecx, [esp + 0xc]
// 008c7664  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008c766c  ff1524d29800         call dword ptr [0x98d224]
// 008c7672  6a00                 push 0
// 008c7674  8d4c2410             lea ecx, [esp + 0x10]
// 008c7678  ff1510d59800         call dword ptr [0x98d510]
// 008c767e  8d4c240c             lea ecx, [esp + 0xc]
// 008c7682  88442420             mov byte ptr [esp + 0x20], al
// 008c7686  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 008c768e  ff15c0de9800         call dword ptr [0x98dec0]
// 008c7694  385c2420             cmp byte ptr [esp + 0x20], bl
// 008c7698  75a0                 jne 0x8c763a
// 008c769a  6a00                 push 0
// 008c769c  53                   push ebx
// 008c769d  8bce                 mov ecx, esi
// 008c769f  e89cf5ffff           call 0x8c6c40
// 008c76a4  33c9                 xor ecx, ecx
// 008c76a6  3ac3                 cmp al, bl
// 008c76a8  0f95c1               setne cl
// 008c76ab  8bc1                 mov eax, ecx
// 008c76ad  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008c76b1  64890d00000000       mov dword ptr fs:[0], ecx
// 008c76b8  59                   pop ecx
// 008c76b9  5e                   pop esi
// 008c76ba  5b                   pop ebx
// 008c76bb  83c410               add esp, 0x10
// 008c76be  c20400               ret 4
// copied from an identical function in another client (function ?IsAlphaChar@?$CXTMaskEditT@VCEdit@@@@MAEHD@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp