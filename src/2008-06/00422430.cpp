// from server: 100% by king_originala
// roc 2008-06 00422430  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422430
//
// 00422430  56                   push esi
// 00422431  8bf1                 mov esi, ecx
// 00422433  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00422437  7514                 jne 0x42244d
// 00422439  68bcfb8000           push 0x80fbbc
// 0042243e  e8fd0affff           call 0x412f40
// 00422443  50                   push eax
// 00422444  ff15c0218000         call dword ptr [0x8021c0]
// 0042244a  89467c               mov dword ptr [esi + 0x7c], eax
// 0042244d  8b4e7c               mov ecx, dword ptr [esi + 0x7c]
// 00422450  8b442408             mov eax, dword ptr [esp + 8]
// 00422454  8908                 mov dword ptr [eax], ecx
// 00422456  5e                   pop esi
// 00422457  c20400               ret 4

extern "C" void* __cdecl getModule();
extern "C" void* (__stdcall *GetProcAddress)(void*, const char*);

struct CSettingsExplorer {
    char padding[0x7c];
    void* procedure;
    void** getProcedure(void** result);
};

void** CSettingsExplorer::getProcedure(void** result) {
    if (!procedure)
        procedure = GetProcAddress(getModule(), "ImageList_DragShowNolock");
    *result = *reinterpret_cast<void* volatile*>(&procedure);
    return result;
}
