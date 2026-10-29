// roc 2010-06 004821a0  unit: RBX::LDraw2Lua::LDraw2RobloxMapRoot  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004821a0
//
// 004821a0  8b416c               mov eax, dword ptr [ecx + 0x6c]
// 004821a3  2b4168               sub eax, dword ptr [ecx + 0x68]
// 004821a6  83c15c               add ecx, 0x5c
// 004821a9  c1f806               sar eax, 6
// 004821ac  85c0                 test eax, eax
// 004821ae  7608                 jbe 0x4821b8
// 004821b0  6a00                 push 0
// 004821b2  e8f9feffff           call 0x4820b0
// 004821b7  c3                   ret 
// 004821b8  33c0                 xor eax, eax
// 004821ba  c3                   ret 
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