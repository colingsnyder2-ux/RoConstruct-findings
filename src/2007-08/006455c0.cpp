// from server: 40% by colin
struct Sub {
    char pad0[0x20];
    int field20;
    int getCount();
    int getItem(int);
};

struct Outer {
    char pad0[0x3c];
    int hwnd;
    char pad1[0x1c];
    Sub* sub;
    int method(int*);
};

extern "C" int __stdcall GetWindowRect(int, int*);

int Outer::method(int* a2)
{
    int rect[4];
    int* p1 = (int*)a2;
    int* p2 = (int*)((char*)a2 + 4);
    int* p3 = (int*)((char*)a2 + 8);
    int* p4 = (int*)((char*)a2 + 12);
    *p1 = 0;
    *p2 = 0;
    *p3 = 0;
    *p4 = 0;
    Sub* s = (Sub*)((char*)this - 0x5c);
    if (s == 0)
        return 0;
    if (s->field20 == 0)
        return 0;
    GetWindowRect(this->hwnd, rect);
    int n = this->method(rect);
    if (n > 0) {
        int c = s->getCount();
        if (n <= c) {
            int* item = (int*)s->getItem(n - 1);
            int x1 = item[0x30];
            int y1 = item[0x31];
            int x2 = item[0x32];
            int y2 = item[0x33];
            int w = x2 - rect[0] + x1;
            int h = y2 - y1 + rect[1];
            *p1 = rect[0];
            *p2 = rect[1];
            *p3 = w;
            *p4 = h;
            return 0;
        }
    }
    *p1 = rect[0];
    *p2 = rect[1];
    *p3 = rect[2] - rect[0];
    *p4 = rect[3] - rect[1];
    return 0;
}
