// from server: 42% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual void reserved() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

extern Shared* __cdecl acquire(Shared*);
extern void __cdecl report(void*, int, const char*, ...);
extern const char* __cdecl getText(void*, int, unsigned int*);

void __cdecl trace(void* state, int category, int index,
                   int count, bool more, const char* text, int line)
{
    char buffer[128];
    int position = count;

    if (index >= 0) {
        do {
            int n = 0;
            while (n < 127 && text[n]) {
                buffer[n] = text[n];
                ++n;
            }
            buffer[n] = 0;
            ++position;
            {
                Shared temporary;
                report(acquire(&temporary)->object, category,
                       "%s, line %d", buffer, line);
            }
        } while (position < 12);

        if (more && position < 12) {
            Shared temporary;
            report(acquire(&temporary)->object, category, "   stack end");
        }
    } else {
        Shared temporary;
        void* destination = acquire(&temporary)->object;
        report(destination, 3, "HRESULT = %d: %s",
               getText(state, -1, 0));
    }
}
