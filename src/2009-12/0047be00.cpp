// roc 2009-12 0047be00  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0047be00
//
// 0047be00  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 0047be03  2b4168               sub eax, dword ptr [ecx + 0x68]
// 0047be06  83c15c               add ecx, 0x5c
// 0047be09  c1f806               sar eax, 6
// 0047be0c  85c0                 test eax, eax
// 0047be0e  7608                 jbe 0x47be18
// 0047be10  6a00                 push 0
// 0047be12  e8f9feffff           call 0x47bd10
// 0047be17  c3                   ret 
// 0047be18  33c0                 xor eax, eax
// 0047be1a  c3                   ret 
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