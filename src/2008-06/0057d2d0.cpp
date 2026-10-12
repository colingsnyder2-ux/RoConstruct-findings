// from server: 89% by king_originala
extern const char indicatorName[];
extern const unsigned long signalTable[];

struct String;
extern void (__thiscall *stringConstructor)(String *, const char *);

struct String {
    unsigned char storage[28];
    String(const char *);
    String(const String &);
};

__forceinline String::String(const char *text) {
    stringConstructor(this, text);
}

struct Object {
    unsigned char storage[0x1c8];
    unsigned char indicator;
};

struct SignalDesc {
    const unsigned long *table;
    unsigned char storage[8];
    Object *object;

    void initialize(void *, String);
    SignalDesc(Object *);
};

SignalDesc::SignalDesc(Object *value) {
    void *indicator = value ? &value->indicator : 0;
    initialize(indicator, String(indicatorName));
    object = value;
    table = signalTable;
}
