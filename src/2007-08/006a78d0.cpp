// from server: 86% by colin
// roc 2007-08 006a78d0  unit: CXTPRibbonBarControlQuickAccessPopup  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a78d0
//
// 006a78d0  56                   push esi
// 006a78d1  57                   push edi
// 006a78d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006a78d6  85ff                 test edi, edi
// 006a78d8  8bf1                 mov esi, ecx
// 006a78da  742d                 je 0x6a7909
// 006a78dc  8b8e6c010000         mov ecx, dword ptr [esi + 0x16c]
// 006a78e2  85c9                 test ecx, ecx
// 006a78e4  7405                 je 0x6a78eb
// 006a78e6  e8f988f8ff           call 0x6301e4
// 006a78eb  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 006a78f1  e85ac0f9ff           call 0x643950
// 006a78f6  8b10                 mov edx, dword ptr [eax]
// 006a78f8  8bc8                 mov ecx, eax
// 006a78fa  8b8220020000         mov eax, dword ptr [edx + 0x220]
// 006a7900  56                   push esi
// 006a7901  ffd0                 call eax
// 006a7903  89866c010000         mov dword ptr [esi + 0x16c], eax
// 006a7909  57                   push edi
// 006a790a  8bce                 mov ecx, esi
// 006a790c  e85f96fcff           call 0x670f70
// 006a7911  5f                   pop edi
// 006a7912  5e                   pop esi
// 006a7913  c20400               ret 4

struct CXTPRibbonBarControlQuickAccessPopup {
    void SetQuickAccessPopup(int);
};

struct Inner1 {
    void m();
};

struct Inner2 {
    void* m();
};

struct Inner3 {
    void m(int);
};

extern Inner1* G1;
extern Inner2* G2;
extern Inner3* G3;

void CXTPRibbonBarControlQuickAccessPopup::SetQuickAccessPopup(int arg)
{
    if (arg != 0) {
        Inner1* p1 = *(Inner1**)((char*)this + 0x16c);
        if (p1 != 0) {
            p1->m();
        }
        Inner2* p2 = *(Inner2**)((char*)this + 0xfc);
        void* r = p2->m();
        void** vt = *(void***)r;
        typedef void* (__thiscall *Fn)(void*, void*);
        Fn f = (Fn)vt[0x220/4];
        void* res = f(r, this);
        *(void**)((char*)this + 0x16c) = res;
    }
    G3->m(arg);
}
