// from server: 74% by atomic.potato
// roc 2009-06 004134e0  unit: CRbxChildFrame  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004134e0
//
// 004134e0  56                   push esi
// 004134e1  8bf1                 mov esi, ecx
// 004134e3  837e0400             cmp dword ptr [esi + 4], 0
// 004134e7  753a                 jne 0x413523
// 004134e9  57                   push edi
// 004134ea  8d7e0c               lea edi, [esi + 0xc]
// 004134ed  8bcf                 mov ecx, edi
// 004134ef  ff1558f58900         call dword ptr [0x89f558]
// 004134f5  50                   push eax
// 004134f6  ff15e4e18900         call dword ptr [0x89e1e4]
// 004134fc  894604               mov dword ptr [esi + 4], eax
// 004134ff  85c0                 test eax, eax
// 00413501  751d                 jne 0x413520
// 00413503  8bcf                 mov ecx, edi
// 00413505  ff1558f58900         call dword ptr [0x89f558]
// 0041350b  50                   push eax
// 0041350c  ff15d4e18900         call dword ptr [0x89e1d4]
// 00413512  85c0                 test eax, eax
// 00413514  894604               mov dword ptr [esi + 4], eax
// 00413517  0f95c0               setne al
// 0041351a  884608               mov byte ptr [esi + 8], al
// 0041351d  8b4604               mov eax, dword ptr [esi + 4]
// 00413520  5f                   pop edi
// 00413521  5e                   pop esi
// 00413522  c3                   ret 
// 00413523  8b4604               mov eax, dword ptr [esi + 4]
// 00413526  5e                   pop esi
// 00413527  c3                   ret 

extern "C" void* __stdcall GetModuleHandleA(const char*);
extern "C" void* __stdcall LoadLibraryA(const char*);

struct CRbxChildFrame {
    char pad0[4];
    void* field4;
    char field8;
    char pad9[3];
    char fieldC;
    void* method();
};

void* CRbxChildFrame::method() {
    if (field4 != 0)
        return field4;
    void* h = GetModuleHandleA((const char*)&fieldC);
    field4 = LoadLibraryA((const char*)h);
    if (field4 == 0) {
        void* h2 = GetModuleHandleA((const char*)&fieldC);
        field4 = LoadLibraryA((const char*)h2);
        field8 = (field4 != 0);
    }
    return field4;
}
