// from server: 100% by king_originala
// roc 2008-06 0043e900  unit: MVCXTPPropertyGridItem::?$XItem  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043e900
//
// 0043e900  56                   push esi
// 0043e901  8bf1                 mov esi, ecx
// 0043e903  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0043e909  85c0                 test eax, eax
// 0043e90b  7409                 je 0x43e916
// 0043e90d  50                   push eax
// 0043e90e  e8671d2600           call 0x6a067a
// 0043e913  83c404               add esp, 4
// 0043e916  8b8610010000         mov eax, dword ptr [esi + 0x110]
// 0043e91c  50                   push eax
// 0043e91d  c7861c01000000000000 mov dword ptr [esi + 0x11c], 0
// 0043e927  c7862001000000000000 mov dword ptr [esi + 0x120], 0
// 0043e931  c7862401000000000000 mov dword ptr [esi + 0x124], 0
// 0043e93b  e83a1d2600           call 0x6a067a
// 0043e940  83c404               add esp, 4
// 0043e943  8bce                 mov ecx, esi
// 0043e945  e8e64c2d00           call 0x713630
// 0043e94a  f644240801           test byte ptr [esp + 8], 1
// 0043e94f  7409                 je 0x43e95a
// 0043e951  56                   push esi
// 0043e952  e8231d2600           call 0x6a067a
// 0043e957  83c404               add esp, 4
// 0043e95a  8bc6                 mov eax, esi
// 0043e95c  5e                   pop esi
// 0043e95d  c20400               ret 4

extern "C" void __cdecl deallocate(void*);

struct S
{
    unsigned char padding[0x110];
    void* first;
    unsigned char gap[8];
    void* buffer;
    unsigned int size;
    unsigned int capacity;

    void cleanup();
    S* destroy(unsigned int flags);
};

S* S::destroy(unsigned int flags)
{
    if (buffer)
        deallocate(buffer);

    buffer = 0;
    size = 0;
    capacity = 0;
    deallocate(first);

    cleanup();

    if (flags & 1)
        deallocate(this);

    return this;
}
