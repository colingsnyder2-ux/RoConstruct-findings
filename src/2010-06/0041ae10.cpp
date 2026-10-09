// roc 2010-06 0041ae10  unit: CXTPReportGroupRow_Batch  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0041ae10
//
// 0041ae10  8b01                 mov eax, dword ptr [ecx]
// 0041ae12  8a4904               mov cl, byte ptr [ecx + 4]
// 0041ae15  8808                 mov byte ptr [eax], cl
// 0041ae17  c3                   ret 
// copied from an identical function in another client (function ?store@CInstanceRecord_CNameItem@ns_ROCX000021@@QAEXXZ)

namespace ns_ROCX000021 {
struct CInstanceRecord_CNameItem {
    char* ptr;
    char value;
    void store();
};

void CInstanceRecord_CNameItem::store() {
    *ptr = value;
}
}
