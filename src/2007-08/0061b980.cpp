// from server: 35% by colin
struct ChatWidget {
    char pad[0x104];
    void* field_104;
    void destroy();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __cdecl sub_6008F0(void*);

void ChatWidget::destroy()
{
    sub_77E6AC(&field_104);
    sub_6008F0(this);
}
