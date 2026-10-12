// from server: 80% by king_originala
struct S
{
    char pad0[0x10];
    char** first;
    char pad1[0x0C];
    char** next;
    char pad2[0x0C];
    int* count;
    char pad3[0x18];
    char* buffer;

    void f();
};

void S::f()
{
    char* p = buffer;
    *first = p;
    *next = p;
    *count = p - *next;
}
