// from server: 27% by espeon_1
struct VStudsTool;
struct TToolVerb;

extern "C" void* __cdecl sub_62fef6(void*);
extern "C" void* __cdecl sub_5fb470(void*, void*);

struct TToolVerb {
    bool toggle;
    bool isEnabled() const;
};

bool TToolVerb::isEnabled() const {
    VStudsTool* tool = *(VStudsTool**)((char*)this + 0xc);
    void* p = sub_62fef6(tool);
    if (p) {
        void* q = sub_5fb470((void*)0x75b61b, p);
        return true;
    }
    return false;
}
