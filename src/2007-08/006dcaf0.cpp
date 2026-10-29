// from server: 74% by colin
struct HWND__;

struct CMap {
    char pad[0xec];
    HWND__** items;
    int count;
    HWND__* find(int x, int y);
};

extern "C" int __stdcall PtInRect(const void* rect, int x, int y);

HWND__* CMap::find(int x, int y) {
    int i = 0;
    if (count > 0) {
        do {
            if (i < 0 || i >= count) {
                break;
            }
            HWND__* h = items[i];
            if (PtInRect(h, x, y)) {
                return h;
            }
            ++i;
        } while (i < count);
    }
    return 0;
}
