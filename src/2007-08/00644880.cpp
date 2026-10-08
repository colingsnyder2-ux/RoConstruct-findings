// from server: 88% by colin
// roc 2007-08 00644880  unit: CXTPCommandBar  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644880
//
// 00644880  56                   push esi
// 00644881  8bf1                 mov esi, ecx
// 00644883  e8b8f1ffff           call 0x643a40
// 00644888  8b10                 mov edx, dword ptr [eax]
// 0064488a  56                   push esi
// 0064488b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0064488f  8bc8                 mov ecx, eax
// 00644891  8b82b0000000         mov eax, dword ptr [edx + 0xb0]
// 00644897  56                   push esi
// 00644898  ffd0                 call eax
// 0064489a  8bc6                 mov eax, esi
// 0064489c  5e                   pop esi
// 0064489d  c20400               ret 4

struct CXTPCommandBar;

struct CXTPCommandBarVtbl
{
    void* pad[0x2c];
    void* (__thiscall* fnB0)(void* self, CXTPCommandBar* pBar);
};

struct CXTPCommandBarBase
{
    CXTPCommandBarVtbl* vptr;
};

struct CXTPCommandBar
{
    CXTPCommandBarBase base;
    CXTPCommandBar* GetParent();
    CXTPCommandBar* SetOwner(CXTPCommandBar* pBar);
};

CXTPCommandBar* CXTPCommandBar::SetOwner(CXTPCommandBar* pBar)
{
    CXTPCommandBar* pParent = GetParent();
    CXTPCommandBarVtbl* vt = pParent->base.vptr;
    vt->fnB0(pParent, pBar);
    return pBar;
}
