// from server: 20% by colin
struct CXTWindowMap {
    void* Find(int);
    void Remove(int);
};

extern "C" void* __stdcall sub_738376();
extern "C" void* __stdcall sub_720540(int);
extern "C" void* __stdcall sub_720640(int);
extern "C" long __stdcall CallWindowProcA(void*, void*, unsigned int, unsigned int, unsigned int);

void CXTWindowMap::Remove(int key) {
    void* p;
    while ((p = Find(key)) != 0) {
        void** vtbl = *(void***)p;
        ((void (__thiscall*)(void*, int))vtbl[7])(p, 0);
    }
}
