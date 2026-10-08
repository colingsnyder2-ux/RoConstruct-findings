// from server: 90% by colin
// roc 2007-08 0041f550  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f550
//
// 0041f550  56                   push esi
// 0041f551  8bf1                 mov esi, ecx
// 0041f553  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 0041f557  7514                 jne 0x41f56d
// 0041f559  68e0827800           push 0x7882e0
// 0041f55e  e8adf7ffff           call 0x41ed10
// 0041f563  50                   push eax
// 0041f564  ff1588d27700         call dword ptr [0x77d288]
// 0041f56a  89467c               mov dword ptr [esi + 0x7c], eax
// 0041f56d  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 0041f570  8b442408             mov eax, dword ptr [esp + 8]
// 0041f574  8908                 mov dword ptr [eax], ecx
// 0041f576  5e                   pop esi
// 0041f577  c20400               ret 4

extern "C" void* __stdcall GetProcAddress(void* hModule, const char* lpProcName);
extern "C" void* __stdcall LoadLibraryA(const char* lpLibFileName);

struct CSettingsExplorer {
    char pad[0x7c];
    void* field_7c;
    void* GetImageList_DragShowNolock(void** out);
};

void* CSettingsExplorer::GetImageList_DragShowNolock(void** out) {
    if (field_7c == 0) {
        void* h = LoadLibraryA("ImageList_DragShowNolock");
        field_7c = GetProcAddress(h, "ImageList_DragShowNolock");
    }
    *out = field_7c;
    return out;
}
