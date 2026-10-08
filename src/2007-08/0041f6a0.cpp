// from server: 68% by colin
// roc 2007-08 0041f6a0  unit: CSettingsExplorer  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f6a0
//
// 0041f6a0  0fb7442404           movzx eax, word ptr [esp + 4]
// 0041f6a5  56                   push esi
// 0041f6a6  50                   push eax
// 0041f6a7  6a04                 push 4
// 0041f6a9  50                   push eax
// 0041f6aa  8bf1                 mov esi, ecx
// 0041f6ac  e8c70d2100           call 0x630478
// 0041f6b1  50                   push eax
// 0041f6b2  ff15f8ed7700         call dword ptr [0x77edf8]
// 0041f6b8  50                   push eax
// 0041f6b9  8bce                 mov ecx, esi
// 0041f6bb  e8b20d2100           call 0x630472
// 0041f6c0  5e                   pop esi
// 0041f6c1  c20400               ret 4

extern "C" __declspec(dllimport) void* __stdcall LoadMenuA(void*, unsigned short);

extern "C" void* __stdcall sub_630478(unsigned short, int, unsigned short);
extern "C" void* __stdcall sub_630472(void*, void*);

struct CSettingsExplorer {
    void* field0;
    void sub_41f6a0(unsigned short);
};

void CSettingsExplorer::sub_41f6a0(unsigned short a) {
    void* h = sub_630478(a, 4, a);
    void* m = LoadMenuA(h, a);
    sub_630472(this, m);
}
