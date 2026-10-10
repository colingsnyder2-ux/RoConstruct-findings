// from server: 35% by colin
struct CXTPDockingPanePaintManager;

struct CXTPDockingPanePaintManager
{
    void DrawPane(int a, int b, int c, int d, int e, int f);
};

extern "C" int __stdcall sub_006e54b0(int);
extern "C" void __stdcall sub_006805f0(void*, int, int);
extern "C" void __stdcall sub_00680680(void*);
extern "C" void __stdcall sub_0063097c(void*, void*, int, int);
extern "C" void __stdcall sub_00630976(void*, int, int);

void CXTPDockingPanePaintManager::DrawPane(int a, int b, int c, int d, int e, int f)
{
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;

    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;

    if (this != 0)
    {
        v1 = *(int*)((char*)this + 4);
    }

    sub_006805f0(&v2, sub_006e54b0(f), v1);
    sub_0063097c(this, &v2, d, e);
    sub_00630976(this, c, b);
    sub_00680680(&v2);
}
