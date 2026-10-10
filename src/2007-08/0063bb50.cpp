// from server: 69% by colin
struct CXTPControlAction {
    int Find(void* p);
};

int CXTPControlAction::Find(void* p) {
    int count = *(int*)((char*)this + 0x64);
    int i = 0;
    if (count > 0) {
        char* base = (char*)this + 0x5c;
        while (i >= 0 && i < *(int*)(base + 8)) {
            if (*(void**)(*(int*)(base + 4) + i * 4) == p) {
                extern void __stdcall sub_6d26b0(int, int);
                sub_6d26b0(i, 1);
                *(int*)((char*)p + 0x9c) = 1;
                *(int*)((char*)p + 0xa0) = 0;
                return 0;
            }
            i++;
            if (i >= count) break;
        }
        return 0;
    }
    return 0;
}
