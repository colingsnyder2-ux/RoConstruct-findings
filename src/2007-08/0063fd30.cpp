// from server: 51% by colin
// roc 2007-08 0063fd30  unit: CXTPPaintManager  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063fd30
//
// 0063fd30  8b442408             mov eax, dword ptr [esp + 8]
// 0063fd34  83ec10               sub esp, 0x10
// 0063fd37  56                   push esi
// 0063fd38  8bf1                 mov esi, ecx
// 0063fd3a  50                   push eax
// 0063fd3b  8d4c2408             lea ecx, [esp + 8]
// 0063fd3f  e8bc020400           call 0x680000
// 0063fd44  6a0f                 push 0xf
// 0063fd46  8bce                 mov ecx, esi
// 0063fd48  8bd0                 mov edx, eax
// 0063fd4a  e821d0ffff           call 0x63cd70
// 0063fd4f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0063fd53  50                   push eax
// 0063fd54  52                   push edx
// 0063fd55  e8560bffff           call 0x6308b0
// 0063fd5a  5e                   pop esi
// 0063fd5b  83c410               add esp, 0x10
// 0063fd5e  c20800               ret 8

struct CXTPPaintManager {
    int sub_63FD30(int, int);
};

extern "C" int __stdcall sub_680000(int);
extern "C" int __stdcall sub_63CD70(int, int);
extern "C" int __stdcall sub_6308B0(int, int);

int CXTPPaintManager::sub_63FD30(int a2, int a3) {
    int v = sub_680000(a3);
    int r = sub_63CD70(v, 0xf);
    return sub_6308B0(r, v);
}
