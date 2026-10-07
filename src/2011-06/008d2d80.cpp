// roc 2011-06 008d2d80  unit: CXTPControlCustom  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008d2d80
//
// 008d2d80  55                   push ebp
// 008d2d81  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 008d2d85  56                   push esi
// 008d2d86  57                   push edi
// 008d2d87  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 008d2d8b  8bb7a0000000         mov esi, dword ptr [edi + 0xa0]
// 008d2d91  55                   push ebp
// 008d2d92  8bce                 mov ecx, esi
// 008d2d94  e8c581f3ff           call 0x80af5e
// 008d2d99  85c0                 test eax, eax
// 008d2d9b  740e                 je 0x8d2dab
// 008d2d9d  55                   push ebp
// 008d2d9e  8bce                 mov ecx, esi
// 008d2da0  e8b981f3ff           call 0x80af5e
// 008d2da5  5f                   pop edi
// 008d2da6  5e                   pop esi
// 008d2da7  5d                   pop ebp
// 008d2da8  c20800               ret 8
// 008d2dab  33f6                 xor esi, esi
// 008d2dad  39b784000000         cmp dword ptr [edi + 0x84], esi
// 008d2db3  53                   push ebx
// 008d2db4  7e1f                 jle 0x8d2dd5
// 008d2db6  56                   push esi
// 008d2db7  8bcf                 mov ecx, edi
// 008d2db9  e8c27af5ff           call 0x82a880
// 008d2dbe  8bd8                 mov ebx, eax
// 008d2dc0  55                   push ebp
// 008d2dc1  8bcb                 mov ecx, ebx
// 008d2dc3  e89681f3ff           call 0x80af5e
// 008d2dc8  85c0                 test eax, eax
// 008d2dca  7512                 jne 0x8d2dde
// 008d2dcc  46                   inc esi
// 008d2dcd  3bb784000000         cmp esi, dword ptr [edi + 0x84]
// 008d2dd3  7ce1                 jl 0x8d2db6
// 008d2dd5  5b                   pop ebx
// 008d2dd6  5f                   pop edi
// 008d2dd7  5e                   pop esi
// 008d2dd8  33c0                 xor eax, eax
// 008d2dda  5d                   pop ebp
// 008d2ddb  c20800               ret 8
// 008d2dde  55                   push ebp
// 008d2ddf  8bcb                 mov ecx, ebx
// 008d2de1  e87881f3ff           call 0x80af5e
// 008d2de6  5b                   pop ebx
// 008d2de7  5f                   pop edi
// 008d2de8  5e                   pop esi
// 008d2de9  5d                   pop ebp
// 008d2dea  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlCustom.cpp (function ?FindChildWindow@CXTPControlCustom@@AAEPAVCWnd@@PAVCXTPCommandBars@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlCustom.cpp
