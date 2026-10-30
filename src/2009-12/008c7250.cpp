// roc 2009-12 008c7250  unit: CXTPPropertyGridInplaceEdit  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c7250
//
// 008c7250  6aff                 push -1
// 008c7252  6867479600           push 0x964767
// 008c7257  64a100000000         mov eax, dword ptr fs:[0]
// 008c725d  50                   push eax
// 008c725e  51                   push ecx
// 008c725f  56                   push esi
// 008c7260  a10052b600           mov eax, dword ptr [0xb65200]
// 008c7265  33c4                 xor eax, esp
// 008c7267  50                   push eax
// 008c7268  8d44240c             lea eax, [esp + 0xc]
// 008c726c  64a300000000         mov dword ptr fs:[0], eax
// 008c7272  8bf1                 mov esi, ecx
// 008c7274  89742408             mov dword ptr [esp + 8], esi
// 008c7278  e8cbcef2ff           call 0x7f4148
// 008c727d  33c0                 xor eax, eax
// 008c727f  6856fd9900           push 0x99fd56
// 008c7284  8d4e70               lea ecx, [esi + 0x70]
// 008c7287  89442418             mov dword ptr [esp + 0x18], eax
// 008c728b  c706349da000         mov dword ptr [esi], 0xa09d34
// 008c7291  894654               mov dword ptr [esi + 0x54], eax
// 008c7294  894658               mov dword ptr [esi + 0x58], eax
// 008c7297  c7465c01000000       mov dword ptr [esi + 0x5c], 1
// 008c729e  894660               mov dword ptr [esi + 0x60], eax
// 008c72a1  894664               mov dword ptr [esi + 0x64], eax
// 008c72a4  894668               mov dword ptr [esi + 0x68], eax
// 008c72a7  c6466c5f             mov byte ptr [esi + 0x6c], 0x5f
// 008c72ab  ff15b8de9800         call dword ptr [0x98deb8]
// 008c72b1  6856fd9900           push 0x99fd56
// 008c72b6  8d4e74               lea ecx, [esi + 0x74]
// 008c72b9  c644241801           mov byte ptr [esp + 0x18], 1
// 008c72be  ff15b8de9800         call dword ptr [0x98deb8]
// 008c72c4  6856fd9900           push 0x99fd56
// 008c72c9  8d4e78               lea ecx, [esi + 0x78]
// 008c72cc  c644241802           mov byte ptr [esp + 0x18], 2
// 008c72d1  ff15b8de9800         call dword ptr [0x98deb8]
// 008c72d7  8d4e7c               lea ecx, [esi + 0x7c]
// 008c72da  ff1574de9800         call dword ptr [0x98de74]
// 008c72e0  6856fd9900           push 0x99fd56
// 008c72e5  8d8e80000000         lea ecx, [esi + 0x80]
// 008c72eb  c644241804           mov byte ptr [esp + 0x18], 4
// 008c72f0  ff15b8de9800         call dword ptr [0x98deb8]
// 008c72f6  6856fd9900           push 0x99fd56
// 008c72fb  8d8e84000000         lea ecx, [esi + 0x84]
// 008c7301  c644241805           mov byte ptr [esp + 0x18], 5
// 008c7306  ff15b8de9800         call dword ptr [0x98deb8]
// 008c730c  c7868800000001000000 mov dword ptr [esi + 0x88], 1
// 008c7316  8bc6                 mov eax, esi
// 008c7318  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008c731c  64890d00000000       mov dword ptr fs:[0], ecx
// 008c7323  59                   pop ecx
// 008c7324  5e                   pop esi
// 008c7325  83c410               add esp, 0x10
// 008c7328  c3                   ret 
// copied from an identical function in another client (function ??0?$CXTMaskEditT@VCEdit@@@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp