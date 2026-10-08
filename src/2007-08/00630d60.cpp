// from server: 32% by colin
// roc 2007-08 00630d60  unit: std::bad_alloc  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00630d60
//
// 00630d60  833df89b8c0000       cmp dword ptr [0x8c9bf8], 0
// 00630d67  742d                 je 0x630d96
// 00630d69  55                   push ebp
// 00630d6a  8bec                 mov ebp, esp
// 00630d6c  83ec08               sub esp, 8
// 00630d6f  83e4f8               and esp, 0xfffffff8
// 00630d72  dd1c24               fstp qword ptr [esp]
// 00630d75  f20f2c0424           cvttsd2si eax, qword ptr [esp]
// 00630d7a  c9                   leave 
// 00630d7b  c3                   ret 
// 00630d7c  833df89b8c0000       cmp dword ptr [0x8c9bf8], 0
// 00630d83  7411                 je 0x630d96
// 00630d85  83ec04               sub esp, 4
// 00630d88  d93c24               fnstcw word ptr [esp]
// 00630d8b  58                   pop eax
// 00630d8c  6683e07f             and ax, 0x7f
// 00630d90  6683f87f             cmp ax, 0x7f
// 00630d94  74d3                 je 0x630d69

extern int g_flag;

int f(double x) {
    if (g_flag != 0)
        return 0;
    return (int)x;
}
