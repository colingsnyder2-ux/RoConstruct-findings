// from server: 91% by king_originala
struct Manager {
    long reserved;
    volatile long references;
};

extern Manager* paintManager;
extern void __cdecl InitializePaintManager(int);
extern Manager* __cdecl GetOtherManager();
extern "C" long (__stdcall *InterlockedIncrement)(volatile long*);

struct Browser;

struct Bar {
    typedef int (__thiscall *Dispatch)(Bar*, unsigned int, int);

    struct Table {
        void* slots[85];
        Dispatch invoke;
    };

    Table* table;
    char reserved[0x34];
    void* ownerWindow;

    int Create(unsigned long style, Browser* parent, unsigned int id);
    void SetPaintManager(Manager*);
    void SetOtherManager(Manager*);
};

struct Browser {
    char reserved0[0x20];
    void* window;
    char reserved1[0xF8];
    Bar bar;

    int BaseCreate(void*);
    int OnCreate(void*);
};

int Browser::OnCreate(void* creation)
{
    int result = BaseCreate(creation);
    if (result == -1)
        return result;

    bar.Create(0x50010010UL, this, 0xE800);
    bar.ownerWindow = this ? window : 0;

    long (__stdcall *increment)(volatile long*) = InterlockedIncrement;

    if (!paintManager)
        InitializePaintManager(0);

    if (paintManager) {
        increment(&paintManager->references);

        if (!paintManager)
            InitializePaintManager(0);

        bar.SetPaintManager(paintManager);
    }

    increment(&GetOtherManager()->references);
    bar.SetOtherManager(GetOtherManager());
    bar.table->invoke(&bar, 0x93, 0);
    return 0;
}
