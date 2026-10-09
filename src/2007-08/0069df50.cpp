// from server: 86% by colin
// roc 2007-08 0069df50  unit: CXTPPropertyGridItemBool  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069df50
//
// 0069df50  56                   push esi
// 0069df51  8bf1                 mov esi, ecx
// 0069df53  8b8604010000         mov eax, dword ptr [esi + 0x104]
// 0069df59  85c0                 test eax, eax
// 0069df5b  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0069df5f  898e00010000         mov dword ptr [esi + 0x100], ecx
// 0069df65  7402                 je 0x69df69
// 0069df67  8908                 mov dword ptr [eax], ecx
// 0069df69  85c9                 test ecx, ecx
// 0069df6b  8d8608010000         lea eax, [esi + 0x108]
// 0069df71  7506                 jne 0x69df79
// 0069df73  8d860c010000         lea eax, [esi + 0x10c]
// 0069df79  51                   push ecx
// 0069df7a  8bcc                 mov ecx, esp
// 0069df7c  8964240c             mov dword ptr [esp + 0xc], esp
// 0069df80  50                   push eax
// 0069df81  ff1574dd7700         call dword ptr [0x77dd74]
// 0069df87  8bce                 mov ecx, esi
// 0069df89  e8a2a6ffff           call 0x698630
// 0069df8e  5e                   pop esi
// 0069df8f  c20400               ret 4

struct CXTPPropertyGridItemBool
{
    char pad[0x100];
    int m_nValue;
    int* m_pValue;
    int m_Value1;
    int m_Value2;
    void SetValue(int nValue);
};

extern "C" void* __stdcall func_0077dd74(int*, int*);
extern "C" void __stdcall func_00698630(CXTPPropertyGridItemBool*);

void CXTPPropertyGridItemBool::SetValue(int nValue)
{
    int* p = m_pValue;
    m_nValue = nValue;
    if (p != 0)
        *p = nValue;
    int* p2;
    if (nValue != 0)
        p2 = &m_Value1;
    else
        p2 = &m_Value2;
    func_0077dd74(&nValue, p2);
    func_00698630(this);
}
