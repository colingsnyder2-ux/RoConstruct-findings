// from server: 100% by colin
// roc 2008-06 005e62a0  unit: RBX::Clump  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e62a0
//
// 005e62a0  b201                 mov dl, 1
// 005e62a2  885114               mov byte ptr [ecx + 0x14], dl
// 005e62a5  885154               mov byte ptr [ecx + 0x54], dl
// 005e62a8  8d4120               lea eax, [ecx + 0x20]
// 005e62ab  885169               mov byte ptr [ecx + 0x69], dl
// 005e62ae  833800               cmp dword ptr [eax], 0
// 005e62b1  7413                 je 0x5e62c6
// 005e62b3  8b00                 mov eax, dword ptr [eax]
// 005e62b5  885014               mov byte ptr [eax + 0x14], dl
// 005e62b8  885054               mov byte ptr [eax + 0x54], dl
// 005e62bb  885069               mov byte ptr [eax + 0x69], dl
// 005e62be  83c020               add eax, 0x20
// 005e62c1  833800               cmp dword ptr [eax], 0
// 005e62c4  75ed                 jne 0x5e62b3
// 005e62c6  c3                   ret 

#include <intrin.h>
// roc-cl: 21022
struct Clump {
    char pad0[0x14];
    unsigned char f14;
    char pad15[0xb];
    Clump* f20;
    char pad24[0x30];
    unsigned char f54;
    char pad55[0x14];
    unsigned char f69;
    void mark();
};

void Clump::mark() {
    unsigned char one = 1;
    f14 = one;
    f54 = one;
    _ReadWriteBarrier();
    f69 = one;
    Clump** pp = &f20;
    while (*pp != 0) {
        _ReadWriteBarrier();
        Clump* p = *pp;
        p->f14 = one;
        p->f54 = one;
        p->f69 = one;
        pp = &p->f20;
    }
}
