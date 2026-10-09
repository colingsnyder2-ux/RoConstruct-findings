// roc 2009-06 004137a0  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004137a0
//
// 004137a0  8b442404             mov eax, dword ptr [esp + 4]
// 004137a4  85c0                 test eax, eax
// 004137a6  7403                 je 0x4137ab
// 004137a8  8b4004               mov eax, dword ptr [eax + 4]
// 004137ab  8b542408             mov edx, dword ptr [esp + 8]
// 004137af  8b4904               mov ecx, dword ptr [ecx + 4]
// 004137b2  52                   push edx
// 004137b3  50                   push eax
// 004137b4  51                   push ecx
// 004137b5  e83c553000           call 0x718cf6
// 004137ba  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 004137c0  8b08                 mov ecx, dword ptr [eax]
// 004137c2  e8a9feffff           call 0x413670
// 004137c7  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CSelectionTreeCtrl@ns_ROCX000006@@QAEXPAX0@Z)

namespace ns_ROCX000006 {
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
