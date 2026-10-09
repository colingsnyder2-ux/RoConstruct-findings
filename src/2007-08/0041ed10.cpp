// from server: 71% by colin
// roc 2007-08 0041ed10  unit: CSettingsExplorer  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041ed10
//
// 0041ed10  56                   push esi
// 0041ed11  8bf1                 mov esi, ecx
// 0041ed13  837e0400             cmp dword ptr [esi + 4], 0
// 0041ed17  753a                 jne 0x41ed53
// 0041ed19  57                   push edi
// 0041ed1a  8d7e0c               lea edi, [esi + 0xc]
// 0041ed1d  8bcf                 mov ecx, edi
// 0041ed1f  ff157cd57700         call dword ptr [0x77d57c]
// 0041ed25  50                   push eax
// 0041ed26  ff15c8d27700         call dword ptr [0x77d2c8]
// 0041ed2c  85c0                 test eax, eax
// 0041ed2e  894604               mov dword ptr [esi + 4], eax
// 0041ed31  751d                 jne 0x41ed50
// 0041ed33  8bcf                 mov ecx, edi
// 0041ed35  ff157cd57700         call dword ptr [0x77d57c]
// 0041ed3b  50                   push eax
// 0041ed3c  ff157cd27700         call dword ptr [0x77d27c]
// 0041ed42  85c0                 test eax, eax
// 0041ed44  894604               mov dword ptr [esi + 4], eax
// 0041ed47  0f95c0               setne al
// 0041ed4a  884608               mov byte ptr [esi + 8], al
// 0041ed4d  8b4604               mov eax, dword ptr [esi + 4]
// 0041ed50  5f                   pop edi
// 0041ed51  5e                   pop esi
// 0041ed52  c3                   ret 
// 0041ed53  8b4604               mov eax, dword ptr [esi + 4]
// 0041ed56  5e                   pop esi
// 0041ed57  c3                   ret 

struct CSettingsExplorer {
    int field_0;
    void* field_4;
    bool field_8;
    char pad_9[3];
    char field_c;
    void* get();
};

void* CSettingsExplorer::get()
{
    if (field_4 == 0) {
        void* h = ((void* (__stdcall*)(void*))0x77d57c)(&field_c);
        field_4 = ((void* (__stdcall*)(void*))0x77d2c8)(h);
        if (field_4 == 0) {
            void* h2 = ((void* (__stdcall*)(void*))0x77d57c)(&field_c);
            field_4 = ((void* (__stdcall*)(void*))0x77d27c)(h2);
            field_8 = (field_4 != 0);
        }
    }
    return field_4;
}
