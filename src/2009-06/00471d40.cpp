// roc 2009-06 00471d40  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00471d40
//
// 00471d40  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 00471d43  2b4168               sub eax, dword ptr [ecx + 0x68]
// 00471d46  83c15c               add ecx, 0x5c
// 00471d49  c1f806               sar eax, 6
// 00471d4c  85c0                 test eax, eax
// 00471d4e  7608                 jbe 0x471d58
// 00471d50  6a00                 push 0
// 00471d52  e8f9feffff           call 0x471c50
// 00471d57  c3                   ret 
// 00471d58  33c0                 xor eax, eax
// 00471d5a  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAEHXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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