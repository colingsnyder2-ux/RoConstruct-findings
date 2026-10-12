// from server: 96% by king_originala
struct State {
    virtual void v0();
    virtual void v1();
    virtual int kind();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual ~State();

    int reserved;
    void* context;

    bool accepts(int index);
    void update(float value);
};

struct Configuration {
    char reserved[0x13a];
    unsigned char enabled;
};

extern Configuration* __cdecl configuration();
extern State* __cdecl createState(int kind, void* context);
extern int transitions[][18];

void __cdecl transition(State** current, float value)
{
    int oldKind = (*current)->kind();
    int nextKind;
    int i;

    for (i = 0; i < 17; ++i) {
        if (configuration()->enabled)
            nextKind = 7;
        else {
            nextKind = transitions[oldKind][i];
            if (nextKind == 13)
                continue;
        }

        if (nextKind != oldKind && (*current)->accepts(i))
            break;
    }

    if (i == 17)
        return;

    void* context = (*current)->context;
    delete *current;
    *current = 0;

    State* replacement = createState(nextKind, context);
    if (replacement != *current)
        delete *current;

    *current = replacement;
    replacement->update(value);
}
