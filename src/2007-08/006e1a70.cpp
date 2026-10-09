// from server: 34% by colin
// roc 2007-08 006e1a70  unit: CXTPDockingPaneTabbedContainer  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e1a70
//
// 006e1a70  8b542404             mov edx, dword ptr [esp + 4]
// 006e1a74  8d81ccfeffff         lea eax, [ecx - 0x134]
// 006e1a7a  85c0                 test eax, eax
// 006e1a7c  c70200000000         mov dword ptr [edx], 0
// 006e1a82  742e                 je 0x6e1ab2
// 006e1a84  83782000             cmp dword ptr [eax + 0x20], 0
// 006e1a88  7428                 je 0x6e1ab2
// 006e1a8a  85c0                 test eax, eax
// 006e1a8c  7510                 jne 0x6e1a9e
// 006e1a8e  52                   push edx
// 006e1a8f  687c4e7c00           push 0x7c4e7c
// 006e1a94  50                   push eax
// 006e1a95  50                   push eax
// 006e1a96  e80504f9ff           call 0x671ea0
// 006e1a9b  c20400               ret 4
// 006e1a9e  8b4020               mov eax, dword ptr [eax + 0x20]
// 006e1aa1  52                   push edx
// 006e1aa2  687c4e7c00           push 0x7c4e7c
// 006e1aa7  6a00                 push 0
// 006e1aa9  50                   push eax
// 006e1aaa  e8f103f9ff           call 0x671ea0
// 006e1aaf  c20400               ret 4
// 006e1ab2  b805400080           mov eax, 0x80004005
// 006e1ab7  c20400               ret 4

struct CXTPDockingPaneTabbedContainer {
    char pad[0x134];
    void* field_0x20;
    int getPane(void** out);
};

extern "C" int __stdcall sub_671EA0(void*, int, int, void**);

int CXTPDockingPaneTabbedContainer::getPane(void** out) {
    CXTPDockingPaneTabbedContainer* p = (CXTPDockingPaneTabbedContainer*)((char*)this - 0x134);
    *out = 0;
    if (p == 0) {
        return (int)0x80004005;
    }
    if (p->field_0x20 == 0) {
        return (int)0x80004005;
    }
    if (p == 0) {
        return sub_671EA0(p, 0x7c4e7c, (int)p, out);
    }
    return sub_671EA0(p->field_0x20, 0x7c4e7c, 0, out);
}
