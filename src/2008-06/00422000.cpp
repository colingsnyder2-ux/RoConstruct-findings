// from server: 100% by tester
// roc 2008-06 00422000  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422000
//
// 00422000  56                   push esi
// 00422001  8bf1                 mov esi, ecx
// 00422003  837e6800             cmp dword ptr [esi + 0x68], 0
// 00422007  7514                 jne 0x42201d
// 00422009  686cfb8000           push 0x80fb6c
// 0042200e  e82d0fffff           call 0x412f40
// 00422013  50                   push eax
// 00422014  ff15c0218000         call dword ptr [0x8021c0]
// 0042201a  894668               mov dword ptr [esi + 0x68], eax
// 0042201d  8b4e68               mov ecx, dword ptr [esi + 0x68]
// 00422020  8b442408             mov eax, dword ptr [esp + 8]
// 00422024  8908                 mov dword ptr [eax], ecx
// 00422026  5e                   pop esi
// 00422027  c20400               ret 4

extern "C" void* __cdecl getModule();
extern "C" void* (__stdcall *GetProcAddress)(void*, const char*);

struct CSettingsExplorer {
    char padding[0x68];
    void* procedure;
    void** getProcedure(void** result);
};

void** CSettingsExplorer::getProcedure(void** result) {
    if (!procedure)
        procedure = GetProcAddress(getModule(), "ImageList_EndDrag");
    *result = *reinterpret_cast<void* volatile*>(&procedure);
    return result;
}
