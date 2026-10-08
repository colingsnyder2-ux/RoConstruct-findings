// from server: 81% by colin
// roc 2007-08 006e0a60  unit: CXTPDockingPaneAutoHidePanel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0a60
//
// 006e0a60  8b442404             mov eax, dword ptr [esp + 4]
// 006e0a64  898194010000         mov dword ptr [ecx + 0x194], eax
// 006e0a6a  c7819c01000001000000 mov dword ptr [ecx + 0x19c], 1
// 006e0a74  83c154               add ecx, 0x54
// 006e0a77  6a01                 push 1
// 006e0a79  51                   push ecx
// 006e0a7a  e8c1faffff           call 0x6e0540
// 006e0a7f  8bc8                 mov ecx, eax
// 006e0a81  e89ae2f8ff           call 0x66ed20
// 006e0a86  c20400               ret 4

struct CXTPDockingPaneAutoHidePanel
{
    char pad[0x194];
    int field_194;
    char pad2[0x19c - 0x194 - 4];
    int field_19c;
    void set(int value);
};

extern "C" void* __stdcall sub_6e0540(void*, int);
extern "C" void __stdcall sub_66ed20(void*);

void CXTPDockingPaneAutoHidePanel::set(int value)
{
    field_194 = value;
    field_19c = 1;
    void* p = sub_6e0540((char*)this + 0x54, 1);
    sub_66ed20(p);
}
