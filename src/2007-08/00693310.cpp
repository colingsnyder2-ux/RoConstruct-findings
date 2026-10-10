// from server: 84% by colin
struct CXTPStatusBar {
    int sub_692C60(int);
    int sub_692D50(int, int, int*);
    int sub_6921F0();
    int func(int, int, int);
};

extern "C" int __stdcall PtInRect(const int*, int, int);

int CXTPStatusBar::func(int a, int b, int c) {
    int rect[4];
    int i;
    int found;
    int result;
    int* out;

    result = 0;
    i = 0;
    if (*(int*)((char*)this + 0x9c) > 0) {
        do {
            int item = this->sub_692C60(i);
            if (this->sub_6921F0() != 0) {
                rect[0] = 0;
                rect[1] = 0;
                rect[2] = 0;
                rect[3] = 0;
                this->sub_692D50(i, 0, rect);
                if (PtInRect(rect, a, b) != 0) {
                    out = (int*)c;
                    if (out != 0) {
                        out[0] = rect[0];
                        out[1] = rect[1];
                        out[2] = rect[2];
                        out[3] = rect[3];
                    }
                    return item;
                }
            }
            i++;
        } while (i < *(int*)((char*)this + 0x9c));
    }
    return result;
}
