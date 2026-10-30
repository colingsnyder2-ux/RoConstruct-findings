// roc 2009-12 00886b60  unit: XTPPaintThemes::CXTPWhidbeyTheme  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00886b60
//
// 00886b60  6aff                 push -1
// 00886b62  68600b9600           push 0x960b60
// 00886b67  64a100000000         mov eax, dword ptr fs:[0]
// 00886b6d  50                   push eax
// 00886b6e  51                   push ecx
// 00886b6f  56                   push esi
// 00886b70  a10052b600           mov eax, dword ptr [0xb65200]
// 00886b75  33c4                 xor eax, esp
// 00886b77  50                   push eax
// 00886b78  8d44240c             lea eax, [esp + 0xc]
// 00886b7c  64a300000000         mov dword ptr fs:[0], eax
// 00886b82  8bf1                 mov esi, ecx
// 00886b84  89742408             mov dword ptr [esp + 8], esi
// 00886b88  c706942aa000         mov dword ptr [esi], 0xa02a94
// 00886b8e  8d8e90040000         lea ecx, [esi + 0x490]
// 00886b94  c744241404000000     mov dword ptr [esp + 0x14], 4
// 00886b9c  e86f55feff           call 0x86c110
// 00886ba1  8d8e84040000         lea ecx, [esi + 0x484]
// 00886ba7  c644241403           mov byte ptr [esp + 0x14], 3
// 00886bac  e85f55feff           call 0x86c110
// 00886bb1  8d8e78040000         lea ecx, [esi + 0x478]
// 00886bb7  c644241402           mov byte ptr [esp + 0x14], 2
// 00886bbc  e84f55feff           call 0x86c110
// 00886bc1  8d8e6c040000         lea ecx, [esi + 0x46c]
// 00886bc7  c644241401           mov byte ptr [esp + 0x14], 1
// 00886bcc  e83f55feff           call 0x86c110
// 00886bd1  8d8e60040000         lea ecx, [esi + 0x460]
// 00886bd7  c644241400           mov byte ptr [esp + 0x14], 0
// 00886bdc  e82f55feff           call 0x86c110
// 00886be1  8bce                 mov ecx, esi
// 00886be3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00886beb  e800d2f7ff           call 0x803df0
// 00886bf0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00886bf4  64890d00000000       mov dword ptr fs:[0], ecx
// 00886bfb  59                   pop ecx
// 00886bfc  5e                   pop esi
// 00886bfd  83c410               add esp, 0x10
// 00886c00  c3                   ret 
// copied from an identical function in another client (function ??1CXTPNativeXPTheme@XTPPaintThemes@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp