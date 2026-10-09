// roc 2009-12 0041ad80  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ad80
//
// 0041ad80  8b01                 mov eax, dword ptr [ecx]
// 0041ad82  8a4904               mov cl, byte ptr [ecx + 4]
// 0041ad85  8808                 mov byte ptr [eax], cl
// 0041ad87  c3                   ret 
// copied from an identical function in another client (function ?store@CInstanceRecord_CNameItem@ns_ROCX000025@@QAEXXZ)

namespace ns_ROCX000025 {
struct CInstanceRecord_CNameItem {
    char* ptr;
    char value;
    void store();
};

void CInstanceRecord_CNameItem::store() {
    *ptr = value;
}
}
