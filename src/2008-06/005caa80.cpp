// from server: 100% by king_originala
// roc 2008-06 005caa80  unit: RBX::VControllerService::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005caa80
//
// 005caa80  56                   push esi
// 005caa81  8bf1                 mov esi, ecx
// 005caa83  e858fffcff           call 0x59a9e0
// 005caa88  8b10                 mov edx, dword ptr [eax]
// 005caa8a  8bc8                 mov ecx, eax
// 005caa8c  8b420c               mov eax, dword ptr [edx + 0xc]
// 005caa8f  ffd0                 call eax
// 005caa91  84c0                 test al, al
// 005caa93  7450                 je 0x5caae5
// 005caa95  80be4101000000       cmp byte ptr [esi + 0x141], 0
// 005caa9c  7437                 je 0x5caad5
// 005caa9e  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 005caaa4  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 005caaaa  8b8834010000         mov ecx, dword ptr [eax + 0x134]
// 005caab0  8b0c11               mov ecx, dword ptr [ecx + edx]
// 005caab3  038e4c010000         add ecx, dword ptr [esi + 0x14c]
// 005caab9  8b9648010000         mov edx, dword ptr [esi + 0x148]
// 005caabf  8d8c0134010000       lea ecx, [ecx + eax + 0x134]
// 005caac6  ffd2                 call edx
// 005caac8  888640010000         mov byte ptr [esi + 0x140], al
// 005caace  c6864101000000       mov byte ptr [esi + 0x141], 0
// 005caad5  80be4001000000       cmp byte ptr [esi + 0x140], 0
// 005caadc  7407                 je 0x5caae5
// 005caade  b801000000           mov eax, 1
// 005caae3  5e                   pop esi
// 005caae4  c3                   ret 
// 005caae5  33c0                 xor eax, eax
// 005caae7  5e                   pop esi
// 005caae8  c3                   ret 

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual bool enabled() = 0;
};

struct Prefix {
    char padding[0x134];
};

struct VirtualBase {
    int value;
};

struct Target : Prefix, virtual VirtualBase {
    bool callback();
};

struct S {
    char padding[0x140];
    bool cached;
    bool dirty;
    Target* object;
    bool (Target::*callback)();

    Interface* getInterface();
    int f();
};

int S::f()
{
    if (getInterface()->enabled()) {
        if (dirty) {
            cached = (object->*callback)();
            dirty = false;
        }
        if (cached)
            return 1;
    }
    return 0;
}
