// from server: 71% by colin
// roc 2007-08 006a6af0  unit: CXTPMenuBarMDIMenus  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a6af0
//
// 006a6af0  8b542404             mov edx, dword ptr [esp + 4]
// 006a6af4  8d442404             lea eax, [esp + 4]
// 006a6af8  50                   push eax
// 006a6af9  52                   push edx
// 006a6afa  83c120               add ecx, 0x20
// 006a6afd  e85edff8ff           call 0x634a60
// 006a6b02  f7d8                 neg eax
// 006a6b04  1bc0                 sbb eax, eax
// 006a6b06  23442404             and eax, dword ptr [esp + 4]
// 006a6b0a  c20400               ret 4

struct CXTPMenuBarMDIMenus {
    int FindMenu(void* p);
};

extern "C" int __stdcall sub_634a60(void* p1, void* p2);

int CXTPMenuBarMDIMenus::FindMenu(void* p) {
    int result = sub_634a60((char*)this + 0x20, &p);
    return result ? 0 : (int)p;
}
