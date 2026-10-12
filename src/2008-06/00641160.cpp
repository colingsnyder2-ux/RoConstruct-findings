// from server: 97% by king_originala
struct Text;

extern void (__thiscall *textDestroy)(Text*);
extern Text& (__thiscall *textAssignText)(Text*, const Text&);
extern Text& (__thiscall *textAssignChars)(Text*, const char*);

struct Text {
    char storage[28];

    ~Text();
    Text& operator=(const Text&);
    Text& operator=(const char*);
};

inline Text::~Text() {
    textDestroy(this);
}

inline Text& Text::operator=(const Text& value) {
    return textAssignText(this, value);
}

inline Text& Text::operator=(const char* value) {
    return textAssignChars(this, value);
}

struct Vector {
    float x, y, z;
};

struct S {
    char padding0[0x14];
    volatile bool dragging;
    char padding1[0x0f];
    Text cursor;

    void update(const void*);
    void prepare(const void*);
    bool hitTest(const void*, Vector&, const void**);
    Text defaultCursor();
};

void S::update(const void* volatile argument) {
    const void* original = argument;
    prepare(original);

    if (dragging) {
        cursor = "DragCursor";
        return;
    }

    Vector position;
    position.x = 0.0f;
    position.y = 0.0f;
    position.z = 0.0f;

    if (hitTest(original, position, const_cast<const void**>(&argument))) {
        cursor = "ResizeCursor";
        return;
    }

    cursor = defaultCursor();
}
