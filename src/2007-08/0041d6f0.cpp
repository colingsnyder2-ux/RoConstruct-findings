// from server: 100% by colin
// roc 2007-08 0041d6f0  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041d6f0
//
// 0041d6f0  8b01                 mov eax, dword ptr [ecx]
// 0041d6f2  8a4904               mov cl, byte ptr [ecx + 4]
// 0041d6f5  8808                 mov byte ptr [eax], cl
// 0041d6f7  c3                   ret 

struct CInstanceRecord_CNameItem {
    char* ptr;
    char value;
    void store();
};

void CInstanceRecord_CNameItem::store() {
    *ptr = value;
}
