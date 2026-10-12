// from server: 100% by king_originala
// roc 2008-06 005e0610  unit: RBX::P8Lighting::?$GetSetImpl  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e0610
//
// 005e0610  83ec08               sub esp, 8
// 005e0613  8b8168020000         mov eax, dword ptr [ecx + 0x268]
// 005e0619  8b896c020000         mov ecx, dword ptr [ecx + 0x26c]
// 005e061f  6a00                 push 0
// 005e0621  68e8030000           push 0x3e8
// 005e0626  51                   push ecx
// 005e0627  50                   push eax
// 005e0628  e803160c00           call 0x6a1c30
// 005e062d  890424               mov dword ptr [esp], eax
// 005e0630  89542404             mov dword ptr [esp + 4], edx
// 005e0634  df2c24               fild qword ptr [esp]
// 005e0637  dc0d60dc8300         fmul qword ptr [0x83dc60]
// 005e063d  83c408               add esp, 8
// 005e0640  c3                   ret 

extern "C" __int64 __stdcall divide64(unsigned long, unsigned long, unsigned long, unsigned long);
extern const double scale;

struct S {
    char padding[0x268];
    volatile unsigned long low;
    volatile unsigned long high;
    double f();
};

double S::f() {
    unsigned long lo = low;
    unsigned long hi = high;
    return static_cast<double>(divide64(lo, hi, 1000, 0)) * scale;
}
