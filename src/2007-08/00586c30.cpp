// from server: 85% by tester
// roc 2007-08 00586c30  unit: RBX::ModelSetPrimaryPartTool  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00586c30

extern "C" void* __stdcall sub_5E3DC0(void*, void*, const char*);
extern "C" void* __stdcall sub_5BB2E0(void*, void*, void*, void*, void*);
extern "C" void* __stdcall sub_630D36(void*);
extern "C" void __fastcall sub_531A00(void*, void*, void*);

struct ModelSetPrimaryPartTool {
    int execute(void*);
};

int ModelSetPrimaryPartTool::execute(void* arg)
{
    void* p = sub_5E3DC0(arg, 0, (const char*)0x8C6EE4);
    if (p) {
        void* q = sub_5BB2E0(p, 0, (void*)0x898FC0, (void*)0x88C6B8, 0);
        void* r = sub_630D36(q);
        if (r) {
            sub_531A00(r, p, 0);
        }
    }
    return 0;
}
