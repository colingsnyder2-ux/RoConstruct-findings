// from server: 81% by colin
// roc 2007-08 006c7b40  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006c7b40
//
// 006c7b40  56                   push esi
// 006c7b41  8bf1                 mov esi, ecx
// 006c7b43  e8f686f6ff           call 0x63023e
// 006c7b48  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006c7b4b  8b80fc000000         mov eax, dword ptr [eax + 0xfc]
// 006c7b51  85c0                 test eax, eax
// 006c7b53  7403                 je 0x6c7b58
// 006c7b55  8b4020               mov eax, dword ptr [eax + 0x20]
// 006c7b58  8b5620               mov edx, dword ptr [esi + 0x20]
// 006c7b5b  6a01                 push 1
// 006c7b5d  8d4c2410             lea ecx, [esp + 0x10]
// 006c7b61  51                   push ecx
// 006c7b62  50                   push eax
// 006c7b63  52                   push edx
// 006c7b64  ff152cee7700         call dword ptr [0x77ee2c]
// 006c7b6a  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c7b6e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c7b72  8b542408             mov edx, dword ptr [esp + 8]
// 006c7b76  50                   push eax
// 006c7b77  8b465c               mov eax, dword ptr [esi + 0x5c]
// 006c7b7a  51                   push ecx
// 006c7b7b  8b88fc000000         mov ecx, dword ptr [eax + 0xfc]
// 006c7b81  52                   push edx
// 006c7b82  e8f9c6f7ff           call 0x644280
// 006c7b87  5e                   pop esi
// 006c7b88  c20c00               ret 0xc

struct CXTPCustomizeSheet_CCustomizeEdit {
    char pad0[0x20];
    void* m_pWnd;
    char pad1[0x38];
    void* m_pSomething;
    void f(int, int, int);
};

extern "C" int __stdcall MapWindowPoints(void*, void*, void*, unsigned int);
extern "C" void __fastcall sub_63023E(void*);
extern "C" void __fastcall sub_644280(void*, int, int, int);

void CXTPCustomizeSheet_CCustomizeEdit::f(int a1, int a2, int a3)
{
    int buf[3];
    void* p;
    void* q;

    sub_63023E(this);

    p = *(void**)((char*)this + 0x5c);
    p = *(void**)((char*)p + 0xfc);
    if (p != 0) {
        p = *(void**)((char*)p + 0x20);
    }

    MapWindowPoints(*(void**)((char*)this + 0x20), p, buf, 1);

    q = *(void**)((char*)this + 0x5c);
    q = *(void**)((char*)q + 0xfc);
    sub_644280(q, buf[0], buf[1], buf[2]);
}
