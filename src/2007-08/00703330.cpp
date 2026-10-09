// from server: 55% by colin
// roc 2007-08 00703330  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00703330
//
// 00703330  83ec10               sub esp, 0x10
// 00703333  56                   push esi
// 00703334  8bf1                 mov esi, ecx
// 00703336  57                   push edi
// 00703337  8d4c2408             lea ecx, [esp + 8]
// 0070333b  e820ccf7ff           call 0x67ff60
// 00703340  8b38                 mov edi, dword ptr [eax]
// 00703342  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00703345  8b31                 mov esi, dword ptr [ecx]
// 00703347  6a00                 push 0
// 00703349  83ec10               sub esp, 0x10
// 0070334c  8bd4                 mov edx, esp
// 0070334e  893a                 mov dword ptr [edx], edi
// 00703350  8b7804               mov edi, dword ptr [eax + 4]
// 00703353  897a04               mov dword ptr [edx + 4], edi
// 00703356  8b7808               mov edi, dword ptr [eax + 8]
// 00703359  8b400c               mov eax, dword ptr [eax + 0xc]
// 0070335c  897a08               mov dword ptr [edx + 8], edi
// 0070335f  89420c               mov dword ptr [edx + 0xc], eax
// 00703362  8b542434             mov edx, dword ptr [esp + 0x34]
// 00703366  8b442430             mov eax, dword ptr [esp + 0x30]
// 0070336a  52                   push edx
// 0070336b  8b5668               mov edx, dword ptr [esi + 0x68]
// 0070336e  50                   push eax
// 0070336f  ffd2                 call edx
// 00703371  5f                   pop edi
// 00703372  5e                   pop esi
// 00703373  83c410               add esp, 0x10
// 00703376  c20800               ret 8

struct CXTPTabPaintManager_CAppearanceSetFlat {
    int field0;
    char pad[0x18];
    int field1c;
    int method(int, int);
};

struct Helper {
    int a, b, c, d;
};

extern "C" Helper* __fastcall sub_67FF60(Helper* result, int);

int CXTPTabPaintManager_CAppearanceSetFlat::method(int arg1, int arg2) {
    Helper h;
    Helper* p = sub_67FF60(&h, 0);
    int v0 = p->a;
    int v1 = p->b;
    int v2 = p->c;
    int v3 = p->d;
    int* obj = (int*)field1c;
    int fn = *(int*)(*obj + 0x68);
    return ((int (__stdcall*)(int, int, int, int, int, int))fn)(v0, v1, v2, v3, arg1, arg2);
}
