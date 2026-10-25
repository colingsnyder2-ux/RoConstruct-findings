// from server: 54% by atomic.potato
// roc 2010-06 004b1350  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004b1350
//
// 004b1350  56                   push esi
// 004b1351  57                   push edi
// 004b1352  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 004b1355  8b37                 mov esi, dword ptr [edi]
// 004b1357  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b135b  8d442410             lea eax, [esp + 0x10]
// 004b135f  50                   push eax
// 004b1360  83c610               add esi, 0x10
// 004b1363  e8b8c9ffff           call 0x4add20
// 004b1368  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004b136c  8b16                 mov edx, dword ptr [esi]
// 004b136e  50                   push eax
// 004b136f  51                   push ecx
// 004b1370  8bcf                 mov ecx, edi
// 004b1372  ffd2                 call edx
// 004b1374  5f                   pop edi
// 004b1375  5e                   pop esi
// 004b1376  c20800               ret 8

extern "C" void __stdcall func_004add20();

struct Inner {
    char pad[0x10];
    void (__thiscall *fn)(void *, void *);
};

struct Outer {
    char pad[0x1c];
    Inner *inner;
    void method(void *a, void *b);
};

void Outer::method(void *a, void *b)
{
    Inner *p = inner;
    void *v = p->fn;
    func_004add20();
    ((void (__thiscall *)(Inner *, void *, void *))v)(p, a, &a);
}
