// from server: 93% by king_originala
struct Interface {
    struct VTable {
        void (__stdcall *query)();
        unsigned long (__stdcall *addRef)(Interface*);
        unsigned long (__stdcall *release)(Interface*);
    };
    VTable* vtable;
    unsigned long reserved;
};

struct Wrapper {
    char padding[0x14];
    Interface interface_;
    short flag;
};

extern char browserType[];
extern char ideBrowserType[];

extern "C" int __cdecl createWrapper(Wrapper**, int);
extern "C" void* __cdecl runtimeCast(void*, int, const void*, const void*, int);

struct CBrowserView {
    char padding[0x2c4];
    Interface* browser;
    int getBrowser(Interface** result);
};

int CBrowserView::getBrowser(Interface** result) {
    if (browser == 0) {
        Wrapper* wrapper;
        int status = createWrapper(&wrapper, 0);
        if (status != 0)
            return status;

        wrapper->flag = runtimeCast(this, 0, browserType, ideBrowserType, 0) != 0 ? -1 : 0;
        Interface* replacement = &wrapper->interface_;

        if (browser != replacement) {
            if (replacement != 0)
                replacement->vtable->addRef(replacement);
            if (browser != 0)
                browser->vtable->release(browser);
            browser = replacement;
        }
    }

    if (result == 0)
        return (int)0x80004003;

    *result = browser;
    Interface* current = browser;
    if (current != 0)
        current->vtable->addRef(current);
    return 0;
}
