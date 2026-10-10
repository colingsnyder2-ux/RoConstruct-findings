// from server: 48% by colin
struct CXTPRibbonBar {
    char pad[0x10];
    void* field_0c;
    void* field_10;
};

struct CControlQuickAccessMorePopup {
    char pad[0x04];
    void* field_04;
    void* field_08;
    void* field_0c;
    void* field_10;
    void Init(CXTPRibbonBar* bar);
};

extern "C" void* __cdecl sub_62fef6(unsigned int);

struct Helper {
    void* sub_6a7760(int);
};

extern "C" void* __stdcall sub_67c5a0(void*, void*);

void CControlQuickAccessMorePopup::Init(CXTPRibbonBar* bar)
{
    void* p1 = sub_62fef6(0x16c);
    void* obj1 = 0;
    if (p1 != 0) {
        obj1 = ((Helper*)p1)->sub_6a7760(0);
    }
    void* r1 = sub_67c5a0(*(void**)((char*)bar + 0xf8), obj1);
    field_10 = r1;

    void* p2 = sub_62fef6(0x16c);
    void* obj2 = 0;
    if (p2 != 0) {
        obj2 = ((Helper*)p2)->sub_6a7760(1);
    }
    void* r2 = sub_67c5a0(*(void**)((char*)bar + 0xf8), obj2);
    field_0c = r2;

    field_04 = 0;
    field_08 = bar;
}
