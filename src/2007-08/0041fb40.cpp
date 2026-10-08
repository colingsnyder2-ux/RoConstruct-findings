// from server: 100% by colin
// roc 2007-08 0041fb40  unit: CSelectionTreeCtrl  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fb40
//
// 0041fb40  8b442404             mov eax, dword ptr [esp + 4]
// 0041fb44  85c0                 test eax, eax
// 0041fb46  7403                 je 0x41fb4b
// 0041fb48  8b4004               mov eax, dword ptr [eax + 4]
// 0041fb4b  8b542408             mov edx, dword ptr [esp + 8]
// 0041fb4f  8b4904               mov ecx, dword ptr [ecx + 4]
// 0041fb52  52                   push edx
// 0041fb53  50                   push eax
// 0041fb54  51                   push ecx
// 0041fb55  e8a8032100           call 0x62ff02
// 0041fb5a  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 0041fb60  8b08                 mov ecx, dword ptr [eax]
// 0041fb62  e849f3ffff           call 0x41eeb0
// 0041fb67  c20800               ret 8

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
