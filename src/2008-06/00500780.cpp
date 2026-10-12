// from server: 44% by king_originala
struct String;
extern void (__thiscall *string_construct)(String*);
extern void (__thiscall *string_destroy)(String*);

struct String
{
    unsigned char data[28];

    String();
    ~String();
};

inline String::String()
{
    string_construct(this);
}

inline String::~String()
{
    string_destroy(this);
}

struct Argument
{
    void operation(int* output, int* status, String* text);
};

struct HeadBuilder
{
    HeadBuilder* func_00500780(int status, int unused, int output);
};

HeadBuilder* HeadBuilder::func_00500780(int status, int unused, int output)
{
    try
    {
        String text;
        reinterpret_cast<Argument*>(status)->operation(&output, &status, &text);
        if (status == 1)
            return this;
        return 0;
    }
    catch (...)
    {
        return 0;
    }
}
