// roc 2009-12 0080b910  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0080b910
//
// 0080b910  6aff                 push -1
// 0080b912  68fb989500           push 0x9598fb
// 0080b917  64a100000000         mov eax, dword ptr fs:[0]
// 0080b91d  50                   push eax
// 0080b91e  51                   push ecx
// 0080b91f  56                   push esi
// 0080b920  a10052b600           mov eax, dword ptr [0xb65200]
// 0080b925  33c4                 xor eax, esp
// 0080b927  50                   push eax
// 0080b928  8d44240c             lea eax, [esp + 0xc]
// 0080b92c  64a300000000         mov dword ptr fs:[0], eax
// 0080b932  8bf1                 mov esi, ecx
// 0080b934  89742408             mov dword ptr [esp + 8], esi
// 0080b938  8b06                 mov eax, dword ptr [esi]
// 0080b93a  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0080b942  85c0                 test eax, eax
// 0080b944  740d                 je 0x80b953
// 0080b946  837e0400             cmp dword ptr [esi + 4], 0
// 0080b94a  7407                 je 0x80b953
// 0080b94c  50                   push eax
// 0080b94d  ff1558b09800         call dword ptr [0x98b058]
// 0080b953  8bce                 mov ecx, esi
// 0080b955  e886e9ffff           call 0x80a2e0
// 0080b95a  8d4e10               lea ecx, [esi + 0x10]
// 0080b95d  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0080b965  e8d6fdffff           call 0x80b740
// 0080b96a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0080b96e  64890d00000000       mov dword ptr fs:[0], ecx
// 0080b975  59                   pop ecx
// 0080b976  5e                   pop esi
// 0080b977  83c410               add esp, 0x10
// 0080b97a  c3                   ret 
// copied from an identical function in another client (function ??1CXTPImageManagerImageList@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp