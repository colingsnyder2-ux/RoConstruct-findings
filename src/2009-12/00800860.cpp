// from server: 54% by atomic.potato
struct CXTPPaintManager {
    void f(int, int);
};

struct CXTPControlComboBoxAutoCompleteWnd {
    char pad[0x164];
    struct Item {
        char pad0[4];
        int field4;
        int field8;
    };
    Item items[0x3f];
    int getItem(int);
};

extern "C" int __stdcall sub_84b2d0(int);
extern "C" int __cdecl sub_7fd640(CXTPControlComboBoxAutoCompleteWnd*, int);
extern "C" int __stdcall sub_7f45fe(int, int);

void CXTPPaintManager::f(int a, int b)
{
    int v = sub_84b2d0(a);
    int r = sub_7fd640((CXTPControlComboBoxAutoCompleteWnd*)this, 0xf);
    sub_7f45fe(r, v);
}
