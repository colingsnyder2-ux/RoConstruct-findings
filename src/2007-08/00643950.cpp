// from server: 73% by colin
// roc 2007-08 00643950  unit: CXTPCommandBar  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643950
//
// 00643950  56                   push esi
// 00643951  8bf1                 mov esi, ecx
// 00643953  8b06                 mov eax, dword ptr [esi]
// 00643955  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 0064395b  ffd2                 call edx
// 0064395d  85c0                 test eax, eax
// 0064395f  7412                 je 0x643973
// 00643961  8b10                 mov edx, dword ptr [eax]
// 00643963  8bf0                 mov esi, eax
// 00643965  8bc8                 mov ecx, eax
// 00643967  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 0064396d  ffd0                 call eax
// 0064396f  85c0                 test eax, eax
// 00643971  75ee                 jne 0x643961
// 00643973  8bc6                 mov eax, esi
// 00643975  5e                   pop esi
// 00643976  c3                   ret 

struct CXTPCommandBar
{
    virtual CXTPCommandBar* vfunc_0184();
    CXTPCommandBar* find();
};

CXTPCommandBar* CXTPCommandBar::find()
{
    CXTPCommandBar* p = this;
    CXTPCommandBar* r = p->vfunc_0184();
    while (r != 0)
    {
        p = r;
        r = r->vfunc_0184();
    }
    return p;
}
