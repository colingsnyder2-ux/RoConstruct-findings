// roc 2009-12 00413240  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00413240
//
// 00413240  8b442404             mov eax, dword ptr [esp + 4]
// 00413244  85c0                 test eax, eax
// 00413246  7403                 je 0x41324b
// 00413248  8b4004               mov eax, dword ptr [eax + 4]
// 0041324b  8b542408             mov edx, dword ptr [esp + 8]
// 0041324f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00413252  52                   push edx
// 00413253  50                   push eax
// 00413254  51                   push ecx
// 00413255  e8c4083e00           call 0x7f3b1e
// 0041325a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00413260  8b08                 mov ecx, dword ptr [eax]
// 00413262  e8b9feffff           call 0x413120
// 00413267  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CSelectionTreeCtrl@ns_ROCX000014@@QAEXPAX0@Z)

namespace ns_ROCX000014 {
struct CSelectionTreeCtrl {
    void* field0;
    void* field4;
    void InsertItem(void* item, void* parent);
};

extern "C" void* __stdcall sub_62FF02(void* a, void* b, void* c);
extern "C" void __fastcall sub_41EEB0(void* p);

void CSelectionTreeCtrl::InsertItem(void* item, void* parent) {
    void* a = item;
    if (a != 0) {
        a = *(void**)((char*)a + 4);
    }
    void* b = parent;
    void* c = *(void**)((char*)this + 4);
    void* r = sub_62FF02(c, a, b);
    void* q = *(void**)((char*)r + 0x94);
    void* v = *(void**)q;
    sub_41EEB0(v);
}
}
