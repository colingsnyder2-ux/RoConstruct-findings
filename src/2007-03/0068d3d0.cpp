// roc 2007-03 0068d3d0  unit: seg_00680000  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068d3d0
//
// 0068d3d0  8b442404             mov eax, dword ptr [esp + 4]
// 0068d3d4  56                   push esi
// 0068d3d5  8d712c               lea esi, [ecx + 0x2c]
// 0068d3d8  50                   push eax
// 0068d3d9  8bce                 mov ecx, esi
// 0068d3db  e860f1ffff           call 0x68c540
// 0068d3e0  83f8ff               cmp eax, -1
// 0068d3e3  740a                 je 0x68d3ef
// 0068d3e5  6a01                 push 1
// 0068d3e7  50                   push eax
// 0068d3e8  8bce                 mov ecx, esi
// 0068d3ea  e8a1f20200           call 0x6bc690
// 0068d3ef  5e                   pop esi
// 0068d3f0  c20400               ret 4
// copied from an identical function in another client (function ?Remove@CArray@ns_ROCX000010@@QAEXH@Z)

namespace ns_ROCX000010 {
struct CArray {
    char pad[0x2c];
    int m_data;
    int Find(int) const;
    void RemoveAt(int, int);
    void Remove(int);
};

void CArray::Remove(int value) {
    CArray* sub = (CArray*)((char*)this + 0x2c);
    int idx = sub->Find(value);
    if (idx != -1)
        sub->RemoveAt(idx, 1);
}
}
