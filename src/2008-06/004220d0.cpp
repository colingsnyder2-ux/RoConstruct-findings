// from server: 100% by tester
// roc 2008-06 004220d0  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004220d0
//
// 004220d0  56                   push esi
// 004220d1  8bf1                 mov esi, ecx
// 004220d3  837e6c00             cmp dword ptr [esi + 0x6c], 0
// 004220d7  7514                 jne 0x4220ed
// 004220d9  6880fb8000           push 0x80fb80
// 004220de  e85d0effff           call 0x412f40
// 004220e3  50                   push eax
// 004220e4  ff15c0218000         call dword ptr [0x8021c0]
// 004220ea  89466c               mov dword ptr [esi + 0x6c], eax
// 004220ed  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 004220f0  8b442408             mov eax, dword ptr [esp + 8]
// 004220f4  8908                 mov dword ptr [eax], ecx
// 004220f6  5e                   pop esi
// 004220f7  c20400               ret 4

extern "C" void* __cdecl getModule();
extern "C" void* (__stdcall *GetProcAddress)(void*, const char*);

struct CSettingsExplorer {
    char padding[0x6c];
    void* procedure;
    void** getProcedure(void** result);
};

void** CSettingsExplorer::getProcedure(void** result) {
    if (!procedure)
        procedure = GetProcAddress(getModule(), "ImageList_DragEnter");
    *result = *reinterpret_cast<void* volatile*>(&procedure);
    return result;
}
