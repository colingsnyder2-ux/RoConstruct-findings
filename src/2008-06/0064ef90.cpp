// from server: 82% by colin
struct KeyButton {
    char pad[0x18];
    int id;
    bool active;
    void processEvent(int, void*);
};

void KeyButton::processEvent(int, void* evt) {
    int* e = (int*)evt;
    if (e[0] == 0xa && e[2] == this->id) {
        this->active = true;
    }
    if (e[0] == 0xb && e[2] == this->id) {
        this->active = false;
    }
    void* self = this;
    extern void __stdcall sub_642210(void*, void*);
    sub_642210(self, e);
}
