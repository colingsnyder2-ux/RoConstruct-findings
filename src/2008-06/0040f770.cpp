// from server: 100% by king_originala
// roc 2008-06 0040f770  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040f770
//
// 0040f770  56                   push esi
// 0040f771  8bf1                 mov esi, ecx
// 0040f773  8d4e08               lea ecx, [esi + 8]
// 0040f776  c70678d78000         mov dword ptr [esi], 0x80d778
// 0040f77c  c7460460d78000       mov dword ptr [esi + 4], 0x80d760
// 0040f783  c7013cd78000         mov dword ptr [ecx], 0x80d73c
// 0040f789  c7461414d78000       mov dword ptr [esi + 0x14], 0x80d714
// 0040f790  c74618010000c0       mov dword ptr [esi + 0x18], 0xc0000001
// 0040f797  e8f4f1ffff           call 0x40e990
// 0040f79c  f644240801           test byte ptr [esp + 8], 1
// 0040f7a1  7409                 je 0x40f7ac
// 0040f7a3  56                   push esi
// 0040f7a4  e8d10e2900           call 0x6a067a
// 0040f7a9  83c404               add esp, 4
// 0040f7ac  8bc6                 mov eax, esi
// 0040f7ae  5e                   pop esi
// 0040f7af  c20400               ret 4

extern "C" void __cdecl release(void *);

struct Inner {
    unsigned int table;
    unsigned int reserved[2];
    void cleanup();
};

struct S {
    unsigned int table0;
    unsigned int table1;
    Inner inner;
    unsigned int table2;
    unsigned int state;

    S *destroy(unsigned int flags);
};

S *S::destroy(unsigned int flags)
{
    table0 = 0x0080D778;
    table1 = 0x0080D760;
    inner.table = 0x0080D73C;
    table2 = 0x0080D714;
    state = 0xC0000001;
    inner.cleanup();

    if (flags & 1)
        release(this);

    return this;
}
