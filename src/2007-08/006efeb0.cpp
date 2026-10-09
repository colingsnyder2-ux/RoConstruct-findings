// from server: 93% by colin
// roc 2007-08 006efeb0  unit: CXTPShadowsManager::PAVCShadowWnd::?$CList  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006efeb0
//
// 006efeb0  56                   push esi
// 006efeb1  8b742408             mov esi, dword ptr [esp + 8]
// 006efeb5  85f6                 test esi, esi
// 006efeb7  57                   push edi
// 006efeb8  8bf9                 mov edi, ecx
// 006efeba  740f                 je 0x6efecb
// 006efebc  837e2000             cmp dword ptr [esi + 0x20], 0
// 006efec0  7409                 je 0x6efecb
// 006efec2  6a00                 push 0
// 006efec4  8bce                 mov ecx, esi
// 006efec6  e87f00f4ff           call 0x62ff4a
// 006efecb  6a00                 push 0
// 006efecd  83c704               add edi, 4
// 006efed0  56                   push esi
// 006efed1  8bcf                 mov ecx, edi
// 006efed3  c7466400000000       mov dword ptr [esi + 0x64], 0
// 006efeda  e8f12efbff           call 0x6a2dd0
// 006efedf  50                   push eax
// 006efee0  8bcf                 mov ecx, edi
// 006efee2  e8a92efbff           call 0x6a2d90
// 006efee7  8b06                 mov eax, dword ptr [esi]
// 006efee9  8b5068               mov edx, dword ptr [eax + 0x68]
// 006efeec  8bce                 mov ecx, esi
// 006efeee  ffd2                 call edx
// 006efef0  8b06                 mov eax, dword ptr [esi]
// 006efef2  8b5004               mov edx, dword ptr [eax + 4]
// 006efef5  6a01                 push 1
// 006efef7  8bce                 mov ecx, esi
// 006efef9  ffd2                 call edx
// 006efefb  5f                   pop edi
// 006efefc  5e                   pop esi
// 006efefd  c20400               ret 4

struct CXTPShadowsManager {
    void func_006efeb0(void*);
};

struct CShadowWnd {
    void func_0062ff4a(int);
};

struct CList {
    void* func_006a2dd0(void*, int);
    void func_006a2d90(void*);
};

void CXTPShadowsManager::func_006efeb0(void* p)
{
    CShadowWnd* w = (CShadowWnd*)p;
    if (w != 0 && *(int*)((char*)w + 0x20) != 0)
    {
        w->func_0062ff4a(0);
    }
    *(int*)((char*)w + 0x64) = 0;
    CList* list = (CList*)((char*)this + 4);
    void* v = list->func_006a2dd0(w, 0);
    list->func_006a2d90(v);
    void** vt = *(void***)w;
    ((void (__thiscall*)(void*))vt[0x68/4])(w);
    ((void (__thiscall*)(void*, int))vt[1])(w, 1);
}
