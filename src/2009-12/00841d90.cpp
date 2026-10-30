// roc 2009-12 00841d90  unit: CXTPPopupBar  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841d90
//
// 00841d90  53                   push ebx
// 00841d91  56                   push esi
// 00841d92  57                   push edi
// 00841d93  8bf9                 mov edi, ecx
// 00841d95  33db                 xor ebx, ebx
// 00841d97  e8b434fcff           call 0x805250
// 00841d9c  85c0                 test eax, eax
// 00841d9e  7e3f                 jle 0x841ddf
// 00841da0  53                   push ebx
// 00841da1  8bcf                 mov ecx, edi
// 00841da3  e8b834fcff           call 0x805260
// 00841da8  8bf0                 mov esi, eax
// 00841daa  85f6                 test esi, esi
// 00841dac  7425                 je 0x841dd3
// 00841dae  39be00010000         cmp dword ptr [esi + 0x100], edi
// 00841db4  751d                 jne 0x841dd3
// 00841db6  8b06                 mov eax, dword ptr [esi]
// 00841db8  8b9080000000         mov edx, dword ptr [eax + 0x80]
// 00841dbe  6a00                 push 0
// 00841dc0  8bce                 mov ecx, esi
// 00841dc2  ffd2                 call edx
// 00841dc4  85c0                 test eax, eax
// 00841dc6  740b                 je 0x841dd3
// 00841dc8  8bce                 mov ecx, esi
// 00841dca  e8213cbfff           call 0x4359f0
// 00841dcf  85c0                 test eax, eax
// 00841dd1  7515                 jne 0x841de8
// 00841dd3  8bcf                 mov ecx, edi
// 00841dd5  43                   inc ebx
// 00841dd6  e87534fcff           call 0x805250
// 00841ddb  3bd8                 cmp ebx, eax
// 00841ddd  7cc1                 jl 0x841da0
// 00841ddf  5f                   pop edi
// 00841de0  5e                   pop esi
// 00841de1  83c8ff               or eax, 0xffffffff
// 00841de4  5b                   pop ebx
// 00841de5  c20800               ret 8
// 00841de8  837c241400           cmp dword ptr [esp + 0x14], 0
// 00841ded  740c                 je 0x841dfb
// 00841def  8b8680000000         mov eax, dword ptr [esi + 0x80]
// 00841df5  5f                   pop edi
// 00841df6  5e                   pop esi
// 00841df7  5b                   pop ebx
// 00841df8  c20800               ret 8
// 00841dfb  8b8684000000         mov eax, dword ptr [esi + 0x84]
// 00841e01  5f                   pop edi
// 00841e02  5e                   pop esi
// 00841e03  5b                   pop ebx
// 00841e04  c20800               ret 8
// copied from an identical function in another client (function ?GetDefaultItem@CXTPPopupBar@@QAEIIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp