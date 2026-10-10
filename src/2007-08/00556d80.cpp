// from server: 28% by colin
struct GuiItem {
    char pad[4];
    void* focus;
    void processNonFocus(void* event);
    void addGuiItem(void* item);
    void getGuiItem(void* item);
};

struct GuiResponse {
    int a;
    int b;
};

void GuiItem::processNonFocus(void* event) {
    int* ev = (int*)event;
    int type = ev[0];
    if (type != 1 || type == 2 || type == 3 || type == 4 || type == 5) {
        if (type == 6) {
            GuiResponse* out = (GuiResponse*)((char*)event + 0x1c);
            out->a = 0;
            out->b = 0;
            return;
        }
    } else if (type == 6) {
        GuiResponse* out = (GuiResponse*)((char*)event + 0x1c);
        out->a = 0;
        out->b = 0;
        return;
    }
    if (focus) {
        void** vt = *(void***)focus;
        bool (*fn)(void*) = (bool (*)(void*))vt[0x48/4];
        if (fn(focus)) {
            GuiResponse tmp;
            addGuiItem(&tmp);
            if (tmp.a) {
                GuiResponse* out = (GuiResponse*)((char*)event + 0x1c);
                out->a = tmp.a;
                out->b = tmp.b;
                return;
            }
        }
    }
    void* f = focus;
    if (f) {
        void** vt = *(void***)((char*)f + 0xe8);
        void (*fn)(void*, void*) = (void (*)(void*, void*))vt[0];
        GuiResponse tmp;
        fn((char*)f + 0xe8, &tmp);
        if (tmp.a) {
            GuiResponse* out = (GuiResponse*)((char*)event + 0x1c);
            out->a = tmp.a;
            out->b = tmp.b;
            return;
        }
    }
    getGuiItem(event);
    GuiResponse* out = (GuiResponse*)((char*)event + 0x1c);
    out->a = 0;
    out->b = 0;
}
