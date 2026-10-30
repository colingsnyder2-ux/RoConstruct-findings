// roc 2009-06 00769f60  unit: CXTPPopupBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00769f60
//
// 00769f60  56                   push esi
// 00769f61  8bf1                 mov esi, ecx
// 00769f63  83bea401000000       cmp dword ptr [esi + 0x1a4], 0
// 00769f6a  57                   push edi
// 00769f6b  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00769f6f  743b                 je 0x769fac
// 00769f71  83ff28               cmp edi, 0x28
// 00769f74  7536                 jne 0x769fac
// 00769f76  6a11                 push 0x11
// 00769f78  ff1534ee8900         call dword ptr [0x89ee34]
// 00769f7e  6685c0               test ax, ax
// 00769f81  7c22                 jl 0x769fa5
// 00769f83  8b86cc000000         mov eax, dword ptr [esi + 0xcc]
// 00769f89  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 00769f8f  6a01                 push 1
// 00769f91  6a00                 push 0
// 00769f93  6a01                 push 1
// 00769f95  6a01                 push 1
// 00769f97  50                   push eax
// 00769f98  e853070000           call 0x76a6f0
// 00769f9d  3b86cc000000         cmp eax, dword ptr [esi + 0xcc]
// 00769fa3  7f07                 jg 0x769fac
// 00769fa5  8bce                 mov ecx, esi
// 00769fa7  e844f7ffff           call 0x7696f0
// 00769fac  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00769fb0  51                   push ecx
// 00769fb1  57                   push edi
// 00769fb2  8bce                 mov ecx, esi
// 00769fb4  e8776ffcff           call 0x730f30
// 00769fb9  5f                   pop edi
// 00769fba  5e                   pop esi
// 00769fbb  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPPopupBar@@MAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp