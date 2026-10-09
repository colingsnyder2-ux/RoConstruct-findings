// roc 2012-06 004284c0  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004284c0
//
// 004284c0  8b01                 mov eax, dword ptr [ecx]
// 004284c2  8a4904               mov cl, byte ptr [ecx + 4]
// 004284c5  8808                 mov byte ptr [eax], cl
// 004284c7  c3                   ret 
// copied from an identical function in another client (function ?store@CInstanceRecord_CNameItem@ns_ROCX000056@@QAEXXZ)

namespace ns_ROCX000056 {
struct CInstanceRecord_CNameItem {
    char* ptr;
    char value;
    void store();
};

void CInstanceRecord_CNameItem::store() {
    *ptr = value;
}
}
