// from server: 61% by colin
// roc 2007-08 0063168c  unit: std::bad_alloc  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063168c
//
// 0063168c  6a0c                 push 0xc
// 0063168e  68589b8600           push 0x869b58
// 00631693  e888ffffff           call 0x631620
// 00631698  8365fc00             and dword ptr [ebp - 4], 0
// 0063169c  660f28c1             movapd xmm0, xmm1
// 006316a0  c745e401000000       mov dword ptr [ebp - 0x1c], 1
// 006316a7  eb23                 jmp 0x6316cc

extern "C" void __stdcall sub_631620(int);

struct S {
    void f();
};

void S::f() {
    sub_631620(0xc);
    *(int *)((char *)this - 4) = 0;
    *(int *)((char *)this - 0x1c) = 1;
}
