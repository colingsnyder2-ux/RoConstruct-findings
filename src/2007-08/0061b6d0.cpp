// from server: 35% by colin
struct ChatWidget {
    char pad[0x100];
    void* stringField;
    void destroy();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __cdecl sub_40CF60(void*);

void ChatWidget::destroy() {
    sub_77E6AC((char*)this + 0x100);
    sub_40CF60(this);
}
