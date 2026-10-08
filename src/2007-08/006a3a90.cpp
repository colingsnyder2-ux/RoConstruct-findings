// from server: 100% by colin
// roc 2007-08 006a3a90  unit: PAUHWND__::?$CArray  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3a90
//
// 006a3a90  8b442404             mov eax, dword ptr [esp + 4]
// 006a3a94  56                   push esi
// 006a3a95  8d712c               lea esi, [ecx + 0x2c]
// 006a3a98  50                   push eax
// 006a3a99  8bce                 mov ecx, esi
// 006a3a9b  e820fdffff           call 0x6a37c0
// 006a3aa0  83f8ff               cmp eax, -1
// 006a3aa3  740a                 je 0x6a3aaf
// 006a3aa5  6a01                 push 1
// 006a3aa7  50                   push eax
// 006a3aa8  8bce                 mov ecx, esi
// 006a3aaa  e801ec0200           call 0x6d26b0
// 006a3aaf  5e                   pop esi
// 006a3ab0  c20400               ret 4

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
