// from server: 79% by king_originala
typedef unsigned int size_t;

extern "C" int (__cdecl *copy_bytes)(
    void *, size_t, const void *, size_t);

namespace ATL {
    __declspec(noreturn) void __stdcall AtlThrowImpl(long);
}

struct Header {
    int manager;
    int length;
    int capacity;
    int references;
};

struct String {
    char *data;
    void prepare(int);
};

void __cdecl concatenate(
    String *string,
    const char *first,
    int firstLength,
    const char *second,
    int secondLength)
{
    int length = firstLength + secondLength;
    Header *header = reinterpret_cast<Header *>(string->data) - 1;

    if (((1 - header->references) | (header->capacity - length)) < 0)
        string->prepare(length);

    char *destination = string->data;
    copy_bytes(destination, firstLength, first, firstLength);
    copy_bytes(destination + firstLength, secondLength, second, secondLength);

    if (length < 0 ||
        length > (reinterpret_cast<Header *>(string->data) - 1)->capacity)
        ATL::AtlThrowImpl((long)0x80070057UL);

    (reinterpret_cast<Header *>(string->data) - 1)->length = length;
    string->data[length] = 0;
}
