// from server: 89% by colin
// roc 2007-08 006519d0  unit: CXTPToolBar  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006519d0
//
// 006519d0  8b442404             mov eax, dword ptr [esp + 4]
// 006519d4  85c0                 test eax, eax
// 006519d6  7403                 je 0x6519db
// 006519d8  8b4004               mov eax, dword ptr [eax + 4]
// 006519db  8b542414             mov edx, dword ptr [esp + 0x14]
// 006519df  8b4904               mov ecx, dword ptr [ecx + 4]
// 006519e2  52                   push edx
// 006519e3  8b542414             mov edx, dword ptr [esp + 0x14]
// 006519e7  52                   push edx
// 006519e8  8b542414             mov edx, dword ptr [esp + 0x14]
// 006519ec  52                   push edx
// 006519ed  50                   push eax
// 006519ee  8b442418             mov eax, dword ptr [esp + 0x18]
// 006519f2  50                   push eax
// 006519f3  51                   push ecx
// 006519f4  e809e5fdff           call 0x62ff02
// 006519f9  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 006519ff  8b09                 mov ecx, dword ptr [ecx]
// 00651a01  e86afeffff           call 0x651870
// 00651a06  c21400               ret 0x14

struct CXTPToolBar {
    char pad0[4];
    void* m_pSomething;
    void f(void* a1, int a2, int a3, int a4, int a5);
};

struct CInner {
    void g();
};

extern "C" void* __stdcall sub_0062FF02(void* a1, void* a2, int a3, int a4, int a5, int a6);

void CXTPToolBar::f(void* a1, int a2, int a3, int a4, int a5)
{
    void* v = a1;
    if (v != 0)
        v = *(void**)((char*)v + 4);
    void* r = sub_0062FF02(m_pSomething, v, a2, a3, a4, a5);
    void* p = *(void**)((char*)r + 0x94);
    ((CInner*)(*(void**)p))->g();
}
