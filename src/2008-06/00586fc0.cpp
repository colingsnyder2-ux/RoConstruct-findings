// from server: 78% by king_originala
extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct String {
    char storage[28];
};

struct Source {
    String text;
    unsigned long value;
};

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
};

extern bool __cdecl differs(const Source*, const Source*);
extern String& (__thiscall *assignString)(String*, const String&);

struct S {
    char padding[0x138];
    Source source;

    Shared update();
    void notify(const void*);
    void setSource(const Source&);
};

void S::setSource(const Source& input)
{
    Source* current = &source;
    if (differs(current, &input)) {
        assignString(&current->text, input.text);
        current->value = input.value;

        Shared result = update();
        Control* control = result.control;
        if (control) {
            if (_InterlockedExchangeAdd(&control->strong, -1) - 1 == 0) {
                control->dispose();
                if (_InterlockedExchangeAdd(&control->weak, -1) - 1 == 0)
                    control->destroy();
            }
        }

        notify(reinterpret_cast<const void*>(0x975738));
    }
}
