// from server: 82% by king_originala
extern "C" __declspec(dllimport) void* __cdecl malloc(unsigned int);

struct String {
    char storage[28];

    __declspec(dllimport) void initialize(const char*);
    __declspec(dllimport) void destroy();

    String(const char*);
    ~String();
};

__forceinline String::String(const char* text)
{
    initialize(text);
}

__forceinline String::~String()
{
    destroy();
}

struct ImageWidget {
    char storage[0x1a4];

    static void* operator new(unsigned int) throw();
    static void operator delete(void*);
    ImageWidget(const String&, const String&);
};

__forceinline void* ImageWidget::operator new(unsigned int size) throw()
{
    return malloc(size);
}

struct Tag {
    char value;
    Tag();
};

__forceinline Tag::Tag()
{
    value = 0;
}

struct ImagePtr {
    ImageWidget* object;
    void* control;

    ImagePtr(ImageWidget*, Tag);
    ~ImagePtr();
};

ImagePtr createImageWidget(const char* first, const char* second)
{
    Tag tag;
    return ImagePtr(new ImageWidget(String(first), String(second)), tag);
}
