// from server: 75% by king_originala
struct String {
    char storage[28];
    String(const char *);
    String(const String &);
    ~String();
};

extern void (__thiscall *stringFromText)(String *, const char *);
extern void (__thiscall *stringCopy)(String *, const String &);

inline String::String(const char *text)
{
    stringFromText(this, text);
}

inline String::String(const String &other)
{
    stringCopy(this, other);
}

struct Error {
    char storage[40];
    Error(const String &);
    Error(const Error &);
    ~Error();
};

struct Image {
    void *pixels;
    int width;
    int height;
    int channels;

    Image();
    virtual ~Image();
    void load(const String &, int);
};

inline Image::Image()
{
    channels = 0;
    height = 0;
    width = 0;
    pixels = 0;
}

String makeImageString(const String &name, const Image &reference)
{
    Image image;
    image.load(name, 8);

    if (image.width != reference.width)
        throw Error(String("skybox images have different widths"));

    if (image.height != reference.height)
        throw Error(String("skybox images have different heights"));

    if (image.channels != reference.channels)
        throw Error(String("skybox images have different numbers of channels"));

    return String(name);
}
