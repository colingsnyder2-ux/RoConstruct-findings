// from server: 72% by colin
struct PartTool {
    char pad[0x1c];
    void* partInstance;
    void render3dAdorn(int adorn);
};

void PartTool::render3dAdorn(int adorn) {
    if (this->partInstance) {
        int* p = (int*)((char*)this->partInstance + 0x17c);
        void (__stdcall *fn)(int, int) = (void (__stdcall *)(int, int))*(int*)(*p + 0x10);
        fn(1, adorn);
    }
}
