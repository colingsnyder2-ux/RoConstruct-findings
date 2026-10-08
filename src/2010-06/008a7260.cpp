// roc 2010-06 008a7260  unit: CXTPDockingPaneAutoHidePanel  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008a7260
//
// 008a7260  55                   push ebp
// 008a7261  8bec                 mov ebp, esp
// 008a7263  83e4c0               and esp, 0xffffffc0
// 008a7266  d9ee                 fldz 
// 008a7268  83ec40               sub esp, 0x40
// 008a726b  dd4510               fld qword ptr [ebp + 0x10]
// 008a726e  dde1                 fucom st(1)
// 008a7270  dfe0                 fnstsw ax
// 008a7272  ddd9                 fstp st(1)
// 008a7274  f6c444               test ah, 0x44
// 008a7277  0f8a9b000000         jp 0x8a7318
// 008a727d  ddd8                 fstp st(0)
// 008a727f  dd4518               fld qword ptr [ebp + 0x18]
// 008a7282  d9c0                 fld st(0)
// 008a7284  d9c1                 fld st(1)
// 008a7286  d9c9                 fxch st(1)
// 008a7288  d9ca                 fxch st(2)
// 008a728a  d9c9                 fxch st(1)
// 008a728c  dd058076a000         fld qword ptr [0xa07680]
// 008a7292  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008a7296  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008a729b  dccb                 fmul st(3), st(0)
// 008a729d  0d000c0000           or eax, 0xc00
// 008a72a2  d9cb                 fxch st(3)
// 008a72a4  89442420             mov dword ptr [esp + 0x20], eax
// 008a72a8  d96c2420             fldcw word ptr [esp + 0x20]
// 008a72ac  db5c2420             fistp dword ptr [esp + 0x20]
// 008a72b0  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008a72b5  0fb6d0               movzx edx, al
// 008a72b8  d96c241e             fldcw word ptr [esp + 0x1e]
// 008a72bc  c1e208               shl edx, 8
// 008a72bf  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008a72c3  d8ca                 fmul st(2)
// 008a72c5  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008a72ca  0d000c0000           or eax, 0xc00
// 008a72cf  89442420             mov dword ptr [esp + 0x20], eax
// 008a72d3  d96c2420             fldcw word ptr [esp + 0x20]
// 008a72d7  db5c2420             fistp dword ptr [esp + 0x20]
// 008a72db  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008a72e0  0bd0                 or edx, eax
// 008a72e2  c1e208               shl edx, 8
// 008a72e5  d96c241e             fldcw word ptr [esp + 0x1e]
// 008a72e9  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008a72ed  dec9                 fmulp st(1)
// 008a72ef  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008a72f4  0d000c0000           or eax, 0xc00
// 008a72f9  89442420             mov dword ptr [esp + 0x20], eax
// 008a72fd  d96c2420             fldcw word ptr [esp + 0x20]
// 008a7301  db5c2420             fistp dword ptr [esp + 0x20]
// 008a7305  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008a730a  0bd0                 or edx, eax
// 008a730c  8911                 mov dword ptr [ecx], edx
// 008a730e  d96c241e             fldcw word ptr [esp + 0x1e]
// 008a7312  8be5                 mov esp, ebp
// 008a7314  5d                   pop ebp
// 008a7315  c21800               ret 0x18
// 008a7318  dd057850a100         fld qword ptr [0xa15078]
// 008a731e  dd4518               fld qword ptr [ebp + 0x18]
// 008a7321  d8d1                 fcom st(1)
// 008a7323  dfe0                 fnstsw ax
// 008a7325  ddd9                 fstp st(1)
// 008a7327  f6c405               test ah, 5
// 008a732a  7a0c                 jp 0x8a7338
// 008a732c  d9c9                 fxch st(1)
// 008a732e  dc054052a000         fadd qword ptr [0xa05240]
// 008a7334  d8c9                 fmul st(1)
// 008a7336  eb0c                 jmp 0x8a7344
// 008a7338  d9c1                 fld st(1)
// 008a733a  d8c1                 fadd st(1)
// 008a733c  d9ca                 fxch st(2)
// 008a733e  d8c9                 fmul st(1)
// 008a7340  deea                 fsubp st(2)
// 008a7342  d9c9                 fxch st(1)
// 008a7344  dd542420             fst qword ptr [esp + 0x20]
// 008a7348  83ec18               sub esp, 0x18
// 008a734b  d9c9                 fxch st(1)
// 008a734d  dcc0                 fadd st(0), st(0)
// 008a734f  d8e1                 fsub st(1)
// 008a7351  dd542440             fst qword ptr [esp + 0x40]
// 008a7355  dd4508               fld qword ptr [ebp + 8]
// 008a7358  dc05083ca700         fadd qword ptr [0xa73c08]
// 008a735e  dd5c2410             fstp qword ptr [esp + 0x10]
// 008a7362  d9c9                 fxch st(1)
// 008a7364  dd5c2408             fstp qword ptr [esp + 8]
// 008a7368  dd1c24               fstp qword ptr [esp]
// 008a736b  e840feffff           call 0x8a71b0
// 008a7370  dd5c2448             fstp qword ptr [esp + 0x48]
// 008a7374  dd4508               fld qword ptr [ebp + 8]
// 008a7377  dd5c2410             fstp qword ptr [esp + 0x10]
// 008a737b  dd442438             fld qword ptr [esp + 0x38]
// 008a737f  dd5c2408             fstp qword ptr [esp + 8]
// 008a7383  dd442440             fld qword ptr [esp + 0x40]
// 008a7387  dd1c24               fstp qword ptr [esp]
// 008a738a  e821feffff           call 0x8a71b0
// 008a738f  dd5c2450             fstp qword ptr [esp + 0x50]
// 008a7393  dd4508               fld qword ptr [ebp + 8]
// 008a7396  dc25083ca700         fsub qword ptr [0xa73c08]
// 008a739c  dd5c2410             fstp qword ptr [esp + 0x10]
// 008a73a0  dd442438             fld qword ptr [esp + 0x38]
// 008a73a4  dd5c2408             fstp qword ptr [esp + 8]
// 008a73a8  dd442440             fld qword ptr [esp + 0x40]
// 008a73ac  dd1c24               fstp qword ptr [esp]
// 008a73af  e8fcfdffff           call 0x8a71b0
// 008a73b4  dd442448             fld qword ptr [esp + 0x48]
// 008a73b8  83c418               add esp, 0x18
// 008a73bb  dd442438             fld qword ptr [esp + 0x38]
// 008a73bf  e9c8feffff           jmp 0x8a728c
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
