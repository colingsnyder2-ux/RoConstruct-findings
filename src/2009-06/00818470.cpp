// roc 2009-06 00818470  unit: CXTPDockingPaneAutoHidePanel  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00818470
//
// 00818470  55                   push ebp
// 00818471  8bec                 mov ebp, esp
// 00818473  83e4c0               and esp, 0xffffffc0
// 00818476  d9ee                 fldz 
// 00818478  83ec40               sub esp, 0x40
// 0081847b  dd4510               fld qword ptr [ebp + 0x10]
// 0081847e  dde1                 fucom st(1)
// 00818480  dfe0                 fnstsw ax
// 00818482  ddd9                 fstp st(1)
// 00818484  f6c444               test ah, 0x44
// 00818487  0f8a9b000000         jp 0x818528
// 0081848d  ddd8                 fstp st(0)
// 0081848f  dd4518               fld qword ptr [ebp + 0x18]
// 00818492  d9c0                 fld st(0)
// 00818494  d9c1                 fld st(1)
// 00818496  d9c9                 fxch st(1)
// 00818498  d9ca                 fxch st(2)
// 0081849a  d9c9                 fxch st(1)
// 0081849c  dd05703b8b00         fld qword ptr [0x8b3b70]
// 008184a2  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008184a6  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008184ab  dccb                 fmul st(3), st(0)
// 008184ad  0d000c0000           or eax, 0xc00
// 008184b2  d9cb                 fxch st(3)
// 008184b4  89442420             mov dword ptr [esp + 0x20], eax
// 008184b8  d96c2420             fldcw word ptr [esp + 0x20]
// 008184bc  db5c2420             fistp dword ptr [esp + 0x20]
// 008184c0  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008184c5  0fb6d0               movzx edx, al
// 008184c8  d96c241e             fldcw word ptr [esp + 0x1e]
// 008184cc  c1e208               shl edx, 8
// 008184cf  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008184d3  d8ca                 fmul st(2)
// 008184d5  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 008184da  0d000c0000           or eax, 0xc00
// 008184df  89442420             mov dword ptr [esp + 0x20], eax
// 008184e3  d96c2420             fldcw word ptr [esp + 0x20]
// 008184e7  db5c2420             fistp dword ptr [esp + 0x20]
// 008184eb  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 008184f0  0bd0                 or edx, eax
// 008184f2  c1e208               shl edx, 8
// 008184f5  d96c241e             fldcw word ptr [esp + 0x1e]
// 008184f9  d97c241e             fnstcw word ptr [esp + 0x1e]
// 008184fd  dec9                 fmulp st(1)
// 008184ff  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 00818504  0d000c0000           or eax, 0xc00
// 00818509  89442420             mov dword ptr [esp + 0x20], eax
// 0081850d  d96c2420             fldcw word ptr [esp + 0x20]
// 00818511  db5c2420             fistp dword ptr [esp + 0x20]
// 00818515  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 0081851a  0bd0                 or edx, eax
// 0081851c  8911                 mov dword ptr [ecx], edx
// 0081851e  d96c241e             fldcw word ptr [esp + 0x1e]
// 00818522  8be5                 mov esp, ebp
// 00818524  5d                   pop ebp
// 00818525  c21800               ret 0x18
// 00818528  dd05f8018c00         fld qword ptr [0x8c01f8]
// 0081852e  dd4518               fld qword ptr [ebp + 0x18]
// 00818531  d8d1                 fcom st(1)
// 00818533  dfe0                 fnstsw ax
// 00818535  ddd9                 fstp st(1)
// 00818537  f6c405               test ah, 5
// 0081853a  7a0c                 jp 0x818548
// 0081853c  d9c9                 fxch st(1)
// 0081853e  dc05c0178b00         fadd qword ptr [0x8b17c0]
// 00818544  d8c9                 fmul st(1)
// 00818546  eb0c                 jmp 0x818554
// 00818548  d9c1                 fld st(1)
// 0081854a  d8c1                 fadd st(1)
// 0081854c  d9ca                 fxch st(2)
// 0081854e  d8c9                 fmul st(1)
// 00818550  deea                 fsubp st(2)
// 00818552  d9c9                 fxch st(1)
// 00818554  dd542420             fst qword ptr [esp + 0x20]
// 00818558  83ec18               sub esp, 0x18
// 0081855b  d9c9                 fxch st(1)
// 0081855d  dcc0                 fadd st(0), st(0)
// 0081855f  d8e1                 fsub st(1)
// 00818561  dd542440             fst qword ptr [esp + 0x40]
// 00818565  dd4508               fld qword ptr [ebp + 8]
// 00818568  dc05a0f49000         fadd qword ptr [0x90f4a0]
// 0081856e  dd5c2410             fstp qword ptr [esp + 0x10]
// 00818572  d9c9                 fxch st(1)
// 00818574  dd5c2408             fstp qword ptr [esp + 8]
// 00818578  dd1c24               fstp qword ptr [esp]
// 0081857b  e840feffff           call 0x8183c0
// 00818580  dd5c2448             fstp qword ptr [esp + 0x48]
// 00818584  dd4508               fld qword ptr [ebp + 8]
// 00818587  dd5c2410             fstp qword ptr [esp + 0x10]
// 0081858b  dd442438             fld qword ptr [esp + 0x38]
// 0081858f  dd5c2408             fstp qword ptr [esp + 8]
// 00818593  dd442440             fld qword ptr [esp + 0x40]
// 00818597  dd1c24               fstp qword ptr [esp]
// 0081859a  e821feffff           call 0x8183c0
// 0081859f  dd5c2450             fstp qword ptr [esp + 0x50]
// 008185a3  dd4508               fld qword ptr [ebp + 8]
// 008185a6  dc25a0f49000         fsub qword ptr [0x90f4a0]
// 008185ac  dd5c2410             fstp qword ptr [esp + 0x10]
// 008185b0  dd442438             fld qword ptr [esp + 0x38]
// 008185b4  dd5c2408             fstp qword ptr [esp + 8]
// 008185b8  dd442440             fld qword ptr [esp + 0x40]
// 008185bc  dd1c24               fstp qword ptr [esp]
// 008185bf  e8fcfdffff           call 0x8183c0
// 008185c4  dd442448             fld qword ptr [esp + 0x48]
// 008185c8  83c418               add esp, 0x18
// 008185cb  dd442438             fld qword ptr [esp + 0x38]
// 008185cf  e9c8feffff           jmp 0x81849c
// library xtp-11.2.2/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorRef.cpp
