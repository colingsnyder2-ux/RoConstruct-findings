// from server: 33% by colin
struct TokenException {
    char pad[0x44];
    void* field44;
    char pad2[0x18];
    void* field60;
    void destroy();
};

extern "C" void __stdcall sub_50D490(void*);

void TokenException::destroy()
{
    sub_50D490(&field60);
    sub_50D490(&field44);
    sub_50D490(this);
}
