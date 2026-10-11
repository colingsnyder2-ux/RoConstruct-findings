// from server: 70% by atomic.potato
struct VPlayer {
    char pad[0x15c];
    void* field_15c;
};

extern "C" void* __fastcall func_00410770(void*);
extern "C" void* __cdecl func_00470be0(void*);
extern "C" void* __fastcall func_004a3240(void*);

void* __fastcall func_004b9370(void* p) {
    VPlayer* v = (VPlayer*)func_00410770(p);
    if (!v) return 0;
    void* s = v->field_15c;
    if (!s) return 0;
    if (!func_00470be0(s)) return 0;
    return func_004a3240(s);
}
