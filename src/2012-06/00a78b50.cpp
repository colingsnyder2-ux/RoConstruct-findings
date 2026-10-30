// roc 2012-06 00a78b50  unit: CXTPDockingPaneAutoHidePanel  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a78b50
//
// 00a78b50  55                   push ebp
// 00a78b51  8bec                 mov ebp, esp
// 00a78b53  83e4c0               and esp, 0xffffffc0
// 00a78b56  d9ee                 fldz 
// 00a78b58  83ec40               sub esp, 0x40
// 00a78b5b  dd4510               fld qword ptr [ebp + 0x10]
// 00a78b5e  dde1                 fucom st(1)
// 00a78b60  dfe0                 fnstsw ax
// 00a78b62  ddd9                 fstp st(1)
// 00a78b64  f6c444               test ah, 0x44
// 00a78b67  0f8a9b000000         jp 0xa78c08
// 00a78b6d  ddd8                 fstp st(0)
// 00a78b6f  dd4518               fld qword ptr [ebp + 0x18]
// 00a78b72  d9c0                 fld st(0)
// 00a78b74  d9c1                 fld st(1)
// 00a78b76  d9c9                 fxch st(1)
// 00a78b78  d9ca                 fxch st(2)
// 00a78b7a  d9c9                 fxch st(1)
// 00a78b7c  dd05383bb500         fld qword ptr [0xb53b38]
// 00a78b82  d97c241e             fnstcw word ptr [esp + 0x1e]
// 00a78b86  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 00a78b8b  dccb                 fmul st(3), st(0)
// 00a78b8d  0d000c0000           or eax, 0xc00
// 00a78b92  d9cb                 fxch st(3)
// 00a78b94  89442420             mov dword ptr [esp + 0x20], eax
// 00a78b98  d96c2420             fldcw word ptr [esp + 0x20]
// 00a78b9c  db5c2420             fistp dword ptr [esp + 0x20]
// 00a78ba0  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 00a78ba5  0fb6d0               movzx edx, al
// 00a78ba8  d96c241e             fldcw word ptr [esp + 0x1e]
// 00a78bac  c1e208               shl edx, 8
// 00a78baf  d97c241e             fnstcw word ptr [esp + 0x1e]
// 00a78bb3  d8ca                 fmul st(2)
// 00a78bb5  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 00a78bba  0d000c0000           or eax, 0xc00
// 00a78bbf  89442420             mov dword ptr [esp + 0x20], eax
// 00a78bc3  d96c2420             fldcw word ptr [esp + 0x20]
// 00a78bc7  db5c2420             fistp dword ptr [esp + 0x20]
// 00a78bcb  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 00a78bd0  0bd0                 or edx, eax
// 00a78bd2  c1e208               shl edx, 8
// 00a78bd5  d96c241e             fldcw word ptr [esp + 0x1e]
// 00a78bd9  d97c241e             fnstcw word ptr [esp + 0x1e]
// 00a78bdd  dec9                 fmulp st(1)
// 00a78bdf  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 00a78be4  0d000c0000           or eax, 0xc00
// 00a78be9  89442420             mov dword ptr [esp + 0x20], eax
// 00a78bed  d96c2420             fldcw word ptr [esp + 0x20]
// 00a78bf1  db5c2420             fistp dword ptr [esp + 0x20]
// 00a78bf5  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 00a78bfa  0bd0                 or edx, eax
// 00a78bfc  8911                 mov dword ptr [ecx], edx
// 00a78bfe  d96c241e             fldcw word ptr [esp + 0x1e]
// 00a78c02  8be5                 mov esp, ebp
// 00a78c04  5d                   pop ebp
// 00a78c05  c21800               ret 0x18
// 00a78c08  dd0500a2b600         fld qword ptr [0xb6a200]
// 00a78c0e  dd4518               fld qword ptr [ebp + 0x18]
// 00a78c11  d8d1                 fcom st(1)
// 00a78c13  dfe0                 fnstsw ax
// 00a78c15  ddd9                 fstp st(1)
// 00a78c17  f6c405               test ah, 5
// 00a78c1a  7a0c                 jp 0xa78c28
// 00a78c1c  d9c9                 fxch st(1)
// 00a78c1e  dc0570fdb400         fadd qword ptr [0xb4fd70]
// 00a78c24  d8c9                 fmul st(1)
// 00a78c26  eb0c                 jmp 0xa78c34
// 00a78c28  d9c1                 fld st(1)
// 00a78c2a  d8c1                 fadd st(1)
// 00a78c2c  d9ca                 fxch st(2)
// 00a78c2e  d8c9                 fmul st(1)
// 00a78c30  deea                 fsubp st(2)
// 00a78c32  d9c9                 fxch st(1)
// 00a78c34  dd542420             fst qword ptr [esp + 0x20]
// 00a78c38  83ec18               sub esp, 0x18
// 00a78c3b  d9c9                 fxch st(1)
// 00a78c3d  dcc0                 fadd st(0), st(0)
// 00a78c3f  d8e1                 fsub st(1)
// 00a78c41  dd542440             fst qword ptr [esp + 0x40]
// 00a78c45  dd4508               fld qword ptr [ebp + 8]
// 00a78c48  dc052097c200         fadd qword ptr [0xc29720]
// 00a78c4e  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a78c52  d9c9                 fxch st(1)
// 00a78c54  dd5c2408             fstp qword ptr [esp + 8]
// 00a78c58  dd1c24               fstp qword ptr [esp]
// 00a78c5b  e840feffff           call 0xa78aa0
// 00a78c60  dd5c2448             fstp qword ptr [esp + 0x48]
// 00a78c64  dd4508               fld qword ptr [ebp + 8]
// 00a78c67  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a78c6b  dd442438             fld qword ptr [esp + 0x38]
// 00a78c6f  dd5c2408             fstp qword ptr [esp + 8]
// 00a78c73  dd442440             fld qword ptr [esp + 0x40]
// 00a78c77  dd1c24               fstp qword ptr [esp]
// 00a78c7a  e821feffff           call 0xa78aa0
// 00a78c7f  dd5c2450             fstp qword ptr [esp + 0x50]
// 00a78c83  dd4508               fld qword ptr [ebp + 8]
// 00a78c86  dc252097c200         fsub qword ptr [0xc29720]
// 00a78c8c  dd5c2410             fstp qword ptr [esp + 0x10]
// 00a78c90  dd442438             fld qword ptr [esp + 0x38]
// 00a78c94  dd5c2408             fstp qword ptr [esp + 8]
// 00a78c98  dd442440             fld qword ptr [esp + 0x40]
// 00a78c9c  dd1c24               fstp qword ptr [esp]
// 00a78c9f  e8fcfdffff           call 0xa78aa0
// 00a78ca4  dd442448             fld qword ptr [esp + 0x48]
// 00a78ca8  83c418               add esp, 0x18
// 00a78cab  dd442438             fld qword ptr [esp + 0x38]
// 00a78caf  e9c8feffff           jmp 0xa78b7c
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
