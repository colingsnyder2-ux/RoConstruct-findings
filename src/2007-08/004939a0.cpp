// from server: 25% by colin
struct Notifier {
    char pad0[8];
    void* field8;
    char padC[0x18];
    void* field24;
    void* field28;
    void destroy();
};

extern "C" void __cdecl sub_4932C0(void*);
extern "C" void __cdecl sub_62FC62(void*);
extern "C" void __stdcall sub_77E6AC(void*);

void Notifier::destroy()
{
    sub_4932C0(&field24);
    sub_62FC62(field28);
    field28 = 0;
    sub_77E6AC(&field8);
}
