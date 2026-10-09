// roc 2011-06 00424ac0  unit: CInstanceRecord::CNameItem  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00424ac0
//
// 00424ac0  8b01                 mov eax, dword ptr [ecx]
// 00424ac2  8a4904               mov cl, byte ptr [ecx + 4]
// 00424ac5  8808                 mov byte ptr [eax], cl
// 00424ac7  c3                   ret 
// copied from an identical function in another client (function ?store@CInstanceRecord_CNameItem@ns_ROCX000029@@QAEXXZ)

namespace ns_ROCX000029 {
struct CInstanceRecord_CNameItem {
    char* ptr;
    char value;
    void store();
};

void CInstanceRecord_CNameItem::store() {
    *ptr = value;
}
}
