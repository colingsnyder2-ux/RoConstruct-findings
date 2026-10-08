// from server: 100% by colin
// roc 2007-08 0071de70  unit: CXTPDialogBar  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071de70
//
// 0071de70  56                   push esi
// 0071de71  8bf1                 mov esi, ecx
// 0071de73  e88826f5ff           call 0x670500
// 0071de78  c706940f7e00         mov dword ptr [esi], 0x7e0f94
// 0071de7e  c74620340f7e00       mov dword ptr [esi + 0x20], 0x7e0f34
// 0071de85  c786d40000001e000000 mov dword ptr [esi + 0xd4], 0x1e
// 0071de8f  c7867801000000000000 mov dword ptr [esi + 0x178], 0
// 0071de99  8bc6                 mov eax, esi
// 0071de9b  5e                   pop esi
// 0071de9c  c3                   ret 

struct CXTPDialogBar
{
    char pad0[0x20];
    void* vtable_20;
    char pad1[0xd4 - 0x24];
    int field_d4;
    char pad2[0x178 - 0xd8];
    int field_178;
    CXTPDialogBar* construct();
};

extern "C" void __fastcall sub_670500(CXTPDialogBar* self);

CXTPDialogBar* CXTPDialogBar::construct()
{
    sub_670500(this);
    *(void**)this = (void*)0x7e0f94;
    *(void**)((char*)this + 0x20) = (void*)0x7e0f34;
    *(int*)((char*)this + 0xd4) = 0x1e;
    *(int*)((char*)this + 0x178) = 0;
    return this;
}
