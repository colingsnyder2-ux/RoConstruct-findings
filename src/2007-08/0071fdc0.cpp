// from server: 100% by auto
// roc 2007-08 0071fdc0  unit: CXTPDockingPaneAutoHidePanel  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071fdc0
//
// 0071fdc0  55                   push ebp
// 0071fdc1  8bec                 mov ebp, esp
// 0071fdc3  83e4c0               and esp, 0xffffffc0
// 0071fdc6  d9ee                 fldz 
// 0071fdc8  83ec40               sub esp, 0x40
// 0071fdcb  dd4510               fld qword ptr [ebp + 0x10]
// 0071fdce  dde1                 fucom st(1)
// 0071fdd0  dfe0                 fnstsw ax
// 0071fdd2  ddd9                 fstp st(1)
// 0071fdd4  f6c444               test ah, 0x44
// 0071fdd7  0f8a9c000000         jp 0x71fe79
// 0071fddd  ddd8                 fstp st(0)
// 0071fddf  dd4518               fld qword ptr [ebp + 0x18]
// 0071fde2  d9c0                 fld st(0)
// 0071fde4  d9c1                 fld st(1)
// 0071fde6  d9c9                 fxch st(1)
// 0071fde8  d9ca                 fxch st(2)
// 0071fdea  d9c9                 fxch st(1)
// 0071fdec  dd05a8d37800         fld qword ptr [0x78d3a8]
// 0071fdf2  33d2                 xor edx, edx
// 0071fdf4  d97c241e             fnstcw word ptr [esp + 0x1e]
// 0071fdf8  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0071fdfd  dccb                 fmul st(3), st(0)
// 0071fdff  0d000c0000           or eax, 0xc00
// 0071fe04  d9cb                 fxch st(3)
// 0071fe06  89442420             mov dword ptr [esp + 0x20], eax
// 0071fe0a  d96c2420             fldcw word ptr [esp + 0x20]
// 0071fe0e  db5c2420             fistp dword ptr [esp + 0x20]
// 0071fe12  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 0071fe17  8af0                 mov dh, al
// 0071fe19  d96c241e             fldcw word ptr [esp + 0x1e]
// 0071fe1d  d97c241e             fnstcw word ptr [esp + 0x1e]
// 0071fe21  d8ca                 fmul st(2)
// 0071fe23  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0071fe28  0d000c0000           or eax, 0xc00
// 0071fe2d  89442420             mov dword ptr [esp + 0x20], eax
// 0071fe31  d96c2420             fldcw word ptr [esp + 0x20]
// 0071fe35  db5c2420             fistp dword ptr [esp + 0x20]
// 0071fe39  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 0071fe3e  8ad0                 mov dl, al
// 0071fe40  d96c241e             fldcw word ptr [esp + 0x1e]
// 0071fe44  d97c241e             fnstcw word ptr [esp + 0x1e]
// 0071fe48  c1e208               shl edx, 8
// 0071fe4b  dec9                 fmulp st(1)
// 0071fe4d  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 0071fe52  0d000c0000           or eax, 0xc00
// 0071fe57  89442420             mov dword ptr [esp + 0x20], eax
// 0071fe5b  d96c2420             fldcw word ptr [esp + 0x20]
// 0071fe5f  db5c2420             fistp dword ptr [esp + 0x20]
// 0071fe63  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 0071fe68  0fb6c0               movzx eax, al
// 0071fe6b  d96c241e             fldcw word ptr [esp + 0x1e]
// 0071fe6f  0bd0                 or edx, eax
// 0071fe71  8911                 mov dword ptr [ecx], edx
// 0071fe73  8be5                 mov esp, ebp
// 0071fe75  5d                   pop ebp
// 0071fe76  c21800               ret 0x18
// 0071fe79  dd05485b7900         fld qword ptr [0x795b48]
// 0071fe7f  dd4518               fld qword ptr [ebp + 0x18]
// 0071fe82  d8d1                 fcom st(1)
// 0071fe84  dfe0                 fnstsw ax
// 0071fe86  ddd9                 fstp st(1)
// 0071fe88  f6c405               test ah, 5
// 0071fe8b  7a0c                 jp 0x71fe99
// 0071fe8d  d9c9                 fxch st(1)
// 0071fe8f  dc0598317900         fadd qword ptr [0x793198]
// 0071fe95  d8c9                 fmul st(1)
// 0071fe97  eb0c                 jmp 0x71fea5
// 0071fe99  d9c1                 fld st(1)
// 0071fe9b  d8c1                 fadd st(1)
// 0071fe9d  d9ca                 fxch st(2)
// 0071fe9f  d8c9                 fmul st(1)
// 0071fea1  deea                 fsubp st(2)
// 0071fea3  d9c9                 fxch st(1)
// 0071fea5  dd542420             fst qword ptr [esp + 0x20]
// 0071fea9  83ec18               sub esp, 0x18
// 0071feac  d9c9                 fxch st(1)
// 0071feae  dcc0                 fadd st(0), st(0)
// 0071feb0  d8e1                 fsub st(1)
// 0071feb2  dd542440             fst qword ptr [esp + 0x40]
// 0071feb6  dd4508               fld qword ptr [ebp + 8]
// 0071feb9  dc0580217e00         fadd qword ptr [0x7e2180]
// 0071febf  dd5c2410             fstp qword ptr [esp + 0x10]
// 0071fec3  d9c9                 fxch st(1)
// 0071fec5  dd5c2408             fstp qword ptr [esp + 8]
// 0071fec9  dd1c24               fstp qword ptr [esp]
// 0071fecc  e83ffeffff           call 0x71fd10
// 0071fed1  dd5c2448             fstp qword ptr [esp + 0x48]
// 0071fed5  dd4508               fld qword ptr [ebp + 8]
// 0071fed8  dd5c2410             fstp qword ptr [esp + 0x10]
// 0071fedc  dd442438             fld qword ptr [esp + 0x38]
// 0071fee0  dd5c2408             fstp qword ptr [esp + 8]
// 0071fee4  dd442440             fld qword ptr [esp + 0x40]
// 0071fee8  dd1c24               fstp qword ptr [esp]
// 0071feeb  e820feffff           call 0x71fd10
// 0071fef0  dd5c2450             fstp qword ptr [esp + 0x50]
// 0071fef4  dd4508               fld qword ptr [ebp + 8]
// 0071fef7  dc2580217e00         fsub qword ptr [0x7e2180]
// 0071fefd  dd5c2410             fstp qword ptr [esp + 0x10]
// 0071ff01  dd442438             fld qword ptr [esp + 0x38]
// 0071ff05  dd5c2408             fstp qword ptr [esp + 8]
// 0071ff09  dd442440             fld qword ptr [esp + 0x40]
// 0071ff0d  dd1c24               fstp qword ptr [esp]
// 0071ff10  e8fbfdffff           call 0x71fd10
// 0071ff15  dd442448             fld qword ptr [esp + 0x48]
// 0071ff19  83c418               add esp, 0x18
// 0071ff1c  dd442438             fld qword ptr [esp + 0x38]
// 0071ff20  e9c7feffff           jmp 0x71fdec
// library xtp-11.2.2-vc8/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorRef.cpp
