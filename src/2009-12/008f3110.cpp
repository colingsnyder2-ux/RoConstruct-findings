// roc 2009-12 008f3110  unit: CXTPDockingPaneAutoHidePanel  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f3110
//
// 008f3110  55                   push ebp
// 008f3111  8bec                 mov ebp, esp
// 008f3113  83e4c0               and esp, 0xffffffc0
// 008f3116  d9ee                 fldz 
// 008f3118  83ec40               sub esp, 0x40
// 008f311b  dd4510               fld qword ptr [ebp + 0x10]
// 008f311e  dde1                 fucom st(1)
// 008f3120  dfe0                 fnstsw ax
// 008f3122  ddd9                 fstp st(1)
// 008f3124  f6c444               test ah, 0x44
// 008f3127  0f8a9b000000         jp 0x8f31c8
// 008f312d  ddd8                 fstp st(0)
// 008f312f  dd4518               fld qword ptr [ebp + 0x18]
// 008f3132  d9c0                 fld st(0)
// 008f3134  d9c1                 fld st(1)
// 008f3136  d9c9                 fxch st(1)
// 008f3138  d9ca                 fxch st(2)
// 008f313a  d9c9                 fxch st(1)
// 008f313c  dd05e0689a00         fld qword ptr [0x9a68e0]
// 008f3142  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008f3146  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008f314b  dccb                 fmul st(3), st(0)
// 008f314d  0d000c0000           or eax, 0xc00
// 008f3152  d9cb                 fxch st(3)
// 008f3154  89442420             mov dword ptr [esp + 0x20], eax
// 008f3158  d96c2420             fldcw word ptr [esp + 0x20]
// 008f315c  db5c2420             fistp dword ptr [esp + 0x20]
// 008f3160  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008f3165  0fb6d0               movzx edx, al
// 008f3168  d96c241e             fldcw word ptr [esp + 0x1e]
// 008f316c  c1e208               shl edx, 8
// 008f316f  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008f3173  d8ca                 fmul st(2)
// 008f3175  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008f317a  0d000c0000           or eax, 0xc00
// 008f317f  89442420             mov dword ptr [esp + 0x20], eax
// 008f3183  d96c2420             fldcw word ptr [esp + 0x20]
// 008f3187  db5c2420             fistp dword ptr [esp + 0x20]
// 008f318b  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008f3190  0bd0                 or edx, eax
// 008f3192  c1e208               shl edx, 8
// 008f3195  d96c241e             fldcw word ptr [esp + 0x1e]
// 008f3199  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008f319d  dec9                 fmulp st(1)
// 008f319f  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008f31a4  0d000c0000           or eax, 0xc00
// 008f31a9  89442420             mov dword ptr [esp + 0x20], eax
// 008f31ad  d96c2420             fldcw word ptr [esp + 0x20]
// 008f31b1  db5c2420             fistp dword ptr [esp + 0x20]
// 008f31b5  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008f31ba  0bd0                 or edx, eax
// 008f31bc  8911                 mov dword ptr [ecx], edx
// 008f31be  d96c241e             fldcw word ptr [esp + 0x1e]
// 008f31c2  8be5                 mov esp, ebp
// 008f31c4  5d                   pop ebp
// 008f31c5  c21800               ret 0x18
// 008f31c8  dd0510329b00         fld qword ptr [0x9b3210]
// 008f31ce  dd4518               fld qword ptr [ebp + 0x18]
// 008f31d1  d8d1                 fcom st(1)
// 008f31d3  dfe0                 fnstsw ax
// 008f31d5  ddd9                 fstp st(1)
// 008f31d7  f6c405               test ah, 5
// 008f31da  7a0c                 jp 0x8f31e8
// 008f31dc  d9c9                 fxch st(1)
// 008f31de  dc05c8449a00         fadd qword ptr [0x9a44c8]
// 008f31e4  d8c9                 fmul st(1)
// 008f31e6  eb0c                 jmp 0x8f31f4
// 008f31e8  d9c1                 fld st(1)
// 008f31ea  d8c1                 fadd st(1)
// 008f31ec  d9ca                 fxch st(2)
// 008f31ee  d8c9                 fmul st(1)
// 008f31f0  deea                 fsubp st(2)
// 008f31f2  d9c9                 fxch st(1)
// 008f31f4  dd542420             fst qword ptr [esp + 0x20]
// 008f31f8  83ec18               sub esp, 0x18
// 008f31fb  d9c9                 fxch st(1)
// 008f31fd  dcc0                 fadd st(0), st(0)
// 008f31ff  d8e1                 fsub st(1)
// 008f3201  dd542440             fst qword ptr [esp + 0x40]
// 008f3205  dd4508               fld qword ptr [ebp + 8]
// 008f3208  dc0510f9a000         fadd qword ptr [0xa0f910]
// 008f320e  dd5c2410             fstp qword ptr [esp + 0x10]
// 008f3212  d9c9                 fxch st(1)
// 008f3214  dd5c2408             fstp qword ptr [esp + 8]
// 008f3218  dd1c24               fstp qword ptr [esp]
// 008f321b  e840feffff           call 0x8f3060
// 008f3220  dd5c2448             fstp qword ptr [esp + 0x48]
// 008f3224  dd4508               fld qword ptr [ebp + 8]
// 008f3227  dd5c2410             fstp qword ptr [esp + 0x10]
// 008f322b  dd442438             fld qword ptr [esp + 0x38]
// 008f322f  dd5c2408             fstp qword ptr [esp + 8]
// 008f3233  dd442440             fld qword ptr [esp + 0x40]
// 008f3237  dd1c24               fstp qword ptr [esp]
// 008f323a  e821feffff           call 0x8f3060
// 008f323f  dd5c2450             fstp qword ptr [esp + 0x50]
// 008f3243  dd4508               fld qword ptr [ebp + 8]
// 008f3246  dc2510f9a000         fsub qword ptr [0xa0f910]
// 008f324c  dd5c2410             fstp qword ptr [esp + 0x10]
// 008f3250  dd442438             fld qword ptr [esp + 0x38]
// 008f3254  dd5c2408             fstp qword ptr [esp + 8]
// 008f3258  dd442440             fld qword ptr [esp + 0x40]
// 008f325c  dd1c24               fstp qword ptr [esp]
// 008f325f  e8fcfdffff           call 0x8f3060
// 008f3264  dd442448             fld qword ptr [esp + 0x48]
// 008f3268  83c418               add esp, 0x18
// 008f326b  dd442438             fld qword ptr [esp + 0x38]
// 008f326f  e9c8feffff           jmp 0x8f313c
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
