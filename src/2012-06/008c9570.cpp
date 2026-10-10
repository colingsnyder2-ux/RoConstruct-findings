// from server: 75% by atomic.potato
struct VInstance_EventDesc {
    int pad[42];
    void *value;
    void set(void *);
};

extern "C" void __cdecl EventDesc_Set(void *);

void VInstance_EventDesc::set(void *value)
{
    if (this->value != value) {
        this->value = value;
        EventDesc_Set((void *)0x00e539a4);
    }
}
