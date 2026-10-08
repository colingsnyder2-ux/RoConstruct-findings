// from server: 87% by colin
// roc 2007-08 0069daf0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069daf0
//
// 0069daf0  394c2404             cmp dword ptr [esp + 4], ecx
// 0069daf4  740b                 je 0x69db01
// 0069daf6  e84327f9ff           call 0x63023e
// 0069dafb  ff153cec7700         call dword ptr [0x77ec3c]
// 0069db01  c20400               ret 4

extern "C" int __stdcall ReleaseCapture();

extern "C" int __cdecl sub_0063023e();

struct CXTPPropertyGridItemColor {
    int OnInplaceButtonDown(void* p);
};

int CXTPPropertyGridItemColor::OnInplaceButtonDown(void* p)
{
    if (p != this) {
        sub_0063023e();
        ReleaseCapture();
    }
    return 0;
}
