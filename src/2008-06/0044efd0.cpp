// from server: 100% by king_originala
// roc 2008-06 0044efd0  unit: CRobloxDHtmlDialog  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0044efd0
//
// 0044efd0  56                   push esi
// 0044efd1  8bf1                 mov esi, ecx
// 0044efd3  e8b0232500           call 0x6a1388
// 0044efd8  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 0044efdf  7422                 je 0x44f003
// 0044efe1  6a00                 push 0
// 0044efe3  6a00                 push 0
// 0044efe5  6a00                 push 0
// 0044efe7  6a00                 push 0
// 0044efe9  6a00                 push 0
// 0044efeb  8d8e14010000         lea ecx, [esi + 0x114]
// 0044eff1  ff1564248000         call dword ptr [0x802464]
// 0044eff7  50                   push eax
// 0044eff8  8bce                 mov ecx, esi
// 0044effa  e883232500           call 0x6a1382
// 0044efff  33c0                 xor eax, eax
// 0044f001  5e                   pop esi
// 0044f002  c3                   ret 
// 0044f003  b801000000           mov eax, 1
// 0044f008  5e                   pop esi
// 0044f009  c3                   ret 

struct S;
typedef const char* (__thiscall *StringAccessor)(const void*);
extern StringAccessor stringAccessor;

struct S
{
    char padding[0x114];
    char text[0x14];
    unsigned int length;

    void prepare();
    void apply(const char*, int, int, int, int, int);
    int f();
};

int S::f()
{
    prepare();
    if (length != 0)
    {
        apply(stringAccessor(text), 0, 0, 0, 0, 0);
        return 0;
    }
    return 1;
}
