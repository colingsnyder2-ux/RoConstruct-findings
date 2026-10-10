// from server: 70% by colin
struct Listener {
    char pad[0x138];
    void* field138;
    char pad2[4];
    float field140[3];
    bool evaluate(float* out);
};

extern "C" int __cdecl sub_57D520(void*);
extern "C" char __cdecl sub_57D570(void*);
extern "C" void* __cdecl sub_573F80(void*, void*);
extern "C" void* __cdecl sub_4731A0(void*);

bool Listener::evaluate(float* out) {
    if (field138 == 0)
        goto fail;
    if (sub_57D520(this) == 0)
        goto fail;
    if (sub_57D570(field138) == 0)
        goto fail;
    {
        void* p = sub_573F80(field138, field140);
        void* q = sub_4731A0(p);
        float* src = (float*)q;
        out[0] = src[0];
        out[1] = src[1];
        out[2] = src[2];
    }
    return true;
fail:
    return false;
}
