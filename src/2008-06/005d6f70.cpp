// from server: 77% by king_originala
extern double __cdecl currentTime();
extern void (__cdecl *invalidParameter)();

struct Exception {
    char data[56];
    Exception();
    ~Exception();
};

__declspec(noreturn) void __cdecl throwException(const Exception &);

struct Callback {
    void *unused;
    void (__cdecl *invoke)(void *);
};

struct Entry {
    char unused[8];
    double time;
    Callback *callback;
    unsigned long reserved;
    char argument[1];
};

struct Container {
    char unused[20];
    Entry *end;
};

struct Proxy {
    Container *container;
};

struct TimerService {
    char unused0[12];
    Proxy *proxy;
    char unused1[16];
    Entry **entries;
    unsigned int count;

    void update();
};

void TimerService::update()
{
    double now = currentTime();
    void (__cdecl *reportInvalid)() = invalidParameter;

    while (count > 0) {
        Entry *entry = *entries;
        Container *container;

        if (proxy)
            container = proxy->container;
        else {
            reportInvalid();
            container = 0;
        }

        if (entry == container->end)
            reportInvalid();

        if (entry->time <= now) {
            try {
                Callback *callback = entry->callback;
                if (!callback)
                    throwException(Exception());
                callback->invoke(entry->argument);
            }
            catch (...) {
            }
        }
        else {
            break;
        }

        ++entries;
        --count;
    }
}
