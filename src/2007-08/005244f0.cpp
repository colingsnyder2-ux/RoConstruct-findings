// from server: 60% by tester
struct Line {
    char pad[0x0c];
    void* m_pFile;
    int __cdecl Intersect(void* src, void* sect);
};

extern "C" int __cdecl fread(void*, int, int, void*);
extern "C" int __cdecl fseek(void*, int, int);

int Line::Intersect(void* src, void* sect)
{
    int result = fread(*(void**)((char*)this + 0x0c), *(int*)((char*)sect + 0x10), 1, 0);
    if (result != 0) {
        *(int*)(*(char**)src + 0x14) = 0x41;
        (*(void(__thiscall**)(void*))**(char***)src)(src);
    }
    int r2 = fseek(*(void**)((char*)this + 0x0c), *(int*)((char*)sect + 0x14), 1);
    if (r2 != *(int*)((char*)sect + 0x1c)) {
        *(int*)(*(char**)src + 0x14) = 0x40;
        (*(void(__thiscall**)(void*))**(char***)src)(src);
    }
    return 0;
}
