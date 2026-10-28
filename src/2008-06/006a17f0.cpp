// from server: 77% by colin
// roc 2008-06 006a17f0  unit: ActiveDocView  size: 171 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a17f0
//
// 006a17f0  833d00f7970000       cmp dword ptr [0x97f700], 0
// 006a17f7  742d                 je 0x6a1826
// 006a17f9  55                   push ebp
// 006a17fa  8bec                 mov ebp, esp
// 006a17fc  83ec08               sub esp, 8
// 006a17ff  83e4f8               and esp, 0xfffffff8
// 006a1802  dd1c24               fstp qword ptr [esp]
// 006a1805  f20f2c0424           cvttsd2si eax, qword ptr [esp]
// 006a180a  c9                   leave 
// 006a180b  c3                   ret 
// 006a180c  833d00f7970000       cmp dword ptr [0x97f700], 0
// 006a1813  7411                 je 0x6a1826
// 006a1815  83ec04               sub esp, 4
// 006a1818  d93c24               fnstcw word ptr [esp]
// 006a181b  58                   pop eax
// 006a181c  6683e07f             and ax, 0x7f
// 006a1820  6683f87f             cmp ax, 0x7f
// 006a1824  74d3                 je 0x6a17f9
// 006a1826  55                   push ebp
// 006a1827  8bec                 mov ebp, esp
// 006a1829  83ec20               sub esp, 0x20
// 006a182c  83e4f0               and esp, 0xfffffff0
// 006a182f  d9c0                 fld st(0)
// 006a1831  d9542418             fst dword ptr [esp + 0x18]
// 006a1835  df7c2410             fistp qword ptr [esp + 0x10]
// 006a1839  df6c2410             fild qword ptr [esp + 0x10]
// 006a183d  8b542418             mov edx, dword ptr [esp + 0x18]
// 006a1841  8b442410             mov eax, dword ptr [esp + 0x10]
// 006a1845  85c0                 test eax, eax
// 006a1847  743c                 je 0x6a1885
// 006a1849  dee9                 fsubp st(1)
// 006a184b  85d2                 test edx, edx
// 006a184d  791e                 jns 0x6a186d
// 006a184f  d91c24               fstp dword ptr [esp]
// 006a1852  8b0c24               mov ecx, dword ptr [esp]
// 006a1855  81f100000080         xor ecx, 0x80000000
// 006a185b  81c1ffffff7f         add ecx, 0x7fffffff
// 006a1861  83d000               adc eax, 0
// 006a1864  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a1868  83d200               adc edx, 0
// 006a186b  eb2c                 jmp 0x6a1899
// 006a186d  d91c24               fstp dword ptr [esp]
// 006a1870  8b0c24               mov ecx, dword ptr [esp]
// 006a1873  81c1ffffff7f         add ecx, 0x7fffffff
// 006a1879  83d800               sbb eax, 0
// 006a187c  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a1880  83da00               sbb edx, 0
// 006a1883  eb14                 jmp 0x6a1899
// 006a1885  8b542414             mov edx, dword ptr [esp + 0x14]
// 006a1889  f7c2ffffff7f         test edx, 0x7fffffff
// 006a188f  75b8                 jne 0x6a1849
// 006a1891  d95c2418             fstp dword ptr [esp + 0x18]
// 006a1895  d95c2418             fstp dword ptr [esp + 0x18]
// 006a1899  c9                   leave 
// 006a189a  c3                   ret 

// from server: 65% by coldek
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2
// roc-archive: msvc-crt libcmt.lib/f:/dd/vctools/crt_bld/SELF_X86/crt/prebuild/build/INTEL/mt_obj/ftol2.obj
