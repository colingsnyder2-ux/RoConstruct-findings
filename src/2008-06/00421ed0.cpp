// from server: 77% by colin
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

struct CSettingsExplorer {
    char pad[0x64];
    int field_0x64;
    void GetImageList(void** out);
};

extern "C" void* __stdcall sub_412F40(const char* name);
extern "C" void* __stdcall GetProcAddress(void* hModule, const char* lpProcName);

void CSettingsExplorer::GetImageList(void** out)
{
    if (field_0x64 == 0)
    {
        void* h = sub_412F40("ImageList_BeginDrag");
        field_0x64 = (int)GetProcAddress(h, "ImageList_BeginDrag");
    }
    *out = (void*)field_0x64;
}
