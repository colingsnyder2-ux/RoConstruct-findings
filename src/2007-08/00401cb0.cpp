// from server: 85% by colin
// roc 2007-08 00401cb0  unit: VCWorkspace::?$CComObject  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401cb0
//
// 00401cb0  51                   push ecx
// 00401cb1  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00401cb5  56                   push esi
// 00401cb6  8d442404             lea eax, [esp + 4]
// 00401cba  50                   push eax
// 00401cbb  8b442410             mov eax, dword ptr [esp + 0x10]
// 00401cbf  8bf1                 mov esi, ecx
// 00401cc1  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00401cc5  51                   push ecx
// 00401cc6  6a00                 push 0
// 00401cc8  52                   push edx
// 00401cc9  50                   push eax
// 00401cca  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00401cd2  ff1510d07700         call dword ptr [0x77d010]
// 00401cd8  85c0                 test eax, eax
// 00401cda  7519                 jne 0x401cf5
// 00401cdc  8b0e                 mov ecx, dword ptr [esi]
// 00401cde  85c9                 test ecx, ecx
// 00401ce0  740d                 je 0x401cef
// 00401ce2  51                   push ecx
// 00401ce3  ff1508d07700         call dword ptr [0x77d008]
// 00401ce9  c70600000000         mov dword ptr [esi], 0
// 00401cef  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00401cf3  890e                 mov dword ptr [esi], ecx
// 00401cf5  5e                   pop esi
// 00401cf6  59                   pop ecx
// 00401cf7  c20c00               ret 0xc

extern "C" {
    long __stdcall RegOpenKeyExA(void* hKey, const char* lpSubKey, unsigned long ulOptions, unsigned long samDesired, void** phkResult);
    long __stdcall RegCloseKey(void* hKey);
}

struct VCWorkspaceCComObject
{
    void* field0;
    long method(void* a, void* b, void* c);
};

long VCWorkspaceCComObject::method(void* a, void* b, void* c)
{
    void* local = 0;
    if (RegOpenKeyExA(a, (const char*)b, 0, (unsigned long)c, &local) == 0)
    {
        if (this->field0)
        {
            RegCloseKey(this->field0);
            this->field0 = 0;
        }
        this->field0 = local;
    }
    return 0;
}
