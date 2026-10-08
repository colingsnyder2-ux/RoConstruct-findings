// from server: 35% by colin
// roc 2008-06 004207c0  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004207c0
//
// 004207c0  8b01                 mov eax, dword ptr [ecx]
// 004207c2  8a4904               mov cl, byte ptr [ecx + 4]
// 004207c5  8808                 mov byte ptr [eax], cl
// 004207c7  c3                   ret 

struct CInstanceRecord {
    struct CNameItem {
        char value;
        void set(char newValue);
    };
};

void CInstanceRecord::CNameItem::set(char newValue) {
    value = newValue;
}
