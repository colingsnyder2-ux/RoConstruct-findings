// from server: 47% by colin
// roc 2007-08 006f9b20  unit: CXTPPropertyGridPaintManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f9b20
//
// 006f9b20  83ec10               sub esp, 0x10
// 006f9b23  56                   push esi
// 006f9b24  8bf1                 mov esi, ecx
// 006f9b26  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006f9b29  e8f28ef8ff           call 0x682a20
// 006f9b2e  50                   push eax
// 006f9b2f  8d4c2408             lea ecx, [esp + 8]
// 006f9b33  e8c864f8ff           call 0x680000
// 006f9b38  8b4634               mov eax, dword ptr [esi + 0x34]
// 006f9b3b  8b4878               mov ecx, dword ptr [eax + 0x78]
// 006f9b3e  83c070               add eax, 0x70
// 006f9b41  83f9ff               cmp ecx, -1
// 006f9b44  5e                   pop esi
// 006f9b45  7518                 jne 0x6f9b5f
// 006f9b47  8b4004               mov eax, dword ptr [eax + 4]
// 006f9b4a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f9b4e  50                   push eax
// 006f9b4f  8d442404             lea eax, [esp + 4]
// 006f9b53  50                   push eax
// 006f9b54  e8576df3ff           call 0x6308b0
// 006f9b59  83c410               add esp, 0x10
// 006f9b5c  c20400               ret 4
// 006f9b5f  8bc1                 mov eax, ecx
// 006f9b61  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006f9b65  50                   push eax
// 006f9b66  8d442404             lea eax, [esp + 4]
// 006f9b6a  50                   push eax
// 006f9b6b  e8406df3ff           call 0x6308b0
// 006f9b70  83c410               add esp, 0x10
// 006f9b73  c20400               ret 4

struct CXTPPropertyGridPaintManager {
    char pad[0x20];
    int field20;
    char pad2[0x10];
    int field34;
    int method(int);
};

extern "C" int __stdcall sub_682a20(int);
extern "C" int __stdcall sub_680000(int);
extern "C" int __stdcall sub_6308b0(int, int);

int CXTPPropertyGridPaintManager::method(int arg) {
    int local;
    int v = sub_682a20(field20);
    sub_680000(v);
    int* p = (int*)field34;
    int idx = p[0x78 / 4];
    p = (int*)((char*)p + 0x70);
    if (idx == -1) {
        int val = p[1];
        sub_6308b0((int)&local, val);
    } else {
        sub_6308b0((int)&local, idx);
    }
    return arg;
}
