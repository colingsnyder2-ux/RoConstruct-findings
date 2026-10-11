// from server: 86% by atomic.potato
struct Name {
    char pad0[0x2c];
    unsigned int count;
    char pad1[0x90 - 0x30];
    void** items;
};

struct Out {
    void* value;
};

extern "C" void* __stdcall sub_557590();
extern "C" void __stdcall sub_545840(void** slot, void* value);

bool __fastcall sub_5475d0(Name* self, unsigned int, unsigned int index, Out* out)
{
    bool found;
    void* value;
    if (index < self->count) {
        value = self->items[index];
        found = true;
    } else {
        found = false;
    }
    void* n = sub_557590();
    out->value = n;
    sub_545840(&value, n);
    return found;
}
