// from server: 76% by colin
// roc 2007-08 0042b590  unit: EventHandler  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b590
//
// 0042b590  56                   push esi
// 0042b591  8b742408             mov esi, dword ptr [esp + 8]
// 0042b595  834610ff             add dword ptr [esi + 0x10], -1
// 0042b599  8b4610               mov eax, dword ptr [esi + 0x10]
// 0042b59c  7530                 jne 0x42b5ce
// 0042b59e  837e0400             cmp dword ptr [esi + 4], 0
// 0042b5a2  7411                 je 0x42b5b5
// 0042b5a4  8b4608               mov eax, dword ptr [esi + 8]
// 0042b5a7  8b4e04               mov ecx, dword ptr [esi + 4]
// 0042b5aa  6a01                 push 1
// 0042b5ac  50                   push eax
// 0042b5ad  ffd1                 call ecx
// 0042b5af  83c408               add esp, 8
// 0042b5b2  894608               mov dword ptr [esi + 8], eax
// 0042b5b5  56                   push esi
// 0042b5b6  c7460400000000       mov dword ptr [esi + 4], 0
// 0042b5bd  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0042b5c4  e899462000           call 0x62fc62
// 0042b5c9  83c404               add esp, 4
// 0042b5cc  33c0                 xor eax, eax
// 0042b5ce  5e                   pop esi
// 0042b5cf  c20400               ret 4

struct EventHandler {
    char pad0[4];
    void* m_callback;
    void* m_context;
    int m_fieldC;
    int m_refCount;

    int release(void*);
};

extern "C" void __cdecl sub_62FC62(void*);

int EventHandler::release(void* arg) {
    if (--m_refCount == 0) {
        if (m_callback) {
            m_context = ((void* (__cdecl*)(void*, int))m_callback)(m_context, 1);
        }
        m_callback = 0;
        m_fieldC = 0;
        sub_62FC62(this);
        return 0;
    }
    return m_refCount;
}
