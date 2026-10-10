// from server: 41% by colin
struct CXTMaskEditT {
    char pad[0x6c];
    char field_6c;
    char pad2[0x10];
    void* field_80;
    char pad3[0x4];
    void* field_84;
    int Method(int, int, int);
};

extern "C" int __stdcall GetWindowTextLengthA(void*);
extern "C" int __stdcall GetWindowTextA(void*, char*, int);
extern "C" int __stdcall SendMessageA(void*, unsigned int, int, int);
extern "C" int __stdcall GetWindowTextLengthW(void*);
extern "C" int __stdcall GetWindowTextW(void*, unsigned short*, int);
extern "C" int __stdcall SendMessageW(void*, unsigned int, int, int);

int CXTMaskEditT::Method(int a1, int a2, int a3)
{
    int len;
    int i;
    int result;
    void* hWnd;
    int start;

    hWnd = field_80;
    len = GetWindowTextLengthA(hWnd);
    if (a1 != -1) {
        if (a1 < len) {
            len = a1;
        } else {
            len = GetWindowTextLengthA(hWnd);
        }
    }
    GetWindowTextA(field_84, 0, 0);
    start = a2;
    if (start < len) {
        for (i = start; i < len; i++) {
            if (i >= 0) {
                if (i < GetWindowTextLengthA(field_84)) {
                    char ch = (char)GetWindowTextA(field_84, 0, i);
                    if (ch == field_6c) {
                        SendMessageA(hWnd, 0, i, 0);
                    }
                }
            }
        }
        result = a3;
    } else {
        result = a3;
    }
    return result;
}
