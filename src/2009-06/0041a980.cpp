// roc 2009-06 0041a980  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0041a980
//
// 0041a980  8b01                 mov eax, dword ptr [ecx]
// 0041a982  8a4904               mov cl, byte ptr [ecx + 4]
// 0041a985  8808                 mov byte ptr [eax], cl
// 0041a987  c3                   ret 
// copied from an identical function in another client (function ?store@CInstanceRecord_CNameItem@ns_ROCX000055@@QAEXXZ)

namespace ns_ROCX000055 {
struct CInstanceRecord_CNameItem {
    char* ptr;
    char value;
    void store();
};

void CInstanceRecord_CNameItem::store() {
    *ptr = value;
}
}
