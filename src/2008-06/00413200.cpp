// roc 2008-06 00413200  unit: CRbxChildFrame  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00413200
//
// 00413200  8b442404             mov eax, dword ptr [esp + 4]
// 00413204  85c0                 test eax, eax
// 00413206  7403                 je 0x41320b
// 00413208  8b4004               mov eax, dword ptr [eax + 4]
// 0041320b  8b542408             mov edx, dword ptr [esp + 8]
// 0041320f  8b4904               mov ecx, dword ptr [ecx + 4]
// 00413212  52                   push edx
// 00413213  50                   push eax
// 00413214  51                   push ecx
// 00413215  e80cd72800           call 0x6a0926
// 0041321a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00413220  8b08                 mov ecx, dword ptr [eax]
// 00413222  e8a9feffff           call 0x4130d0
// 00413227  c20800               ret 8
// copied from an identical function in another client (function ?InsertItem@CSelectionTreeCtrl@ns_ROCX000028@@QAEXPAX0@Z)

namespace ns_ROCX000028 {
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
