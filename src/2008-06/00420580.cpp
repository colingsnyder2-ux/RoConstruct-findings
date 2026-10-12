// from server: 81% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct String;
typedef void (__thiscall *StringAssign)(String*, const String&);
typedef void (__thiscall *StringDestroy)(String*);
extern StringAssign assignString;
extern StringDestroy destroyString;

struct String {
    void* data;
    ~String() { destroyString(this); }
    void assign(const String& other) { assignString(this, other); }
};

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Reference {
    Control* control;
    void assign(const Reference&);
};

struct Product {
    void* object;
    Reference reference;
    ~Product() {
        Control* p = reference.control;
        if (p) {
            if (_InterlockedExchangeAdd(&p->strong, -1) == 0) {
                p->dispose();
                if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                    p->destroy();
            }
        }
    }
};

struct List {
    char storage[32];
    String text(int, int);
    const char* data(int);
    void imageList(int, unsigned int, int);
};

struct Exchange {
    int saving;
};

struct ImageList {
    void* unused;
    void* handle;
    void* getHandle() {
        return this ? handle : 0;
    }
};

extern void __stdcall exchangeList(Exchange*, int, List*);
extern Product __cdecl makeProduct(const char*);
extern void __stdcall finishList(long);
extern void* __cdecl getDescriptor();
extern int __stdcall compareItems(long, long, long);

struct Dialog {
    char padding[148];
    String selectedText;
    void* selectedObject;
    Reference selectedReference;
    ImageList images;
    List list;
    void* window;

    void update(void*);
    void exchange(Exchange*);
};

void Dialog::exchange(Exchange* exchangeData)
{
    exchangeList(exchangeData, 1000, &list);
    if (exchangeData->saving) {
        int index = SendMessageA(window, 0x100c, -1, 2) + 1;
        if (index != 0) {
            --index;
            SendMessageA(window, 0x100c, index, 2);
            selectedText.assign(list.text(index, 0));
            Product product = makeProduct(list.data(index));
            selectedObject = product.object;
            selectedReference.assign(product.reference);
        }
    } else {
        if (SendMessageA(window, 0x1004, 0, 0) == 0) {
            SendMessageA(window, 0x108e, 3, 0);
            list.imageList(0, 0x800, 0);
            finishList(SendMessageA(window, 0x1003, 1,
                                  (long)images.getHandle()));
            update(getDescriptor());
            SendMessageA(window, 0x1030, 0, (long)compareItems);
        }
    }
}
