// from server: 57% by colin
// roc 2007-08 004ba810  unit: RakPeer  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004ba810
//
// 004ba810  81c1e8080000         add ecx, 0x8e8
// 004ba816  807c240800           cmp byte ptr [esp + 8], 0
// 004ba81b  740f                 je 0x4ba82c
// 004ba81d  6a00                 push 0
// 004ba81f  8d442408             lea eax, [esp + 8]
// 004ba823  50                   push eax
// 004ba824  e857a50000           call 0x4c4d80
// 004ba829  c20800               ret 8
// 004ba82c  8d542404             lea edx, [esp + 4]
// 004ba830  52                   push edx
// 004ba831  e87aa40000           call 0x4c4cb0
// 004ba836  c20800               ret 8

struct RakPeer {
    char pad[0x8e8];
    void sub_4c4d80(void*, int);
    void sub_4c4cb0(void*);
    void f(bool b, int x);
};

void RakPeer::f(bool b, int x) {
    char* p = (char*)this + 0x8e8;
    if (b) {
        sub_4c4d80(&x, 0);
    } else {
        sub_4c4cb0(&x);
    }
}
