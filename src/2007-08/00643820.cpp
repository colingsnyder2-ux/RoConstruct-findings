// from server: 100% by colin
// roc 2007-08 00643820  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643820
//
// 00643820  8b8178010000         mov eax, dword ptr [ecx + 0x178]
// 00643826  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0064382a  894818               mov dword ptr [eax + 0x18], ecx
// 0064382d  c20400               ret 4

struct Inner
{
    char pad_0[0x18];
    int value;
};

struct CXTPCommandBar
{
    char pad_0[0x178];
    Inner* pInner;
    void SetInnerValue(int value);
};

void CXTPCommandBar::SetInnerValue(int value)
{
    pInner->value = value;
}
