// from server: 99% by king_originala
struct Control {
    void lexer(int, int);
    void keywords(int, const char*, int);
    void foreground(int, int, int);
    void background(int, int, int);
    void size(int, int, int);
    void font(int, const char*, int);
    void clearStyles(int);
    void bold(int, int, int);
    void marginWidth(int, int, int);
    void marginSensitive(int, int, int);
    void marginType(int, int, int);
    void marginMask(int, unsigned int, int);
    void property(const char*, const char*, int);
    void markerDefine(int, int, int);
    void markerForeground(int, int, int);
    void markerBackground(int, int, int);
    void tabWidth(int, int);
    void dwellTime(int, int);
};

struct CScriptEditor {
    char padding[0x140];
    void* parent;

    void initialize();
    void* getParent();
    static void* defaultParent();
    Control* control();
    void func_004639a0();
};

void CScriptEditor::func_004639a0()
{
    initialize();
    void* p = getParent();
    if (!p)
        p = defaultParent();
    parent = p;

    Control* c = control();
    c->lexer(15, 1);
    c->keywords(0, reinterpret_cast<const char*>(0x81b180), 1);

    Control* s = control();
    s->foreground(32, 0, 1);
    s->background(32, 0xffffff, 1);
    s->size(32, 9, 1);
    s->font(32, reinterpret_cast<const char*>(0x81b258), 1);
    c->clearStyles(1);

    s = control();
    s->foreground(0, 0, 1);
    s->background(0, 0xffffff, 1);

    s = control();
    s->foreground(1, 0x8000, 1);
    s->background(1, 0xffffff, 1);

    s = control();
    s->foreground(2, 0x8000, 1);
    s->background(2, 0xffffff, 1);

    s = control();
    s->foreground(3, 0x8000, 1);
    s->background(3, 0xffffff, 1);

    s = control();
    s->foreground(4, 0x808000, 1);
    s->background(4, 0xffffff, 1);

    s = control();
    s->foreground(5, 0x800000, 1);
    s->background(5, 0xffffff, 1);

    s = control();
    s->foreground(13, 0x800000, 1);
    s->background(13, 0xffffff, 1);

    s = control();
    s->foreground(14, 0x800000, 1);
    s->background(14, 0xffffff, 1);

    s = control();
    s->foreground(15, 0x800000, 1);
    s->background(15, 0xffffff, 1);

    s = control();
    s->foreground(16, 0x800000, 1);
    s->background(16, 0xffffff, 1);

    s = control();
    s->foreground(17, 0x800000, 1);
    s->background(17, 0xffffff, 1);

    s = control();
    s->foreground(18, 0x800000, 1);
    s->background(18, 0xffffff, 1);

    s = control();
    s->foreground(19, 0x800000, 1);
    s->background(19, 0xffffff, 1);

    c->bold(5, 1, 1);

    s = control();
    s->foreground(6, 0x800080, 1);
    s->background(6, 0xffffff, 1);

    s = control();
    s->foreground(11, 0, 1);
    s->background(11, 0xffffff, 1);

    s = control();
    s->foreground(9, 0x80, 1);
    s->background(9, 0xffffff, 1);

    s = control();
    s->foreground(10, 0x8080, 1);
    s->background(10, 0xffffff, 1);

    c->marginWidth(2, 16, 1);
    c->marginSensitive(2, 1, 1);
    c->marginType(2, 0, 1);
    c->marginMask(2, 0xfe000000U, 1);
    c->property(reinterpret_cast<const char*>(0x81b24c),
                reinterpret_cast<const char*>(0x81b254), 1);

    s = control();
    s->markerDefine(31, 7, 1);
    s->markerForeground(31, 0xffffff, 1);
    s->markerBackground(31, 0xff0000, 1);

    s = control();
    s->markerDefine(30, 8, 1);
    s->markerForeground(30, 0xffffff, 1);
    s->markerBackground(30, 0, 1);

    s = control();
    s->markerDefine(29, 5, 1);
    s->markerForeground(29, 0xffffff, 1);
    s->markerBackground(29, 0, 1);

    s = control();
    s->markerDefine(28, 5, 1);
    s->markerForeground(28, 0xffffff, 1);
    s->markerBackground(28, 0, 1);

    s = control();
    s->markerDefine(25, 5, 1);
    s->markerForeground(25, 0xffffff, 1);
    s->markerBackground(25, 0, 1);

    s = control();
    s->markerDefine(26, 5, 1);
    s->markerForeground(26, 0xffffff, 1);
    s->markerBackground(26, 0, 1);

    s = control();
    s->markerDefine(27, 5, 1);
    s->markerForeground(27, 0xffffff, 1);
    s->markerBackground(27, 0, 1);

    c->tabWidth(10, 1);
    c->dwellTime(1000, 1);
    c->marginWidth(0, 32, 1);
}
