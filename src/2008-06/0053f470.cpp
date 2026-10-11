// from server: 42% by colin
// roc 2008-06 0053f470  unit: RBX::RenderBase::AggregatingSceneManager  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053f470

struct AggregatingSceneManager {
    char pad[8];
    int field8;
    void func(int);
};

extern "C" void __stdcall sub_54F140(void* out, void* self);
extern "C" void __stdcall sub_5409B0(void* out, void* self);
extern "C" bool __stdcall sub_540F20(void* a, void* b);
extern "C" void* __stdcall sub_540E90(void* self, int arg);
extern "C" int __stdcall sub_540E80(void* self);
extern "C" bool __stdcall sub_53F4E0(void* self);
extern "C" void __stdcall sub_540EB0(void* self);

void AggregatingSceneManager::func(int arg) {
    void* local8;
    void* local10;
    sub_54F140(&local8, (char*)this + 8);
    sub_5409B0(&local10, (char*)this + 8);
    while (sub_540F20(&local8, &local10)) {
        void* p = sub_540E90(&local8, arg);
        int v = sub_540E80((char*)p + 0xc);
        if (sub_53F4E0((void*)v)) {
            return;
        }
        sub_540EB0(&local8);
    }
}
