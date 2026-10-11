// from server: 100% by atomic.potato
// roc 2008-06 00430ec0  unit: CMainFrame  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00430ec0
//
// 00430ec0  8b442404             mov eax, dword ptr [esp + 4]
// 00430ec4  56                   push esi
// 00430ec5  8b31                 mov esi, dword ptr [ecx]
// 00430ec7  8901                 mov dword ptr [ecx], eax
// 00430ec9  85f6                 test esi, esi
// 00430ecb  7410                 je 0x430edd
// 00430ecd  8bce                 mov ecx, esi
// 00430ecf  e8cc64ffff           call 0x4273a0
// 00430ed4  56                   push esi
// 00430ed5  e8a0f72600           call 0x6a067a
// 00430eda  83c404               add esp, 4
// 00430edd  5e                   pop esi
// 00430ede  c20400               ret 4

struct Obj;

struct CMainFrame {
    Obj* m_ptr;
    void Set(Obj* p);
};

struct Obj {
    void Release();
};

void __cdecl G1_func_006a067a(void* p);

void CMainFrame::Set(Obj* p)
{
    Obj* old = m_ptr;
    m_ptr = p;
    if (old)
    {
        old->Release();
        G1_func_006a067a(old);
    }
}
