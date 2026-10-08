// from server: 73% by colin
// roc 2007-08 0041f1c0  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f1c0
//
// 0041f1c0  56                   push esi
// 0041f1c1  8bf1                 mov esi, ecx
// 0041f1c3  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 0041f1c7  7514                 jne 0x41f1dd
// 0041f1c9  68a4827800           push 0x7882a4
// 0041f1ce  e83dfbffff           call 0x41ed10
// 0041f1d3  50                   push eax
// 0041f1d4  ff1588d27700         call dword ptr [0x77d288]
// 0041f1da  89466c               mov dword ptr [esi + 0x6c], eax
// 0041f1dd  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 0041f1e0  8b442408             mov eax, dword ptr [esp + 8]
// 0041f1e4  8908                 mov dword ptr [eax], ecx
// 0041f1e6  5e                   pop esi
// 0041f1e7  c20400               ret 4

struct CSettingsExplorer {
    char pad[0x6c];
    void* field_6c;
    void GetImageList_DragEnter(void** out);
};

extern "C" void* __stdcall sub_41ED10(const char* name);
extern "C" void* __stdcall GetProcAddress(void* module, const char* name);

void CSettingsExplorer::GetImageList_DragEnter(void** out) {
    if (field_6c == 0) {
        void* proc = sub_41ED10((const char*)0x7882a4);
        field_6c = GetProcAddress(proc, (const char*)0x7882a4);
    }
    *out = field_6c;
}
