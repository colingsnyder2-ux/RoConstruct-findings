// from server: 95% by king_originala
extern "C" void __cdecl _invalid_parameter_noinfo();

struct String {
    char storage[28];
    ~String();
    String& operator=(const String&);
};

struct S {
    char padding[36];
    String* first;
    String* last;
    void f(String text, unsigned int index);
};

void S::f(String text, unsigned int index)
{
    if (index >= static_cast<unsigned int>(last - first))
        _invalid_parameter_noinfo();

    first[index] = text;
}
