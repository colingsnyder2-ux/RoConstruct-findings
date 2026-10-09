// roc 2012-06 00418cd0  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00418cd0
//
// 00418cd0  8b442404             mov eax, dword ptr [esp + 4]
// 00418cd4  85c0                 test eax, eax
// 00418cd6  7403                 je 0x418cdb
// 00418cd8  8b4004               mov eax, dword ptr [eax + 4]
// 00418cdb  8b542408             mov edx, dword ptr [esp + 8]
// 00418cdf  8b4904               mov ecx, dword ptr [ecx + 4]
// 00418ce2  52                   push edx
// 00418ce3  50                   push eax
// 00418ce4  51                   push ecx
// 00418ce5  e8e8965600           call 0x9823d2
// 00418cea  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00418cf0  8b08                 mov ecx, dword ptr [eax]
// 00418cf2  e8a9feffff           call 0x418ba0
// 00418cf7  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CSelectionTreeCtrl@ns_ROCX000007@@QAEXPAX0@Z)

namespace ns_ROCX000007 {
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
