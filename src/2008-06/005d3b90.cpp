// from server: 50% by atomic.potato
extern "C" void __stdcall basic_string_copy(void *, void *, const void *);

struct Skin
{
    char data[0x138];

    Skin(const Skin &);
};

Skin::Skin(const Skin &source)
{
    char *destination = data + 0x134;
    basic_string_copy(destination, destination, source.data + 0x134);
    *(int *)(source.data + 0x1c) = *(int *)(destination + 0x1c);
}
