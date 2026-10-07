// roc 2009-06 0077a570  unit: CXTPTabClientWnd  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077a570
//
// 0077a570  c7016cc78f00         mov dword ptr [ecx], 0x8fc76c
// 0077a576  8b4904               mov ecx, dword ptr [ecx + 4]
// 0077a579  85c9                 test ecx, ecx
// 0077a57b  7407                 je 0x77a584
// 0077a57d  51                   push ecx
// 0077a57e  e85be7f9ff           call 0x718cde
// 0077a583  59                   pop ecx
// 0077a584  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_0077a570(void*);
struct S_func_0077a570 {
    virtual ~S_func_0077a570();
    void* m_p;
};
S_func_0077a570::~S_func_0077a570()
{
    if (m_p)
        G1_func_0077a570(m_p);
}
