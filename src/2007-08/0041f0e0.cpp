// from server: 76% by colin
// roc 2007-08 0041f0e0  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f0e0
//
// 0041f0e0  56                   push esi
// 0041f0e1  8bf1                 mov esi, ecx
// 0041f0e3  837e6800             cmp dword ptr [esi + 0x68], 0
// 0041f0e7  7514                 jne 0x41f0fd
// 0041f0e9  6890827800           push 0x788290
// 0041f0ee  e81dfcffff           call 0x41ed10
// 0041f0f3  50                   push eax
// 0041f0f4  ff1588d27700         call dword ptr [0x77d288]
// 0041f0fa  894668               mov dword ptr [esi + 0x68], eax
// 0041f0fd  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 0041f100  8b442408             mov eax, dword ptr [esp + 8]
// 0041f104  8908                 mov dword ptr [eax], ecx
// 0041f106  5e                   pop esi
// 0041f107  c20400               ret 4

struct CSettingsExplorer {
    char pad[0x68];
    void* field_68;
    void* GetImageList_EndDrag(void** out);
};

extern "C" void* __stdcall sub_41ED10(const char* name);
extern "C" void* __stdcall GetProcAddress(void* module, const char* name);

void* CSettingsExplorer::GetImageList_EndDrag(void** out) {
    if (field_68 == 0) {
        void* h = sub_41ED10((const char*)0x788290);
        field_68 = GetProcAddress(h, (const char*)0x788290);
    }
    *out = field_68;
    return field_68;
}
