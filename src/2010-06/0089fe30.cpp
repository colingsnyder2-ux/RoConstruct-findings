// roc 2010-06 0089fe30  unit: CXTPDialogBar::CControlCaptionPopup  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089fe30
//
// 0089fe30  56                   push esi
// 0089fe31  8bf1                 mov esi, ecx
// 0089fe33  e848a2f0ff           call 0x7aa080
// 0089fe38  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0089fe3c  8b10                 mov edx, dword ptr [eax]
// 0089fe3e  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 0089fe44  6a00                 push 0
// 0089fe46  56                   push esi
// 0089fe47  51                   push ecx
// 0089fe48  8bc8                 mov ecx, eax
// 0089fe4a  ffd2                 call edx
// 0089fe4c  5e                   pop esi
// 0089fe4d  c20800               ret 8
// copied from an identical function in another client (function ?method@CControlCaptionPopup@ns_ROCX000004@@QAEXHH@Z)

namespace ns_ROCX000004 {
struct CControlCaptionPopup;

struct Inner {
    virtual void vf_0(int, CControlCaptionPopup*, int);
    virtual void vf_4(int, CControlCaptionPopup*, int);
    virtual void vf_8(int, CControlCaptionPopup*, int);
    virtual void vf_c(int, CControlCaptionPopup*, int);
    virtual void vf_10(int, CControlCaptionPopup*, int);
    virtual void vf_14(int, CControlCaptionPopup*, int);
    virtual void vf_18(int, CControlCaptionPopup*, int);
    virtual void vf_1c(int, CControlCaptionPopup*, int);
    virtual void vf_20(int, CControlCaptionPopup*, int);
    virtual void vf_24(int, CControlCaptionPopup*, int);
    virtual void vf_28(int, CControlCaptionPopup*, int);
    virtual void vf_2c(int, CControlCaptionPopup*, int);
    virtual void vf_30(int, CControlCaptionPopup*, int);
    virtual void vf_34(int, CControlCaptionPopup*, int);
    virtual void vf_38(int, CControlCaptionPopup*, int);
    virtual void vf_3c(int, CControlCaptionPopup*, int);
    virtual void vf_40(int, CControlCaptionPopup*, int);
    virtual void vf_44(int, CControlCaptionPopup*, int);
    virtual void vf_48(int, CControlCaptionPopup*, int);
    virtual void vf_4c(int, CControlCaptionPopup*, int);
    virtual void vf_50(int, CControlCaptionPopup*, int);
    virtual void vf_54(int, CControlCaptionPopup*, int);
    virtual void vf_58(int, CControlCaptionPopup*, int);
    virtual void vf_5c(int, CControlCaptionPopup*, int);
    virtual void vf_60(int, CControlCaptionPopup*, int);
    virtual void vf_64(int, CControlCaptionPopup*, int);
    virtual void vf_68(int, CControlCaptionPopup*, int);
    virtual void vf_6c(int, CControlCaptionPopup*, int);
    virtual void vf_70(int, CControlCaptionPopup*, int);
    virtual void vf_74(int, CControlCaptionPopup*, int);
    virtual void vf_78(int, CControlCaptionPopup*, int);
    virtual void vf_7c(int, CControlCaptionPopup*, int);
    virtual void vf_80(int, CControlCaptionPopup*, int);
    virtual void vf_84(int, CControlCaptionPopup*, int);
    virtual void vf_88(int, CControlCaptionPopup*, int);
    virtual void vf_8c(int, CControlCaptionPopup*, int);
    virtual void vf_90(int, CControlCaptionPopup*, int);
};

extern Inner* __stdcall fn_ROCX000004();

struct CControlCaptionPopup {
    void method(int, int);
};

void CControlCaptionPopup::method(int a, int b)
{
    Inner* p = fn_ROCX000004();
    p->vf_90(a, this, 0);
}
}
