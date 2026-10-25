// from server: 100% by king_originala
// roc 2008-06 004035a0  unit: VCWorkspace::?$CComAggObject  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004035a0
//
// 004035a0  56                   push esi
// 004035a1  8d7104               lea esi, [ecx + 4]
// 004035a4  c70184b18000         mov dword ptr [ecx], 0x80b184
// 004035aa  57                   push edi
// 004035ab  8bce                 mov ecx, esi
// 004035ad  e8def6ffff           call 0x402c90
// 004035b2  8bce                 mov ecx, esi
// 004035b4  e8d7f6ffff           call 0x402c90
// 004035b9  8b06                 mov eax, dword ptr [esi]
// 004035bb  8b3dc0288000         mov edi, dword ptr [0x8028c0]
// 004035c1  85c0                 test eax, eax
// 004035c3  740c                 je 0x4035d1
// 004035c5  50                   push eax
// 004035c6  ffd7                 call edi
// 004035c8  83c404               add esp, 4
// 004035cb  c70600000000         mov dword ptr [esi], 0
// 004035d1  8b4604               mov eax, dword ptr [esi + 4]
// 004035d4  85c0                 test eax, eax
// 004035d6  740d                 je 0x4035e5
// 004035d8  50                   push eax
// 004035d9  ffd7                 call edi
// 004035db  83c404               add esp, 4
// 004035de  c7460400000000       mov dword ptr [esi + 4], 0
// 004035e5  5f                   pop edi
// 004035e6  c7460800000000       mov dword ptr [esi + 8], 0
// 004035ed  5e                   pop esi
// 004035ee  c3                   ret 

extern void (__cdecl *free_memory)(void *);
extern unsigned char object_table[];

struct Buffer
{
    void *first;
    void *second;
    unsigned int count;

    void clear();
};

struct S
{
    void *table;
    Buffer buffer;

    void destroy();
};

void S::destroy()
{
    Buffer *b = &buffer;
    table = object_table;
    b->clear();
    b->clear();

    void (__cdecl *release)(void *) = free_memory;

    if (b->first)
    {
        release(b->first);
        b->first = 0;
    }

    if (b->second)
    {
        release(b->second);
        b->second = 0;
    }

    b->count = 0;
}
