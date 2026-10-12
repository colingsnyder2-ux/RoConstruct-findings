// from server: 30% by colin
struct ExceptionObject
{
    unsigned long words[10];
    void __thiscall copy(const void *source);
};

extern "C" __declspec(noreturn) void __stdcall throw_exception(void *, void *);

struct Item
{
    void __thiscall copy(const void *source);
};

struct StringHolder
{
    void *data;
};

struct Holder
{
    void *ptr;
    void __thiscall invoke(int a, int b, int c, int d, int e, int f, int g);
};

struct S
{
    void *field0;
    void *field4;
    void __thiscall f(int a, int b, int c, int d, int e, int f, int g);
};

extern "C" void __cdecl raise_exception(const void *source);
extern "C" void __stdcall string_copy(void *dest, const void *src);
extern "C" void __stdcall string_destroy(void *self);

void S::f(int a, int b, int c, int d, int e, int f, int g)
{
    if (this->field0 == 0)
    {
        ExceptionObject object;
        object.copy(&this->field0);
        object.words[0] = 0x0080B8DCUL;
        throw_exception(&object, reinterpret_cast<void *>(0x008D161CUL));
    }

    char buffer[28];
    string_copy(buffer, &this->field0);
    void *p = this->field0;
    void (__thiscall *fn)(void *, int, int, int, int, int, int, int) =
        *(void (__thiscall **)(void *, int, int, int, int, int, int, int))((char *)p + 4);
    fn((char *)this + 8, a, b, c, d, e, f, g);
    string_destroy(buffer);
}
