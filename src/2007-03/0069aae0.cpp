// roc 2007-03 0069aae0  unit: seg_00690000  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0069aae0
//
// 0069aae0  56                   push esi
// 0069aae1  8bf1                 mov esi, ecx
// 0069aae3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0069aae9  e8e2f1ffff           call 0x699cd0
// 0069aaee  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069aaf2  8b10                 mov edx, dword ptr [eax]
// 0069aaf4  8b9260010000         mov edx, dword ptr [edx + 0x160]
// 0069aafa  56                   push esi
// 0069aafb  51                   push ecx
// 0069aafc  8bc8                 mov ecx, eax
// 0069aafe  ffd2                 call edx
// 0069ab00  5e                   pop esi
// 0069ab01  c20400               ret 4
// copied from an identical function in another client (function ?OnClick@CXTPControlQuickAccessMorePopup@ns_ROCX00000d@@QAEXH@Z)

namespace ns_ROCX00000d {
struct CXTPControlQuickAccessMorePopup {
    char pad[0xfc];
    void* field_fc;
    void OnClick(int);
};

struct Helper {
    void* GetItem();
};

extern "C" void* __fastcall sub_6a79e0(void*);

void CXTPControlQuickAccessMorePopup::OnClick(int arg)
{
    Helper* h = (Helper*)sub_6a79e0(field_fc);
    void** vt = *(void***)h;
    void (__thiscall *fn)(void*, int, void*) = (void (__thiscall *)(void*, int, void*))vt[0x160/4];
    fn(h, arg, this);
}
}
