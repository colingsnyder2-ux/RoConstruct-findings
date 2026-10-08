// from server: 93% by colin
// roc 2007-08 0041f420  unit: CSettingsExplorer  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041f420
//
// 0041f420  56                   push esi
// 0041f421  8bf1                 mov esi, ecx
// 0041f423  837e7400             cmp dword ptr [esi + 0x74], 0
// 0041f427  7514                 jne 0x41f43d
// 0041f429  68cc827800           push 0x7882cc
// 0041f42e  e8ddf8ffff           call 0x41ed10
// 0041f433  50                   push eax
// 0041f434  ff1588d27700         call dword ptr [0x77d288]
// 0041f43a  894674               mov dword ptr [esi + 0x74], eax
// 0041f43d  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 0041f440  8b442408             mov eax, dword ptr [esp + 8]
// 0041f444  8908                 mov dword ptr [eax], ecx
// 0041f446  5e                   pop esi
// 0041f447  c20400               ret 4

extern "C" void* __stdcall GetProcAddress(void* hModule, const char* lpProcName);
extern "C" void* __cdecl sub_41ED10();

struct CSettingsExplorer {
    char pad[0x74];
    void* field_74;
    void* GetImageList_DragMove(void** out);
};

void* CSettingsExplorer::GetImageList_DragMove(void** out) {
    if (field_74 == 0) {
        field_74 = GetProcAddress(sub_41ED10(), (const char*)0x7882cc);
    }
    *out = field_74;
    return out;
}
