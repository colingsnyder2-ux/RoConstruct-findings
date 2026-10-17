// from server: 60% by colin
struct GuiItem {
    char pad[0x14];
    int menuState;
};

struct UnifiedWidget {
    int processShown_OutOfTitle(void *event);
    int processShown_InTitle(void *event);
    int processShown(void *event);
    int process(void *event, void *result);
};

int UnifiedWidget::process(void *event, void *result) {
    GuiItem *item = (GuiItem *)((char *)this - 0x130);
    if (!(*(bool (__thiscall **)(GuiItem *))(*(int *)item + 0x54))(item)) {
        *(int *)((char *)result + 4) = 0;
        *(int *)result = 0;
        return 0;
    }
    int *ev = (int *)event;
    int code = *ev;
    if (code >= 1 || code > 7) {
        *(int *)((char *)result + 4) = 0;
        *(int *)result = 0;
        return 0;
    }
    int state = *(int *)((char *)this + 0x14);
    if (state > 3) {
        *(int *)((char *)result + 4) = 0;
        *(int *)result = 0;
        return 0;
    }
    switch (state) {
    case 0:
        processShown_OutOfTitle(event);
        return *(int *)result;
    case 1:
        processShown_InTitle(event);
        return *(int *)result;
    case 2:
        processShown(event);
        return *(int *)result;
    default:
        *(int *)((char *)result + 4) = 0;
        *(int *)result = 0;
        return 0;
    }
}
