// from server: 57% by atomic.potato
struct VWeld {
    void construct(int);
};

void VWeld::construct(int arg) {
    extern void sub_716F50();
    sub_716F50();
    *(int*)((char*)this + 0x00) = 0x9df254;
    *(int*)((char*)this + 0x04) = 0x9df248;
    *(int*)((char*)this + 0x18) = 0x9df23c;
    *(int*)((char*)this + 0x1c) = 0x9df234;
    *(int*)((char*)this + 0x94) = 0x9df21c;
}
