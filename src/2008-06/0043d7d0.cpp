// from server: 83% by king_originala
extern const unsigned int primaryTable[];
extern const unsigned int secondaryTable[];
extern const unsigned int tertiaryTable[];
extern const char axis0[];
extern const char axis1[];
extern const char axis2[];

struct Text {
    char storage[0x60];
};

extern void (__thiscall *assignText)(Text*, const char*);

struct PropertyItem {
    const unsigned int* primary;
    char reserved04[0x1C];
    const unsigned int* secondary;
    char reserved24[0x88];
    Text text;
    const unsigned int* tertiary;
    char reserved110[0x20];

    PropertyItem(void* argument, int value);
    ~PropertyItem();
};

struct Vector3Item : PropertyItem {
    int axis;
    float x;
    float y;
    float z;

    Vector3Item(void* argument, int value, int selectedAxis);
};

Vector3Item::Vector3Item(void* argument, int value, int selectedAxis)
    : PropertyItem(argument, value),
      axis(selectedAxis),
      x(0.0f),
      y(0.0f),
      z(0.0f)
{
    primary = primaryTable;
    secondary = secondaryTable;
    tertiary = tertiaryTable;

    switch (selectedAxis) {
    case 0:
        assignText(&text, axis0);
        break;
    case 1:
        assignText(&text, axis1);
        break;
    case 2:
        assignText(&text, axis2);
        break;
    }
}
