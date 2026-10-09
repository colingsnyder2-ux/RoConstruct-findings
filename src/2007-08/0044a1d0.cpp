// from DeepSeek/server: 100% by colin
// roc 2007-08 0044a1d0  unit: CRobloxModule  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0044a1d0
//
// 0044a1d0  56                   push esi
// 0044a1d1  8bf1                 mov esi, ecx
// 0044a1d3  837e0400             cmp dword ptr [esi + 4], 0
// 0044a1d7  57                   push edi
// 0044a1d8  8d7e04               lea edi, [esi + 4]
// 0044a1db  7432                 je 0x44a20f
// 0044a1dd  837e0c00             cmp dword ptr [esi + 0xc], 0
// 0044a1e1  740d                 je 0x44a1f0
// 0044a1e3  57                   push edi
// 0044a1e4  e8d7e3ffff           call 0x4485c0
// 0044a1e9  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0044a1f0  8b4628               mov eax, dword ptr [esi + 0x28]
// 0044a1f3  85c0                 test eax, eax
// 0044a1f5  7408                 je 0x44a1ff
// 0044a1f7  8b08                 mov ecx, dword ptr [eax]
// 0044a1f9  8b5108               mov edx, dword ptr [ecx + 8]
// 0044a1fc  50                   push eax
// 0044a1fd  ffd2                 call edx
// 0044a1ff  8d4610               lea eax, [esi + 0x10]
// 0044a202  50                   push eax
// 0044a203  ff1504d37700         call dword ptr [0x77d304]
// 0044a209  c70700000000         mov dword ptr [edi], 0
// 0044a20f  f644240c01           test byte ptr [esp + 0xc], 1
// 0044a214  7409                 je 0x44a21f
// 0044a216  56                   push esi
// 0044a217  e8465a1e00           call 0x62fc62
// 0044a21c  83c404               add esp, 4
// 0044a21f  5f                   pop edi
// 0044a220  8bc6                 mov eax, esi
// 0044a222  5e                   pop esi
// 0044a223  c20400               ret 4

extern "C" __declspec(dllimport) void __stdcall DeleteCriticalSection(void*);
extern "C" void __stdcall sub_4485C0(void*);
extern "C" void __cdecl sub_62FC62(void*);

struct CRobloxModule {
    int field0;
    void* field4;
    int field8;
    void* fieldC;
    char field10[0x18];
    void* field28;
    CRobloxModule* destroy(char);
};

CRobloxModule* CRobloxModule::destroy(char flag) {
    if (field4 != 0) {
        if (fieldC != 0) {
            sub_4485C0(&field4);
            fieldC = 0;
        }
        if (field28 != 0) {
            void* p = field28;
            void** vtbl = *(void***)p;
            void (__stdcall *fn)(void*) = (void (__stdcall *)(void*))vtbl[2];
            fn(p);
        }
        DeleteCriticalSection(&field10);
        field4 = 0;
    }
    if (flag & 1) {
        sub_62FC62(this);
    }
    return this;
}
