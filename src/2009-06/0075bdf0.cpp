// roc 2009-06 0075bdf0  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075bdf0
//
// 0075bdf0  c701c4788f00         mov dword ptr [ecx], 0x8f78c4
// 0075bdf6  8b4904               mov ecx, dword ptr [ecx + 4]
// 0075bdf9  85c9                 test ecx, ecx
// 0075bdfb  7407                 je 0x75be04
// 0075bdfd  51                   push ecx
// 0075bdfe  e8dbcefbff           call 0x718cde
// 0075be03  59                   pop ecx
// 0075be04  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0075bdf0(void*);
struct S_func_0075bdf0 {
    virtual ~S_func_0075bdf0();
    void* m_p;
};
S_func_0075bdf0::~S_func_0075bdf0()
{
    if (m_p)
        G1_func_0075bdf0(m_p);
}
