// from server: 89% by king_originala
struct State {
    void* reserved;
    void* current;
};

struct StateGuard {
    void* saved;
    State* state;
    void* handle;
    int active;

    StateGuard(void*);
};

struct StringHolder {
    void* value;

    StringHolder(const char*);
};

extern "C" void* __stdcall sub_6A0968();
extern "C" void* __stdcall sub_6A0926();
extern "C" void __stdcall sub_6A095C(void*, void*);

extern const char* (__thiscall* c_str_impl)(void*);
extern unsigned int (__stdcall* SysStringByteLen)(void*);
extern void* (__stdcall* SysAllocStringByteLen)(const char*, unsigned int);
extern void (__stdcall* SysFreeString)(void*);

long __stdcall Method(void* object, void** out)
{
    StateGuard guard(sub_6A0968());
    void* context = sub_6A0926();
    StringHolder text(c_str_impl((char*)*((void**)context + 1) + 0xf0));

    void* source = text.value;
    long hr;

    if (out == 0) {
        hr = (long)0x80004003;
    } else {
        void* copy;
        if (source == 0) {
            copy = 0;
        } else {
            copy = SysAllocStringByteLen(
                (const char*)source, SysStringByteLen(source));
        }
        *out = copy;
        if (copy == 0 && source != 0)
            hr = (long)0x8007000e;
        else
            hr = 0;
    }

    SysFreeString(source);

    if (guard.state != 0)
        guard.state->current = guard.saved;

    if (guard.active != 0)
        sub_6A095C(0, guard.handle);

    return hr;
}
