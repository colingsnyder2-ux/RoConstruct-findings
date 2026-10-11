// from server: 56% by colin
struct CXTPCommandBar {
    void* GetNext();
};

struct CXTPCustomizeSheet_CCustomizeButton {
    int field_0x84;
    char pad[0x100 - 0x88];
    CXTPCommandBar* field_0x100;
    int Find(int, void*);

    void DoSomething();
};

extern "C" void* __stdcall SendMessageA(void*, unsigned int, unsigned int, int);

void CXTPCustomizeSheet_CCustomizeButton::DoSomething()
{
    CXTPCommandBar* pBar = this->field_0x100;
    void* p = pBar->GetNext();
    CXTPCommandBar* pBar2 = this->field_0x100;
    void* p2 = pBar2->GetNext();
    void* p3 = (*(void***)p2)[0x188 / 4];
    ((void (__thiscall*)(void*))p3)(p2);

    int local;
    int result = this->Find(0x64, p);
    if (result == 0) {
        SendMessageA(*(void**)((char*)p + 0x20), 0x111, this->field_0x84, 0);
    }
}
