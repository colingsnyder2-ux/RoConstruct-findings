// from server: 100% by colin
// roc 2009-12 0097cde0  unit: seg_00970000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097cde0
//
// 0097cde0  6856fd9900           push 0x99fd56
// 0097cde5  b91cbbb900           mov ecx, 0xb9bb1c
// 0097cdea  ff15b8de9800         call dword ptr [0x98deb8]
// 0097cdf0  6860a79800           push 0x98a760
// 0097cdf5  e82f7be7ff           call 0x7f4929
// 0097cdfa  59                   pop ecx
// 0097cdfb  c3                   ret 

// from server: 99% by atomic.potato
typedef int (__thiscall *Func1)(int, const char *);
extern Func1 G1_func_0098deb8;
extern "C" void __cdecl func_007f4929(const char *);

void func_0097cde0()
{
    G1_func_0098deb8(0x00b9bb1c, (const char*)0x0099fd56);
    func_007f4929((const char*)0x0097edc0);
}