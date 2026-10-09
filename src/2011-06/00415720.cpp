// roc 2011-06 00415720  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00415720
//
// 00415720  8b442404             mov eax, dword ptr [esp + 4]
// 00415724  85c0                 test eax, eax
// 00415726  7403                 je 0x41572b
// 00415728  8b4004               mov eax, dword ptr [eax + 4]
// 0041572b  8b542408             mov edx, dword ptr [esp + 8]
// 0041572f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00415732  52                   push edx
// 00415733  50                   push eax
// 00415734  51                   push ecx
// 00415735  e8e24b3f00           call 0x80a31c
// 0041573a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00415740  8b08                 mov ecx, dword ptr [eax]
// 00415742  e8a9feffff           call 0x4155f0
// 00415747  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CSelectionTreeCtrl@ns_ROCX00001b@@QAEXPAX0@Z)

namespace ns_ROCX00001b {
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
