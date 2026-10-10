// from server: 97% by colin
struct MouseCommand {
    char pad[0x28];
};

struct CloneTool : MouseCommand {
    void construct(int);
};

void CloneTool::construct(int arg) {
    extern void __stdcall base_construct(int);
    base_construct(arg);
    *(int*)this = 0x7c266c;
    *(int*)((char*)this + 4) = 0x7c2650;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
}
