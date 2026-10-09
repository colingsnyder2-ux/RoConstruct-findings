// roc 2007-03 004212d0  unit: seg_00420000  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004212d0
//
// 004212d0  8b442404             mov eax, dword ptr [esp + 4]
// 004212d4  85c0                 test eax, eax
// 004212d6  7403                 je 0x4212db
// 004212d8  8b4004               mov eax, dword ptr [eax + 4]
// 004212db  8b542408             mov edx, dword ptr [esp + 8]
// 004212df  8b4904               mov ecx, dword ptr [ecx + 4]
// 004212e2  52                   push edx
// 004212e3  50                   push eax
// 004212e4  51                   push ecx
// 004212e5  e8a6d01f00           call 0x61e390
// 004212ea  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 004212f0  8b08                 mov ecx, dword ptr [eax]
// 004212f2  e859f7ffff           call 0x420a50
// 004212f7  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CSelectionTreeCtrl@ns_ROCX000015@@QAEXPAX0@Z)

namespace ns_ROCX000015 {
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
