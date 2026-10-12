// from server: 83% by king_originala
#pragma optimize("", off)

struct S {
    void f(void*, void*);
};

void __cdecl construct_n(void* destination, unsigned int count,
                         void* value, S* constructor)
{
    void* first = destination;
    try {
        for (; count > 0; --count,
             destination = static_cast<char*>(destination) + 40) {
            constructor->f(destination, value);
        }
    }
    catch (...) {
        throw;
    }
}
