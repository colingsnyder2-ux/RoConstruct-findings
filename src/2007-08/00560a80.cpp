// from server: 68% by tester
struct FilteredSelection
{
    char pad[0x1c];
    void* construct(char* name);
};

extern "C" void* __stdcall sub_77E698(int, const char*);
extern "C" void __stdcall sub_560590();

void* FilteredSelection::construct(char* name)
{
    char buf[0x1c];
    sub_77E698(0x791920, name);
    sub_560590();
    *(int*)this = 0x7a950c;

    return this;
}
