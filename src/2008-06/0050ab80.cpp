// from server: 100% by king_originala
// roc 2008-06 0050ab80  unit: G3D::Log  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050ab80
//
// 0050ab80  8b442404             mov eax, dword ptr [esp + 4]
// 0050ab84  83ec0c               sub esp, 0xc
// 0050ab87  2b4144               sub eax, dword ptr [ecx + 0x44]
// 0050ab8a  7926                 jns 0x50abb2
// 0050ab8c  8d442410             lea eax, [esp + 0x10]
// 0050ab90  50                   push eax
// 0050ab91  8d4c2404             lea ecx, [esp + 4]
// 0050ab95  c74424143c7e8200     mov dword ptr [esp + 0x14], 0x827e3c
// 0050ab9d  ff15a4288000         call dword ptr [0x8028a4]
// 0050aba3  687c998d00           push 0x8d997c
// 0050aba8  8d4c2404             lea ecx, [esp + 4]
// 0050abac  51                   push ecx
// 0050abad  e8da691900           call 0x6a158c
// 0050abb2  56                   push esi
// 0050abb3  8b7134               mov esi, dword ptr [ecx + 0x34]
// 0050abb6  3bc6                 cmp eax, esi
// 0050abb8  7d03                 jge 0x50abbd
// 0050abba  89413c               mov dword ptr [ecx + 0x3c], eax
// 0050abbd  7e1c                 jle 0x50abdb
// 0050abbf  8b513c               mov edx, dword ptr [ecx + 0x3c]
// 0050abc2  2bc6                 sub eax, esi
// 0050abc4  03d0                 add edx, eax
// 0050abc6  3bf2                 cmp esi, edx
// 0050abc8  7c02                 jl 0x50abcc
// 0050abca  8bd6                 mov edx, esi
// 0050abcc  3b5138               cmp edx, dword ptr [ecx + 0x38]
// 0050abcf  895134               mov dword ptr [ecx + 0x34], edx
// 0050abd2  7e07                 jle 0x50abdb
// 0050abd4  56                   push esi
// 0050abd5  50                   push eax
// 0050abd6  e855ec0000           call 0x519830
// 0050abdb  5e                   pop esi
// 0050abdc  83c40c               add esp, 0xc
// 0050abdf  c20400               ret 4

extern void (__thiscall* constructException)(void*, const char* const&);
extern char exceptionType;
extern "C" __declspec(noreturn) void __stdcall throwException(void*, void*);

struct S {
    char padding[0x34];
    int size;
    int capacity;
    int position;
    int reserved;
    int offset;

    void resize(int requested);
    void grow(int difference, int oldSize);
};

void S::resize(int requested)
{
    int adjusted = requested - offset;
    if (adjusted < 0) {
        int exceptionObject[3];
        requested = reinterpret_cast<int>("Cannot resize huge files to be shorter.");
        constructException(exceptionObject,
                           reinterpret_cast<const char* const&>(requested));
        throwException(exceptionObject, &exceptionType);
    }

    int oldSize = size;
    if (adjusted < oldSize)
        position = adjusted;

    if (adjusted > oldSize) {
        int difference = adjusted - oldSize;
        int newSize = position + difference;
        if (oldSize >= newSize)
            newSize = oldSize;
        size = newSize;
        if (newSize > capacity)
            grow(difference, oldSize);
    }
}
