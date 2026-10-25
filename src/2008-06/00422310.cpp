// from server: 100% by tester
// roc 2008-06 00422310  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422310
//
// 00422310  56                   push esi
// 00422311  8bf1                 mov esi, ecx
// 00422313  837e7400             cmp dword ptr [esi + 0x74], 0
// 00422317  7514                 jne 0x42232d
// 00422319  68a8fb8000           push 0x80fba8
// 0042231e  e81d0cffff           call 0x412f40
// 00422323  50                   push eax
// 00422324  ff15c0218000         call dword ptr [0x8021c0]
// 0042232a  894674               mov dword ptr [esi + 0x74], eax
// 0042232d  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00422330  8b442408             mov eax, dword ptr [esp + 8]
// 00422334  8908                 mov dword ptr [eax], ecx
// 00422336  5e                   pop esi
// 00422337  c20400               ret 4

extern "C" void* __cdecl getModule();
extern "C" void* (__stdcall *GetProcAddress)(void*, const char*);

struct CSettingsExplorer {
    char padding[0x74];
    void* procedure;
    void** getProcedure(void** result);
};

void** CSettingsExplorer::getProcedure(void** result) {
    if (!procedure)
        procedure = GetProcAddress(getModule(), "ImageList_DragMove");
    *result = *reinterpret_cast<void* volatile*>(&procedure);
    return result;
}
