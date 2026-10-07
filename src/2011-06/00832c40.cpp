// roc 2011-06 00832c40  unit: CXTPReportControl  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00832c40
//
// 00832c40  c701744bac00         mov dword ptr [ecx], 0xac4b74
// 00832c46  8b4904               mov ecx, dword ptr [ecx + 4]
// 00832c49  85c9                 test ecx, ecx
// 00832c4b  7407                 je 0x832c54
// 00832c4d  51                   push ecx
// 00832c4e  e8b176fdff           call 0x80a304
// 00832c53  59                   pop ecx
// 00832c54  c3                   ret 
// auto-matched from its assembly shape

extern "C" void __cdecl G1_func_00832c40(void*);
struct S_func_00832c40 {
    virtual ~S_func_00832c40();
    void* m_p;
};
S_func_00832c40::~S_func_00832c40()
{
    if (m_p)
        G1_func_00832c40(m_p);
}
