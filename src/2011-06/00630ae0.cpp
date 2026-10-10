// from server: 94% by atomic.potato
extern "C" void __stdcall sub_5400e0(void*, void*, int);

struct Tool {
    char pad[0x1fc];
    int func(int value);
};

int Tool::func(int value) {
    sub_5400e0((char*)this + 0x1fc, (void*)value, 0);
    return value;
}
