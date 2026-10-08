// from server: 82% by colin
// roc 2007-08 0041efa0  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041efa0
//
// 0041efa0  56                   push esi
// 0041efa1  8bf1                 mov esi, ecx
// 0041efa3  837e6400             cmp dword ptr [esi + 0x64], 0
// 0041efa7  7514                 jne 0x41efbd
// 0041efa9  687c827800           push 0x78827c
// 0041efae  e85dfdffff           call 0x41ed10
// 0041efb3  50                   push eax
// 0041efb4  ff1588d27700         call dword ptr [0x77d288]
// 0041efba  894664               mov dword ptr [esi + 0x64], eax
// 0041efbd  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 0041efc0  8b442408             mov eax, dword ptr [esp + 8]
// 0041efc4  8908                 mov dword ptr [eax], ecx
// 0041efc6  5e                   pop esi
// 0041efc7  c20400               ret 4

extern "C" void* __stdcall GetProcAddress(void*, const char*);

struct CSettingsExplorer {
    char pad[0x64];
    int field_0x64;
    void* GetImageList_BeginDrag(void** out);
};

void* CSettingsExplorer::GetImageList_BeginDrag(void** out) {
    if (field_0x64 == 0) {
        field_0x64 = (int)GetProcAddress((void*)0x41ed10, (const char*)0x78827c);
    }
    *out = (void*)field_0x64;
    return out;
}
