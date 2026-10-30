// roc 2009-12 00844d60  unit: CXTPPopupBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00844d60
//
// 00844d60  56                   push esi
// 00844d61  8bf1                 mov esi, ecx
// 00844d63  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 00844d6a  57                   push edi
// 00844d6b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00844d6f  743b                 je 0x844dac
// 00844d71  83ff28               cmp edi, 0x28
// 00844d74  7536                 jne 0x844dac
// 00844d76  6a11                 push 0x11
// 00844d78  ff1530cc9800         call dword ptr [0x98cc30]
// 00844d7e  6685c0               test ax, ax
// 00844d81  7c22                 jl 0x844da5
// 00844d83  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00844d89  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00844d8f  6a01                 push 1
// 00844d91  6a00                 push 0
// 00844d93  6a01                 push 1
// 00844d95  6a01                 push 1
// 00844d97  50                   push eax
// 00844d98  e833070000           call 0x8454d0
// 00844d9d  3b86cc000000         cmp eax, dword ptr [esi + 0xcc]
// 00844da3  7f07                 jg 0x844dac
// 00844da5  8bce                 mov ecx, esi
// 00844da7  e844f7ffff           call 0x8444f0
// 00844dac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00844db0  51                   push ecx
// 00844db1  57                   push edi
// 00844db2  8bce                 mov ecx, esi
// 00844db4  e8f732fcff           call 0x8080b0
// 00844db9  5f                   pop edi
// 00844dba  5e                   pop esi
// 00844dbb  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPPopupBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPPopupBar.cpp