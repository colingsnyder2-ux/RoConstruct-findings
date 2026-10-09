// roc 2011-06 008f89a0  unit: CXTPDialogBar::CControlCaptionPopup  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f89a0
//
// 008f89a0  56                   push esi
// 008f89a1  8bf1                 mov esi, ecx
// 008f89a3  e8b83df1ff           call 0x80c760
// 008f89a8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f89ac  8b10                 mov edx, dword ptr [eax]
// 008f89ae  8b9290000000         mov edx, dword ptr [edx + 0x90]
// 008f89b4  6a00                 push 0
// 008f89b6  56                   push esi
// 008f89b7  51                   push ecx
// 008f89b8  8bc8                 mov ecx, eax
// 008f89ba  ffd2                 call edx
// 008f89bc  5e                   pop esi
// 008f89bd  c20800               ret 8
// copied from an identical function in another client (function ?method@CControlCaptionPopup@ns_ROCX000019@@QAEXHH@Z)

namespace ns_ROCX000019 {
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

extern Inner* __stdcall fn_ROCX000019();

struct CControlCaptionPopup {
    void method(int, int);
};

void CControlCaptionPopup::method(int a, int b)
{
    Inner* p = fn_ROCX000019();
    p->vf_90(a, this, 0);
}
}
