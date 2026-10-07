// roc 2008-06 007a0980  unit: CXTPDockingPaneAutoHidePanel  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a0980
//
// 007a0980  55                   push ebp
// 007a0981  8bec                 mov ebp, esp
// 007a0983  83e4c0               and esp, 0xffffffc0
// 007a0986  d9ee                 fldz 
// 007a0988  83ec40               sub esp, 0x40
// 007a098b  dd4510               fld qword ptr [ebp + 0x10]
// 007a098e  dde1                 fucom st(1)
// 007a0990  dfe0                 fnstsw ax
// 007a0992  ddd9                 fstp st(1)
// 007a0994  f6c444               test ah, 0x44
// 007a0997  0f8a9b000000         jp 0x7a0a38
// 007a099d  ddd8                 fstp st(0)
// 007a099f  dd4518               fld qword ptr [ebp + 0x18]
// 007a09a2  d9c0                 fld st(0)
// 007a09a4  d9c1                 fld st(1)
// 007a09a6  d9c9                 fxch st(1)
// 007a09a8  d9ca                 fxch st(2)
// 007a09aa  d9c9                 fxch st(1)
// 007a09ac  dd05d8358100         fld qword ptr [0x8135d8]
// 007a09b2  d97c241e             fnstcw word ptr [esp + 0x1e]
// 007a09b6  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 007a09bb  dccb                 fmul st(3), st(0)
// 007a09bd  0d000c0000           or eax, 0xc00
// 007a09c2  d9cb                 fxch st(3)
// 007a09c4  89442420             mov dword ptr [esp + 0x20], eax
// 007a09c8  d96c2420             fldcw word ptr [esp + 0x20]
// 007a09cc  db5c2420             fistp dword ptr [esp + 0x20]
// 007a09d0  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 007a09d5  0fb6d0               movzx edx, al
// 007a09d8  d96c241e             fldcw word ptr [esp + 0x1e]
// 007a09dc  c1e208               shl edx, 8
// 007a09df  d97c241e             fnstcw word ptr [esp + 0x1e]
// 007a09e3  d8ca                 fmul st(2)
// 007a09e5  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 007a09ea  0d000c0000           or eax, 0xc00
// 007a09ef  89442420             mov dword ptr [esp + 0x20], eax
// 007a09f3  d96c2420             fldcw word ptr [esp + 0x20]
// 007a09f7  db5c2420             fistp dword ptr [esp + 0x20]
// 007a09fb  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 007a0a00  0bd0                 or edx, eax
// 007a0a02  c1e208               shl edx, 8
// 007a0a05  d96c241e             fldcw word ptr [esp + 0x1e]
// 007a0a09  d97c241e             fnstcw word ptr [esp + 0x1e]
// 007a0a0d  dec9                 fmulp st(1)
// 007a0a0f  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 007a0a14  0d000c0000           or eax, 0xc00
// 007a0a19  89442420             mov dword ptr [esp + 0x20], eax
// 007a0a1d  d96c2420             fldcw word ptr [esp + 0x20]
// 007a0a21  db5c2420             fistp dword ptr [esp + 0x20]
// 007a0a25  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 007a0a2a  0bd0                 or edx, eax
// 007a0a2c  8911                 mov dword ptr [ecx], edx
// 007a0a2e  d96c241e             fldcw word ptr [esp + 0x1e]
// 007a0a32  8be5                 mov esp, ebp
// 007a0a34  5d                   pop ebp
// 007a0a35  c21800               ret 0x18
// 007a0a38  dd0538e78100         fld qword ptr [0x81e738]
// 007a0a3e  dd4518               fld qword ptr [ebp + 0x18]
// 007a0a41  d8d1                 fcom st(1)
// 007a0a43  dfe0                 fnstsw ax
// 007a0a45  ddd9                 fstp st(1)
// 007a0a47  f6c405               test ah, 5
// 007a0a4a  7a0c                 jp 0x7a0a58
// 007a0a4c  d9c9                 fxch st(1)
// 007a0a4e  dc0538128100         fadd qword ptr [0x811238]
// 007a0a54  d8c9                 fmul st(1)
// 007a0a56  eb0c                 jmp 0x7a0a64
// 007a0a58  d9c1                 fld st(1)
// 007a0a5a  d8c1                 fadd st(1)
// 007a0a5c  d9ca                 fxch st(2)
// 007a0a5e  d8c9                 fmul st(1)
// 007a0a60  deea                 fsubp st(2)
// 007a0a62  d9c9                 fxch st(1)
// 007a0a64  dd542420             fst qword ptr [esp + 0x20]
// 007a0a68  83ec18               sub esp, 0x18
// 007a0a6b  d9c9                 fxch st(1)
// 007a0a6d  dcc0                 fadd st(0), st(0)
// 007a0a6f  d8e1                 fsub st(1)
// 007a0a71  dd542440             fst qword ptr [esp + 0x40]
// 007a0a75  dd4508               fld qword ptr [ebp + 8]
// 007a0a78  dc0560ef8600         fadd qword ptr [0x86ef60]
// 007a0a7e  dd5c2410             fstp qword ptr [esp + 0x10]
// 007a0a82  d9c9                 fxch st(1)
// 007a0a84  dd5c2408             fstp qword ptr [esp + 8]
// 007a0a88  dd1c24               fstp qword ptr [esp]
// 007a0a8b  e840feffff           call 0x7a08d0
// 007a0a90  dd5c2448             fstp qword ptr [esp + 0x48]
// 007a0a94  dd4508               fld qword ptr [ebp + 8]
// 007a0a97  dd5c2410             fstp qword ptr [esp + 0x10]
// 007a0a9b  dd442438             fld qword ptr [esp + 0x38]
// 007a0a9f  dd5c2408             fstp qword ptr [esp + 8]
// 007a0aa3  dd442440             fld qword ptr [esp + 0x40]
// 007a0aa7  dd1c24               fstp qword ptr [esp]
// 007a0aaa  e821feffff           call 0x7a08d0
// 007a0aaf  dd5c2450             fstp qword ptr [esp + 0x50]
// 007a0ab3  dd4508               fld qword ptr [ebp + 8]
// 007a0ab6  dc2560ef8600         fsub qword ptr [0x86ef60]
// 007a0abc  dd5c2410             fstp qword ptr [esp + 0x10]
// 007a0ac0  dd442438             fld qword ptr [esp + 0x38]
// 007a0ac4  dd5c2408             fstp qword ptr [esp + 8]
// 007a0ac8  dd442440             fld qword ptr [esp + 0x40]
// 007a0acc  dd1c24               fstp qword ptr [esp]
// 007a0acf  e8fcfdffff           call 0x7a08d0
// 007a0ad4  dd442448             fld qword ptr [esp + 0x48]
// 007a0ad8  83c418               add esp, 0x18
// 007a0adb  dd442438             fld qword ptr [esp + 0x38]
// 007a0adf  e9c8feffff           jmp 0x7a09ac
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
