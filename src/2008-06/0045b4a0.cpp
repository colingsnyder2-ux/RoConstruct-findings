// from server: 74% by king_originala
extern "C" int (__stdcall *InvalidateRect)(void *, const void *, int);

struct Context {
    void **vtable;
};

extern Context *currentContext;

struct Handler {
    void process(unsigned int, unsigned int, long);
};

struct CRobloxWnd {
    char reserved0[0x20];
    void *window;
    char reserved1[0x4c];
    int enabled;
    char reserved2[0x10];
    Handler *handler;
    char reserved3[0x1c];
    Context *context;

    int dispatch(unsigned int, unsigned int, long, long *);
    int baseDispatch(unsigned int, unsigned int, long, long *);
    void prepare();
};

int CRobloxWnd::dispatch(unsigned int message, unsigned int wParam,
                        long lParam, long *result)
{
    bool handled;

    switch (message) {
    case 7:
    case 8:
    case 0x21:
    case 0x100:
    case 0x101:
    case 0x102:
    case 0x104:
    case 0x105:
    case 0x106:
        handled = false;
        goto processMessage;

    case 0x201:
    case 0x204:
        prepare();
    case 0x200:
    case 0x20a:
        handled = true;
        *result = 0;
        goto processMessage;

    case 0x202:
    case 0x205:
        *result = 0;
        handled = false;
        goto processMessage;

    case 0x203:
    case 0x206:
        *result = 0;
        handled = false;
        goto processMessage;

    default:
        goto defaultMessage;
    }

processMessage:
    if (enabled) {
        Context *p = context;
        if (currentContext != p) {
            typedef void (__thiscall *Activate)(Context *);
            ((Activate)p->vtable[38])(p);
            currentContext = p;
        }

        if (handler)
            handler->process(message, wParam, lParam);

        InvalidateRect(window, 0, 1);
    }

    if (handled)
        return 1;

defaultMessage:
    return baseDispatch(message, wParam, lParam, result);
}
