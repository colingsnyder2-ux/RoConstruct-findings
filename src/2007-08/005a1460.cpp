// from server: 50% by colin
// roc 2007-08 005a1460  unit: RBX::SpawnLocation  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a1460
//
// 005a1460  56                   push esi
// 005a1461  8bf1                 mov esi, ecx
// 005a1463  e8a8ffffff           call 0x5a1410
// 005a1468  f644240801           test byte ptr [esp + 8], 1
// 005a146d  8b86b8020000         mov eax, dword ptr [esi + 0x2b8]
// 005a1473  c786b4020000ac4c7a00 mov dword ptr [esi + 0x2b4], 0x7a4cac
// 005a147d  8b4804               mov ecx, dword ptr [eax + 4]
// 005a1480  c78431b8020000a44c7a00 mov dword ptr [ecx + esi + 0x2b8], 0x7a4ca4
// 005a148b  740a                 je 0x5a1497
// 005a148d  56                   push esi
// 005a148e  ff15c4e67700         call dword ptr [0x77e6c4]
// 005a1494  83c404               add esp, 4
// 005a1497  8bc6                 mov eax, esi
// 005a1499  5e                   pop esi
// 005a149a  c20400               ret 4

extern "C" __declspec(dllimport) void __stdcall free(void*);

struct RBX_SpawnLocation {
    char pad[0x2b4];
    void* field2b4;
    void* field2b8;
    void destroy(int);
};

void RBX_SpawnLocation::destroy(int flag) {
    void* p = field2b8;
    field2b4 = (void*)0x7a4cac;
    *(void**)((char*)p + 4) = (void*)0x7a4ca4;
    if ((flag & 1) != 0) {
        free(this);
    }
}
