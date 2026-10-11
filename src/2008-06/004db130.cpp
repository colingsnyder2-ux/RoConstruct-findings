// from server: 52% by tester
// roc 2008-06 004db130  unit: RBX::ViewNew::ViewRbxGfx  size: 232 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004db130

extern "C" void __stdcall sub_557330(int, int);
extern "C" void* __stdcall sub_508580(int, int);
extern "C" void __stdcall sub_508a30(void*, int, int);

struct SimpleSceneManager {
    void sub_4d83e0(void*);
    void sub_4d8470(void*);
};

struct ViewBase {
    void sub_563090();
    void sub_5630e0();
    void sub_4d8ea0();
};

struct ViewRbxGfx {
    void construct();
};

extern ViewBase* g_97272c;

void ViewRbxGfx::construct()
{
    sub_557330(0x4d9810, 0x972744);
    ViewBase* esi = g_97272c;
    ViewBase* ebx = (ViewBase*)((char*)esi + 0x10);
    ebx->sub_563090();
    esi->sub_4d8ea0();
    *(int*)((char*)esi + 0xc) = 0x14;
    *(int*)((char*)esi + 4) = 0;
    void* p = sub_508580(0x50, 0x10);
    *(void**)((char*)esi + 8) = p;
    int n = *(int*)((char*)esi + 0xc);
    sub_508a30(p, 0, n * 4);
    void* edx = *(void**)((char*)esi + 0x34);
    void* eax = *(void**)((char*)edx + 4);
    SimpleSceneManager* edi = (SimpleSceneManager*)((char*)esi + 0x1c);
    edi->sub_4d83e0(eax);
    void* v = *(void**)((char*)edi + 0x18);
    *(void**)((char*)v + 4) = v;
    v = *(void**)((char*)edi + 0x18);
    *(void**)((char*)edi + 0x1c) = 0;
    *(void**)v = v;
    void* w = *(void**)((char*)edi + 0x18);
    *(void**)((char*)w + 8) = w;
    void* ecx = *(void**)((char*)esi + 0x54);
    void* edx2 = *(void**)((char*)ecx + 4);
    SimpleSceneManager* esi2 = (SimpleSceneManager*)((char*)esi + 0x3c);
    esi2->sub_4d8470(edx2);
    void* a = *(void**)((char*)esi2 + 0x18);
    *(void**)((char*)a + 4) = a;
    a = *(void**)((char*)esi2 + 0x18);
    *(void**)((char*)esi2 + 0x1c) = 0;
    *(void**)a = a;
    void* b = *(void**)((char*)esi2 + 0x18);
    *(void**)((char*)b + 8) = b;
    ebx->sub_5630e0();
}
