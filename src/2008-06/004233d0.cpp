// from server: 72% by king_originala
struct Point {
    int x, y;
};

struct Rect {
    int left, top, right, bottom;
};

struct Item {
    virtual void unused();
    virtual void release(int);
    void* handle;
};

struct Handler {
    void begin();
    void position();
};

struct Result {
    char padding[0x94];
    Handler** handler;
};

struct Notification {
    char padding0[0x3c];
    void* item;
    char padding1[0x20];
    Point point;
};

extern "C" {
    extern int (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, int);
    extern int (__stdcall *ClientToScreen)(void*, Point*);
    extern void* (__stdcall *SetCapture)(void*);
    Result* __stdcall locateWithHandle(void*, int, int, int);
    Result* __stdcall locate(int, int, int);
    void __stdcall capture(void*);
}

struct CRobloxTreeCtrl {
    char padding0[0x20];
    void* window;
    char padding1[0x108];
    Item* current;

    Item* findItem(void*);
    int getItemRect(void*, Rect*, int);
    void notify(Notification*, int*);
};

void CRobloxTreeCtrl::notify(Notification* notification, int* result)
{
    Item* item = findItem(notification->item);
    if (item != current && current)
        current->release(1);
    current = item;

    if (item) {
        Rect rectangle;
        getItemRect(notification->item, &rectangle, 1);

        int scroll = SendMessageA(window, 0x1106, 0, 0);
        Point point = notification->point;

        Result* first = locateWithHandle(
            current->handle, 0,
            scroll + (point.x - rectangle.left),
            point.y - rectangle.top);
        (*first->handler)->begin();

        ClientToScreen(window, &point);
        Result* second = locate(0, point.x, point.y);
        (*second->handler)->position();

        capture(SetCapture(window));
        *result = 0;
    } else {
        *result = 0;
    }
}
