// from server: 87% by atomic.potato
struct VehicleSeat {
    char pad0[0x118];
    void* field118;
    char pad11c[0x248 - 0x11c];
    void* field248;
    char pad24c[0x2fc - 0x24c];
    int field2fc;
    void setState(int);
};

extern "C" void __stdcall sub_40c2d0(void*);

void VehicleSeat::setState(int state) {
    if (field2fc == state) return;
    if (state <= -1) state = -1;
    else if (state >= 1) state = 1;
    field2fc = state;
    sub_40c2d0((void*)0xa4f808);
    if (field2fc == 0) {
        void** vt = *(void***)&field248;
        typedef void (__stdcall *Fn)(void*, void*);
        ((Fn)vt[3])(&field248, 0);
    } else {
        void** vt = *(void***)&field248;
        typedef void (__stdcall *Fn)(void*, void*, void*);
        ((Fn)vt[3])(&field248, 0, field118);
    }
}
