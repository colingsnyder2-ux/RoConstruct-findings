// from server: 78% by king_originala
extern "C" int __stdcall query(void *, bool *);

struct DropperTool {
    unsigned char padding[0x13c];
    void *handle;
    bool check();
};

bool DropperTool::check() {
    if (!handle)
        return false;

    bool value;
    return (query(handle, &value) != 0x24) & value;
}
