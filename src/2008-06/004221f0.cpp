// from server: 100% by tester
// roc 2008-06 004221f0  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004221f0
//
// 004221f0  56                   push esi
// 004221f1  8bf1                 mov esi, ecx
// 004221f3  837e7000             cmp dword ptr [esi + 0x70], 0
// 004221f7  7514                 jne 0x42220d
// 004221f9  6894fb8000           push 0x80fb94
// 004221fe  e83d0dffff           call 0x412f40
// 00422203  50                   push eax
// 00422204  ff15c0218000         call dword ptr [0x8021c0]
// 0042220a  894670               mov dword ptr [esi + 0x70], eax
// 0042220d  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00422210  8b442408             mov eax, dword ptr [esp + 8]
// 00422214  8908                 mov dword ptr [eax], ecx
// 00422216  5e                   pop esi
// 00422217  c20400               ret 4

extern "C" void* __cdecl getModule();
extern "C" void* (__stdcall *GetProcAddress)(void*, const char*);

struct CSettingsExplorer {
    char padding[0x70];
    void* procedure;
    void** getProcedure(void** result);
};

void** CSettingsExplorer::getProcedure(void** result) {
    if (!procedure)
        procedure = GetProcAddress(getModule(), "ImageList_DragLeave");
    *result = *reinterpret_cast<void* volatile*>(&procedure);
    return result;
}
