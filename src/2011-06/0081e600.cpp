// from server: 100% by atomic.potato
// roc 2011-06 0081e600  unit: CXTPCommandBar  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081e600
//
// 0081e600  56                   push esi
// 0081e601  8bf1                 mov esi, ecx
// 0081e603  85f6                 test esi, esi
// 0081e605  7455                 je 0x81e65c
// 0081e607  837e2000             cmp dword ptr [esi + 0x20], 0
// 0081e60b  744f                 je 0x81e65c
// 0081e60d  e806e01a00           call 0x9cc618
// 0081e612  a900000010           test eax, 0x10000000
// 0081e617  7443                 je 0x81e65c
// 0081e619  8bce                 mov ecx, esi
// 0081e61b  e820fdffff           call 0x81e340
// 0081e620  8bce                 mov ecx, esi
// 0081e622  e8a9f7ffff           call 0x81ddd0
// 0081e627  f686e800000002       test byte ptr [esi + 0xe8], 2
// 0081e62e  7410                 je 0x81e640
// 0081e630  8b06                 mov eax, dword ptr [esi]
// 0081e632  8b90ac010000         mov edx, dword ptr [eax + 0x1ac]
// 0081e638  6a01                 push 1
// 0081e63a  6a00                 push 0
// 0081e63c  8bce                 mov ecx, esi
// 0081e63e  ffd2                 call edx
// 0081e640  f686e800000001       test byte ptr [esi + 0xe8], 1
// 0081e647  7413                 je 0x81e65c
// 0081e649  8b06                 mov eax, dword ptr [esi]
// 0081e64b  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0081e651  8bce                 mov ecx, esi
// 0081e653  ffd2                 call edx
// 0081e655  83a6e8000000fe       and dword ptr [esi + 0xe8], 0xfffffffe
// 0081e65c  33c0                 xor eax, eax
// 0081e65e  5e                   pop esi
// 0081e65f  c20800               ret 8

struct CXTPCommandBar {
    char pad0[0x20];
    void* m_p0x20;
    char pad1[0xc4];
    unsigned int m_flags0xe8;
    void f1();
    void f2();
    int f(int, int);
};

extern "C" int __stdcall sub_9cc618();

int CXTPCommandBar::f(int, int)
{
    if (this == 0)
        return 0;
    if (m_p0x20 == 0)
        return 0;
    if ((sub_9cc618() & 0x10000000) == 0)
        return 0;
    f1();
    f2();
    if ((m_flags0xe8 & 2) != 0) {
        void** vt = *(void***)this;
        void (__thiscall *p)(void*, int, int) = (void (__thiscall *)(void*, int, int))vt[0x1ac / 4];
        p(this, 0, 1);
    }
    if ((m_flags0xe8 & 1) != 0) {
        void** vt = *(void***)this;
        void (__thiscall *p)(void*) = (void (__thiscall *)(void*))vt[0x184 / 4];
        p(this);
        m_flags0xe8 &= 0xfffffffe;
    }
    return 0;
}
