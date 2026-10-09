// roc 2010-06 004134f0  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004134f0
//
// 004134f0  8b442404             mov eax, dword ptr [esp + 4]
// 004134f4  85c0                 test eax, eax
// 004134f6  7403                 je 0x4134fb
// 004134f8  8b4004               mov eax, dword ptr [eax + 4]
// 004134fb  8b542408             mov edx, dword ptr [esp + 8]
// 004134ff  8b4904               mov ecx, dword ptr [ecx + 4]
// 00413502  52                   push edx
// 00413503  50                   push eax
// 00413504  51                   push ecx
// 00413505  e854473900           call 0x7a7c5e
// 0041350a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00413510  8b08                 mov ecx, dword ptr [eax]
// 00413512  e8b9feffff           call 0x4133d0
// 00413517  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CSelectionTreeCtrl@ns_ROCX000010@@QAEXPAX0@Z)

namespace ns_ROCX000010 {
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
