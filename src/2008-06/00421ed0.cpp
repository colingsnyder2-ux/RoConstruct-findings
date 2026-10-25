// from server: 100% by tester
// roc 2008-06 00421ed0  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00421ed0
//
// 00421ed0  56                   push esi
// 00421ed1  8bf1                 mov esi, ecx
// 00421ed3  837e6400             cmp dword ptr [esi + 0x64], 0
// 00421ed7  7514                 jne 0x421eed
// 00421ed9  6858fb8000           push 0x80fb58
// 00421ede  e85d10ffff           call 0x412f40
// 00421ee3  50                   push eax
// 00421ee4  ff15c0218000         call dword ptr [0x8021c0]
// 00421eea  894664               mov dword ptr [esi + 0x64], eax
// 00421eed  8b4e64               mov ecx, dword ptr [esi + 0x64]
// 00421ef0  8b442408             mov eax, dword ptr [esp + 8]
// 00421ef4  8908                 mov dword ptr [eax], ecx
// 00421ef6  5e                   pop esi
// 00421ef7  c20400               ret 4

extern "C" void* __cdecl getModule();
extern "C" void* (__stdcall *GetProcAddress)(void*, const char*);

struct CSettingsExplorer {
    char padding[0x64];
    void* procedure;
    void** getProcedure(void** result);
};

void** CSettingsExplorer::getProcedure(void** result) {
    if (!procedure)
        procedure = GetProcAddress(getModule(), "ImageList_BeginDrag");
    *result = *reinterpret_cast<void* volatile*>(&procedure);
    return result;
}
