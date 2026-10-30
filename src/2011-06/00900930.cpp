// roc 2011-06 00900930  unit: CXTPDockingPaneAutoHidePanel  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00900930
//
// 00900930  55                   push ebp
// 00900931  8bec                 mov ebp, esp
// 00900933  83e4c0               and esp, 0xffffffc0
// 00900936  d9ee                 fldz 
// 00900938  83ec40               sub esp, 0x40
// 0090093b  dd4510               fld qword ptr [ebp + 0x10]
// 0090093e  dde1                 fucom st(1)
// 00900940  dfe0                 fnstsw ax
// 00900942  ddd9                 fstp st(1)
// 00900944  f6c444               test ah, 0x44
// 00900947  0f8a9b000000         jp 0x9009e8
// 0090094d  ddd8                 fstp st(0)
// 0090094f  dd4518               fld qword ptr [ebp + 0x18]
// 00900952  d9c0                 fld st(0)
// 00900954  d9c1                 fld st(1)
// 00900956  d9c9                 fxch st(1)
// 00900958  d9ca                 fxch st(2)
// 0090095a  d9c9                 fxch st(1)
// 0090095c  dd052891a600         fld qword ptr [0xa69128]
// 00900962  d97c241e             fnstcw word ptr [esp + 0x1e]
// 00900966  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0090096b  dccb                 fmul st(3), st(0)
// 0090096d  0d000c0000           or eax, 0xc00
// 00900972  d9cb                 fxch st(3)
// 00900974  89442420             mov dword ptr [esp + 0x20], eax
// 00900978  d96c2420             fldcw word ptr [esp + 0x20]
// 0090097c  db5c2420             fistp dword ptr [esp + 0x20]
// 00900980  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 00900985  0fb6d0               movzx edx, al
// 00900988  d96c241e             fldcw word ptr [esp + 0x1e]
// 0090098c  c1e208               shl edx, 8
// 0090098f  d97c241e             fnstcw word ptr [esp + 0x1e]
// 00900993  d8ca                 fmul st(2)
// 00900995  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0090099a  0d000c0000           or eax, 0xc00
// 0090099f  89442420             mov dword ptr [esp + 0x20], eax
// 009009a3  d96c2420             fldcw word ptr [esp + 0x20]
// 009009a7  db5c2420             fistp dword ptr [esp + 0x20]
// 009009ab  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 009009b0  0bd0                 or edx, eax
// 009009b2  c1e208               shl edx, 8
// 009009b5  d96c241e             fldcw word ptr [esp + 0x1e]
// 009009b9  d97c241e             fnstcw word ptr [esp + 0x1e]
// 009009bd  dec9                 fmulp st(1)
// 009009bf  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 009009c4  0d000c0000           or eax, 0xc00
// 009009c9  89442420             mov dword ptr [esp + 0x20], eax
// 009009cd  d96c2420             fldcw word ptr [esp + 0x20]
// 009009d1  db5c2420             fistp dword ptr [esp + 0x20]
// 009009d5  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 009009da  0bd0                 or edx, eax
// 009009dc  8911                 mov dword ptr [ecx], edx
// 009009de  d96c241e             fldcw word ptr [esp + 0x1e]
// 009009e2  8be5                 mov esp, ebp
// 009009e4  5d                   pop ebp
// 009009e5  c21800               ret 0x18
// 009009e8  dd0508afa700         fld qword ptr [0xa7af08]
// 009009ee  dd4518               fld qword ptr [ebp + 0x18]
// 009009f1  d8d1                 fcom st(1)
// 009009f3  dfe0                 fnstsw ax
// 009009f5  ddd9                 fstp st(1)
// 009009f7  f6c405               test ah, 5
// 009009fa  7a0c                 jp 0x900a08
// 009009fc  d9c9                 fxch st(1)
// 009009fe  dc058862a600         fadd qword ptr [0xa66288]
// 00900a04  d8c9                 fmul st(1)
// 00900a06  eb0c                 jmp 0x900a14
// 00900a08  d9c1                 fld st(1)
// 00900a0a  d8c1                 fadd st(1)
// 00900a0c  d9ca                 fxch st(2)
// 00900a0e  d8c9                 fmul st(1)
// 00900a10  deea                 fsubp st(2)
// 00900a12  d9c9                 fxch st(1)
// 00900a14  dd542420             fst qword ptr [esp + 0x20]
// 00900a18  83ec18               sub esp, 0x18
// 00900a1b  d9c9                 fxch st(1)
// 00900a1d  dcc0                 fadd st(0), st(0)
// 00900a1f  d8e1                 fsub st(1)
// 00900a21  dd542440             fst qword ptr [esp + 0x40]
// 00900a25  dd4508               fld qword ptr [ebp + 8]
// 00900a28  dc0560e0ad00         fadd qword ptr [0xade060]
// 00900a2e  dd5c2410             fstp qword ptr [esp + 0x10]
// 00900a32  d9c9                 fxch st(1)
// 00900a34  dd5c2408             fstp qword ptr [esp + 8]
// 00900a38  dd1c24               fstp qword ptr [esp]
// 00900a3b  e840feffff           call 0x900880
// 00900a40  dd5c2448             fstp qword ptr [esp + 0x48]
// 00900a44  dd4508               fld qword ptr [ebp + 8]
// 00900a47  dd5c2410             fstp qword ptr [esp + 0x10]
// 00900a4b  dd442438             fld qword ptr [esp + 0x38]
// 00900a4f  dd5c2408             fstp qword ptr [esp + 8]
// 00900a53  dd442440             fld qword ptr [esp + 0x40]
// 00900a57  dd1c24               fstp qword ptr [esp]
// 00900a5a  e821feffff           call 0x900880
// 00900a5f  dd5c2450             fstp qword ptr [esp + 0x50]
// 00900a63  dd4508               fld qword ptr [ebp + 8]
// 00900a66  dc2560e0ad00         fsub qword ptr [0xade060]
// 00900a6c  dd5c2410             fstp qword ptr [esp + 0x10]
// 00900a70  dd442438             fld qword ptr [esp + 0x38]
// 00900a74  dd5c2408             fstp qword ptr [esp + 8]
// 00900a78  dd442440             fld qword ptr [esp + 0x40]
// 00900a7c  dd1c24               fstp qword ptr [esp]
// 00900a7f  e8fcfdffff           call 0x900880
// 00900a84  dd442448             fld qword ptr [esp + 0x48]
// 00900a88  83c418               add esp, 0x18
// 00900a8b  dd442438             fld qword ptr [esp + 0x38]
// 00900a8f  e9c8feffff           jmp 0x90095c
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
