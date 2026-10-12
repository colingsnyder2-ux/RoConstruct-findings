// from server: 84% by king_originala
struct Pair {
    float x;
    float y;
};

extern const Pair& __cdecl zeroPair();

struct ArrowPanel;

typedef bool (__thiscall *Predicate)(ArrowPanel*);

struct PanelVTable {
    char padding[0x54];
    Predicate predicate;
};

struct ArrowPanel {
    PanelVTable* vtable;

    Pair getOther();
    Pair get();
};

Pair ArrowPanel::get()
{
    if (vtable->predicate(this))
        return getOther();
    return zeroPair();
}
