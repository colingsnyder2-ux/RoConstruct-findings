// from server: 93% by colin
// roc 2007-08 0069dac0  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069dac0
//
// 0069dac0  56                   push esi
// 0069dac1  8bf1                 mov esi, ecx
// 0069dac3  e87627f9ff           call 0x63023e
// 0069dac8  837c240800           cmp dword ptr [esp + 8], 0
// 0069dacd  7519                 jne 0x69dae8
// 0069dacf  8bce                 mov ecx, esi
// 0069dad1  e8fa340700           call 0x710fd0
// 0069dad6  84c0                 test al, al
// 0069dad8  750e                 jne 0x69dae8
// 0069dada  8b06                 mov eax, dword ptr [esi]
// 0069dadc  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 0069dae2  6aff                 push -1
// 0069dae4  8bce                 mov ecx, esi
// 0069dae6  ffd2                 call edx
// 0069dae8  5e                   pop esi
// 0069dae9  c20800               ret 8

struct CXTPPropertyGridItemColor
{
    void OnInplaceButtonDown(int, int);
};

extern "C" void __stdcall sub_0063023e();
extern "C" bool __stdcall sub_00710fd0();

void CXTPPropertyGridItemColor::OnInplaceButtonDown(int a, int b)
{
    sub_0063023e();
    if (a == 0)
    {
        if (!sub_00710fd0())
        {
            void (__thiscall *fn)(CXTPPropertyGridItemColor*, int);
            fn = *(void (__thiscall **)(CXTPPropertyGridItemColor*, int))((*(int*)this) + 0x13c);
            fn(this, -1);
        }
    }
}
