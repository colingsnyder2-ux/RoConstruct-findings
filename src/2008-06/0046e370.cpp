// from server: 100% by king_originala
// roc 2008-06 0046e370  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046e370
//
// 0046e370  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0046e373  2b4168               sub eax, dword ptr [ecx + 0x68]
// 0046e376  83c15c               add ecx, 0x5c
// 0046e379  c1f806               sar eax, 6
// 0046e37c  85c0                 test eax, eax
// 0046e37e  7608                 jbe 0x46e388
// 0046e380  6a00                 push 0
// 0046e382  e8f9feffff           call 0x46e280
// 0046e387  c3                   ret 
// 0046e388  33c0                 xor eax, eax
// 0046e38a  c3                   ret 

struct Entry {
    char data[64];
};

struct Container {
    char padding[12];
    Entry* first;
    Entry* last;

    int lookup(unsigned int index);
};

struct S {
    char padding[92];
    Container entries;

    int f();
};

int S::f()
{
    Container* container = &entries;
    unsigned int count =
        static_cast<unsigned int>(container->last - container->first);
    if (count > 0)
        return container->lookup(0);
    return 0;
}
