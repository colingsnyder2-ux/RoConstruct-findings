// from server: 79% by king_originala
extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __cdecl free(void*);

struct Widget {
    char data[0x144];
    Widget(float, float);

    static void* operator new(unsigned int size);
    static void operator delete(void* p);
};

inline void* Widget::operator new(unsigned int size)
{
    return malloc(size);
}

inline void Widget::operator delete(void* p)
{
    free(p);
}

struct EmptyTag {};

struct Result {
    Widget* object;
    void* control;

    Result(Widget*, EmptyTag = EmptyTag());
};

Result createWidget(float x, float y)
{
    return Result(new Widget(x, y));
}
