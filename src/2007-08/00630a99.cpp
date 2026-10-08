// from server: 32% by colin
// roc 2007-08 00630a99  unit: type_info  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00630a99
//
// 00630a99  6a14                 push 0x14
// 00630a9b  68909a8600           push 0x869a90
// 00630aa0  e87b0b0000           call 0x631620
// 00630aa5  8365fc00             and dword ptr [ebp - 4], 0
// 00630aa9  ff4d10               dec dword ptr [ebp + 0x10]
// 00630aac  783a                 js 0x630ae8
// 00630aae  8b4d08               mov ecx, dword ptr [ebp + 8]
// 00630ab1  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 00630ab4  894d08               mov dword ptr [ebp + 8], ecx
// 00630ab7  ff5514               call dword ptr [ebp + 0x14]
// 00630aba  ebed                 jmp 0x630aa9

extern "C" void __stdcall sub_631620(int, void*);

void __stdcall sub_630a99(int a, int b, int c, int d, void (__stdcall *fn)(void))
{
    sub_631620(0x14, (void*)0x869a90);
    d--;
    if (d >= 0) {
        a -= b;
        do {
            fn();
            d--;
        } while (d >= 0);
    }
}
