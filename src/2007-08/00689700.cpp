// from server: 81% by colin
// roc 2007-08 00689700  unit: CXTPTabClientWnd::CWorkspace  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689700
//
// 00689700  51                   push ecx
// 00689701  8b898c000000         mov ecx, dword ptr [ecx + 0x8c]
// 00689707  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0068970b  8b01                 mov eax, dword ptr [ecx]
// 0068970d  8b8060010000         mov eax, dword ptr [eax + 0x160]
// 00689713  56                   push esi
// 00689714  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00689718  52                   push edx
// 00689719  56                   push esi
// 0068971a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 00689722  ffd0                 call eax
// 00689724  8bc6                 mov eax, esi
// 00689726  5e                   pop esi
// 00689727  59                   pop ecx
// 00689728  c20800               ret 8

struct CWorkspace {
    char pad[0x8c];
    void* ptr;
    void* method(void* a, void* b);
};

void* CWorkspace::method(void* a, void* b) {
    void* p = ptr;
    void** vt = *(void***)p;
    void* fn = vt[0x160 / 4];
    void* r = ((void* (__thiscall*)(void*, void*, void*))fn)(p, a, b);
    return a;
}
