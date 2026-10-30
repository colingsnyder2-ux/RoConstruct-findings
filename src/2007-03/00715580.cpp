// roc 2007-03 00715580  unit: seg_00710000  size: 357 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00715580
//
// 00715580  55                   push ebp
// 00715581  8bec                 mov ebp, esp
// 00715583  83e4c0               and esp, 0xffffffc0
// 00715586  d9ee                 fldz 
// 00715588  83ec40               sub esp, 0x40
// 0071558b  dd4510               fld qword ptr [ebp + 0x10]
// 0071558e  dde1                 fucom st(1)
// 00715590  dfe0                 fnstsw ax
// 00715592  ddd9                 fstp st(1)
// 00715594  f6c444               test ah, 0x44
// 00715597  0f8a9c000000         jp 0x715639
// 0071559d  ddd8                 fstp st(0)
// 0071559f  dd4518               fld qword ptr [ebp + 0x18]
// 007155a2  d9c0                 fld st(0)
// 007155a4  d9c1                 fld st(1)
// 007155a6  d9c9                 fxch st(1)
// 007155a8  d9ca                 fxch st(2)
// 007155aa  d9c9                 fxch st(1)
// 007155ac  dd0510c47800         fld qword ptr [0x78c410]
// 007155b2  33d2                 xor edx, edx
// 007155b4  d97c241e             fnstcw word ptr [esp + 0x1e]
// 007155b8  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 007155bd  dccb                 fmul st(3), st(0)
// 007155bf  0d000c0000           or eax, 0xc00
// 007155c4  d9cb                 fxch st(3)
// 007155c6  89442420             mov dword ptr [esp + 0x20], eax
// 007155ca  d96c2420             fldcw word ptr [esp + 0x20]
// 007155ce  db5c2420             fistp dword ptr [esp + 0x20]
// 007155d2  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 007155d7  8af0                 mov dh, al
// 007155d9  d96c241e             fldcw word ptr [esp + 0x1e]
// 007155dd  d97c241e             fnstcw word ptr [esp + 0x1e]
// 007155e1  d8ca                 fmul st(2)
// 007155e3  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 007155e8  0d000c0000           or eax, 0xc00
// 007155ed  89442420             mov dword ptr [esp + 0x20], eax
// 007155f1  d96c2420             fldcw word ptr [esp + 0x20]
// 007155f5  db5c2420             fistp dword ptr [esp + 0x20]
// 007155f9  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 007155fe  8ad0                 mov dl, al
// 00715600  d96c241e             fldcw word ptr [esp + 0x1e]
// 00715604  d97c241e             fnstcw word ptr [esp + 0x1e]
// 00715608  c1e208               shl edx, 8
// 0071560b  dec9                 fmulp st(1)
// 0071560d  0fb744241e           movzx eax, word ptr [esp + 0x1e]
// 00715612  0d000c0000           or eax, 0xc00
// 00715617  89442420             mov dword ptr [esp + 0x20], eax
// 0071561b  d96c2420             fldcw word ptr [esp + 0x20]
// 0071561f  db5c2420             fistp dword ptr [esp + 0x20]
// 00715623  0fb6442420           movzx eax, byte ptr [esp + 0x20]
// 00715628  0fb6c0               movzx eax, al
// 0071562b  d96c241e             fldcw word ptr [esp + 0x1e]
// 0071562f  0bd0                 or edx, eax
// 00715631  8911                 mov dword ptr [ecx], edx
// 00715633  8be5                 mov esp, ebp
// 00715635  5d                   pop ebp
// 00715636  c21800               ret 0x18
// 00715639  dd05584f7900         fld qword ptr [0x794f58]
// 0071563f  dd4518               fld qword ptr [ebp + 0x18]
// 00715642  d8d1                 fcom st(1)
// 00715644  dfe0                 fnstsw ax
// 00715646  ddd9                 fstp st(1)
// 00715648  f6c405               test ah, 5
// 0071564b  7a0c                 jp 0x715659
// 0071564d  d9c9                 fxch st(1)
// 0071564f  dc05a81f7900         fadd qword ptr [0x791fa8]
// 00715655  d8c9                 fmul st(1)
// 00715657  eb0c                 jmp 0x715665
// 00715659  d9c1                 fld st(1)
// 0071565b  d8c1                 fadd st(1)
// 0071565d  d9ca                 fxch st(2)
// 0071565f  d8c9                 fmul st(1)
// 00715661  deea                 fsubp st(2)
// 00715663  d9c9                 fxch st(1)
// 00715665  dd542420             fst qword ptr [esp + 0x20]
// 00715669  83ec18               sub esp, 0x18
// 0071566c  d9c9                 fxch st(1)
// 0071566e  dcc0                 fadd st(0), st(0)
// 00715670  d8e1                 fsub st(1)
// 00715672  dd542440             fst qword ptr [esp + 0x40]
// 00715676  dd4508               fld qword ptr [ebp + 8]
// 00715679  dc05000e7e00         fadd qword ptr [0x7e0e00]
// 0071567f  dd5c2410             fstp qword ptr [esp + 0x10]
// 00715683  d9c9                 fxch st(1)
// 00715685  dd5c2408             fstp qword ptr [esp + 8]
// 00715689  dd1c24               fstp qword ptr [esp]
// 0071568c  e83ffeffff           call 0x7154d0
// 00715691  dd5c2448             fstp qword ptr [esp + 0x48]
// 00715695  dd4508               fld qword ptr [ebp + 8]
// 00715698  dd5c2410             fstp qword ptr [esp + 0x10]
// 0071569c  dd442438             fld qword ptr [esp + 0x38]
// 007156a0  dd5c2408             fstp qword ptr [esp + 8]
// 007156a4  dd442440             fld qword ptr [esp + 0x40]
// 007156a8  dd1c24               fstp qword ptr [esp]
// 007156ab  e820feffff           call 0x7154d0
// 007156b0  dd5c2450             fstp qword ptr [esp + 0x50]
// 007156b4  dd4508               fld qword ptr [ebp + 8]
// 007156b7  dc25000e7e00         fsub qword ptr [0x7e0e00]
// 007156bd  dd5c2410             fstp qword ptr [esp + 0x10]
// 007156c1  dd442438             fld qword ptr [esp + 0x38]
// 007156c5  dd5c2408             fstp qword ptr [esp + 8]
// 007156c9  dd442440             fld qword ptr [esp + 0x40]
// 007156cd  dd1c24               fstp qword ptr [esp]
// 007156d0  e8fbfdffff           call 0x7154d0
// 007156d5  dd442448             fld qword ptr [esp + 0x48]
// 007156d9  83c418               add esp, 0x18
// 007156dc  dd442438             fld qword ptr [esp + 0x38]
// 007156e0  e9c7feffff           jmp 0x7155ac
// library xtp-11.2.2-vc8/Source\Controls\XTColorRef.cpp (function ?setHSL@CXTColorRef@@QAEXNNN@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTColorRef.cpp
