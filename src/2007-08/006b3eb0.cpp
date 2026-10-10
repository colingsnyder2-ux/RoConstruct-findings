// from server: 63% by colin
struct CXTPControlGallery {
    int GetRect(int*);
    int IsVisible();
    int GetWidth();
    int GetHeight();
    int GetLeft();
    int GetTop();
    int GetRight();
    int GetBottom();
    int GetSomething();
    int field_0x200;
    int field_0x204;
    int field_0x208;
    int field_0x20c;
    int field_0x210;
    int field_0x214;
    int field_0x178;
};

extern "C" int __stdcall SetRect(int*, int, int, int, int);

int CXTPControlGallery::GetRect(int* rect) {
    rect[0] = 0;
    rect[1] = 0;
    rect[2] = 0;
    rect[3] = 0;

    if (field_0x204 != 0) {
        SetRect(rect, 1, 1, 1, 1);
    }

    if (field_0x200 != 0) {
        int result = GetSomething();
        int val;
        if (result != 0) {
            val = GetWidth();
        } else {
            val = GetHeight();
        }
        rect[2] += val;
    }

    if (IsVisible() != 0) {
        rect[3] = 2;
    }

    rect[0] += field_0x208;
    rect[1] += field_0x20c;
    rect[3] -= -field_0x214;
    rect[2] -= -field_0x210;

    return (int)rect;
}
